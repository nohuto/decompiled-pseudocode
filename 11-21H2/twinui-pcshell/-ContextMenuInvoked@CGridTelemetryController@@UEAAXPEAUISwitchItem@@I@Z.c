/*
 * XREFs of ?ContextMenuInvoked@CGridTelemetryController@@UEAAXPEAUISwitchItem@@I@Z @ 0x1804D28F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SwitchItemClosed@AEA_K@MultitaskingViewTelemetry@@SAXAEA_K@Z @ 0x1804D2544 (--$SwitchItemClosed@AEA_K@MultitaskingViewTelemetry@@SAXAEA_K@Z.c)
 *     ?_GetIndexOfItem@CGridTelemetryController@@AEAAJPEAUISwitchItem@@PEA_K@Z @ 0x1804D2CC0 (-_GetIndexOfItem@CGridTelemetryController@@AEAAJPEAUISwitchItem@@PEA_K@Z.c)
 */

void __fastcall CGridTelemetryController::ContextMenuInvoked(
        CGridTelemetryController *this,
        struct ISwitchItem *a2,
        unsigned int a3)
{
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 2) )
  {
    if ( a3 == 13027 && CGridTelemetryController::_GetIndexOfItem(this, a2, &v6) >= 0 )
      MultitaskingViewTelemetry::SwitchItemClosed<unsigned __int64 &>((int *)&v6);
    (*(void (__fastcall **)(_QWORD, struct ISwitchItem *, _QWORD))(**((_QWORD **)this + 2) + 88LL))(
      *((_QWORD *)this + 2),
      a2,
      a3);
  }
}
