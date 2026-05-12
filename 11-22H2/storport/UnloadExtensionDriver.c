/*
 * XREFs of UnloadExtensionDriver @ 0x1C0042E60
 * Callers:
 *     RaidDriverDeviceControlIrp @ 0x1C003FDA8 (RaidDriverDeviceControlIrp.c)
 *     DllUnload @ 0x1C0064D60 (DllUnload.c)
 * Callees:
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1C0041550 (McTemplateK0dq_EtwWriteTransfer.c)
 */

__int64 __fastcall UnloadExtensionDriver(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  signed __int32 v5; // edi
  __int64 v7; // [rsp+20h] [rbp-28h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0;
  DestinationString = 0LL;
  if ( ExtDeviceObject )
  {
    EnableExtensionCalls = 0;
    _m_prefetchw(&ExtRefCount);
    v4 = (unsigned int)ExtRefCount;
    v5 = _InterlockedOr(&ExtRefCount, 0);
    if ( v5 )
    {
      v3 = -1073740024;
    }
    else if ( _InterlockedExchange64(&ExtDeviceObject, 0LL) )
    {
      ExtSendStorportData = 0LL;
      ExtSendMiniportData = 0LL;
      ExtAdapterIoctlPre = 0LL;
      ExtAdapterIoctlPost = 0LL;
      ExtAdapterIoctlReplace = 0LL;
      ExtUnitIoctlPre = 0LL;
      ExtUnitIoctlPost = 0LL;
      ExtUnitIoctlReplace = 0LL;
      ExtNotificationPre = 0LL;
      ExtNotificationPost = 0LL;
      ExtNotificationReplace = 0LL;
      ExtExtendedFuncPre = 0LL;
      ExtExtendedFuncPost = 0LL;
      ExtExtendedFuncReplace = 0LL;
      ObfDereferenceObject(ExtFileObject);
      ExtFileObject = 0LL;
      RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\StorportExt");
      ZwUnloadDriver(&DestinationString);
    }
    if ( (byte_1C0092A06 & 0x40) != 0 )
    {
      LODWORD(v7) = v5;
      McTemplateK0dq_EtwWriteTransfer(v4, a2, a3, v3, v7);
    }
  }
  return v3;
}
