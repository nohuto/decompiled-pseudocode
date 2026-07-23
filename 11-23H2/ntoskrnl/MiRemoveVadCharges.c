/*
 * XREFs of MiRemoveVadCharges @ 0x1406FB650
 * Callers:
 *     MiFinishVadDeletion @ 0x140289FA0 (MiFinishVadDeletion.c)
 * Callees:
 *     MiGetProcessPartition @ 0x140275924 (MiGetProcessPartition.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiIsVadLarge @ 0x14028A6C4 (MiIsVadLarge.c)
 *     MiReturnResident @ 0x1402930A0 (MiReturnResident.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiFillCommitReturnInfo @ 0x1402DF3A8 (MiFillCommitReturnInfo.c)
 *     MiReturnFullProcessCharges @ 0x1402DF3C0 (MiReturnFullProcessCharges.c)
 *     MiReleaseVadEventBlocks @ 0x1406FB7EC (MiReleaseVadEventBlocks.c)
 *     MiResidentPagesForSpan @ 0x1407D4BF8 (MiResidentPagesForSpan.c)
 */

__int64 __fastcall MiRemoveVadCharges(__int64 a1, __int64 a2)
{
  __int64 ProcessPartition; // r14
  BOOL v5; // ebp
  __int64 v6; // r9
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  __int64 v9; // rdi
  int v10; // eax
  _QWORD *SharedVm; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int128 v16; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v17[4]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v18; // [rsp+50h] [rbp-38h]
  __int64 v19; // [rsp+60h] [rbp-28h]

  v17[0] = 0LL;
  v17[2] = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  v16 = 0LL;
  ProcessPartition = MiGetProcessPartition(a2);
  v5 = 0;
  if ( MiIsVadLarge(a1) )
    v5 = (*(_BYTE *)(a1 + 48) & 0x70) != 80;
  v7 = *(unsigned int *)(a1 + 52);
  v17[1] = *(_QWORD *)(a1 + 8);
  LODWORD(v7) = v7 & 0x7FFFFFFF;
  v17[3] = *(_QWORD *)a1;
  v8 = ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31) | v7;
  if ( v8 < 0x7FFFFFFFDLL )
  {
    MiFillCommitReturnInfo(v8, (__int64)v17, &v16);
    v9 = v16;
    if ( (_QWORD)v16 )
    {
      MiReturnFullProcessCharges(a2, v16);
      if ( v5 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 2032), -v9);
    }
    if ( !*((_QWORD *)&v16 + 1) )
      goto LABEL_6;
    SharedVm = MiGetSharedVm(a2 + 1664);
    v14 = SharedVm[1];
    if ( v14 )
    {
      if ( v13 <= v14 )
      {
        SharedVm[1] = v14 - v13;
LABEL_6:
        *(_DWORD *)(a1 + 52) &= 0x80000000;
        *(_BYTE *)(a1 + 34) = 0;
        goto LABEL_7;
      }
      v13 -= v14;
      SharedVm[1] = 0LL;
    }
    if ( v13 )
      MiReturnCommit(ProcessPartition, v13);
    goto LABEL_6;
  }
LABEL_7:
  v10 = *(_DWORD *)(a1 + 48) & 0x70;
  if ( v10 == 16 || v10 == 64 )
  {
    v15 = MiResidentPagesForSpan(
            (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12,
            ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF,
            0LL,
            v6);
    if ( v15 )
      MiReturnResident(ProcessPartition, v15);
  }
  return MiReleaseVadEventBlocks(a1, 1LL);
}
