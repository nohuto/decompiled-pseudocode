/*
 * XREFs of MiUnmapLockedPagesInUserSpace @ 0x1407E6430
 * Callers:
 *     MmUnmapLockedPages @ 0x1402CB990 (MmUnmapLockedPages.c)
 * Callees:
 *     MiRemoveSecureEntry @ 0x1402172F0 (MiRemoveSecureEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockAndDereferenceVad @ 0x140274D20 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x140274F40 (MiObtainReferencedVadEx.c)
 *     MiDeleteVirtualAddresses @ 0x140289A9C (MiDeleteVirtualAddresses.c)
 *     MiGetPteAddress @ 0x1402DE29C (MiGetPteAddress.c)
 *     MiLocateOldestSecure @ 0x14036A1DC (MiLocateOldestSecure.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     MiDeleteVad @ 0x1406FA630 (MiDeleteVad.c)
 *     MiCheckSecuredVad @ 0x14071A2B4 (MiCheckSecuredVad.c)
 */

void __fastcall MiUnmapLockedPagesInUserSpace(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 PteAddress; // rbp
  _KPROCESS *Process; // r13
  __int64 *v6; // rax
  ULONG_PTR v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  _QWORD *OldestSecure; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r8
  __int64 v21; // r8
  _OWORD v22[3]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v23; // [rsp+60h] [rbp-38h]
  int v24; // [rsp+B8h] [rbp+20h] BYREF

  PteAddress = MiGetPteAddress(BugCheckParameter2);
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = MiObtainReferencedVadEx(BugCheckParameter2, 1, &v24);
  v7 = (ULONG_PTR)v6;
  if ( v6 )
  {
    if ( (v6[6] & 0x70) != 0x10 )
      goto LABEL_20;
    v8 = *((unsigned __int8 *)v6 + 33);
    v9 = *((unsigned __int8 *)v6 + 32);
    v10 = *((unsigned int *)v6 + 6);
    v11 = *((unsigned int *)v6 + 7);
    v12 = ((v11 | (v8 << 32)) << 12) | 0xFFF;
    v13 = (v10 | (v9 << 32)) << 12;
    v14 = v11 | (v8 << 32);
    v15 = v9 << 32;
    if ( (BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL) != v13 || a2 != v14 - (v15 | (unsigned int)v10) + 1 )
    {
      if ( v13 + 4096 != (BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL)
        || a2 != v14 - (v15 | v10) - 1
        || (PteAddress & 0xFFF) != 0 && MI_READ_PTE_LOCK_FREE(PteAddress - 8) )
      {
        goto LABEL_20;
      }
      v19 = MiGetPteAddress(v12);
      if ( (v19 & 0xFFF) != 0 )
      {
        if ( MI_READ_PTE_LOCK_FREE(v19) )
          goto LABEL_20;
      }
    }
    OldestSecure = MiLocateOldestSecure(v7);
    if ( !OldestSecure )
      KeBugCheckEx(0x1Au, 0x1402uLL, BugCheckParameter2, v7, 0LL);
    MiRemoveSecureEntry(v7, OldestSecure, v17, v18);
    if ( (*(_DWORD *)(v7 + 48) & 8) != 0
      && (Process[1].DirectoryTableBase & 0x2000000000LL) == 0
      && (int)MiCheckSecuredVad(
                v7,
                v13,
                ((*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32))
               - (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32))
               + 1) << 12,
                0x55u,
                0) < 0 )
    {
      v20 = (unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32;
      v23 = 0LL;
      v21 = ((*(unsigned int *)(v7 + 28) | v20) << 12) | 0xFFF;
      memset(v22, 0, sizeof(v22));
      MiDeleteVirtualAddresses(0LL, v13, v21, 64, v22);
LABEL_20:
      MiUnlockAndDereferenceVad((char *)v7);
      return;
    }
    MiDeleteVad((unsigned int *)v7, 0LL, 0);
  }
}
