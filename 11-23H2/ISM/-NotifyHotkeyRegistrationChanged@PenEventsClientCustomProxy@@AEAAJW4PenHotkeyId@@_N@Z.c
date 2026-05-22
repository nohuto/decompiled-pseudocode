/*
 * XREFs of ?NotifyHotkeyRegistrationChanged@PenEventsClientCustomProxy@@AEAAJW4PenHotkeyId@@_N@Z @ 0x1801AECAC
 * Callers:
 *     ?OnDisconnected@PenEventsClientCustomProxy@@MEAAJXZ @ 0x1801AEF10 (-OnDisconnected@PenEventsClientCustomProxy@@MEAAJXZ.c)
 *     ?OnDockedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ @ 0x1801AF0D0 (-OnDockedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ.c)
 *     ?OnTailButtonClickedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ @ 0x1801AF570 (-OnTailButtonClickedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ.c)
 *     ?OnTailButtonDoubleClickedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ @ 0x1801AF5F0 (-OnTailButtonDoubleClickedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ.c)
 *     ?OnTailButtonLongPressedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ @ 0x1801AF680 (-OnTailButtonLongPressedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ.c)
 *     ?OnUndockedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ @ 0x1801AF700 (-OnUndockedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyHotkeyRegistrationChanged@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy@@W4PenHotkeyId@@_N@Z @ 0x1801AECF4 (-NotifyHotkeyRegistrationChanged@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy.c)
 */

__int64 __fastcall PenEventsClientCustomProxy::NotifyHotkeyRegistrationChanged(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_QWORD *)(a1 + 56) )
  {
    LOBYTE(a4) = a3;
    v4 = PenEventsDispatcherPrincipal::NotifyHotkeyRegistrationChanged(*(_QWORD *)(a1 + 56), a1, a2, a4);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        39LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\peneventsdi"
                 "spatcherprincipal.cpp",
        (const char *)(unsigned int)v4);
  }
  return 0LL;
}
