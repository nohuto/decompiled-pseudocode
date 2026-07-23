/*
 * XREFs of sub_1405F68C8 @ 0x1405F68C8
 * Callers:
 *     sub_1405FA434 @ 0x1405FA434 (sub_1405FA434.c)
 * Callees:
 *     sub_1405F6A08 @ 0x1405F6A08 (sub_1405F6A08.c)
 */

__int64 __fastcall sub_1405F68C8(_DWORD **a1)
{
  _DWORD *v2; // rcx

  v2 = *a1;
  if ( v2[10] <= *v2 )
    return 0LL;
  else
    return sub_1405F6A08(v2, a1);
}
