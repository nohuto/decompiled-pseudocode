/*
 * XREFs of MiUnmapViewOfSection @ 0x14071F030
 * Callers:
 *     MiUnmapImageInSystemSpace @ 0x1406ACB70 (MiUnmapImageInSystemSpace.c)
 *     AlpcViewDestroyProcedure @ 0x14071ED50 (AlpcViewDestroyProcedure.c)
 *     NtUnmapViewOfSectionEx @ 0x14071EF60 (NtUnmapViewOfSectionEx.c)
 *     MiMapViewOfSection @ 0x1407216D0 (MiMapViewOfSection.c)
 *     MmUnmapViewOfSection @ 0x1407D7950 (MmUnmapViewOfSection.c)
 *     EtwpCoverageEnsureUserModeView @ 0x1408743C4 (EtwpCoverageEnsureUserModeView.c)
 *     IopCloseIoRing @ 0x140949220 (IopCloseIoRing.c)
 *     PsShutdownSystem @ 0x1409B35F4 (PsShutdownSystem.c)
 *     NtMapCMFModule @ 0x140A032C0 (NtMapCMFModule.c)
 *     MiUnmapImageForEnclaveUse @ 0x140A3EA04 (MiUnmapImageForEnclaveUse.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D620 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022D9E0 (KiUnstackDetachProcess.c)
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     MiUnlockAndDereferenceVad @ 0x140274970 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x140274B90 (MiObtainReferencedVadEx.c)
 *     MiVadMapsLargeImage @ 0x14027CE20 (MiVadMapsLargeImage.c)
 *     MiUpdateVadStartVpn @ 0x14029C7E8 (MiUpdateVadStartVpn.c)
 *     MiReferenceControlAreaFile @ 0x1402A22B4 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x1402A23C0 (MiDereferenceControlAreaFile.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     MiLocateVadEvent @ 0x14030B2DC (MiLocateVadEvent.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     PerfLogImageUnload @ 0x140697438 (PerfLogImageUnload.c)
 *     MiDeleteVad @ 0x1406FA4D0 (MiDeleteVad.c)
 *     MiCheckSecuredVad @ 0x14071A124 (MiCheckSecuredVad.c)
 *     MiUnmapVad @ 0x14071F314 (MiUnmapVad.c)
 *     DbgkUnMapViewOfSection @ 0x1407CBDC0 (DbgkUnMapViewOfSection.c)
 */

__int64 __fastcall MiUnmapViewOfSection(__int64 BugCheckParameter1, unsigned __int64 a2, int a3, int a4)
{
  char *v4; // rsi
  __int64 v5; // r13
  _KPROCESS *Process; // rcx
  __int64 *v9; // rax
  __int64 v10; // rdi
  unsigned int v11; // edx
  unsigned int v12; // ecx
  __int64 v13; // r9
  unsigned __int64 v14; // rbp
  __int64 v15; // r12
  int v16; // ebx
  __int64 v18; // rcx
  __int64 *v19; // rax
  __int64 *v20; // rbx
  __int64 v21; // r15
  unsigned __int16 *v22; // rbp
  unsigned int v23; // r8d
  unsigned int v24; // edx
  int v25; // r8d
  int v26; // edx
  __int64 VadEvent; // rax
  __int64 v28; // rax
  __int64 v29; // rbp
  __int64 v30; // rax
  int v31; // [rsp+50h] [rbp-88h] BYREF
  int v32; // [rsp+54h] [rbp-84h]
  int v33; // [rsp+58h] [rbp-80h]
  int v34; // [rsp+5Ch] [rbp-7Ch]
  $115DCDF994C6370D29323EAB0E0C9502 v35; // [rsp+60h] [rbp-78h] BYREF

  v31 = 0;
  v33 = 0;
  v4 = 0LL;
  memset(&v35, 0, sizeof(v35));
  v5 = 0LL;
  v32 = a3;
  v34 = a4 & 0x4000000;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (a4 & 0x4000000) != 0 && a2 != (a2 & 0xFFFFFFFFFFFFF000uLL) )
    return 3221225712LL;
  if ( Process != (_KPROCESS *)BugCheckParameter1 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v35);
    v33 = 1;
  }
  v9 = MiObtainReferencedVadEx(a2, 1, &v31);
  v10 = (__int64)v9;
  if ( !v9 )
  {
    v16 = v31;
    if ( v31 == -1073741664 )
      v16 = -1073741799;
    goto LABEL_15;
  }
  v11 = *((_DWORD *)v9 + 12);
  v12 = v11 >> 4;
  if ( (v11 & 0x200000) == 0 || (v12 & 7) == 1 )
  {
    v13 = *((unsigned int *)v9 + 6);
    v14 = (v13 | ((unsigned __int64)*((unsigned __int8 *)v9 + 32) << 32)) << 12;
    if ( (v12 & 7) == 2 && (v11 & 0xF80) == 0x380 )
      v4 = (char *)((v13 | ((unsigned __int64)*((unsigned __int8 *)v9 + 32) << 32)) << 12);
    v15 = ((*((unsigned int *)v9 + 7) | ((unsigned __int64)*((unsigned __int8 *)v9 + 33) << 32))
         - (v13 | ((unsigned __int64)*((unsigned __int8 *)v9 + 32) << 32))
         + 1) << 12;
    if ( (v11 & 8) != 0 && (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x20) == 0 )
    {
      v31 = MiCheckSecuredVad((ULONG_PTR)v9, v14, v15, 0x55u, KeGetCurrentThread()->PreviousMode);
      v16 = v31;
      if ( v31 < 0 )
        goto LABEL_50;
    }
    if ( v34 )
    {
      if ( v14 != a2 || (VadEvent = MiLocateVadEvent(v10, 128LL)) == 0 )
      {
        v16 = -1073741800;
        goto LABEL_50;
      }
      v5 = *(_QWORD *)(VadEvent + 8);
      *(_QWORD *)(VadEvent + 8) = 0LL;
      v28 = KeAbPreAcquire(v5 + 40, 0LL);
      v29 = v28;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 40), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v5 + 40), v28, v5 + 40);
      if ( v29 )
        *(_BYTE *)(v29 + 18) = 1;
      MiUpdateVadStartVpn(v5, *(unsigned int *)(v10 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32));
      *(_DWORD *)(v5 + 28) = *(_DWORD *)(v10 + 28);
      *(_BYTE *)(v5 + 33) = *(_BYTE *)(v10 + 33);
    }
    if ( v4 && (unsigned int)MiVadMapsLargeImage(v10) )
    {
      v30 = MiLocateVadEvent(v18, 16LL);
      v4 += 0x10000 * (unsigned __int64)*(unsigned __int8 *)(v30 + 8);
      v15 = *(_QWORD *)(v30 + 16) << 12;
    }
    if ( (PerfGlobalGroupMask & 4) != 0 )
    {
      if ( v4 )
      {
        if ( *(_QWORD *)(BugCheckParameter1 + 1088) )
        {
          if ( (*(_DWORD *)(BugCheckParameter1 + 2172) & 0x1000) == 0 )
          {
            v19 = *(__int64 **)(v10 + 72);
            v20 = (__int64 *)*v19;
            if ( *v19 )
            {
              if ( v20[8] )
              {
                v21 = *v20;
                v22 = (unsigned __int16 *)MiReferenceControlAreaFile(*v19);
                if ( (*(_DWORD *)(v10 + 64) & 0x8000000) != 0 )
                {
                  v25 = 0;
                  v26 = 0;
                }
                else
                {
                  v23 = *(unsigned __int8 *)(v21 + 15);
                  v24 = v23 >> 1;
                  v25 = v23 >> 4;
                  v26 = v24 & 7;
                }
                PerfLogImageUnload(
                  v22 + 44,
                  v22,
                  BugCheckParameter1,
                  v4,
                  v15,
                  *(_DWORD *)(*(_QWORD *)(v21 + 56) + 60LL),
                  v25,
                  v26,
                  1u);
                MiDereferenceControlAreaFile((__int64)v20, (__int64)v22);
              }
            }
          }
        }
      }
    }
    if ( (*(_DWORD *)(v10 + 48) & 0x70) == 0x10 )
      MiDeleteVad((unsigned int *)v10, v5, v32);
    else
      MiUnmapVad((PVOID)v10);
    v16 = 0;
    goto LABEL_15;
  }
  v16 = -1073741799;
LABEL_50:
  MiUnlockAndDereferenceVad((char *)v10);
LABEL_15:
  if ( v33 )
    KiUnstackDetachProcess(&v35);
  if ( v16 >= 0 )
  {
    if ( v4 )
      DbgkUnMapViewOfSection((PVOID)BugCheckParameter1);
  }
  return (unsigned int)v16;
}
