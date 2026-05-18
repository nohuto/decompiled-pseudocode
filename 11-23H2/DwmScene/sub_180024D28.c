/*
 * XREFs of sub_180024D28 @ 0x180024D28
 * Callers:
 *     sub_180024D28 @ 0x180024D28 (sub_180024D28.c)
 *     sub_180025A18 @ 0x180025A18 (sub_180025A18.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_180024D28 @ 0x180024D28 (sub_180024D28.c)
 */

__int64 __fastcall sub_180024D28(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  void *v6; // rbx
  __int64 result; // rax

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      sub_180024D28(a1, a2, v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      sub_180013300((__int64)v6 + 40);
      result = sub_1800100E8(v6, 0x40uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  return result;
}
