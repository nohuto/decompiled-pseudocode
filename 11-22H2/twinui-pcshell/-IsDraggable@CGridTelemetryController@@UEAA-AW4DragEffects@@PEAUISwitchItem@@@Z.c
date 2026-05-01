/*
 * XREFs of ?IsDraggable@CGridTelemetryController@@UEAA?AW4DragEffects@@PEAUISwitchItem@@@Z @ 0x18058A480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGridTelemetryController::IsDraggable(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1);
  else
    return 0LL;
}
