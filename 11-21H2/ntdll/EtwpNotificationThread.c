/*
 * XREFs of EtwpNotificationThread @ 0x1800073C0
 * Callers:
 *     <none>
 * Callees:
 *     EtwDeliverDataBlock @ 0x180007500 (EtwDeliverDataBlock.c)
 *     TpSetWaitEx @ 0x18001EB80 (TpSetWaitEx.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A7A40 (NtTraceControl.c)
 */

void __fastcall EtwpNotificationThread(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_WAIT a3)
{
  _ETW_NOTIFICATION_HEADER *Heap; // rbx
  char v6; // bp
  ULONG OutputBufferLength; // edi
  NTSTATUS v8; // esi
  ULONG ReturnLength; // [rsp+30h] [rbp-148h] BYREF
  __int64 v10; // [rsp+38h] [rbp-140h] BYREF
  _BYTE OutputBuffer[256]; // [rsp+40h] [rbp-138h] BYREF

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
