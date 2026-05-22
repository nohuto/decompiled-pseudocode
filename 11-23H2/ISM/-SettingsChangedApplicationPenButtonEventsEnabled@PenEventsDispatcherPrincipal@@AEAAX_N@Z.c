/*
 * XREFs of ?SettingsChangedApplicationPenButtonEventsEnabled@PenEventsDispatcherPrincipal@@AEAAX_N@Z @ 0x1801AFC98
 * Callers:
 *     ?OnPenEventsKernelMessage@PenEventsDispatcherPrincipal@@AEAAXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z @ 0x1801AF358 (-OnPenEventsKernelMessage@PenEventsDispatcherPrincipal@@AEAAXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z.c)
 * Callees:
 *     ?GetButtonEventsSupportedFlag@PenEventsDispatcherPrincipal@@AEAA_NXZ @ 0x180054B94 (-GetButtonEventsSupportedFlag@PenEventsDispatcherPrincipal@@AEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall PenEventsDispatcherPrincipal::SettingsChangedApplicationPenButtonEventsEnabled(
        PenEventsDispatcherPrincipal *this,
        char a2)
{
  char v2; // dl
  PenEventsDispatcherPrincipal *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  char ButtonEventsSupportedFlag; // si
  char v7; // r8
  _QWORD *v8; // rdi
  _QWORD *i; // rbx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 196) != a2 )
  {
    PenEventsDispatcherPrincipal::GetButtonEventsSupportedFlag(this);
    *((_BYTE *)v3 + 196) = v2;
    ButtonEventsSupportedFlag = PenEventsDispatcherPrincipal::GetButtonEventsSupportedFlag(v3);
    if ( v7 != ButtonEventsSupportedFlag )
    {
      v8 = *(_QWORD **)(v5 + 72);
      for ( i = (_QWORD *)*v8; i != v8; i = (_QWORD *)*i )
      {
        LOBYTE(v4) = ButtonEventsSupportedFlag;
        v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(i[3] + 8LL) + 48LL))(i[3] + 8LL, v4);
        if ( v10 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            399LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\peneven"
                     "tsdispatcherprincipal.cpp",
            (const char *)(unsigned int)v10);
      }
    }
  }
}
