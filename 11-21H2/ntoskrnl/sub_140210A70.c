/*
 * XREFs of sub_140210A70 @ 0x140210A70
 * Callers:
 *     sub_140210988 @ 0x140210988 (sub_140210988.c)
 *     sub_140291710 @ 0x140291710 (sub_140291710.c)
 * Callees:
 *     sub_140210AD0 @ 0x140210AD0 (sub_140210AD0.c)
 *     sub_140210D6C @ 0x140210D6C (sub_140210D6C.c)
 */

char __fastcall sub_140210A70(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  char result; // al

  v3 = a3;
  do
  {
    result = *(_BYTE *)(a1 + 112);
    if ( (result & 2) != 0 )
      break;
    if ( (result & 1) != 0 )
    {
      result = sub_140210D6C(a2, a1, 0LL);
    }
    else
    {
      LOBYTE(a3) = v3;
      result = sub_140210AD0(a2, a1, a3);
    }
    a1 = *(_QWORD *)(a1 + 408);
  }
  while ( a1 );
  return result;
}
