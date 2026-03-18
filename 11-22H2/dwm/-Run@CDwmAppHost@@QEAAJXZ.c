/*
 * XREFs of ?Run@CDwmAppHost@@QEAAJXZ @ 0x140003700
 * Callers:
 *     wWinMain @ 0x140003430 (wWinMain.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x14000309C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnClose@CDwmAppHost@@AEAAXXZ @ 0x140003224 (-OnClose@CDwmAppHost@@AEAAXXZ.c)
 *     ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140003824 (-LpcSyncFlush@CDwmAppHost@@AEAAJXZ.c)
 *     ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x1400038B0 (-StartComposition@CDwmAppHost@@AEAAJXZ.c)
 *     ?Start@CLongPowerButtonHoldListener@BlackScreenDiagnostics@@QEAAXP6AXAEBU_GUID@@@ZH@Z @ 0x140003F80 (-Start@CLongPowerButtonHoldListener@BlackScreenDiagnostics@@QEAAXP6AXAEBU_GUID@@@ZH@Z.c)
 */

__int64 __fastcall CDwmAppHost::Run(CDwmAppHost *this)
{
  CDwmAppHost *v1; // rcx
  int started; // ebx
  void (*v3)(const struct _GUID *); // rdx
  int v4; // r8d
  CDwmAppHost *v5; // rcx
  tagMSG Msg; // [rsp+30h] [rbp-38h] BYREF
  CDwmAppHost *v8; // [rsp+70h] [rbp+8h] BYREF

  v8 = this;
  memset(&Msg, 0, sizeof(Msg));
  started = CDwmAppHost::StartComposition(this);
  if ( started < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x9Fu);
    return (unsigned int)started;
  }
  started = CDwmAppHost::LpcSyncFlush(v1);
  if ( started < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0xA7u);
    return (unsigned int)started;
  }
  LODWORD(v8) = 0;
  RtlGetDeviceFamilyInfoEnum(0LL, &v8, 0LL);
  if ( (_DWORD)v8 != 10 )
    BlackScreenDiagnostics::CLongPowerButtonHoldListener::Start(
      (BlackScreenDiagnostics::CLongPowerButtonHoldListener *)&byte_140016B68,
      v3,
      v4);
  while ( GetMessageW(&Msg, 0LL, 0, 0) )
  {
    TranslateMessage(&Msg);
    DispatchMessageW(&Msg);
  }
  if ( (_DWORD)v8 != 10 )
  {
    if ( byte_140016B68 )
    {
      v5 = (CDwmAppHost *)qword_140016B70;
      byte_140016B68 = 0;
      if ( qword_140016B70 )
      {
        if ( (int)RtlUnsubscribeWnfStateChangeNotification() >= 0 )
          qword_140016B70 = 0LL;
      }
    }
  }
  if ( hwnd )
    CDwmAppHost::OnClose(v5);
  return uExitCode;
}
