/*
 * XREFs of PsIsThreadImpersonating @ 0x14087F230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsIsThreadImpersonating(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1376) & 8) != 0;
}
