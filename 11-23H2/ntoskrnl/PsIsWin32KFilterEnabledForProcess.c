/*
 * XREFs of PsIsWin32KFilterEnabledForProcess @ 0x14035D280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsIsWin32KFilterEnabledForProcess(__int64 a1)
{
  return (*(_DWORD *)(a1 + 2512) & 0x4000) != 0;
}
