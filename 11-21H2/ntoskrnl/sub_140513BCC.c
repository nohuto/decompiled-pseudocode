/*
 * XREFs of sub_140513BCC @ 0x140513BCC
 * Callers:
 *     sub_140513870 @ 0x140513870 (sub_140513870.c)
 *     sub_140908F2C @ 0x140908F2C (sub_140908F2C.c)
 * Callees:
 *     sub_140457862 @ 0x140457862 (sub_140457862.c)
 *     sub_14045795A @ 0x14045795A (sub_14045795A.c)
 */

void __fastcall sub_140513BCC(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax

  v2 = *(_QWORD *)(a2 + 48);
  if ( (v2 & 1) != 0 )
  {
    if ( !*(_BYTE *)(a1 + 144) )
      a1 = *(_QWORD *)(a1 + 152);
    v3 = v2 | 4;
    if ( (v3 & 2) != 0 )
    {
      *(_QWORD *)(a2 + 48) = v3 | 8;
      sub_14045795A(a1, a2, 1);
    }
    else
    {
      *(_QWORD *)(a2 + 48) = v3 & 0xFFFFFFFFFFFFFFF7uLL;
      sub_140457862(a1, a2, 1);
    }
  }
}
