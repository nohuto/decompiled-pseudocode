/*
 * XREFs of MiProbeAndLockPages @ 0x1402FC270
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1402F1954 (MiGetWorkingSetInfoList.c)
 *     MmProbeAndLockPagesPrivate @ 0x1402FBEF8 (MmProbeAndLockPagesPrivate.c)
 *     CcZeroDataInCache @ 0x1402FBF18 (CcZeroDataInCache.c)
 *     MiGetWorkingSetInfo @ 0x140363210 (MiGetWorkingSetInfo.c)
 *     CcPrepareMdlWrite @ 0x140369190 (CcPrepareMdlWrite.c)
 *     IopProbeAndLockPages @ 0x140371DD4 (IopProbeAndLockPages.c)
 *     VslpLockPagesForTransfer @ 0x1403CEA84 (VslpLockPagesForTransfer.c)
 *     VslpLockMdlForTransfer @ 0x1403CEC60 (VslpLockMdlForTransfer.c)
 *     IopProbeAndLockPages_0 @ 0x1403D4174 (IopProbeAndLockPages_0.c)
 *     CcLockSystemCacheBuffer @ 0x140537760 (CcLockSystemCacheBuffer.c)
 *     VslFinalizeSecureImageHash @ 0x14054DC00 (VslFinalizeSecureImageHash.c)
 *     IopProbeAndLockPages_1 @ 0x140555AD0 (IopProbeAndLockPages_1.c)
 *     IopProbeAndLockPages_2 @ 0x140559CDC (IopProbeAndLockPages_2.c)
 *     KiOpPatchCode @ 0x14057F400 (KiOpPatchCode.c)
 *     PspIumAllocatePartitionState @ 0x1405A5910 (PspIumAllocatePartitionState.c)
 *     SmPrepareForFatalPageError @ 0x1405CD804 (SmPrepareForFatalPageError.c)
 *     VmProbeAndLockPages @ 0x1405F8BC0 (VmProbeAndLockPages.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1406428C8 (MiPrepareImagePagesForHotPatch.c)
 *     MiLockRetpolineStubs @ 0x140B999F0 (MiLockRetpolineStubs.c)
 * Callees:
 *     MiProbeAndLockPrepare @ 0x140234DB0 (MiProbeAndLockPrepare.c)
 *     MiProbeAndLockPacket @ 0x140236260 (MiProbeAndLockPacket.c)
 *     MiProbeAndLockComplete @ 0x140238870 (MiProbeAndLockComplete.c)
 *     MiUnlockAndDereferenceVad @ 0x140274A90 (MiUnlockAndDereferenceVad.c)
 *     RtlRaiseStatus @ 0x1403217B0 (RtlRaiseStatus.c)
 *     memset @ 0x140435A00 (memset.c)
 *     MiReturnFullProcessCommitment @ 0x140764E54 (MiReturnFullProcessCommitment.c)
 */

void __fastcall MiProbeAndLockPages(__int64 a1, char a2, signed __int32 a3)
{
  int v6; // eax
  int v7; // eax
  int v8; // eax
  char *v9; // rbx
  int v10; // edi
  int v11; // edx
  unsigned __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  signed __int32 v16; // [rsp+20h] [rbp-D8h]
  _QWORD v17[22]; // [rsp+40h] [rbp-B8h] BYREF

  memset(v17, 0, sizeof(v17));
  LOBYTE(v16) = a2;
  v6 = MiProbeAndLockPrepare(
         (__int64)v17,
         a1,
         *(_QWORD *)(a1 + 32) + *(unsigned int *)(a1 + 44),
         *(unsigned int *)(a1 + 40),
         v16,
         a3,
         1);
  if ( v6 < 0 )
    RtlRaiseStatus((unsigned int)v6);
  v7 = MiProbeAndLockPacket((__int64)v17);
  v8 = MiProbeAndLockComplete((__int64)v17, v7);
  v9 = (char *)v17[16];
  v10 = v8;
  if ( v17[16] )
  {
    v11 = *(_DWORD *)(v17[16] + 52LL);
    v12 = v17[14] + (v11 & 0x7FFFFFFF | ((unsigned __int64)*(unsigned __int8 *)(v17[16] + 34LL) << 31));
    v13 = v11 ^ (v12 ^ v11) & 0x7FFFFFFF;
    v14 = v17[15];
    *(_DWORD *)(v17[16] + 52LL) = v13;
    v9[34] = v12 >> 31;
    v15 = v14 - v17[14];
    if ( v15 )
      MiReturnFullProcessCommitment(v17[11], v15);
    MiUnlockAndDereferenceVad(v9);
  }
  if ( v10 < 0 )
    RtlRaiseStatus((unsigned int)v10);
}
