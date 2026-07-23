/*
 * XREFs of sub_1406A4C58 @ 0x1406A4C58
 * Callers:
 *     sub_1407E65A0 @ 0x1407E65A0 (sub_1407E65A0.c)
 *     sub_140933DDC @ 0x140933DDC (sub_140933DDC.c)
 * Callees:
 *     sub_14022CFE4 @ 0x14022CFE4 (sub_14022CFE4.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeInsertQueueApc @ 0x1402ED9E0 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x1402F47B0 (KeInitializeApc.c)
 */

__int64 __fastcall sub_1406A4C58(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdx
  char v6; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)a1 == CurrentThread )
    return sub_14022CFE4(*(_QWORD *)(a2 + 88), (__int64)CurrentThread, *(_QWORD *)(a2 + 96), *(_BYTE *)(a2 + 128));
  KeInitializeApc(a2, a1, 0, (__int64)sub_140253C70, 0LL, 0LL, 0, 0LL);
  if ( KeInsertQueueApc(a2, (__int64)&v6, 0LL, 0) )
  {
    KeWaitForSingleObject((PVOID)(a2 + 104), Executive, 0, 0, 0LL);
    KeResetEvent((PRKEVENT)(a2 + 104));
    if ( v6 )
    {
      KeInitializeEvent((PRKEVENT)(a2 + 104), NotificationEvent, 0);
      KeInitializeApc(a2, a1, 0, (__int64)FsRtlInitializeOplock, 0LL, (__int64)sub_1406A4C10, 0, a2);
      if ( KeInsertQueueApc(a2, 0LL, 0LL, 0) )
      {
        KeWaitForSingleObject((PVOID)(a2 + 104), Executive, 0, 0, 0LL);
        KeResetEvent((PRKEVENT)(a2 + 104));
      }
    }
  }
  return *(unsigned int *)(a2 + 132);
}
