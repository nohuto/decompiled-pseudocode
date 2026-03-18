/*
 * XREFs of ?WilResultLoggingCallback_MaybeFailFast@@YAXAEBUFailureInfo@wil@@@Z @ 0x1800F8BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

void __fastcall WilResultLoggingCallback_MaybeFailFast(const struct wil::FailureInfo *a1)
{
  MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0LL, *((_DWORD *)a1 + 2), *((_DWORD *)a1 + 16));
}
