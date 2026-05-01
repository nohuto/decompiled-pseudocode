/*
 * XREFs of ?RegisterForKGLOneSettingsUpdates@BroadcastDVRComponent@@AEAAJXZ @ 0x1800A9D6C
 * Callers:
 *     ?RegisterNotifications@BroadcastDVRComponent@@QEAAXXZ @ 0x1800A9F84 (-RegisterNotifications@BroadcastDVRComponent@@QEAAXXZ.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180393038 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

int __fastcall BroadcastDVRComponent::RegisterForKGLOneSettingsUpdates(PVOID Context)
{
  unsigned int Key; // eax
  HANDLE EventW; // rax
  const char *v4; // r9
  __int64 v6; // rdx
  unsigned int v7; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  Key = RegCreateKeyExW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\KGL\\OneSettings",
          0,
          0LL,
          0,
          0x20019u,
          0LL,
          (PHKEY)Context + 51,
          0LL);
  if ( Key )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x366,
             (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
             (const char *)Key,
             v7);
  EventW = CreateEventW(0LL, 0, 1, 0LL);
  *((_QWORD *)Context + 53) = EventW;
  if ( EventW )
  {
    if ( RegisterWaitForSingleObject(
           (PHANDLE)Context + 52,
           EventW,
           BroadcastDVRComponent::StaticKGLSettingsRegistryChangeNotificationCallback,
           Context,
           0xFFFFFFFF,
           0) )
    {
      return 0;
    }
    v6 = 883LL;
  }
  else
  {
    v6 = 875LL;
  }
  return wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)v6,
           (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
           v4);
}
