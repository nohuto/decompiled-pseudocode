/*
 * XREFs of EtwpNotificationThread @ 0x18005E6A0
 * Callers:
 *     <none>
 * Callees:
 *     TpSetWaitEx @ 0x180030740 (TpSetWaitEx.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     EtwDeliverDataBlock @ 0x18005E7E0 (EtwDeliverDataBlock.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A4900 (NtTraceControl.c)
 */

void __fastcall EtwpNotificationThread(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_WAIT a3)
{
  _ETW_NOTIFICATION_HEADER *Heap; // rbx
  char v6; // bp
  ULONG OutputBufferLength; // edi
  NTSTATUS v8; // esi
  ULONG ReturnLength; // [rsp+30h] [rbp-158h] BYREF
  __int64 v10; // [rsp+38h] [rbp-150h] BYREF
  _BYTE OutputBuffer[256]; // [rsp+50h] [rbp-138h] BYREF

  v10 = -600000000LL;
  Heap = (_ETW_NOTIFICATION_HEADER *)OutputBuffer;
  v6 = 0;
  OutputBufferLength = 256;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = NtTraceControl(EtwReceiveNotification, 0LL, 0, Heap, OutputBufferLength, &ReturnLength);
      if ( v8 < 0 )
        break;
      EtwDeliverDataBlock(Heap);
      if ( v8 != 261 )
        goto LABEL_4;
    }
    if ( v8 != -1073741789 )
      break;
    if ( Heap != (_ETW_NOTIFICATION_HEADER *)OutputBuffer )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    OutputBufferLength = ReturnLength;
    Heap = (_ETW_NOTIFICATION_HEADER *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, ReturnLength);
    if ( !Heap )
    {
      v6 = 1;
      break;
    }
  }
LABEL_4:
  TpSetWaitEx(a3, a2, (PLARGE_INTEGER)((unsigned __int64)&v10 & -(__int64)(v6 != 0)), 0LL);
  if ( Heap != (_ETW_NOTIFICATION_HEADER *)OutputBuffer )
  {
    if ( Heap )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
}
