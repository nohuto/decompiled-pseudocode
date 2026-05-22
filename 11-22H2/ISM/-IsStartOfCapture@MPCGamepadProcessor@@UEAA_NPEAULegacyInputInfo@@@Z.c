/*
 * XREFs of ?IsStartOfCapture@MPCGamepadProcessor@@UEAA_NPEAULegacyInputInfo@@@Z @ 0x1801F0DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall MPCGamepadProcessor::IsStartOfCapture(
        MPCGamepadProcessor *this,
        struct LegacyInputInfo *a2,
        __int64 a3,
        const char *a4)
{
  return MPCGamepadProcessor::AnyInputPressed((MPCGamepadProcessor *)((char *)this - 32), (__int64)a2, a3, a4);
}
