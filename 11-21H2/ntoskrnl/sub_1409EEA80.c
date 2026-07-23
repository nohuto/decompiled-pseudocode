/*
 * XREFs of sub_1409EEA80 @ 0x1409EEA80
 * Callers:
 *     sub_1409F36F4 @ 0x1409F36F4 (sub_1409F36F4.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402631C0 (KeQueryMaximumProcessorCountEx.c)
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     sub_1402A012C @ 0x1402A012C (sub_1402A012C.c)
 *     InitializeSListHead @ 0x1402A05A0 (InitializeSListHead.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeSetBasePriorityThread @ 0x1402EBF30 (KeSetBasePriorityThread.c)
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwSetInformationThread @ 0x14041B900 (ZwSetInformationThread.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140636708 @ 0x140636708 (sub_140636708.c)
 *     PsCreateSystemThreadEx @ 0x1406F0360 (PsCreateSystemThreadEx.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_1409EF0D4 @ 0x1409EF0D4 (sub_1409EF0D4.c)
 *     sub_1409F1710 @ 0x1409F1710 (sub_1409F1710.c)
 *     sub_1409F17A4 @ 0x1409F17A4 (sub_1409F17A4.c)
 *     sub_1409F2510 @ 0x1409F2510 (sub_1409F2510.c)
 *     sub_1409F25A8 @ 0x1409F25A8 (sub_1409F25A8.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409EEA80(_DWORD *a1)
{
  PVOID *v1; // rsi
  PVOID *Pool2; // rax
  int SystemThread; // ebx
  __int64 **v5; // r15
  PVOID v6; // rax
  __int64 v7; // rax
  struct _KTHREAD *v8; // rcx
  int v9; // ebx
  ULONG MaximumProcessorCount; // eax
  ULONG v11; // r12d
  __int64 v12; // r12
  __int64 v13; // r9
  unsigned int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rdi
  bool v18; // zf
  int v19; // eax
  __int64 *v20; // r14
  unsigned int v21; // ecx
  HANDLE Handle; // [rsp+58h] [rbp-9h] BYREF
  __int64 v24; // [rsp+60h] [rbp-1h]
  ULONG v25; // [rsp+68h] [rbp+7h]
  PVOID Object; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v27; // [rsp+78h] [rbp+17h]
  _DWORD ThreadInformation[4]; // [rsp+80h] [rbp+1Fh] BYREF

  v1 = (PVOID *)qword_140C15D88;
  Handle = 0LL;
  if ( !qword_140C15D88 )
  {
    Pool2 = (PVOID *)ExAllocatePool2(64LL, 1088LL, 1450669125LL);
    v1 = Pool2;
    if ( !Pool2 )
    {
      SystemThread = -1073741670;
      goto LABEL_30;
    }
    memset(Pool2, 0, 0x440uLL);
    v1[1] = (PVOID)-1LL;
    KeInitializeEvent((PRKEVENT)(v1 + 98), NotificationEvent, 0);
    KeInitializeDpc((PRKDPC)(v1 + 90), (PKDEFERRED_ROUTINE)sub_1406364F0, v1);
    InitializeSListHead((PSLIST_HEADER)v1 + 51);
    KeInitializeEvent((PRKEVENT)(v1 + 106), NotificationEvent, 0);
    KeInitializeDpc((PRKDPC)(v1 + 109), (PKDEFERRED_ROUTINE)sub_140460D60, v1);
    KeInitializeDpc((PRKDPC)(v1 + 117), (PKDEFERRED_ROUTINE)sub_140635DA0, v1);
    KeInitializeEvent((PRKEVENT)(v1 + 125), NotificationEvent, 0);
    *((_DWORD *)v1 + 259) = (*a1 >> 11) & 1;
    qword_140C15D88 = (__int64)v1;
  }
  v5 = (__int64 **)(v1 + 86);
  v1[89] = v1 + 88;
  v1[87] = v1 + 86;
  v1[86] = v1 + 86;
  v1[88] = v1 + 88;
  sub_1409F1710(v1, v1 + 48, sub_1409EE7A0, (unsigned int)(3 * a1[9]) >> 2, a1[9]);
  sub_1409F1710(v1, v1 + 58, sub_1409EE800, (unsigned int)(3 * a1[8]) >> 2, a1[8]);
  if ( a1[19] )
  {
    sub_1409F2510(v1 + 133);
    sub_1409F2510(v1 + 134);
    v6 = v1[133];
    if ( !v6 || !v1[134] )
      goto LABEL_20;
    v1[132] = v6;
    v1[135] = (PVOID)(unsigned int)sub_140363220(0);
  }
  if ( v1[1] != (PVOID)-1LL )
    goto LABEL_12;
  v7 = sub_1402A012C(0x150u, 0);
  if ( v7 == -1 )
  {
LABEL_20:
    SystemThread = -1073741670;
    goto LABEL_21;
  }
  v1[1] = (PVOID)v7;
LABEL_12:
  v8 = (struct _KTHREAD *)*v1;
  if ( *v1 )
    goto LABEL_15;
  SystemThread = PsCreateSystemThreadEx(
                   (int)&Handle,
                   0x1FFFFF,
                   0LL,
                   0LL,
                   0LL,
                   (__int64)sub_1409EF190,
                   (__int64)v1,
                   0LL,
                   0LL);
  if ( SystemThread < 0 )
  {
LABEL_21:
    if ( v1[1] != (PVOID)-1LL )
      sub_1409EF0D4(v1);
    goto LABEL_30;
  }
  Object = 0LL;
  ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
  *v1 = Object;
  ThreadInformation[0] = 1;
  ThreadInformation[1] = 1;
  ThreadInformation[2] = 1;
  ZwSetInformationThread(Handle, ThreadPowerThrottlingState, ThreadInformation, 0xCu);
  v8 = (struct _KTHREAD *)*v1;
LABEL_15:
  v9 = *a1 & 0x200;
  KeSetBasePriorityThread(v8, (v9 != 0) - 1);
  *((_DWORD *)v1 + 262) = v9 != 0;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v11 = MaximumProcessorCount;
  v25 = MaximumProcessorCount;
  if ( MaximumProcessorCount )
  {
    v24 = 0LL;
    v27 = MaximumProcessorCount;
    v12 = 0LL;
    do
    {
      v13 = ((unsigned int)v1[1] >> 13) & 0x3FFFF;
      _BitScanReverse(&v14, v13);
      v15 = *(_QWORD *)(v12 + qword_140C10DB0);
      v16 = ((unsigned __int64)v1[1] >> 4) & 0x1FF;
      LODWORD(v24) = v14;
      v17 = *(_QWORD *)(*(_QWORD *)(v15 + 8LL * (v14 - 2)) + 8 * (v13 ^ (unsigned int)(1 << v14)) + 8);
      memset((void *)(v17 + 8 * (v16 + 1)), 0, 0x148uLL);
      *(_QWORD *)(v17 + 8 * v16) = 0LL;
      sub_1409F17A4(v1, v17 + 8 * (v16 + 2), v1 + 48);
      sub_1409F17A4(v1, v17 + 8 * (v16 + 10), v1 + 58);
      sub_1409F25A8(v17 + 8 * (v16 + 18), (unsigned int)a1[10], (unsigned int)a1[11]);
      sub_1409F25A8(v17 + 8 * (v16 + 23), (unsigned int)a1[12], (unsigned int)a1[13]);
      sub_1409F25A8(v17 + 8 * (v16 + 28), (unsigned int)a1[14], (unsigned int)a1[15]);
      sub_1409F25A8(v17 + 8 * (v16 + 33), (unsigned int)a1[16], (unsigned int)a1[17]);
      v18 = v27-- == 1;
      v12 += 8LL;
    }
    while ( !v18 );
    v11 = v25;
    v5 = (__int64 **)(v1 + 86);
  }
  sub_1409F1710(v1, v1 + 68, sub_1409EE880, (3 * v11 * a1[7]) >> 2, v11 * a1[7]);
  sub_1409F17A4(v1, v1 + 78, v1 + 68);
  v19 = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)v1 + 202) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)v1 + 203) = v19;
  *((_DWORD *)v1 + 258) = 0;
  *((_DWORD *)v1 + 260) = a1[18];
  *((_DWORD *)v1 + 261) = a1[6];
  _InterlockedExchange((volatile __int32 *)v1 + 256, 1);
  v20 = *v5;
  *((_DWORD *)v1 + 257) = 0;
  while ( v20 != (__int64 *)v5 )
  {
    _InterlockedExchange((volatile __int32 *)v20 + 6, 1);
    *((_DWORD *)v20 + 7) = 0;
    while ( 1 )
    {
      v21 = *((_DWORD *)v20 + 9);
      if ( v21 >= *(_DWORD *)(v20[2] + 56) || v21 >= *((_DWORD *)v20 + 10) )
        break;
      SystemThread = sub_140636708((__int64)v1, (__int64)(v20 - 2));
      if ( SystemThread < 0 )
        goto LABEL_21;
    }
    v20 = (__int64 *)*v20;
  }
  SystemThread = 0;
LABEL_30:
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return (unsigned int)SystemThread;
}
