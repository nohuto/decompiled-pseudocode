/*
 * XREFs of sub_140881840 @ 0x140881840
 * Callers:
 *     <none>
 * Callees:
 *     HalGetEnvironmentVariableEx @ 0x1403DAAF0 (HalGetEnvironmentVariableEx.c)
 */

__int64 __fastcall sub_140881840(__int64 a1, __int64 a2, const wchar_t *a3, int a4, __int64 a5, _DWORD *a6, __int64 a7)
{
  return HalGetEnvironmentVariableEx(a3, a4, a5, a6, a7);
}
