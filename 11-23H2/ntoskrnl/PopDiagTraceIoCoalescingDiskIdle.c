/*
 * XREFs of PopDiagTraceIoCoalescingDiskIdle @ 0x1405940FC
 * Callers:
 *     PopScanIdleList @ 0x14032C910 (PopScanIdleList.c)
 * Callees:
 *     EtwWriteEx @ 0x1402581E0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140258420 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceIoCoalescingDiskIdle(__int64 a1)
{
  REGHANDLE v1; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  __int64 v3; // [rsp+70h] [rbp+8h] BYREF

  v3 = a1;
  if ( PopDiagHandleRegistered )
  {
    v1 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_IO_COALESCING_DSK_IDLE) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v3;
      UserData.Size = 8;
      EtwWriteEx(v1, &POP_ETW_IO_COALESCING_DSK_IDLE, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}
