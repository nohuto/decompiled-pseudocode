/*
 * XREFs of sub_140A6F0C0 @ 0x140A6F0C0
 * Callers:
 *     sub_140299280 @ 0x140299280 (sub_140299280.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140A6F0C0(__int64 a1)
{
  return (*(_DWORD *)a1 == -2147483645 || *(_DWORD *)a1 == 1073741855) && *(_DWORD *)(a1 + 24) && *(_QWORD *)(a1 + 32);
}
