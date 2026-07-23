/*
 * XREFs of sub_1402803FC @ 0x1402803FC
 * Callers:
 *     sub_14024076C @ 0x14024076C (sub_14024076C.c)
 *     sub_14027FEF8 @ 0x14027FEF8 (sub_14027FEF8.c)
 *     sub_140334C40 @ 0x140334C40 (sub_140334C40.c)
 *     sub_1405C3C6C @ 0x1405C3C6C (sub_1405C3C6C.c)
 * Callees:
 *     sub_1402804F0 @ 0x1402804F0 (sub_1402804F0.c)
 *     sub_1402806A0 @ 0x1402806A0 (sub_1402806A0.c)
 *     sub_1402806E0 @ 0x1402806E0 (sub_1402806E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_1403536F0 @ 0x1403536F0 (sub_1403536F0.c)
 */

__int64 __fastcall sub_1402803FC(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v13; // rdx
  int v14; // [rsp+20h] [rbp-18h] BYREF
  __int64 v15; // [rsp+28h] [rbp-10h] BYREF

  v7 = sub_1402804F0();
  v8 = v7;
  if ( v7 )
  {
    v9 = sub_140317A10(v7);
    v10 = v9;
    if ( v8 != a3 )
    {
      if ( (v9 & 0x400) == 0 )
        return 0LL;
      if ( (unsigned int)sub_1402806A0(v9) )
      {
        v15 = 0LL;
        v14 = 0;
        v11 = sub_1403536F0(a2, &v14, &v15);
        if ( v15 )
        {
          LOBYTE(v13) = 17;
          sub_1402806E0(1LL, v13);
        }
      }
      else
      {
        if ( qword_140C50780 )
        {
          if ( (v10 & 0x10) != 0 )
            v10 &= ~0x10uLL;
          else
            v10 &= ~qword_140C50780;
        }
        v11 = v10 >> 16;
      }
      if ( v11 != a3 )
        return 0LL;
      v10 = sub_140317A10(v11);
    }
    if ( v10 == *a4 )
      return 1LL;
  }
  return 0LL;
}
