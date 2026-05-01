/*
 * XREFs of ?OnDeviceRemoved@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceWatcher@Enumeration@Devices@Windows@@PEAUIDeviceInformationUpdate@567@@Z @ 0x18055F310
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z @ 0x18055F4B8 (-RemoveDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall TwinUI::Lighting::AssistantLightManager::OnDeviceRemoved(
        TwinUI::Lighting::AssistantLightManager *this,
        struct Windows::Devices::Enumeration::IDeviceWatcher *a2,
        struct Windows::Devices::Enumeration::IDeviceInformationUpdate *a3)
{
  __int64 (__fastcall *v5)(struct Windows::Devices::Enumeration::IDeviceInformationUpdate *, HSTRING *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING string; // [rsp+40h] [rbp+18h] BYREF

  v5 = *(__int64 (__fastcall **)(struct Windows::Devices::Enumeration::IDeviceInformationUpdate *, HSTRING *))(*(_QWORD *)a3 + 48LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v6 = v5(a3, &string);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v6 = TwinUI::Lighting::AssistantLightManager::RemoveDevice(this, string);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v7 = 0;
      goto LABEL_7;
    }
    v8 = 297LL;
  }
  else
  {
    v8 = 296LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
    (const char *)(unsigned int)v6);
LABEL_7:
  WindowsDeleteString(string);
  return v7;
}
