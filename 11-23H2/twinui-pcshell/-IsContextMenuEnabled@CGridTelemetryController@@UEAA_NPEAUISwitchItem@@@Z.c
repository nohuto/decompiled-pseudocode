/*
 * XREFs of ?IsContextMenuEnabled@CGridTelemetryController@@UEAA_NPEAUISwitchItem@@@Z @ 0x18058A450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGridTelemetryController::IsContextMenuEnabled(CGridTelemetryController *this, struct ISwitchItem *a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64, struct ISwitchItem *))(*(_QWORD *)v2 + 40LL))(v2, a2);
  else
    return 0;
}
