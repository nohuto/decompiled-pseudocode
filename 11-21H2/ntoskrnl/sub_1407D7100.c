/*
 * XREFs of sub_1407D7100 @ 0x1407D7100
 * Callers:
 *     sub_1407D74C4 @ 0x1407D74C4 (sub_1407D74C4.c)
 * Callees:
 *     ExInitializeRundownProtection @ 0x1402A0840 (ExInitializeRundownProtection.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     KeQueryPriorityThread @ 0x14035D5C0 (KeQueryPriorityThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406FA730 @ 0x1406FA730 (sub_1406FA730.c)
 *     sub_1407D73D0 @ 0x1407D73D0 (sub_1407D73D0.c)
 *     sub_1407D7448 @ 0x1407D7448 (sub_1407D7448.c)
 *     sub_1407D7544 @ 0x1407D7544 (sub_1407D7544.c)
 */

__int64 __fastcall sub_1407D7100(__int64 *a1, WORK_QUEUE_TYPE a2, int a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // r12
  __int64 v6; // r15
  WORK_QUEUE_TYPE v7; // r13d
  __int64 v8; // rdi
  unsigned int v9; // esi
  unsigned int v10; // r14d
  __int64 v11; // rbx
  int v12; // r14d
  unsigned int v13; // ebx
  unsigned int *v14; // rsi
  int v15; // r15d
  unsigned int *v16; // rsi
  WORK_QUEUE_TYPE v17; // r13d
  __int64 v18; // r12
  int v19; // ebx
  __int64 v20; // r8
  __int64 v22; // rax
  __int16 v23; // [rsp+38h] [rbp-D0h] BYREF
  int v24; // [rsp+40h] [rbp-C8h] BYREF
  WORK_QUEUE_TYPE QueueType; // [rsp+48h] [rbp-C0h] BYREF
  int v26; // [rsp+50h] [rbp-B8h]
  __int64 v27; // [rsp+58h] [rbp-B0h] BYREF
  void *v28; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v29; // [rsp+68h] [rbp-A0h] BYREF
  __int64 RunRef; // [rsp+70h] [rbp-98h]
  struct _EX_RUNDOWN_REF RunRef_8[2]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v32; // [rsp+88h] [rbp-80h]
  __int128 v33; // [rsp+98h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v35; // [rsp+B8h] [rbp-50h]
  int v36; // [rsp+C0h] [rbp-48h]
  int v37; // [rsp+C4h] [rbp-44h]
  __int64 v38; // [rsp+C8h] [rbp-40h]
  __int64 v39; // [rsp+D0h] [rbp-38h]
  __int64 v40; // [rsp+D8h] [rbp-30h]
  __int64 v41; // [rsp+E0h] [rbp-28h]
  void **v42; // [rsp+E8h] [rbp-20h]
  __int64 v43; // [rsp+F0h] [rbp-18h]
  WORK_QUEUE_TYPE *p_QueueType; // [rsp+F8h] [rbp-10h]
  __int64 v45; // [rsp+100h] [rbp-8h]
  __int16 *v46; // [rsp+108h] [rbp+0h]
  __int64 v47; // [rsp+110h] [rbp+8h]
  unsigned __int64 *v48; // [rsp+118h] [rbp+10h]
  __int64 v49; // [rsp+120h] [rbp+18h]
  void **v50; // [rsp+128h] [rbp+20h]
  __int64 v51; // [rsp+130h] [rbp+28h]

  v29 = (unsigned __int64)a1;
  v26 = a3;
  LODWORD(v27) = a2;
  v5 = a1;
  LOBYTE(v23) = 0;
  v6 = -1LL;
  v7 = a2;
  RunRef = a5;
  *(_OWORD *)&RunRef_8[0].Count = 0LL;
  v8 = *a1;
  v9 = 0;
  QueueType = a2;
  v10 = 0;
  LODWORD(v28) = a3;
  v11 = v8;
  v32 = 0LL;
  v33 = 0LL;
  if ( v8 && qword_140C54788 && EtwEventEnabled(qword_140C54788, &stru_140010EA8) )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( *(_WORD *)(v8 + 16 + 2 * v22) );
    LOWORD(v24) = v22;
    UserData.Ptr = (ULONGLONG)&v24;
    v36 = 2 * (unsigned __int16)v22;
    v35 = v8 + 16;
    v38 = v8 + 76;
    v40 = v8 + 80;
    v42 = &v28;
    p_QueueType = &QueueType;
    v46 = &v23;
    *(_QWORD *)&UserData.Size = 2LL;
    v37 = 0;
    v39 = 4LL;
    v41 = 4LL;
    v43 = 4LL;
    v45 = 4LL;
    v47 = 1LL;
    EtwWrite(qword_140C54788, &stru_140010EA8, 0LL, 7u, &UserData);
    v11 = *v5;
  }
  if ( v26 >= 1 << *(_DWORD *)(v11 + 124) )
    goto LABEL_35;
  if ( v7 )
  {
    if ( v7 == DelayedWorkQueue )
    {
      v12 = 1;
      goto LABEL_8;
    }
LABEL_35:
    v19 = -1073741811;
    goto LABEL_23;
  }
  v12 = 0;
LABEL_8:
  v13 = *(_DWORD *)(v8 + 88);
  v28 = (void *)v5[8];
  memset(v28, 0, 8LL * v13);
  v14 = (unsigned int *)v5[11];
  memset(v14, 0, 0x600uLL);
  ExInitializeRundownProtection(RunRef_8);
  *(_QWORD *)&v32 = RunRef;
  RunRef_8[1].Count = (ULONG_PTR)v5;
  LODWORD(v33) = v13;
  QueueType = KeQueryPriorityThread(KeGetCurrentThread()) + 32;
  if ( v13 > 0x20 )
    v13 = 32;
  sub_1407D7448(v8, v13);
  if ( v13 )
  {
    v15 = v26;
    v16 = v14 + 11;
    v17 = QueueType;
    v18 = v13;
    do
    {
      *(v16 - 1) = v15;
      *(_QWORD *)(v16 - 3) = RunRef_8;
      *v16 = v12 | *v16 & 0xFFFFFFFE;
      *(_QWORD *)(v16 - 11) = 0LL;
      *(_QWORD *)(v16 - 7) = sub_1407DF200;
      *(_QWORD *)(v16 - 5) = v16 - 11;
      sub_140347810(RunRef_8);
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v16 - 11), v17);
      v16 += 12;
      --v18;
    }
    while ( v18 );
    v7 = (int)v27;
    v6 = -1LL;
    v5 = (__int64 *)v29;
  }
  ExWaitForRundownProtectionRelease(RunRef_8);
  sub_1407D73D0(v8);
  v9 = DWORD2(v32);
  v19 = DWORD2(v33);
  if ( SDWORD2(v33) < 0 )
  {
    v10 = 0;
    if ( !DWORD2(v32) )
      goto LABEL_23;
  }
  else
  {
    v10 = DWORD1(v33);
    if ( !DWORD2(v32) )
    {
      v19 = 0;
      goto LABEL_23;
    }
    if ( DWORD1(v33) )
    {
      v19 = sub_1406FA730(DWORD2(v32), (__int64)v28, (__int64)(v5 + 13));
      if ( v19 >= 0 && !v5[13] )
        v19 = -2147483622;
    }
    else
    {
      v19 = -1073741823;
    }
  }
  v20 = v9;
  if ( v9 > 0x20 )
    v20 = 32LL;
  sub_1407D7544(v29, v9, v20, RunRef);
LABEL_23:
  LODWORD(v28) = v9;
  LODWORD(v27) = v26;
  v29 = v10;
  LOBYTE(v23) = 0;
  QueueType = v7;
  if ( v8 && qword_140C54788 && EtwEventEnabled(qword_140C54788, &stru_140010E98) )
  {
    do
      ++v6;
    while ( *(_WORD *)(v8 + 16 + 2 * v6) );
    v35 = v8 + 16;
    UserData.Ptr = (ULONGLONG)&v24;
    LOWORD(v24) = v6;
    v36 = 2 * (unsigned __int16)v6;
    *(_QWORD *)&UserData.Size = 2LL;
    v38 = v8 + 76;
    v40 = v8 + 80;
    v42 = (void **)&v27;
    p_QueueType = &QueueType;
    v46 = &v23;
    v48 = &v29;
    v50 = &v28;
    v37 = 0;
    v39 = 4LL;
    v41 = 4LL;
    v43 = 4LL;
    v45 = 4LL;
    v47 = 1LL;
    v49 = 8LL;
    v51 = 4LL;
    EtwWrite(qword_140C54788, &stru_140010E98, 0LL, 9u, &UserData);
  }
  return (unsigned int)v19;
}
