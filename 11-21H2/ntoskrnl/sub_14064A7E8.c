/*
 * XREFs of sub_14064A7E8 @ 0x14064A7E8
 * Callers:
 *     sub_14022D208 @ 0x14022D208 (sub_14022D208.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14064A7E8(int a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // r10
  int v5; // edx
  int v6; // eax

  v4 = 0LL;
  v5 = 1;
  if ( a4 )
  {
    while ( v5 )
    {
      if ( (v5 & a1) != 0 )
      {
        v6 = *(_DWORD *)(a4 + 4 * v4);
        if ( v6 == 0x10000 || v6 == 196608 || v6 == 0x400000 )
          *(_DWORD *)(a4 + 4 * v4) = a3 | 0x70000;
      }
      v4 = (unsigned int)(v4 + 1);
      v5 *= 2;
    }
  }
}
