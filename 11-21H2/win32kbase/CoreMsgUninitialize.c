/*
 * XREFs of CoreMsgUninitialize @ 0x1C00C35C8
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C01481B0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?Uninitialize@ServerPorts@CoreMessagingK@@SAXXZ @ 0x1C00C36C4 (-Uninitialize@ServerPorts@CoreMessagingK@@SAXXZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

NTSTATUS CoreMsgUninitialize()
{
  _QWORD *v0; // rcx
  _QWORD *v1; // rbx
  REGHANDLE v2; // rcx
  NTSTATUS result; // eax
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF

  if ( CoreMessagingK::EntryLock::s_Initialized )
  {
    if ( (unsigned int)dword_1C028D8C0 > 5 )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028D8C0,
        (unsigned __int8 *)dword_1C02663F6,
        0LL,
        0LL,
        2u,
        &v4);
    v0 = CoreMessagingK::BufferCache::s_FreeList;
    CoreMessagingK::BufferCache::s_FreeList = 0LL;
    if ( v0 )
    {
      do
      {
        v1 = (_QWORD *)v0[1];
        ExFreePoolWithTag(v0, 0x43424D43u);
        v0 = v1;
      }
      while ( v1 );
    }
    CoreMessagingK::ServerPorts::Uninitialize();
    if ( CoreMessagingK::RegistrarClient::s_Port )
    {
      ZwClose(CoreMessagingK::RegistrarClient::s_Port);
      CoreMessagingK::RegistrarClient::s_Port = 0LL;
    }
    if ( Mutex )
    {
      ExFreePoolWithTag(Mutex, 0x4C454D43u);
      Mutex = 0LL;
    }
    CoreMessagingK::EntryLock::s_Initialized = 0;
    if ( (unsigned int)dword_1C028D8C0 > 5 )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028D8C0,
        (unsigned __int8 *)dword_1C02663D5,
        0LL,
        0LL,
        2u,
        &v4);
    v2 = qword_1C028D8E0;
    qword_1C028D8E0 = 0LL;
    dword_1C028D8C0 = 0;
    return EtwUnregister(v2);
  }
  return result;
}
