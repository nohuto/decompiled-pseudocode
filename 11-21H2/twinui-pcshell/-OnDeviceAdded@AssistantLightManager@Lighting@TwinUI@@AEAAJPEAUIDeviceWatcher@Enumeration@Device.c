/*
 * XREFs of ?OnDeviceAdded@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceWatcher@Enumeration@Devices@Windows@@PEAUIDeviceInformation@567@@Z @ 0x18055F290
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z @ 0x18055E718 (-AddDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall TwinUI::Lighting::AssistantLightManager::OnDeviceAdded(
        LPCRITICAL_SECTION lpCriticalSection,
        struct Windows::Devices::Enumeration::IDeviceWatcher *a2,
        struct Windows::Devices::Enumeration::IDeviceInformation *a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = (*(__int64 (__fastcall **)(struct Windows::Devices::Enumeration::IDeviceInformation *, HSTRING *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v8);
  if ( v4 < 0 )
  {
    v5 = 247LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = TwinUI::Lighting::AssistantLightManager::AddDevice(lpCriticalSection, v8);
  if ( v4 < 0 )
  {
    v5 = 248LL;
    goto LABEL_3;
  }
  return 0LL;
}
