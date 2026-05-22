/*
 * XREFs of ?OnDisconnected@PenEventsClientCustomProxy@@MEAAJXZ @ 0x1801BCEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyHotkeyRegistrationChanged@PenEventsClientCustomProxy@@AEAAJW4PenHotkeyId@@_N@Z @ 0x1801BCC8C (-NotifyHotkeyRegistrationChanged@PenEventsClientCustomProxy@@AEAAJW4PenHotkeyId@@_N@Z.c)
 *     ?OnPenEventsClientProxyDisconnected@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy@@@Z @ 0x1801BD0F0 (-OnPenEventsClientProxyDisconnected@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientPr.c)
 */

__int64 __fastcall PenEventsClientCustomProxy::OnDisconnected(
        PenEventsClientCustomProxy *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  PenEventsDispatcherPrincipal *v5; // rcx
  int v6; // eax
  int v7; // eax
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // r9
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = (PenEventsDispatcherPrincipal *)*((_QWORD *)this + 7);
  if ( v5 )
  {
    v6 = PenEventsDispatcherPrincipal::OnPenEventsClientProxyDisconnected(v5, this);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x14,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\peneventsdispat"
             "cherprincipal.cpp",
        (const char *)(unsigned int)v6);
  }
  v7 = PenEventsClientCustomProxy::NotifyHotkeyRegistrationChanged((__int64)this, 0, 0, a4);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x18,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\peneventsdispatcherprincipal.cpp",
      (const char *)(unsigned int)v7);
  v9 = PenEventsClientCustomProxy::NotifyHotkeyRegistrationChanged((__int64)this, 1u, 0, v8);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x19,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\peneventsdispatcherprincipal.cpp",
      (const char *)(unsigned int)v9);
  v11 = PenEventsClientCustomProxy::NotifyHotkeyRegistrationChanged((__int64)this, 2u, 0, v10);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\peneventsdispatcherprincipal.cpp",
      (const char *)(unsigned int)v11);
  v13 = PenEventsClientCustomProxy::NotifyHotkeyRegistrationChanged((__int64)this, 3u, 0, v12);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\peneventsdispatcherprincipal.cpp",
      (const char *)(unsigned int)v13);
  v15 = PenEventsClientCustomProxy::NotifyHotkeyRegistrationChanged((__int64)this, 4u, 0, v14);
  if ( v15 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1C,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\peneventsdispatcherprincipal.cpp",
      (const char *)(unsigned int)v15);
  return 0LL;
}
