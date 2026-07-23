/*
 * XREFs of sub_140B4C610 @ 0x140B4C610
 * Callers:
 *     <none>
 * Callees:
 *     sub_14090A17C @ 0x14090A17C (sub_14090A17C.c)
 */

__int64 __fastcall sub_140B4C610(const void *a1, const void *a2)
{
  return sub_14090A17C(*(_DWORD *)a1, *((_DWORD *)a1 + 5), *(_DWORD *)a2, *((_DWORD *)a2 + 5));
}
