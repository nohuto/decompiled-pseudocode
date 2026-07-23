/*
 * XREFs of sub_1407C0890 @ 0x1407C0890
 * Callers:
 *     sub_140346D80 @ 0x140346D80 (sub_140346D80.c)
 *     sub_140832FD0 @ 0x140832FD0 (sub_140832FD0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

unsigned __int64 __fastcall sub_1407C0890(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbp
  unsigned __int64 v9; // rbx

  v5 = a3;
  v6 = a2;
  v7 = a2 + a4 * a3;
  if ( a2 < v7 )
  {
    do
    {
      v9 = v6 + a4 * (v5 >> 1);
      if ( (int)sub_14042A5E0(a1, v9) > 0 )
      {
        v6 = v9 + a4;
        v5 += -1LL - (v5 >> 1);
      }
      else
      {
        v5 >>= 1;
        v7 = v9;
      }
    }
    while ( v6 < v7 );
  }
  return v6;
}
