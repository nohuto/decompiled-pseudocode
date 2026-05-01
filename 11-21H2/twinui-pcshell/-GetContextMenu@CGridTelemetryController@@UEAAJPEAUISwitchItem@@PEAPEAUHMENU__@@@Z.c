/*
 * XREFs of ?GetContextMenu@CGridTelemetryController@@UEAAJPEAUISwitchItem@@PEAPEAUHMENU__@@@Z @ 0x1804D29B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGridTelemetryController::GetContextMenu(
        CGridTelemetryController *this,
        struct ISwitchItem *a2,
        HMENU *a3)
{
  __int64 v3; // rcx

  *a3 = 0LL;
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, struct ISwitchItem *))(*(_QWORD *)v3 + 48LL))(v3, a2);
  else
    return 2147500037LL;
}
