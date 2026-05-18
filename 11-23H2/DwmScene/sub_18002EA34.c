/*
 * XREFs of sub_18002EA34 @ 0x18002EA34
 * Callers:
 *     sub_18002EA34 @ 0x18002EA34 (sub_18002EA34.c)
 *     sub_1800318BC @ 0x1800318BC (sub_1800318BC.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_18002EA34 @ 0x18002EA34 (sub_18002EA34.c)
 */

__int64 __fastcall sub_18002EA34(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  void *v6; // rbx
  __int64 result; // rax

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      sub_18002EA34(a1, a2, v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      sub_180013348((__int64)v6 + 64);
      result = sub_1800100E8(v6, 0x60uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  return result;
}
