/*
 * XREFs of ?IsNewKGLVersionAvailable@BroadcastDVRComponent@@AEAA_NPEAK@Z @ 0x1800A6F08
 * Callers:
 *     ?QueueNotifyGameBarForKGLUpdateIfNecessary@BroadcastDVRComponent@@AEAAJPEAK0@Z @ 0x1800A6F90 (-QueueNotifyGameBarForKGLUpdateIfNecessary@BroadcastDVRComponent@@AEAAJPEAK0@Z.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

bool __fastcall BroadcastDVRComponent::IsNewKGLVersionAvailable(BroadcastDVRComponent *this, unsigned int *a2)
{
  int DWORD; // eax
  __int64 v5; // rdx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+34h] [rbp+Ch]
  unsigned int v10; // [rsp+40h] [rbp+18h] BYREF

  v9 = HIDWORD(this);
  v8 = 0;
  DWORD = SHRegGetDWORD(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\KGL\\OneSettings", L"Version", &v8);
  if ( DWORD < 0 )
  {
    v5 = 1154LL;
  }
  else
  {
    if ( a2 )
      *a2 = v8;
    v10 = 0;
    DWORD = SHRegGetDWORD(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR",
              L"KGLRevision",
              &v10);
    if ( DWORD >= 0 )
      return v8 > v10;
    v5 = 1165LL;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)v5,
    (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
    (const char *)(unsigned int)DWORD,
    v6);
  return 0;
}
