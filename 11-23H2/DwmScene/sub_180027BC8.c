/*
 * XREFs of sub_180027BC8 @ 0x180027BC8
 * Callers:
 *     sub_180027BC8 @ 0x180027BC8 (sub_180027BC8.c)
 *     sub_180028004 @ 0x180028004 (sub_180028004.c)
 *     sub_18002988C @ 0x18002988C (sub_18002988C.c)
 *     sub_180085E18 @ 0x180085E18 (sub_180085E18.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_180027BC8 @ 0x180027BC8 (sub_180027BC8.c)
 */

__int64 __fastcall sub_180027BC8(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  void *v6; // rcx
  __int64 result; // rax

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      sub_180027BC8(a1, a2, v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      result = sub_1800100E8(v6, 0x28uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  return result;
}
