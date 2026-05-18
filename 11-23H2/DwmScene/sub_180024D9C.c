/*
 * XREFs of sub_180024D9C @ 0x180024D9C
 * Callers:
 *     sub_180024D9C @ 0x180024D9C (sub_180024D9C.c)
 *     sub_180025A48 @ 0x180025A48 (sub_180025A48.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18001DE1C @ 0x18001DE1C (sub_18001DE1C.c)
 *     sub_180024D9C @ 0x180024D9C (sub_180024D9C.c)
 */

__int64 __fastcall sub_180024D9C(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  void *v6; // rbx
  __int64 v7; // rdx
  __int64 result; // rax

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      sub_180024D9C(a1, a2, v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      sub_18001DE1C((__int64)v6 + 40, v7);
      result = sub_1800100E8(v6, 0x68uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  return result;
}
