/*
 * XREFs of sub_140AFD7A4 @ 0x140AFD7A4
 * Callers:
 *     sub_140B02300 @ 0x140B02300 (sub_140B02300.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14024AE50 (KeRegisterBugCheckReasonCallback.c)
 *     sub_140294CC0 @ 0x140294CC0 (sub_140294CC0.c)
 *     ExInitializeRundownProtection @ 0x1402A0840 (ExInitializeRundownProtection.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140399424 @ 0x140399424 (sub_140399424.c)
 *     sub_1403C0554 @ 0x1403C0554 (sub_1403C0554.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     strcpy_s @ 0x1403E71A0 (strcpy_s.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14068F5DC @ 0x14068F5DC (sub_14068F5DC.c)
 *     sub_1406A6378 @ 0x1406A6378 (sub_1406A6378.c)
 *     sub_1406C48C8 @ 0x1406C48C8 (sub_1406C48C8.c)
 *     PsCreateSystemThread @ 0x1406F0310 (PsCreateSystemThread.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     RtlRunOnceInitialize @ 0x1407F3B30 (RtlRunOnceInitialize.c)
 *     MmAllocateMappingAddress @ 0x1407F9D30 (MmAllocateMappingAddress.c)
 *     ObCreateObjectType @ 0x140824B10 (ObCreateObjectType.c)
 *     sub_140829CBC @ 0x140829CBC (sub_140829CBC.c)
 *     sub_140852C00 @ 0x140852C00 (sub_140852C00.c)
 *     sub_14085DACC @ 0x14085DACC (sub_14085DACC.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140AFF540 @ 0x140AFF540 (sub_140AFF540.c)
 *     sub_140B24668 @ 0x140B24668 (sub_140B24668.c)
 *     sub_140B28514 @ 0x140B28514 (sub_140B28514.c)
 *     sub_140B2E74C @ 0x140B2E74C (sub_140B2E74C.c)
 */

char __fastcall sub_140AFD7A4(PVOID StartContext)
{
  char *v1; // r9
  __int64 v3; // r10
  unsigned __int64 v4; // r8
  __int64 v5; // rax
  char v6; // cl
  int *v7; // r8
  __int64 v8; // r9
  int v9; // eax
  size_t v10; // rbx
  _RTL_RUN_ONCE *v11; // rcx
  _RTL_RUN_ONCE *v12; // rcx
  __int64 v13; // rax
  _RTL_RUN_ONCE *v14; // rcx
  _RTL_RUN_ONCE *v15; // rcx
  __int64 v16; // rax
  _RTL_RUN_ONCE *v17; // rcx
  _RTL_RUN_ONCE *v18; // rcx
  __int64 v19; // rax
  struct _EX_RUNDOWN_REF *v20; // rcx
  __int64 *v21; // rdi
  int v22; // ebx
  _QWORD *v23; // rbx
  void *v24; // rcx
  NTSTATUS v25; // eax
  PVOID v26; // rcx
  _OWORD *v27; // rcx
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v30[16]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+E0h] [rbp-20h] BYREF
  HANDLE ThreadHandle; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v33; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v34; // [rsp+100h] [rbp+0h]
  __int128 v35; // [rsp+110h] [rbp+10h] BYREF
  __int64 v36; // [rsp+120h] [rbp+20h]
  int v37; // [rsp+130h] [rbp+30h]
  char v38; // [rsp+134h] [rbp+34h] BYREF
  int v39; // [rsp+138h] [rbp+38h]
  char v40; // [rsp+13Ch] [rbp+3Ch]
  int v41; // [rsp+140h] [rbp+40h]
  char v42; // [rsp+144h] [rbp+44h]
  int v43; // [rsp+148h] [rbp+48h]
  char v44; // [rsp+14Ch] [rbp+4Ch]
  int v45; // [rsp+150h] [rbp+50h]
  char v46; // [rsp+154h] [rbp+54h]
  int v47; // [rsp+158h] [rbp+58h]
  char v48; // [rsp+15Ch] [rbp+5Ch]
  _OWORD v49[2]; // [rsp+160h] [rbp+60h] BYREF

  qword_140D3B248 += 30LL;
  v1 = &v38;
  qword_140D3B250 += 300LL;
  ThreadHandle = 0LL;
  DestinationString = 0LL;
  v37 = 0;
  v49[0] = _mm_load_si128((const __m128i *)&xmmword_140024FB0);
  v38 = 1;
  v3 = 6LL;
  v39 = 2;
  xmmword_140D07238 = 0LL;
  v40 = 3;
  v41 = 3;
  v42 = 1;
  v43 = 1;
  v44 = 1;
  v45 = 4;
  v46 = 1;
  v47 = 5;
  v48 = 1;
  v49[1] = _mm_load_si128((const __m128i *)&xmmword_140024FA0);
  qword_140D07248 = 0LL;
  do
  {
    v4 = (unsigned int)(4 * *((_DWORD *)v1 - 1));
    v5 = (unsigned __int8)*v1;
    v6 = (4 * *(v1 - 4)) & 0x3F;
    v1 += 8;
    *((_QWORD *)&xmmword_140D07238 + (v4 >> 6)) = (v5 << v6) | *((_QWORD *)&xmmword_140D07238 + (v4 >> 6)) & ~(3LL << v6);
    --v3;
  }
  while ( v3 );
  if ( (unsigned int)dword_140D050B0 < 0x18 )
    memset(
      (void *)(0x140000000LL + (unsigned int)dword_140D050B0 + 13659624LL),
      0,
      24LL - (unsigned int)dword_140D050B0);
  v33 = xmmword_140D06DE8;
  dword_140D050B0 = 24;
  v34 = qword_140D06DF8;
  if ( (int)sub_1406C48C8((__m128i *)&v33, 1) < 0 )
  {
    xmmword_140D06DE8 = 0LL;
    qword_140D06DF8 = 0LL;
  }
  v7 = (int *)v49;
  v8 = 8LL;
  do
  {
    v9 = *v7++;
    *((_QWORD *)&xmmword_140D06DE8 + ((unsigned __int64)(unsigned int)(4 * v9) >> 6)) &= ~(3LL << ((4 * v9) & 0x3F));
    --v8;
  }
  while ( v8 );
  v10 = (unsigned int)dword_140D050D0;
  if ( (unsigned int)dword_140D050D0 < 0x18 )
    memset((char *)&xmmword_140D07070 + (unsigned int)dword_140D050D0, 0, 24LL - (unsigned int)dword_140D050D0);
  v35 = xmmword_140D07070;
  v36 = qword_140D07080;
  if ( (int)sub_140852C00(&v35) < 0 )
    memset(&xmmword_140D07070, 0, v10);
  v11 = &stru_140CF6040;
  do
  {
    RtlRunOnceInitialize(v11);
    v11 = v12 + 1;
  }
  while ( v13 != 1 );
  v14 = &stru_140CF6440;
  do
  {
    RtlRunOnceInitialize(v14);
    v14 = v15 + 1;
  }
  while ( v16 != 1 );
  v17 = &stru_140CF6240;
  do
  {
    RtlRunOnceInitialize(v17);
    v17 = v18 + 1;
  }
  while ( v19 != 1 );
  sub_14068F5DC(0, dword_140D68160);
  qword_140D3CAC8 = 0LL;
  qword_140C1BF88 = (__int64)&qword_140C1BF80;
  qword_140C1BF80 = (__int64)&qword_140C1BF80;
  v20 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)KeGetCurrentThread() + 23);
  qword_140D06940 = v20;
  v20[135].Count = 0LL;
  ExInitializeRundownProtection(v20 + 139);
  *((_DWORD *)qword_140D06940 + 223) = 0;
  memset(v30, 0, 0x78uLL);
  LOWORD(v30[0]) = 120;
  *(_QWORD *)((char *)&v30[4] + 4) = 512LL;
  RtlInitUnicodeString(&DestinationString, L"Job");
  *(_QWORD *)((char *)v30 + 4) = 2048LL;
  v30[9] = sub_140207100;
  HIDWORD(v30[5]) = 1792;
  v30[8] = sub_1406D77F0;
  HIDWORD(v30[3]) = 2031679;
  BYTE2(v30[0]) = BYTE2(v30[0]) & 0x77 | 8;
  *(_OWORD *)((char *)&v30[1] + 4) = xmmword_140B57A50;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v30, 0LL, (__int64)&PsJobType) >= 0
    && (int)sub_1403C0554((__int64)PsJobType, 1) >= 0 )
  {
    LODWORD(v30[1]) = 176;
    RtlInitUnicodeString(&DestinationString, L"Process");
    BYTE2(v30[0]) |= 0xC2u;
    v30[9] = sub_1407E0F30;
    HIDWORD(v30[0]) = 32;
    v30[7] = sub_14066CF00;
    v30[5] = 0xB8000001000LL;
    v30[8] = sub_1406B4E90;
    HIDWORD(v30[3]) = 0x1FFFFF;
    LODWORD(v30[4]) = 1052672;
    *(_OWORD *)((char *)&v30[1] + 4) = xmmword_140B579F0;
    if ( (int)ObCreateObjectType(&DestinationString, (__int64)v30, 0LL, (__int64)&PsProcessType) >= 0
      && (int)sub_1403C0554((__int64)PsProcessType, 3) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"Thread");
      BYTE2(v30[0]) |= 0x80u;
      v30[9] = sub_1407A41E0;
      HIDWORD(v30[0]) = 4;
      v30[7] = sub_14066CE40;
      v30[5] = 0x8F000000000LL;
      v30[8] = 0LL;
      HIDWORD(v30[3]) = 0x1FFFFF;
      LODWORD(v30[4]) = 1054720;
      *(_OWORD *)((char *)&v30[1] + 4) = xmmword_140B57A40;
      if ( (int)ObCreateObjectType(&DestinationString, (__int64)v30, 0LL, (__int64)&PsThreadType) >= 0
        && (int)sub_1403C0554((__int64)PsThreadType, 3) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"Partition");
        memset(v30, 0, 0x78uLL);
        BYTE2(v30[0]) |= 0xCu;
        v30[7] = sub_140861F20;
        LOWORD(v30[0]) = 120;
        v30[8] = sub_1409B3320;
        LODWORD(v30[1]) = 16;
        v30[9] = sub_1409B3450;
        HIDWORD(v30[3]) = 2031619;
        HIDWORD(v30[4]) = 512;
        *(_OWORD *)((char *)&v30[1] + 4) = xmmword_140B57A20;
        HIDWORD(v30[5]) = 128;
        if ( (int)ObCreateObjectType(&DestinationString, (__int64)v30, 0LL, (__int64)&PsPartitionType) >= 0 )
        {
          memset(v30, 0, 0x78uLL);
          LODWORD(v30[1]) = 176;
          HIDWORD(v30[4]) = 512;
          BYTE2(v30[0]) = BYTE2(v30[0]) & 0x7D | 2;
          v21 = qword_140D3B330;
          LOWORD(v30[0]) = 120;
          v22 = 0;
          *(_OWORD *)((char *)&v30[1] + 4) = xmmword_140B57A30;
          HIDWORD(v30[3]) = 983043;
          do
          {
            HIDWORD(v30[5]) = *(_DWORD *)v21;
            if ( (int)ObCreateObjectType(
                        (const UNICODE_STRING *)&qword_140B57DC0[2 * (unsigned int)v22],
                        (__int64)v30,
                        0LL,
                        (__int64)(&qword_140D07020 + (unsigned int)v22)) < 0 )
              return 0;
            ++v22;
            ++v21;
          }
          while ( v22 < 2 );
          RtlInitUnicodeString(&DestinationString, L"ActivityReference");
          memset(v30, 0, 0x78uLL);
          BYTE2(v30[0]) |= 4u;
          LOWORD(v30[0]) = 120;
          *(_QWORD *)((char *)&v30[4] + 4) = 0x800000001LL;
          LODWORD(v30[1]) = 402;
          *(_OWORD *)((char *)&v30[1] + 4) = xmmword_140B579E0;
          HIDWORD(v30[3]) = 2031616;
          v30[8] = sub_1406EB880;
          if ( (int)ObCreateObjectType(&DestinationString, (__int64)v30, 0LL, (__int64)&qword_140D06FC8) >= 0 )
          {
            RtlInitUnicodeString(&DestinationString, L"ProcessStateChange");
            memset(v30, 0, 0x78uLL);
            BYTE2(v30[0]) |= 6u;
            LOWORD(v30[0]) = 120;
            LODWORD(v30[1]) = 146;
            HIDWORD(v30[3]) = 983041;
            *(_QWORD *)((char *)&v30[4] + 4) = 0x1800000001LL;
            v30[7] = 0LL;
            *(_OWORD *)((char *)&v30[1] + 4) = xmmword_140B57A00;
            v30[8] = 0LL;
            v30[9] = sub_1409AF690;
            if ( (int)ObCreateObjectType(&DestinationString, (__int64)v30, 0LL, (__int64)&qword_140D06E08) >= 0 )
            {
              RtlInitUnicodeString(&DestinationString, L"ThreadStateChange");
              memset(v30, 0, 0x78uLL);
              BYTE2(v30[0]) |= 6u;
              LOWORD(v30[0]) = 120;
              LODWORD(v30[1]) = 146;
              HIDWORD(v30[3]) = 983041;
              *(_QWORD *)((char *)&v30[4] + 4) = 0x1800000001LL;
              *(_OWORD *)((char *)&v30[1] + 4) = xmmword_140B57A10;
              v30[7] = 0LL;
              v30[8] = 0LL;
              v30[9] = sub_1409AF6F0;
              if ( (int)ObCreateObjectType(&DestinationString, (__int64)v30, 0LL, (__int64)&qword_140D06E10) >= 0 )
              {
                if ( (unsigned __int8)sub_140B2E74C() )
                {
                  if ( (unsigned __int8)sub_140AFF540() )
                  {
                    qword_140CF5E70 = 0LL;
                    qword_140CF5E68 = (__int64)&qword_140CF5E60;
                    qword_140CF5E60 = (__int64)&qword_140CF5E60;
                    qword_140D3B150 = 0LL;
                    qword_140D06A60 = sub_1406A6378(0LL, 0LL);
                    if ( qword_140D06A60 )
                    {
                      RtlRunOnceInitialize(&stru_140C1BDC8);
                      RtlRunOnceInitialize(&stru_140C1BDD0);
                      *(_BYTE *)(qword_140D06A60 + 44) |= 1u;
                      qword_140C1C010 = (__int64)sub_140299150;
                      qword_140C1BFB0 = (__int64)sub_1409B17B0;
                      stru_140C1BFC0.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1409B1860;
                      qword_140C1BFE0 = 0LL;
                      qword_140C1C018 = 0LL;
                      qword_140C1C000 = 0LL;
                      qword_140C1BFB8 = 0LL;
                      qword_140C1BFA0 = 0LL;
                      stru_140C1BFC0.Parameter = 0LL;
                      stru_140C1BFC0.List.Flink = 0LL;
                      if ( (int)sub_140B24668() >= 0 )
                      {
                        qword_140D68700 = (PVOID)(*((_QWORD *)qword_140D06940 + 151) & 0xFFFFFFFFFFFFFFF0uLL);
                        if ( (int)sub_140B28514() >= 0 )
                        {
                          v23 = qword_140D06C40;
                          if ( sub_14085DACC((__int64)qword_140D06C40 + 112, 0x1FFFFF, 0LL, 0LL, 0, 0, 0LL, 0LL, 0LL) >= 0 )
                          {
                            v24 = (void *)v23[14];
                            Object = 0LL;
                            v25 = ObReferenceObjectByHandle(v24, 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
                            v26 = Object;
                            v23[13] = Object;
                            if ( v25 >= 0 )
                            {
                              PsInitialSystemProcess = (PEPROCESS)v26;
                              _InterlockedOr((volatile signed __int32 *)v26 + 628, 0x40000000u);
                              _InterlockedOr((volatile signed __int32 *)PsInitialSystemProcess + 629, 0x2000u);
                              _InterlockedOr((volatile signed __int32 *)PsInitialSystemProcess + 543, 0x1000u);
                              strcpy_s((char *)qword_140D06940 + 1448, 0xFuLL, "Idle");
                              strcpy_s((char *)PsInitialSystemProcess + 1448, 0xFuLL, "System");
                              *((_QWORD *)PsInitialSystemProcess + 184) = ExAllocatePoolWithTag(
                                                                            NonPagedPoolNx,
                                                                            0x10uLL,
                                                                            0x61506553u);
                              v27 = (_OWORD *)*((_QWORD *)PsInitialSystemProcess + 184);
                              if ( v27 )
                              {
                                *v27 = 0LL;
                                if ( PsCreateSystemThread(
                                       &ThreadHandle,
                                       0x1FFFFFu,
                                       0LL,
                                       0LL,
                                       0LL,
                                       (PKSTART_ROUTINE)sub_14084C160,
                                       StartContext) >= 0 )
                                {
                                  ObCloseHandle(ThreadHandle, 0);
                                  if ( !byte_140D06888 )
                                  {
LABEL_42:
                                    qword_140C1BEF8 = 0LL;
                                    return 1;
                                  }
                                  stru_140C1BDA0.Parameter = 0LL;
                                  stru_140C1BDA0.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1405E2BD0;
                                  stru_140C1BDA0.List.Flink = 0LL;
                                  qword_140D05320 = MmAllocateMappingAddress(0x1000uLL, 0x466D7356u);
                                  if ( qword_140D05320 )
                                  {
                                    qword_140D051A8 = sub_140829CBC(0x2000uLL, -1, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, 1u);
                                    sub_140399424();
                                    if ( (sub_140294CC0() & 0x40) != 0 )
                                      *(_QWORD *)&xmmword_140D06DE8 = xmmword_140D06DE8 & 0xFFFFFF0FFFFFFFFFuLL | 0x5000000000LL;
                                    if ( qword_140D051A8 )
                                    {
                                      stru_140C1BD60.State = 0;
                                      KeRegisterBugCheckReasonCallback(
                                        &stru_140C1BD60,
                                        (PKBUGCHECK_REASON_CALLBACK_ROUTINE)sub_1405E2CF0,
                                        KbCallbackSecondaryDumpData,
                                        (PUCHAR)"SecureKernelFailureLog");
                                    }
                                    goto LABEL_42;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
