/*
 * XREFs of sub_18000DAD0 @ 0x18000DAD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FEFC @ 0x18000FEFC (sub_18000FEFC.c)
 */

DWORD __fastcall sub_18000DAD0(DWORD dwMessageId, LPWSTR lpBuffer, DWORD nSize)
{
  const void *v6; // rax

  v6 = (const void *)sub_18000FEFC();
  return FormatMessageW(0x1A00u, v6, dwMessageId, 0x400u, lpBuffer, nSize, 0LL);
}
