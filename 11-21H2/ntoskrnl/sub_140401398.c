/*
 * XREFs of sub_140401398 @ 0x140401398
 * Callers:
 *     sub_140401470 @ 0x140401470 (sub_140401470.c)
 * Callees:
 *     sub_140400090 @ 0x140400090 (sub_140400090.c)
 *     sub_140400C00 @ 0x140400C00 (sub_140400C00.c)
 *     sub_140400D10 @ 0x140400D10 (sub_140400D10.c)
 *     sub_140400DE4 @ 0x140400DE4 (sub_140400DE4.c)
 */

__int64 __fastcall sub_140401398(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  char v8; // r14
  unsigned int v11; // esi
  unsigned int v12; // edi

  v8 = a4;
  if ( (a4 & 0xFFFFFFF7) != 0 )
  {
    return 209715726;
  }
  else
  {
    v12 = sub_140400090(a1);
    if ( 8 * a3 > v12 )
      a3 = (unsigned __int64)(v12 + 7) >> 3;
    v11 = sub_140400D10();
    if ( !v11 )
    {
      if ( (v8 & 8) == 0 && 8 * (int)a3 > v12 )
        sub_140400C00();
      sub_140400DE4(a6, *(_QWORD *)(a1 + 624), a5, a7, a8);
    }
  }
  return v11;
}
