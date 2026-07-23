/*
 * XREFs of sub_140B07C00 @ 0x140B07C00
 * Callers:
 *     sub_140B07AB0 @ 0x140B07AB0 (sub_140B07AB0.c)
 * Callees:
 *     sub_14026A784 @ 0x14026A784 (sub_14026A784.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     sub_14028F63C @ 0x14028F63C (sub_14028F63C.c)
 *     sub_1402D8E00 @ 0x1402D8E00 (sub_1402D8E00.c)
 *     sub_1402D99BC @ 0x1402D99BC (sub_1402D99BC.c)
 *     sub_1402DBF90 @ 0x1402DBF90 (sub_1402DBF90.c)
 *     sub_1402FD820 @ 0x1402FD820 (sub_1402FD820.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     sub_14036C868 @ 0x14036C868 (sub_14036C868.c)
 *     sub_1403AD034 @ 0x1403AD034 (sub_1403AD034.c)
 *     sub_1403C3F28 @ 0x1403C3F28 (sub_1403C3F28.c)
 *     sub_1403C41C8 @ 0x1403C41C8 (sub_1403C41C8.c)
 *     sub_1403DADE0 @ 0x1403DADE0 (sub_1403DADE0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14054E548 @ 0x14054E548 (sub_14054E548.c)
 *     sub_14054E61C @ 0x14054E61C (sub_14054E61C.c)
 *     sub_140565974 @ 0x140565974 (sub_140565974.c)
 *     sub_140581D30 @ 0x140581D30 (sub_140581D30.c)
 *     sub_1406EB4B0 @ 0x1406EB4B0 (sub_1406EB4B0.c)
 *     sub_1406EBCBC @ 0x1406EBCBC (sub_1406EBCBC.c)
 *     PsCreateSystemThread @ 0x1406F0310 (PsCreateSystemThread.c)
 *     MmLockPagableImageSection @ 0x1406F5E50 (MmLockPagableImageSection.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_14075C330 @ 0x14075C330 (sub_14075C330.c)
 *     sub_1407F35F8 @ 0x1407F35F8 (sub_1407F35F8.c)
 *     sub_14082B668 @ 0x14082B668 (sub_14082B668.c)
 *     sub_14082BC44 @ 0x14082BC44 (sub_14082BC44.c)
 *     sub_14082BD64 @ 0x14082BD64 (sub_14082BD64.c)
 *     sub_14082CB2C @ 0x14082CB2C (sub_14082CB2C.c)
 *     sub_14086305C @ 0x14086305C (sub_14086305C.c)
 *     sub_14097F8B0 @ 0x14097F8B0 (sub_14097F8B0.c)
 *     sub_140B05D00 @ 0x140B05D00 (sub_140B05D00.c)
 *     sub_140B05E40 @ 0x140B05E40 (sub_140B05E40.c)
 *     sub_140B06C30 @ 0x140B06C30 (sub_140B06C30.c)
 *     sub_140B0838C @ 0x140B0838C (sub_140B0838C.c)
 *     sub_140B08434 @ 0x140B08434 (sub_140B08434.c)
 *     sub_140B084F4 @ 0x140B084F4 (sub_140B084F4.c)
 *     sub_140B0856C @ 0x140B0856C (sub_140B0856C.c)
 *     sub_140B085F8 @ 0x140B085F8 (sub_140B085F8.c)
 *     sub_140B087BC @ 0x140B087BC (sub_140B087BC.c)
 *     sub_140B08894 @ 0x140B08894 (sub_140B08894.c)
 *     sub_140B088E4 @ 0x140B088E4 (sub_140B088E4.c)
 *     sub_140B08B40 @ 0x140B08B40 (sub_140B08B40.c)
 *     sub_140B08D58 @ 0x140B08D58 (sub_140B08D58.c)
 *     sub_140B08E90 @ 0x140B08E90 (sub_140B08E90.c)
 *     sub_140B08F6C @ 0x140B08F6C (sub_140B08F6C.c)
 *     sub_140B09078 @ 0x140B09078 (sub_140B09078.c)
 *     sub_140B092AC @ 0x140B092AC (sub_140B092AC.c)
 *     sub_140B092F0 @ 0x140B092F0 (sub_140B092F0.c)
 *     sub_140B09744 @ 0x140B09744 (sub_140B09744.c)
 *     sub_140B09B18 @ 0x140B09B18 (sub_140B09B18.c)
 *     sub_140B09C28 @ 0x140B09C28 (sub_140B09C28.c)
 *     sub_140B09D6C @ 0x140B09D6C (sub_140B09D6C.c)
 *     sub_140B0A424 @ 0x140B0A424 (sub_140B0A424.c)
 *     sub_140B0A4A8 @ 0x140B0A4A8 (sub_140B0A4A8.c)
 *     sub_140B0A508 @ 0x140B0A508 (sub_140B0A508.c)
 *     sub_140B0A680 @ 0x140B0A680 (sub_140B0A680.c)
 *     sub_140B0A8A8 @ 0x140B0A8A8 (sub_140B0A8A8.c)
 */

bool __fastcall sub_140B07C00(int a1, __int64 a2)
{
  char *v3; // rax
  unsigned int v4; // eax
  int v5; // eax
  unsigned __int64 v6; // rbx
  ULONG_PTR v7; // rax
  struct _KTHREAD *CurrentThread; // rsi
  PVOID *j; // rbx
  PVOID v10; // rcx
  PIMAGE_NT_HEADERS v11; // rax
  int v12; // eax
  ULONG_PTR v13; // rax
  __int64 v15; // rbx
  ULONG_PTR v16; // rax
  int v17; // r14d
  PKSTART_ROUTINE *i; // r15
  HANDLE ThreadHandle; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v20[4]; // [rsp+48h] [rbp-40h] BYREF

  v20[0] = sub_1403C81D0;
  v20[1] = sub_1403C6D20;
  v20[2] = sub_1403CA190;
  v20[3] = sub_1403D9D30;
  ThreadHandle = 0LL;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v15 = *((_QWORD *)KeGetCurrentThread() + 23);
      sub_14036C868(48LL * (*(_QWORD *)(v15 + 40) >> 12) - 0x220000000000LL, v15, 0);
      _InterlockedOr((volatile signed __int32 *)(v15 + 1124), 0x400u);
      _InterlockedOr((volatile signed __int32 *)(v15 + 1124), 0x800u);
      MEMORY[0xFFFFF78000000244] = 0x200000;
      if ( (dword_140D06880 & 0x4000) == 0 || (int)sub_14054E61C(qword_140C54100) >= 0 )
      {
        sub_140B092AC(a2);
        if ( (unsigned int)sub_140B09078() )
        {
          if ( (int)sub_140B08F6C() >= 0 )
          {
            if ( (unsigned int)sub_140B08E90(a2) )
            {
              qword_140C51DC8 = 0LL;
              sub_140B08D58();
              v16 = sub_1403095B0((__int64)&qword_140C534C0, 4u);
              if ( v16 )
              {
                qword_140C53268 = v16;
                sub_140B08B40();
                sub_140B088E4();
                if ( sub_14082BD64(&StartContext) && (int)sub_14026A784((__int64)&StartContext, 32LL, 0LL, 6u) >= 0 )
                {
                  dword_140C54F84 |= 4u;
                  sub_140B08894();
                  word_140C58E80 = 0;
                  qword_140C58E90 = (__int64)&qword_140C58E88;
                  qword_140C58E88 = (__int64)&qword_140C58E88;
                  byte_140C58E82 = 6;
                  stru_140C51E68.Header.WaitListHead.Blink = &stru_140C51E68.Header.WaitListHead;
                  stru_140C51E68.Header.WaitListHead.Flink = &stru_140C51E68.Header.WaitListHead;
                  stru_140D688A0.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140855C60;
                  dword_140C58E84 = 0;
                  LOWORD(stru_140C51E68.Header.Lock) = 0;
                  stru_140C51E68.Header.Size = 6;
                  stru_140C51E68.Header.SignalState = 0;
                  stru_140D688A0.Parameter = 0LL;
                  stru_140D688A0.List.Flink = 0LL;
                  ExQueueWorkItem(&stru_140D688A0, NormalWorkQueue);
                  v17 = 0;
                  for ( i = (PKSTART_ROUTINE *)v20;
                        PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, *i, &StartContext) >= 0;
                        ++i )
                  {
                    ObCloseHandle(ThreadHandle, 0);
                    if ( (unsigned int)++v17 >= 4 )
                    {
                      if ( !(unsigned int)sub_140B05D00() )
                        return 0;
                      qword_140C50628 = 0LL;
                      sub_14082B668();
                      _InterlockedDecrement(&dword_140C53348);
                      return (int)sub_140B087BC(a2) >= 0 && (unsigned int)sub_140B0838C(a2, 1LL);
                    }
                  }
                }
              }
            }
            else
            {
              byte_140C52B32 = 32;
            }
          }
        }
      }
    }
    else if ( a1 == 2 )
    {
      sub_140B0856C();
      sub_140B084F4();
      sub_14082CB2C();
      return 1;
    }
  }
  else
  {
    dword_140D06994 &= 1u;
    qword_140C52A30 = sub_1403095B0((__int64)&qword_140C534C0, 0x20u);
    _InterlockedIncrement(&dword_140C53348);
    if ( !(unsigned int)sub_1403DADE0((__int64)&StartContext) )
      return 0;
    if ( (int)sub_1403C41C8() < 0 )
      return 0;
    v3 = sub_14026DFC0(1);
    if ( !(unsigned int)sub_1407F35F8(&StartContext, (__int64)v3, 4, 0LL) )
      return 0;
    if ( !(unsigned __int8)sub_140B0A8A8(0LL) )
      return 0;
    qword_140C50680 = sub_14086305C();
    dword_140C50648 = 305419896;
    if ( !(unsigned int)sub_140B0A680() || (int)sub_140B0A508() < 0 )
      return 0;
    sub_1403AD034(3u);
    sub_140B08434(qword_140D686D0, -1LL);
    sub_140B08434(qword_140C54120, qword_140C54120 + 0x7FFFFFFFFFLL);
    if ( dword_140C404C0 )
      sub_140565974(dword_140C404C0);
    sub_1403C3F28((__int64)&StartContext);
    if ( !(unsigned int)sub_140B0838C(a2, 0LL) || (int)sub_140B0A4A8() < 0 )
      return 0;
    v4 = sub_140363220(1);
    qword_140C51858 = v4;
    dword_140C51860 = 8 * (v4 & 3) + 8;
    qword_140D68838 = KeQueryPerformanceCounter(0LL).QuadPart;
    if ( (unsigned int)dword_140D05218 > 2 )
      dword_140D05218 = 0;
    if ( (dword_140D06880 & 4) != 0 && (int)sub_140B06C30() < 0 )
      return 0;
    if ( (int)sub_140B0A424(a2) < 0 )
      return 0;
    qword_140D68840 = KeQueryPerformanceCounter(0LL).QuadPart;
    if ( !(unsigned int)sub_140B05E40(a2) )
      return 0;
    qword_140D68848 = KeQueryPerformanceCounter(0LL).QuadPart;
    v5 = -1;
    if ( qword_140C590D0 <= 0xFFFFFFFF )
      v5 = qword_140C590D0;
    MEMORY[0xFFFFF780000002E8] = v5;
    MEMORY[0xFFFFF78000000244] = 0;
    sub_14082BC44();
    qword_140C4F2F0 = 0LL;
    qword_140C51DE8 = 0LL;
    qword_140C51DF8 = 0LL;
    qword_140D68850 = KeQueryPerformanceCounter(0LL).QuadPart;
    if ( !(unsigned int)sub_140B09D6C(a2) )
      return 0;
    if ( (dword_140D06880 & 0x40000) != 0 )
    {
      v6 = qword_140C540B0;
      v7 = sub_1403095B0((__int64)&qword_140C534C0, 0x20u);
      if ( !v7 )
        return 0;
      if ( (int)sub_14054E548(v6, (__int64)(v7 << 25) >> 16) < 0 )
        return 0;
      qword_140C4F3F0 = v6;
      qword_140C4F3E8 = 0x100000000000LL;
      if ( !(unsigned int)sub_1402DBF90(
                            ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                            (((v6 + 0x1FFFFFFFFFFLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                            2048,
                            9) )
        return 0;
      qword_140C4F3F8 = 0LL;
      CurrentThread = KeGetCurrentThread();
      sub_140581D30((__int64)CurrentThread);
      for ( j = (PVOID *)PsLoadedModuleList; j != &PsLoadedModuleList; j = (PVOID *)*j )
      {
        if ( ((_DWORD)j[13] & 0x2000) == 0 )
        {
          v10 = j[6];
          if ( v10 == qword_140D068F0 )
          {
            v11 = RtlImageNtHeader(v10);
            v12 = sub_1406EB4B0((__int64)j, (__int64)v11);
            *((_DWORD *)j + 26) |= 0x2000u;
          }
          else
          {
            v12 = sub_14075C330((__int64)j, 0LL);
            if ( v12 < 0 )
              goto LABEL_59;
            v12 = sub_1402D99BC((__int64)j, 0, 0LL);
          }
          if ( v12 < 0 )
LABEL_59:
            KeBugCheckEx(0x422u, v12, (ULONG_PTR)j, 0LL, 0LL);
        }
      }
      sub_14097F8B0((PVOID *)PsLoadedModuleList);
      sub_1402D8E00((__int64)CurrentThread);
      qword_140E01900 = qword_140C4F3F0 - 0x3FFFE0000000000LL;
    }
    sub_140B09C28();
    dword_140D06880 |= 0x1000000u;
    qword_140C553A8[0] = 0LL;
    sub_1406EBCBC(32);
    sub_14028F63C((__int64)KeGetCurrentThread(), 5);
    sub_140B085F8();
    ImageSectionHandle = (PVOID)MmLockPagableImageSection((ULONG_PTR)sub_140A6A3E0);
    sub_1402FD820((ULONG_PTR)ImageSectionHandle, 0LL);
    qword_140C53280 = sub_140B09B18();
    qword_140C53288 = 0xAAAAAAAAAAAAAAABuLL * ((qword_140C53280 + 0x220000000000LL) >> 4);
    v13 = sub_1403095B0((__int64)&qword_140C534C0, 1u);
    MmBadPointer = (PVOID)v13;
    if ( v13 )
    {
      MmBadPointer = (PVOID)((__int64)(v13 << 25) >> 16);
      if ( (unsigned int)sub_140B09744() )
      {
        qword_140D68858 = KeQueryPerformanceCounter(0LL).QuadPart;
        sub_140B092F0();
        qword_140D68860 = KeQueryPerformanceCounter(0LL).QuadPart;
        qword_140C53488 = (__int64)&qword_140C53480;
        qword_140C53480 = (__int64)&qword_140C53480;
        return 1;
      }
    }
  }
  return 0;
}
