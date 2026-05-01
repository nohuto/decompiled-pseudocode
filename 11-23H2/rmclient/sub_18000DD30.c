/*
 * XREFs of sub_18000DD30 @ 0x18000DD30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011BC4 @ 0x180011BC4 (sub_180011BC4.c)
 */

DWORD __fastcall sub_18000DD30(DWORD dwMessageId, LPWSTR lpBuffer, DWORD nSize)
{
  const void *v6; // rax

  v6 = (const void *)sub_180011BC4();
  return FormatMessageW(0x1A00u, v6, dwMessageId, 0x400u, lpBuffer, nSize, 0LL);
}
