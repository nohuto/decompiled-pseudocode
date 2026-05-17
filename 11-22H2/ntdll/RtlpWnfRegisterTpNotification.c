/*
 * XREFs of RtlpWnfRegisterTpNotification @ 0x180050404
 * Callers:
 *     RtlpInitializeWnf @ 0x180050330 (RtlpInitializeWnf.c)
 * Callees:
 *     TpSetWaitEx @ 0x180030910 (TpSetWaitEx.c)
 *     TpAllocWait @ 0x18004DAE0 (TpAllocWait.c)
 *     TpReleaseWait @ 0x18004DCC0 (TpReleaseWait.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     ZwCreateEvent @ 0x18009F6F0 (ZwCreateEvent.c)
 *     NtSetWnfProcessNotificationEvent @ 0x1800A2620 (NtSetWnfProcessNotificationEvent.c)
 */

__int64 RtlpWnfRegisterTpNotification()
{
  int v0; // ebx
  char v2; // [rsp+20h] [rbp-18h]
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0LL;
  Handle = 0LL;
  v2 = 0;
  v0 = ZwCreateEvent(&Handle, 2031619LL, 0LL, 1LL, v2);
  if ( v0 >= 0 )
  {
    v0 = TpAllocWait((_PEB_LDR_DATA *)&v4, (__int64)RtlpWnfNotificationThread, (__int64)Handle, 0LL);
    if ( v0 >= 0 )
    {
      v0 = NtSetWnfProcessNotificationEvent(Handle);
      if ( v0 >= 0 )
      {
        TpSetWaitEx(v4, (__int64)Handle, 0LL, 0LL);
        return (unsigned int)v0;
      }
    }
    if ( v4 )
      TpReleaseWait(v4);
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v0;
}
