/*
 * XREFs of sub_140AFE7A0 @ 0x140AFE7A0
 * Callers:
 *     sub_140B21B40 @ 0x140B21B40 (sub_140B21B40.c)
 * Callees:
 *     ExInitializeNPagedLookasideList @ 0x140250C10 (ExInitializeNPagedLookasideList.c)
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     ExInitializeRundownProtection @ 0x1402A0840 (ExInitializeRundownProtection.c)
 *     KeInitializeSemaphore @ 0x1402A4940 (KeInitializeSemaphore.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402B1CB0 (KeReleaseSpinLock.c)
 *     sub_1402D26C0 @ 0x1402D26C0 (sub_1402D26C0.c)
 *     RtlInitializeGenericTableAvl @ 0x1402DF2C0 (RtlInitializeGenericTableAvl.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x1403B4600 (KeIpiGenericCall.c)
 *     sub_1403CE444 @ 0x1403CE444 (sub_1403CE444.c)
 *     sub_1403CF960 @ 0x1403CF960 (sub_1403CF960.c)
 *     sub_1403DB720 @ 0x1403DB720 (sub_1403DB720.c)
 *     sub_1403DD52C @ 0x1403DD52C (sub_1403DD52C.c)
 *     sub_1403DDA6C @ 0x1403DDA6C (sub_1403DDA6C.c)
 *     sub_1403DDD24 @ 0x1403DDD24 (sub_1403DDD24.c)
 *     sub_1403DE4F0 @ 0x1403DE4F0 (sub_1403DE4F0.c)
 *     sub_1403DED54 @ 0x1403DED54 (sub_1403DED54.c)
 *     sub_1403DED94 @ 0x1403DED94 (sub_1403DED94.c)
 *     sub_1403DF0B8 @ 0x1403DF0B8 (sub_1403DF0B8.c)
 *     sub_1403DF34C @ 0x1403DF34C (sub_1403DF34C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     KeBugCheck @ 0x14041F3B0 (KeBugCheck.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140555FAC @ 0x140555FAC (sub_140555FAC.c)
 *     sub_140555FF0 @ 0x140555FF0 (sub_140555FF0.c)
 *     sub_140658604 @ 0x140658604 (sub_140658604.c)
 *     RtlIsStateSeparationEnabled @ 0x140699680 (RtlIsStateSeparationEnabled.c)
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 *     NtCreateEvent @ 0x140727DD0 (NtCreateEvent.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_1407C9930 @ 0x1407C9930 (sub_1407C9930.c)
 *     sub_14082552C @ 0x14082552C (sub_14082552C.c)
 *     sub_14082AB94 @ 0x14082AB94 (sub_14082AB94.c)
 *     sub_1408455C8 @ 0x1408455C8 (sub_1408455C8.c)
 *     sub_1408476A0 @ 0x1408476A0 (sub_1408476A0.c)
 *     sub_14084BB80 @ 0x14084BB80 (sub_14084BB80.c)
 *     sub_1408555E0 @ 0x1408555E0 (sub_1408555E0.c)
 *     sub_1408581D8 @ 0x1408581D8 (sub_1408581D8.c)
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x14085B6D0 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     sub_140860A10 @ 0x140860A10 (sub_140860A10.c)
 *     sub_140863C68 @ 0x140863C68 (sub_140863C68.c)
 *     sub_140865320 @ 0x140865320 (sub_140865320.c)
 *     sub_1409338DC @ 0x1409338DC (sub_1409338DC.c)
 *     sub_14093D200 @ 0x14093D200 (sub_14093D200.c)
 *     sub_1409E29E8 @ 0x1409E29E8 (sub_1409E29E8.c)
 *     sub_140A544B0 @ 0x140A544B0 (sub_140A544B0.c)
 *     sub_140A5464C @ 0x140A5464C (sub_140A5464C.c)
 *     sub_140A57C10 @ 0x140A57C10 (sub_140A57C10.c)
 *     sub_140AF2E54 @ 0x140AF2E54 (sub_140AF2E54.c)
 *     sub_140AF71F0 @ 0x140AF71F0 (sub_140AF71F0.c)
 *     sub_140AFF910 @ 0x140AFF910 (sub_140AFF910.c)
 *     sub_140AFFEF4 @ 0x140AFFEF4 (sub_140AFFEF4.c)
 *     sub_140AFFF64 @ 0x140AFFF64 (sub_140AFFF64.c)
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 *     sub_140B01800 @ 0x140B01800 (sub_140B01800.c)
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 *     sub_140B03800 @ 0x140B03800 (sub_140B03800.c)
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 *     sub_140B1C0FC @ 0x140B1C0FC (sub_140B1C0FC.c)
 *     sub_140B255E4 @ 0x140B255E4 (sub_140B255E4.c)
 *     sub_140B27838 @ 0x140B27838 (sub_140B27838.c)
 *     sub_140B2931C @ 0x140B2931C (sub_140B2931C.c)
 *     sub_140B2AC4C @ 0x140B2AC4C (sub_140B2AC4C.c)
 *     sub_140B2AE28 @ 0x140B2AE28 (sub_140B2AE28.c)
 *     sub_140B2BC5C @ 0x140B2BC5C (sub_140B2BC5C.c)
 *     sub_140B2CF90 @ 0x140B2CF90 (sub_140B2CF90.c)
 *     sub_140B2D6B4 @ 0x140B2D6B4 (sub_140B2D6B4.c)
 *     sub_140B2D9E4 @ 0x140B2D9E4 (sub_140B2D9E4.c)
 *     sub_140B2DD5C @ 0x140B2DD5C (sub_140B2DD5C.c)
 *     sub_140B2E564 @ 0x140B2E564 (sub_140B2E564.c)
 *     sub_140B2F2BC @ 0x140B2F2BC (sub_140B2F2BC.c)
 *     sub_140B2F684 @ 0x140B2F684 (sub_140B2F684.c)
 *     sub_140B3059C @ 0x140B3059C (sub_140B3059C.c)
 *     sub_140B30C68 @ 0x140B30C68 (sub_140B30C68.c)
 *     sub_140B314B4 @ 0x140B314B4 (sub_140B314B4.c)
 *     sub_140B31688 @ 0x140B31688 (sub_140B31688.c)
 */

char __fastcall sub_140AFE7A0(__int64 *Context)
{
  unsigned __int64 v2; // r8
  int v3; // eax
  ULONG ActiveProcessorCount; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  _DWORD *v8; // rbx
  bool v9; // al
  __int64 v10; // rdx
  __int64 v11; // rcx
  bool v12; // bl
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r8
  KIRQL v19; // bl
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // ebx
  __int64 v25; // r8
  ULONG v26; // ebx
  int v27; // eax
  __int64 v28; // r8
  size_t Size; // [rsp+28h] [rbp-E0h]
  __int64 v30; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v36[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v37; // [rsp+B8h] [rbp-50h] BYREF
  ULONG Contexta; // [rsp+C0h] [rbp-48h] BYREF
  ULONG Context_4; // [rsp+C4h] [rbp-44h]
  __int128 v40; // [rsp+C8h] [rbp-40h]
  __int64 v41; // [rsp+D8h] [rbp-30h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v43; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v44; // [rsp+100h] [rbp-8h]

  v36[0] = 0x1000000LL;
  v41 = 0LL;
  v37 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  v40 = 0LL;
  LOBYTE(v30) = 0;
  DestinationString = 0LL;
  v36[1] = qword_140D68FE0;
  IoStatusBlock = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  ExInitializeResourceLite(&stru_140C46DA0);
  ExInitializeResourceLite(&stru_140C46E20);
  ExInitializeResourceLite(&Resource);
  ExInitializeResourceLite(&stru_140C48520);
  ExInitializeResourceLite(&stru_140C46C80);
  ExInitializeRundownProtection(&stru_140C46E08);
  qword_140C46F90 = 0LL;
  qword_140C46F38 = (__int64)&qword_140C46F30;
  qword_140C46F30 = (__int64)&qword_140C46F30;
  qword_140C46F48 = (__int64)&qword_140C46F40;
  qword_140C46F40 = (__int64)&qword_140C46F40;
  qword_140C46F18 = (__int64)&qword_140C46F10;
  qword_140C46F10 = (__int64)&qword_140C46F10;
  qword_140C46F28 = (__int64)&qword_140C46F20;
  qword_140C46F20 = (__int64)&qword_140C46F20;
  qword_140C46F78 = (__int64)&qword_140C46F70;
  qword_140C46F70 = (__int64)&qword_140C46F70;
  qword_140C46F88 = (__int64)&qword_140C46F80;
  qword_140C46F80 = (__int64)&qword_140C46F80;
  qword_140C46F58 = (__int64)&qword_140C46F50;
  qword_140C46F50 = &qword_140C46F50;
  qword_140C46F68 = (__int64)&qword_140C46F60;
  qword_140C46F60 = &qword_140C46F60;
  qword_140C46FA8 = (__int64)&qword_140C46FA0;
  qword_140C46FA0 = (__int64)&qword_140C46FA0;
  qword_140C46FB8 = (__int64)&qword_140C46FB0;
  qword_140C46FB0 = (__int64)&qword_140C46FB0;
  IoStatisticsLock = 0LL;
  *(__int64 *)((char *)&qword_140C46FC4 + 4) = 0LL;
  Parent = 0LL;
  dword_140C46FC0 = 0;
  dword_140C46D90 = 0;
  v2 = __rdtsc() >> 4;
  v3 = 0;
  qword_140C46FC4 = (unsigned int)(v2 % 0x64) + 10;
  if ( !dword_140C47418 )
  {
    dword_140C47418 = 14;
    v3 = 1;
    dword_140C46D90 = 1;
  }
  if ( !dword_140C4741C )
  {
    dword_140C4741C = 4;
    dword_140C46D90 = v3 | 2;
  }
  if ( (unsigned int)(dword_140C54E78 - 2) > 0x12A )
    dword_140C54E78 = 300;
  sub_140863C68((__int64)&v43);
  sub_140A57C10((__int64)&unk_140CF8AC0, 512, 56, 544236361, SWORD3(v43), (__int64)&qword_140C11710);
  sub_140A57C10((__int64)&unk_140CF8A40, 512, SDWORD1(v44), 1819308617, SWORD2(v43), (__int64)&qword_140C11710);
  sub_140A57C10((__int64)&unk_140CF8BC0, 512, v44, 1836085833, SWORD1(v43), (__int64)&qword_140C11710);
  sub_140A57C10((__int64)&unk_140CF8B40, 512, SHIDWORD(v43), 1936749129, v43, (__int64)&qword_140C11710);
  sub_140A57C10((__int64)&unk_140CF89C0, 512, SDWORD2(v44), 543974477, SWORD4(v43), (__int64)&qword_140C11710);
  ExInitializeNPagedLookasideList(&stru_140CF8940, 0LL, 0LL, 0x200u, 0x20uLL, 0x73556F49u, 0);
  FsRtlInitExtraCreateParameterLookasideList(&unk_140CE2900, 0, 0x11EuLL, 0x69536F49u);
  ExInitializeNPagedLookasideList(&stru_140CE2980, 0LL, 0LL, 0x200u, 0x30uLL, 0x7443704Fu, 0);
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v5 = 0LL;
  v6 = ActiveProcessorCount;
  for ( LODWORD(v32) = 0; (unsigned int)v5 < v6; LODWORD(v32) = v5 )
  {
    sub_14082552C(qword_140D088C0[v5], &v43);
    v5 = (unsigned int)(v32 + 1);
  }
  qword_140D31180 = 0LL;
  qword_140C46FF8 = (__int64)&qword_140C46FF0;
  qword_140C46FF0 = (__int64)&qword_140C46FF0;
  if ( !(unsigned __int8)sub_140B2AC4C() )
  {
    LODWORD(dword_140C474FC) = 1;
    return 0;
  }
  if ( (dword_140C46D90 & 3) != 0 )
  {
    dword_140C46FE0 = 400;
    dword_140C46FE4 = 2000;
    KeInitializeDpc(&stru_140C47100, (PKDEFERRED_ROUTINE)sub_140243B10, 0LL);
    dword_140C46D90 |= 4u;
  }
  v8 = off_140C06A80;
  memset(off_140C06A80, 0, 0x58uLL);
  *v8 = 4;
  sub_1403DF34C();
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &stru_140D3D248;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
  {
    byte_140C46C38 = 1;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"Start");
    LODWORD(Size) = 32;
    v9 = (int)sub_1407C9930(
                KeyHandle,
                (unsigned __int64)&DestinationString,
                2u,
                byte_140D688C0,
                Size,
                (unsigned int *)&v32) < 0
      || dword_140D688C4 != 4
      || dword_140D688CC == 4;
    byte_140C46C38 = v9;
    ObCloseHandle(KeyHandle, 0);
  }
  qword_140D31140 = 0LL;
  stru_140C47140.Blink = &stru_140C47140;
  stru_140C47140.Flink = &stru_140C47140;
  KeInitializeDpc(&stru_140C471C0, (PKDEFERRED_ROUTINE)sub_1403A06D0, &dword_140C47150);
  KeInitializeTimerEx(&stru_140C47160, SynchronizationTimer);
  stru_140C47280.Parameter = 0LL;
  qword_140C471A8 = (__int64)&qword_140C471A0;
  qword_140C471A0 = (__int64)&qword_140C471A0;
  stru_140C47280.List.Flink = 0LL;
  stru_140C47280.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1409345F0;
  qword_140C472B0 = 0LL;
  qword_140C472A8 = (__int64)&qword_140C472A0;
  qword_140C472A0 = (__int64)&qword_140C472A0;
  KeInitializeSemaphore(&SystemArgument1, 0, 0x7FFFFFFF);
  byte_140C472D8 = 0;
  stru_140C47200.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140558DE0;
  stru_140C47200.Parameter = 0LL;
  qword_140C47228 = (__int64)&qword_140C47220;
  qword_140C47220 = &qword_140C47220;
  stru_140C47200.List.Flink = 0LL;
  qword_140C47230 = 0LL;
  byte_140C47258 = 0;
  byte_140C46C39 = 1;
  RtlInitUnicodeString(&DestinationString, L"\\Security\\TRKWKS_EVENT");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 528;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtCreateEvent(&KeyHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0) < 0 )
  {
    sub_1402D26C0();
    return 0;
  }
  Object = 0LL;
  ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
  qword_140D3CE78 = (__int64)Object;
  KeInitializeEvent(&stru_140C472E0, NotificationEvent, 0);
  KeInitializeEvent(&stru_140C47320, NotificationEvent, 0);
  KeInitializeEvent(&stru_140C47340, SynchronizationEvent, 1u);
  ObCloseHandle(KeyHandle, 0);
  if ( !(unsigned __int8)sub_140B2931C() )
  {
    sub_1402D26C0();
    LODWORD(dword_140C474FC) = 3;
    return 0;
  }
  if ( (int)sub_140B3059C() < 0 )
  {
    LODWORD(dword_140C474FC) = 15;
    return 0;
  }
  if ( (int)sub_140B0046C(Context, 0LL) < 0 )
  {
    sub_1402D26C0();
    LODWORD(dword_140C474FC) = 4;
    return 0;
  }
  sub_140AFFF64(Context, 0LL);
  sub_140B2D9E4();
  sub_14042A5E0(v11, v10);
  sub_140B2D6B4();
  if ( !(unsigned __int8)sub_140AFFEF4(0LL, Context) )
    return 0;
  v12 = sub_140865320();
  LOBYTE(v13) = RtlIsStateSeparationEnabled();
  LOBYTE(v14) = v12;
  v15 = ExpInitializeStateSeparationPhase0(v13, v14);
  if ( (int)(v15 + 0x80000000) >= 0 && v15 != -1073741637 )
    return 0;
  if ( (int)sub_140B30C68() < 0 )
  {
    LODWORD(dword_140C474FC) = 17;
    return 0;
  }
  sub_14082AB94(1u, (__int64)Context);
  if ( EtwRegister(&stru_140014A98, (PETWENABLECALLBACK)sub_140934260, 0LL, &qword_140C47358) < 0 )
  {
    LODWORD(dword_140C474FC) = 16;
    return 0;
  }
  if ( sub_1403DDD24((const GUID *)qword_140014908, v16, qword_140C044F0, qword_140C044F0) < 0 )
  {
    LODWORD(dword_140C474FC) = 11;
    return 0;
  }
  if ( (int)sub_140B01800() < 0 )
  {
    LODWORD(dword_140C474FC) = 22;
    return 0;
  }
  sub_140860A10(1);
  sub_1408476A0(*(_QWORD *)(Context[30] + 2880));
  sub_140B1C0FC(1LL);
  sub_140A5464C();
  KdInitialize(2LL, 0LL, &xmmword_140C31E60, v17);
  sub_140B03800(2LL);
  if ( !byte_140C46C38 )
  {
    v19 = KeAcquireSpinLockRaiseToDpc(&qword_140D31180);
    if ( (__int64 *)qword_140C46FF0 == &qword_140C46FF0 )
    {
      byte_140C46C39 = 0;
    }
    else
    {
      stru_140C46C40.Parameter = 0LL;
      stru_140C46C40.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_14080FDC0;
      stru_140C46C40.List.Flink = 0LL;
      ExQueueWorkItem(&stru_140C46C40, DelayedWorkQueue);
    }
    KeReleaseSpinLock(&qword_140D31180, v19);
  }
  if ( (byte_140C474F8 & 0x10) != 0 )
    sub_140555FF0(qword_140C044F0, (const EVENT_DESCRIPTOR *)qword_140014A48, v18, 0);
  sub_140AFF910(Context, 0LL);
  if ( (byte_140C474F8 & 0x10) != 0 )
    sub_140555FAC(qword_140C044F0, (const EVENT_DESCRIPTOR *)qword_1400148D8);
  if ( (int)sub_140B2CF90(Context) < 0 )
    return 0;
  if ( (int)sub_140B0046C(Context, 1LL) < 0 )
  {
    sub_1402D26C0();
    LODWORD(dword_140C474FC) = 5;
    return 0;
  }
  RtlInitializeGenericTableAvl(
    &stru_140C47360,
    (PRTL_AVL_COMPARE_ROUTINE)sub_1409340F0,
    (PRTL_AVL_ALLOCATE_ROUTINE)sub_140933B80,
    (PRTL_AVL_FREE_ROUTINE)sub_140934290,
    0LL);
  stru_140C473E0.Count = 1;
  stru_140C473E0.Event.Header.WaitListHead.Blink = &stru_140C473E0.Event.Header.WaitListHead;
  stru_140C473E0.Event.Header.WaitListHead.Flink = &stru_140C473E0.Event.Header.WaitListHead;
  stru_140C473E0.Owner = 0LL;
  stru_140C473E0.Contention = 0;
  LOWORD(stru_140C473E0.Event.Header.Lock) = 1;
  stru_140C473E0.Event.Header.Size = 6;
  stru_140C473E0.Event.Header.SignalState = 0;
  sub_140B2DD5C(Context);
  sub_140AFFF64(Context, 1LL);
  if ( sub_1403DE4F0((__int64)Context, v20) < 0 )
    return 0;
  Context_4 = KeQueryActiveProcessorCountEx(0xFFFFu);
  Contexta = Context_4;
  KeIpiGenericCall((PKIPI_BROADCAST_WORKER)sub_1403D5E00, (ULONG_PTR)&Contexta);
  sub_140AF2E54();
  sub_140B2E564(2LL, Context);
  sub_1403DED94();
  sub_140B314B4();
  if ( (int)sub_140B27838() < 0 )
    return 0;
  sub_1403DB720(v21, &v30);
  if ( byte_140D00A88 || (_BYTE)v30 || !byte_140C0C6B9 )
    byte_140C097BF = 0;
  else
    sub_1403DD52C();
  if ( dword_140D3CB44 )
    sub_1409E29E8(dword_140D3CB44);
  sub_1408581D8(0, *(unsigned __int8 *)qword_140C15B58, *((_DWORD *)qword_140C15B58 + 1), 0);
  sub_1403CE444(v23, v22);
  qword_140C1BDD8 = 0LL;
  qword_140D06F48[0] = (__int64)sub_1405E1600;
  qword_140C48588 = (__int64)HalSetEnvironmentVariableEx;
  if ( (Context[33] & 2) != 0 )
    qword_140C48588 = (__int64)sub_14054F250;
  if ( !(unsigned int)sub_140B114E8(Context, &v37) )
  {
    sub_1402D26C0();
    LODWORD(dword_140C474FC) = 6;
    return 0;
  }
  if ( (byte_140C474F8 & 8) != 0 )
    sub_140555FAC(qword_140C044F0, (const EVENT_DESCRIPTOR *)qword_140014978);
  v24 = sub_140B2F2BC(Context);
  if ( (byte_140C474F8 & 8) != 0 )
    sub_140555FAC(qword_140C044F0, (const EVENT_DESCRIPTOR *)qword_1400149E8);
  if ( v24 < 0 )
  {
    LODWORD(dword_140C474FC) = 21;
    return 0;
  }
  if ( !(unsigned __int8)sub_140B026CC(2LL, Context, v25) )
    KeBugCheck(0xA0u);
  sub_140B255E4(1LL);
  sub_14082AB94(2u, (__int64)Context);
  sub_140B31688();
  sub_1403DDA6C();
  sub_1403DF0B8();
  if ( !byte_140D00A88 )
  {
    sub_1403DED54();
    if ( !byte_140C0C6B8 )
      sub_14093D200();
  }
  sub_140658604();
  sub_1408555E0();
  if ( (int)sub_140AF71F0(Context) < 0 )
  {
    if ( !byte_140C0C6B9 )
      sub_1409338DC();
  }
  else
  {
    sub_1403CF960();
  }
  if ( !RtlIsStateSeparationEnabled() )
    sub_140B2AE28();
  v26 = NtGlobalFlag;
  NtGlobalFlag |= 0x40000u;
  v27 = sub_1408455C8();
  NtGlobalFlag = v26;
  if ( v27 < 0 )
  {
    sub_1402D26C0();
    LODWORD(dword_140C474FC) = 7;
    return 0;
  }
  sub_140A544B0(0);
  if ( !(unsigned __int8)sub_140B2BC5C(Context, v36) )
  {
    sub_1402D26C0();
    LODWORD(dword_140C474FC) = 9;
    return 0;
  }
  if ( !(unsigned __int8)sub_140B2F684(Context) )
  {
    sub_1402D26C0();
    LODWORD(dword_140C474FC) = 10;
    return 0;
  }
  ObjectAttributes.ObjectName = (PUNICODE_STRING)((char *)PsLoadedModuleList + 72);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenFile(&KeyHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 1u, 0) >= 0 )
  {
    Object = 0LL;
    if ( ObReferenceObjectByHandle(KeyHandle, 0x80u, 0LL, 0, &Object, 0LL) >= 0 )
    {
      sub_14084BB80(Object);
      ObfDereferenceObject(Object);
    }
    ZwClose(KeyHandle);
  }
  if ( !(unsigned __int8)sub_140AFFEF4(1LL, 0LL) )
    return 0;
  if ( (byte_140C474F8 & 0x10) != 0 )
    sub_140555FF0(qword_140C044F0, (const EVENT_DESCRIPTOR *)qword_140014A48, v28, 1);
  sub_140AFF910(Context, 1LL);
  if ( (byte_140C474F8 & 0x10) != 0 )
    sub_140555FAC(qword_140C044F0, (const EVENT_DESCRIPTOR *)qword_1400148D8);
  return 1;
}
