/*
 * XREFs of sub_140250B00 @ 0x140250B00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402C1D70 @ 0x1402C1D70 (sub_1402C1D70.c)
 */

__int64 __fastcall sub_140250B00(__int64 a1)
{
  _DWORD *v1; // rax

  v1 = *(_DWORD **)(a1 + 168);
  if ( v1[5] )
    sub_1402C1D70(*(_QWORD *)(a1 + 24), v1 + 2, *v1 & 4);
  return 0LL;
}
