/*
 * XREFs of sub_1407D4E34 @ 0x1407D4E34
 * Callers:
 *     sub_1407D4DD0 @ 0x1407D4DD0 (sub_1407D4DD0.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402D1EB4 @ 0x1402D1EB4 (sub_1402D1EB4.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     ZwWaitForSingleObject @ 0x14041B7E0 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 */

__int64 __fastcall sub_1407D4E34(__int64 a1, _QWORD *a2)
{
  int v2; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v6; // r14
  NTSTATUS v8; // eax
  int v9; // edi
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  Handle = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 88), 1u);
  if ( *(_BYTE *)(a1 + 80) )
  {
    v2 = -1073740697;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 488) )
    {
      KeCancelTimer((PKTIMER)(a1 + 264));
      *(_BYTE *)(a1 + 488) = 0;
    }
    v6 = (_QWORD *)(a1 + 72);
    if ( !*(_QWORD *)(a1 + 72) )
    {
      if ( (int)sub_14077FFEC(0LL, 0LL, *(_QWORD *)(a1 + 40), 0, 0x2000000u, (__int64)&Handle) < 0
        || (v2 = sub_14077FFEC(0LL, (__int64)Handle, (__int64)L"DriverDatabase", 0, 0x2000000u, a1 + 72),
            ZwClose(Handle),
            v2 < 0) )
      {
        if ( stru_140C46280.Header.SignalState )
        {
          v2 = -1073741077;
          goto LABEL_6;
        }
        v8 = ZwWaitForSingleObject(*(HANDLE *)(a1 + 472), 0, 0LL);
        v9 = v8;
        if ( !*(_BYTE *)(a1 + 489) )
        {
          *(_BYTE *)(a1 + 489) = 1;
          sub_1402D1EB4(&stru_14000E318, (unsigned __int16 *)(a1 + 16), v8);
          sub_1402D1EB4(&stru_14000E348, (unsigned __int16 *)(a1 + 16), v9);
        }
        *(_QWORD *)(a1 + 224) = 0LL;
        *(_QWORD *)(a1 + 240) = sub_1407F3CF0;
        *(_QWORD *)(a1 + 248) = a1;
        KeInitializeEvent((PRKEVENT)(a1 + 200), SynchronizationEvent, 0);
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 224), CriticalWorkQueue);
        KeWaitForSingleObject((PVOID)(a1 + 200), Executive, 0, 0, 0LL);
        if ( *v6 )
        {
          v2 = 0;
        }
        else if ( *(_BYTE *)(a1 + 80) )
        {
          v2 = -1073740697;
        }
        else
        {
          v2 = -1073741823;
          if ( *(int *)(a1 + 256) < 0 )
            v2 = *(_DWORD *)(a1 + 256);
        }
      }
    }
    *a2 = *v6;
  }
LABEL_6:
  ExReleaseResourceLite((PERESOURCE)(a1 + 88));
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v2;
}
