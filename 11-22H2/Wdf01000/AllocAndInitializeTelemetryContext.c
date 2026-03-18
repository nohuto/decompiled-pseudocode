/*
 * XREFs of AllocAndInitializeTelemetryContext @ 0x1C004D098
 * Callers:
 *     FxAllocateDriverGlobals @ 0x1C0043978 (FxAllocateDriverGlobals.c)
 * Callees:
 *     <none>
 */

void __fastcall AllocAndInitializeTelemetryContext(_FX_TELEMETRY_CONTEXT **TelemetryContext)
{
  UUID *Pool2; // rax
  _FX_TELEMETRY_CONTEXT *v3; // rbx

  Pool2 = (UUID *)ExAllocatePool2(64LL, 20LL, 1917089862LL);
  v3 = (_FX_TELEMETRY_CONTEXT *)Pool2;
  if ( Pool2 )
  {
    if ( ExUuidCreate(Pool2) >= 0 )
    {
      v3->DoOnceFlagsBitmap = 0;
    }
    else
    {
      ExFreePoolWithTag(v3, 0);
      v3 = 0LL;
    }
  }
  *TelemetryContext = v3;
}
