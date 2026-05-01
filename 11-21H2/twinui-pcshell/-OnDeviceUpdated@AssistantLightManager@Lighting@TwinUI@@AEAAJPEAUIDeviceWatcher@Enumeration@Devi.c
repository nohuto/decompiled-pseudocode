/*
 * XREFs of ?OnDeviceUpdated@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceWatcher@Enumeration@Devices@Windows@@PEAUIDeviceInformationUpdate@567@@Z @ 0x18055F3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z @ 0x18055E718 (-AddDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?IsDeviceEnabled@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceInformationUpdate@Enumeration@Devices@Windows@@PEA_N@Z @ 0x18055F03C (-IsDeviceEnabled@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceInformationUpdate@Enumer.c)
 *     ?RemoveDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z @ 0x18055F4B8 (-RemoveDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall TwinUI::Lighting::AssistantLightManager::OnDeviceUpdated(
        LPCRITICAL_SECTION lpCriticalSection,
        struct Windows::Devices::Enumeration::IDeviceWatcher *a2,
        struct Windows::Devices::Enumeration::IDeviceInformationUpdate *a3)
{
  __int64 (__fastcall *v5)(struct Windows::Devices::Enumeration::IDeviceInformationUpdate *, HSTRING *); // rbx
  int IsDeviceEnabled; // eax
  TwinUI::Lighting::AssistantLightManager *v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v12; // [rsp+40h] [rbp+18h] BYREF
  HSTRING string; // [rsp+48h] [rbp+20h] BYREF

  v5 = *(__int64 (__fastcall **)(struct Windows::Devices::Enumeration::IDeviceInformationUpdate *, HSTRING *))(*(_QWORD *)a3 + 48LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  IsDeviceEnabled = v5(a3, &string);
  v8 = IsDeviceEnabled;
  if ( IsDeviceEnabled >= 0 )
  {
    IsDeviceEnabled = TwinUI::Lighting::AssistantLightManager::IsDeviceEnabled(v7, a3, &v12);
    v8 = IsDeviceEnabled;
    if ( IsDeviceEnabled >= 0 )
    {
      if ( v12 )
      {
        IsDeviceEnabled = TwinUI::Lighting::AssistantLightManager::AddDevice(lpCriticalSection, string);
        v8 = IsDeviceEnabled;
        if ( IsDeviceEnabled < 0 )
        {
          v9 = 281LL;
          goto LABEL_5;
        }
      }
      else
      {
        IsDeviceEnabled = TwinUI::Lighting::AssistantLightManager::RemoveDevice(
                            (TwinUI::Lighting::AssistantLightManager *)lpCriticalSection,
                            string);
        v8 = IsDeviceEnabled;
        if ( IsDeviceEnabled < 0 )
        {
          v9 = 285LL;
          goto LABEL_5;
        }
      }
      v8 = 0;
      goto LABEL_12;
    }
    v9 = 278LL;
  }
  else
  {
    v9 = 276LL;
  }
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
    (const char *)(unsigned int)IsDeviceEnabled);
LABEL_12:
  WindowsDeleteString(string);
  return v8;
}
