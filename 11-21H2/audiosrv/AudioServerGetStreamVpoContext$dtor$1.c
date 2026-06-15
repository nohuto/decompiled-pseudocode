/*
 * XREFs of AudioServerGetStreamVpoContext$dtor$1 @ 0x1800F340C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioServerGetStreamVpoContext_dtor_1(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  return CWatchdogTimer<1>::~CWatchdogTimer<1>(a2 + 128, a2, a3, a4);
}
