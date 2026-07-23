/*
 * XREFs of sub_1403C81D0 @ 0x1403C81D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402226C0 @ 0x1402226C0 (sub_1402226C0.c)
 *     sub_1402227C8 @ 0x1402227C8 (sub_1402227C8.c)
 *     sub_140267320 @ 0x140267320 (sub_140267320.c)
 *     KePulseEvent @ 0x14026A0D0 (KePulseEvent.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     KeSetPriorityThread @ 0x140344340 (KeSetPriorityThread.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __noreturn sub_1403C81D0()
{
  int v0; // ebx
  volatile CCHAR v1; // cl
  NTSTATUS v2; // eax
  KSPIN_LOCK *v3; // rdx
  __int64 *v4; // rcx
  int v5; // eax
  ULONG ActiveProcessorCount; // r8d
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r9
  int v11; // eax
  unsigned int v12; // r8d
  int v13; // edx
  __int64 v14; // r10
  unsigned int v15; // ecx
  PVOID Object[3]; // [rsp+48h] [rbp-A0h] BYREF
  _BYTE v17[112]; // [rsp+60h] [rbp-88h] BYREF

  KeSetPriorityThread(KeGetCurrentThread(), 17);
  v0 = 8;
  v1 = KeNumberProcessors[1];
  Object[0] = &word_140C2BC20;
  dword_140C2A81C = (unsigned __int64)((0x8F0D180 * (unsigned __int128)(unsigned __int64)qword_140D06FF0) >> 64) >> v1;
  Object[1] = (PVOID)(qword_140C59058 + 96);
  while ( 1 )
  {
    while ( 1 )
    {
      v2 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
      if ( !v2 )
        break;
      if ( v2 == 1 )
        sub_140267320((__int64)&StartContext, 1);
    }
    memset(v17, 0, 0x68uLL);
    sub_140358A20(2u, 209, 0, (__int64)v17);
    if ( dword_140CF5F58 > 1 )
    {
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
      if ( ActiveProcessorCount > 1 )
      {
        v7 = 0LL;
        v8 = 0;
        do
        {
          v9 = qword_140D088C0[v7];
          v7 = (unsigned int)(v7 + 1);
          v8 += *(_DWORD *)(v9 + 11676);
        }
        while ( (unsigned int)v7 < ActiveProcessorCount );
        v10 = 0LL;
        v11 = v8 / (int)ActiveProcessorCount;
        v12 = ActiveProcessorCount - 1;
        v13 = 0;
        do
        {
          v14 = qword_140D088C0[v10];
          v15 = v11 - *(_DWORD *)(v14 + 11676);
          if ( v11 != *(_DWORD *)(v14 + 11676) )
          {
            _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 11676), v15);
            v13 += v15;
          }
          v10 = (unsigned int)(v10 + 1);
        }
        while ( (unsigned int)v10 < v12 );
        if ( v13 )
          _InterlockedExchangeAdd((volatile signed __int32 *)(qword_140D088C0[v10] + 11676), -v13);
      }
    }
    if ( !dword_140C4EF58 )
      break;
    if ( dword_140C4EF58 == 1 )
    {
      v3 = &qword_140C116F0;
      v4 = &qword_140C11700;
      goto LABEL_9;
    }
    if ( dword_140C4EF58 == 2 )
      sub_1402227C8();
LABEL_10:
    if ( ++dword_140C4EF58 == 3 )
      dword_140C4EF58 = 0;
    if ( (unsigned __int8)byte_140C15F70 > 1u && !--dword_140C15F60 )
    {
      dword_140C15F60 = 8;
      if ( !_InterlockedCompareExchange(&dword_140C15FA0, 1, 0) )
        ExQueueWorkItem(&stru_140C15F80, DelayedWorkQueue);
    }
    sub_140267320((__int64)&StartContext, 0);
    if ( qword_140C1BEF0 )
    {
      v5 = dword_140C095CC;
      if ( dword_140C095CC )
      {
        --dword_140C095CC;
        if ( v5 == 1 )
        {
          _m_prefetchw(&dword_140C1BEA0);
          if ( (_InterlockedOr(&dword_140C1BEA0, 5u) & 4) == 0 )
            ExQueueWorkItem(&stru_140C1BE80, DelayedWorkQueue);
        }
      }
    }
    if ( !--v0 )
    {
      v0 = 8;
      if ( !_InterlockedCompareExchange(&dword_140D00B50, 1, 0) )
      {
        KeSetEvent(&Event, 1, 0);
        KePulseEvent(&stru_140C2BC40, 1, 0);
      }
    }
    if ( byte_140C24528 )
    {
      if ( dword_140C2A820 != (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                                            + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 12) )
        dword_140C2A820 = (((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                         + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 12;
    }
  }
  v3 = &qword_140C116D0;
  v4 = &qword_140C116E0;
LABEL_9:
  sub_1402226C0(v4, v3);
  goto LABEL_10;
}
