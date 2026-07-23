/*
 * XREFs of MmSecureVirtualMemoryAgainstWrites @ 0x14071A6A8
 * Callers:
 *     AlpcpPrepareViewForDelivery @ 0x14071A468 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14071AA58 (AlpcpExposeViewAttributeInSenderContext.c)
 * Callees:
 *     MiSetReadOnlyOnSectionView @ 0x1402152F8 (MiSetReadOnlyOnSectionView.c)
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     MiUnlockAndDereferenceVad @ 0x140274D20 (MiUnlockAndDereferenceVad.c)
 *     MiVadSupportsPrivateCommit @ 0x140274DE0 (MiVadSupportsPrivateCommit.c)
 *     MiObtainReferencedVadEx @ 0x140274F40 (MiObtainReferencedVadEx.c)
 *     MiVadMapsLargeImage @ 0x14027D1D0 (MiVadMapsLargeImage.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     MiIsRangeFullyCommitted @ 0x1406F6320 (MiIsRangeFullyCommitted.c)
 *     MiCheckSecuredVad @ 0x14071A2B4 (MiCheckSecuredVad.c)
 *     MiAddSecureEntry @ 0x140745F74 (MiAddSecureEntry.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x1407C78DC (MiUnsecureVirtualMemoryAgainstWrites.c)
 */

__int64 __fastcall MmSecureVirtualMemoryAgainstWrites(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v7; // rdi
  unsigned __int64 v8; // r14
  __int64 *v9; // rax
  ULONG_PTR v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  _KPROCESS *Process; // [rsp+30h] [rbp-88h]
  int v15; // [rsp+38h] [rbp-80h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v16; // [rsp+40h] [rbp-78h] BYREF

  v3 = a2 & 0xFFFFFFFFFFFFF000uLL;
  memset(&v16, 0, sizeof(v16));
  if ( (a2 & 0xFFFFFFFFFFFFF000uLL) != a2 || (a3 & 0xFFF) != 0 )
    return 0LL;
  v7 = 0LL;
  v8 = (a3 + a2 - 1) | 0xFFF;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process == (_KPROCESS *)a1 )
    Process = 0LL;
  else
    KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)&v16);
  v9 = MiObtainReferencedVadEx(v3, 0, &v15);
  v10 = (ULONG_PTR)v9;
  if ( v9 )
  {
    if ( v8 >> 12 <= (*((unsigned int *)v9 + 7) | ((unsigned __int64)*((unsigned __int8 *)v9 + 33) << 32))
      && MiVadSupportsPrivateCommit((__int64)v9)
      && ((*(_DWORD *)(v10 + 48) & 8) == 0 || (int)MiCheckSecuredVad(v10, a2, a3, 1u, 0) >= 0)
      && (*(_DWORD *)(v10 + 48) & 0x200000) == 0
      && (*(_DWORD *)(v10 + 64) & 0x4000000) == 0
      && (MmCompatibleProtectionMask[(*(_DWORD *)(v10 + 48) >> 7) & 7] | 0x702) == (MmCompatibleProtectionMask[(*(_DWORD *)(v10 + 48) >> 7) & 7] | 0x700) )
    {
      if ( (v11 = *(_DWORD *)(**(_QWORD **)(v10 + 72) + 56LL), (v11 & 0x80u) != 0) && (v11 & 0x20) == 0
        || !(unsigned int)MiVadMapsLargeImage(v10) && (unsigned int)MiIsRangeFullyCommitted(v12, v3, v8) )
      {
        if ( (int)MiSetReadOnlyOnSectionView(a1, v10, v3, v8) >= 0 )
        {
          v7 = MiAddSecureEntry(v10, v3, v8, -1073741823, 0);
          if ( !v7 )
            MiUnsecureVirtualMemoryAgainstWrites(v10, v3, v8);
        }
      }
    }
    MiUnlockAndDereferenceVad((char *)v10);
  }
  if ( Process )
    KiUnstackDetachProcess(&v16);
  if ( v7 )
    return qword_140C65A40 ^ a1 ^ v7;
  return v7;
}
