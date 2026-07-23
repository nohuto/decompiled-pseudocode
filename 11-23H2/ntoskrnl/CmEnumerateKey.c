/*
 * XREFs of CmEnumerateKey @ 0x1406DC470
 * Callers:
 *     NtEnumerateKey @ 0x1406DBE40 (NtEnumerateKey.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14022D600 (CmpDrainDelayDerefContext.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     CmpInitializeDelayDerefContext @ 0x140231594 (CmpInitializeDelayDerefContext.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1406D234C (CmpUpdateKeyNodeAccessBits.c)
 *     CmpQueryKeyDataFromNode @ 0x1406DAA80 (CmpQueryKeyDataFromNode.c)
 *     CmpFindSubKeyByNumberEx @ 0x1406DB000 (CmpFindSubKeyByNumberEx.c)
 *     CmpUnlockTwoKcbs @ 0x1406DBD44 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1406DBD9C (CmpLockTwoKcbsShared.c)
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1406E02CC (HvpGetCellContextReinitialize.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1407689EC (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpLockRegistryExclusive @ 0x1407693DC (CmpLockRegistryExclusive.c)
 *     CmpDereferenceKeyControlBlock @ 0x14076AD00 (CmpDereferenceKeyControlBlock.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 *     CmpEnumerateLayeredKey @ 0x140A166C4 (CmpEnumerateLayeredKey.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x140A198B8 (CmpFindSubKeyByNumberFromMergedView.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF5160 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF5230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmEnumerateKey(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7)
{
  ULONG_PTR v7; // rsi
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r14
  __int64 v16; // r12
  int SubKeyByNumber; // ebx
  ULONG_PTR v18; // rdi
  ULONG_PTR v19; // rdx
  __int64 *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 CellFlat; // rax
  __int64 v24; // r15
  char v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  signed __int64 *v31; // rbx
  unsigned __int64 v32; // r15
  ULONG_PTR v33; // r13
  bool v34; // zf
  unsigned int v35; // edi
  __int64 CellPaged; // rax
  unsigned int v37; // r15d
  int v38; // esi
  unsigned int v39; // r13d
  int v40; // r14d
  int v41; // eax
  __int64 *v42; // rax
  int v43; // edx
  int v44; // ecx
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v46; // [rsp+60h] [rbp-A8h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v48; // [rsp+70h] [rbp-98h]
  __int64 v49; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v50; // [rsp+80h] [rbp-88h]
  __int64 v51; // [rsp+88h] [rbp-80h] BYREF
  __int64 v52; // [rsp+90h] [rbp-78h]
  __int64 v53; // [rsp+98h] [rbp-70h]
  __int64 v54; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v55[2]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v56[8]; // [rsp+B8h] [rbp-50h] BYREF
  _OWORD v57[3]; // [rsp+C0h] [rbp-48h] BYREF

  v7 = 0LL;
  v53 = a5;
  LODWORD(v48) = a4;
  v50 = a3;
  v52 = a7;
  HIDWORD(BugCheckParameter4) = 0;
  v46 = 0LL;
  memset(v57, 0, sizeof(v57));
  BugCheckParameter3 = 0LL;
  *(_OWORD *)v55 = 0LL;
  HvpGetCellContextReinitialize(&v46);
  v51 = 0LL;
  v10 = 0LL;
  v49 = 0LL;
  v54 = 0LL;
  CmpInitializeDelayDerefContext(v55);
  CmpAttachToRegistryProcess(v57);
  if ( !*(_WORD *)(a1[1] + 66LL) )
  {
    if ( a1[7] || a1[8] )
      CmpLockRegistryExclusive();
    else
      CmpLockRegistry(v12, v11, v13, v14);
    v15 = a1[1];
    if ( a2 )
      v16 = *(_QWORD *)(a2 + 8);
    else
      v16 = 0LL;
    CmpLockTwoKcbsShared(v16, v15);
    SubKeyByNumber = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( SubKeyByNumber < 0 )
      goto LABEL_24;
    if ( a1[7] || a1[8] )
    {
      SubKeyByNumber = CmpTransSearchAddTransFromKeyBody(a1, &v51);
      if ( SubKeyByNumber < 0 )
        goto LABEL_24;
      v10 = v51;
      SubKeyByNumber = CmpPerformKeyBodyDeletionCheck(a1, v51);
      if ( SubKeyByNumber < 0 )
        goto LABEL_24;
    }
    if ( a2 )
    {
      SubKeyByNumber = CmpPerformKeyBodyDeletionCheck(a2, v10);
      if ( SubKeyByNumber < 0 )
        goto LABEL_24;
    }
    else if ( !CmpVEEnabled || (*(_DWORD *)(v15 + 184) & 0x1000000) == 0 )
    {
      v18 = *(_QWORD *)(v15 + 32);
      v19 = *(unsigned int *)(v15 + 40);
      BugCheckParameter3 = v18;
      if ( v10 )
      {
        v20 = &v49;
        v21 = v16;
        v22 = v15;
      }
      else
      {
        v20 = 0LL;
        v21 = 0LL;
        v22 = 0LL;
      }
      SubKeyByNumber = CmpFindSubKeyByNumberEx(
                         v18,
                         v19,
                         v50,
                         (_DWORD *)&BugCheckParameter4 + 1,
                         v22,
                         v21,
                         v10,
                         (__int64)v55,
                         (ULONG_PTR *)v20);
      if ( SubKeyByNumber >= 0 )
        goto LABEL_16;
      goto LABEL_31;
    }
    v42 = &v49;
    if ( !v10 )
      v42 = 0LL;
    if ( a2 )
    {
      v43 = v15;
      v44 = v16;
    }
    else
    {
      v43 = 0;
      v44 = v15;
    }
    SubKeyByNumber = CmpFindSubKeyByNumberFromMergedView(
                       v44,
                       v43,
                       v50,
                       v10,
                       (__int64)v55,
                       (__int64)&BugCheckParameter3,
                       (__int64)&BugCheckParameter4 + 4,
                       (__int64)v42,
                       (__int64)v56);
    if ( SubKeyByNumber >= 0 )
    {
      v18 = BugCheckParameter3;
LABEL_16:
      if ( HIDWORD(BugCheckParameter4) != -1 )
      {
        if ( (*(_BYTE *)(v18 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v18, HIDWORD(BugCheckParameter4));
        else
          CellFlat = HvpGetCellPaged(v18);
        v24 = CellFlat;
        if ( (*(_DWORD *)(v18 + 160) & 0x8001) == 0
          && (*(_BYTE *)(CellFlat + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
        {
          if ( (*(_BYTE *)(v18 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v18, &v46);
          else
            HvpReleaseCellPaged(v18, &v46);
          v31 = (signed __int64 *)(v18 + 72);
          v32 = KeAbPreAcquire(v18 + 72, 0LL);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 72), 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((signed __int64 *)(v18 + 72), 0LL, v32, v18 + 72);
          if ( v32 )
            *(_BYTE *)(v32 + 18) = 1;
          v33 = BugCheckParameter3;
          v34 = (*(_BYTE *)(v18 + 140) & 1) == 0;
          v35 = HIDWORD(BugCheckParameter4);
          if ( v34 )
            CellPaged = HvpGetCellPaged(BugCheckParameter3);
          else
            CellPaged = HvpGetCellFlat(BugCheckParameter3, HIDWORD(BugCheckParameter4));
          v24 = CellPaged;
          CmpUpdateKeyNodeAccessBits(v33, CellPaged, v35);
          if ( _InterlockedCompareExchange64(v31, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v31);
          KeAbPostRelease((ULONG_PTR)v31);
          v18 = BugCheckParameter3;
          v10 = v51;
        }
        v7 = v49;
        SubKeyByNumber = CmpQueryKeyDataFromNode(v18, v24, v48, v53, a6, (unsigned int *)v52, v49, v10);
        if ( v24 )
        {
          if ( (*(_BYTE *)(v18 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v18, &v46);
          else
            HvpReleaseCellPaged(v18, &v46);
        }
        goto LABEL_24;
      }
      SubKeyByNumber = -2147483622;
    }
LABEL_31:
    v7 = v49;
LABEL_24:
    CmpUnlockTwoKcbs(v16, v15);
    v25 = 1;
    goto LABEL_25;
  }
  v37 = 0;
  v38 = v48;
  v39 = v50;
  v40 = v53;
  do
  {
    v41 = CmpEnumerateLayeredKey((_DWORD)a1, v39, v38, v40, a6, v52, (__int64)&v54, v37++ <= 0xA);
    SubKeyByNumber = v41;
  }
  while ( v41 == -1073741267 );
  v7 = 0LL;
  v25 = 0;
LABEL_25:
  if ( v7 )
    CmpDereferenceKeyControlBlock(v7);
  CmpDrainDelayDerefContext((_QWORD **)v55);
  if ( v25 )
    CmpUnlockRegistry(v27, v26, v28, v29);
  CmpDetachFromRegistryProcess(v57);
  return (unsigned int)SubKeyByNumber;
}
