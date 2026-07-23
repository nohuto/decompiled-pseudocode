/*
 * XREFs of MmUpdateUserShadowStackValue @ 0x140646CD0
 * Callers:
 *     PspFreeUserFiberShadowStack @ 0x1409B1358 (PspFreeUserFiberShadowStack.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14021ACA0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021AE84 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiLockLowestValidPageTable @ 0x14025A520 (MiLockLowestValidPageTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockAndDereferenceVad @ 0x140274D20 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x140274F40 (MiObtainReferencedVadEx.c)
 *     MiCaptureDirtyBitToPfn @ 0x140283390 (MiCaptureDirtyBitToPfn.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiReleasePageFileInfo @ 0x14029556C (MiReleasePageFileInfo.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MmUpdateUserShadowStackValue(unsigned __int64 a1, signed __int64 a2)
{
  __int64 *v3; // rax
  char *v4; // rsi
  unsigned int v5; // edi
  unsigned __int64 *v6; // r15
  unsigned __int64 v7; // rdi
  unsigned __int8 v8; // r12
  __int64 v9; // r9
  unsigned __int64 valid; // r13
  __int64 v11; // rax
  unsigned __int64 v12; // r12
  __int64 v13; // rdi
  volatile signed __int64 *v14; // rcx
  BOOL v15; // r14d
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 *v19; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-50h] BYREF
  __int64 v21[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int8 v23; // [rsp+90h] [rbp+18h]
  unsigned int v24; // [rsp+98h] [rbp+20h] BYREF

  v24 = 0;
  v20 = 0LL;
  if ( (a1 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  v3 = MiObtainReferencedVadEx(a1, 0, (int *)&v24);
  v4 = (char *)v3;
  v19 = v3;
  if ( v3 )
  {
    if ( (v3[6] & 0xA200000) == 0x8200000 )
    {
      v6 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
      v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      while ( 1 )
      {
        v8 = MiLockWorkingSetShared((__int64)v6);
        v23 = v8;
        valid = MiLockLowestValidPageTable((__int64)v6, v7, &v20, v9);
        v11 = MI_READ_PTE_LOCK_FREE(v20);
        v21[0] = v11;
        if ( valid == ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL && (v11 & 1) != 0 )
          break;
        MiUnlockPageTableInternal((__int64)v6, valid);
        MiUnlockWorkingSetShared((__int64)v6, v8);
      }
      v12 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v21) >> 12) & 0xFFFFFFFFFFLL;
      v13 = 48 * v12 - 0x220000000000LL;
      LODWORD(v19) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v19);
        while ( *(__int64 *)(v13 + 24) < 0 );
      }
      v14 = (volatile signed __int64 *)((a1 & 0xFFF) + MiMapPageInHyperSpaceWorker(v12, 0LL, 0x80000000));
      v15 = a2 == _InterlockedCompareExchange64(v14, 0LL, a2);
      MiUnmapPageInHyperSpaceWorker((unsigned __int64)v14, 0x11u);
      v16 = MiCaptureDirtyBitToPfn(48 * v12 - 0x220000000000LL);
      if ( v16 )
        v17 = *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v13 + 40) >> 43) & 0x3FFLL));
      else
        v17 = 0LL;
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v16 )
        MiReleasePageFileInfo(v17, v16, 1);
      MiUnlockPageTableInternal((__int64)v6, valid);
      MiUnlockWorkingSetShared((__int64)v6, v23);
      v5 = !v15 ? 0xC0000272 : 0;
    }
    else
    {
      v5 = -1073741800;
    }
  }
  else
  {
    v5 = v24;
  }
  if ( v4 )
    MiUnlockAndDereferenceVad(v4);
  return v5;
}
