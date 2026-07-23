/*
 * XREFs of sub_14093F8A0 @ 0x14093F8A0
 * Callers:
 *     <none>
 * Callees:
 *     HalSetEnvironmentVariableEx @ 0x140508800 (HalSetEnvironmentVariableEx.c)
 */

__int64 __fastcall sub_14093F8A0(__int64 a1, __int64 a2, const wchar_t *a3, int a4, __int64 a5, int a6, int a7)
{
  return HalSetEnvironmentVariableEx(a3, a4, a5, a6, a7);
}
