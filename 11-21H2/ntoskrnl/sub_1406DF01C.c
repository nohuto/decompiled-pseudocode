/*
 * XREFs of sub_1406DF01C @ 0x1406DF01C
 * Callers:
 *     sub_14078AF40 @ 0x14078AF40 (sub_14078AF40.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_1406DF01C(__int64 a1)
{
  PVOID *v2; // rsi
  __int64 *v3; // rax
  struct _WORK_QUEUE_ITEM *Pool2; // rax
  PVOID *v5; // rdi
  int v6; // ecx
  char *v7; // rcx
  __int64 v8; // rcx
  UNICODE_STRING String2; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  ExAcquireFastMutex(&stru_140C466E0);
  v2 = (PVOID *)qword_140C46780;
  DestinationString = 0LL;
  String2 = 0LL;
  if ( qword_140C46780 != &qword_140C46780 )
  {
    v5 = (PVOID *)qword_140C46780;
    do
    {
      v6 = *((_DWORD *)v5 + 5);
      if ( v6 == *(_DWORD *)(a1 + 20) && *((_DWORD *)v5 + 6) == *(_DWORD *)(a1 + 24) )
      {
        if ( v6 == 3 )
        {
          v7 = *(char **)((char *)v5 + 28) - *(_QWORD *)(a1 + 28);
          if ( !v7 )
            v7 = *(char **)((char *)v5 + 36) - *(_QWORD *)(a1 + 36);
          if ( !v7 )
          {
            RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 44));
            RtlInitUnicodeString(&String2, (PCWSTR)v5 + 22);
            if ( RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
            {
LABEL_12:
              *((_BYTE *)v5 + 16) = 0;
              break;
            }
          }
        }
        else
        {
          if ( v6 != 2 )
            goto LABEL_12;
          v8 = *(_QWORD *)(a1 + 28) - *(_QWORD *)((char *)v5 + 28);
          if ( !v8 )
            v8 = *(_QWORD *)(a1 + 36) - *(_QWORD *)((char *)v5 + 36);
          if ( !v8 )
            goto LABEL_12;
        }
      }
      v5 = (PVOID *)*v5;
    }
    while ( v5 != &qword_140C46780 );
  }
  *(_BYTE *)(a1 + 16) = 1;
  v3 = (__int64 *)qword_140C46788;
  if ( *(PVOID **)qword_140C46788 != &qword_140C46780 )
    __fastfail(3u);
  *(_QWORD *)a1 = &qword_140C46780;
  *(_QWORD *)(a1 + 8) = v3;
  *v3 = a1;
  qword_140C46788 = a1;
  KeReleaseGuardedMutex(&stru_140C466E0);
  if ( v2 == &qword_140C46780 )
  {
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 32LL, 1500540496LL);
    if ( Pool2 )
    {
      Pool2->List.Flink = 0LL;
      Pool2->WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1407F4BB0;
      Pool2->Parameter = Pool2;
      ExQueueWorkItem(Pool2, BackgroundWorkQueue);
    }
  }
}
