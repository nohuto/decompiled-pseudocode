/*
 * XREFs of sub_140592CD0 @ 0x140592CD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140592CD0(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  if ( a3 == 3 )
  {
    v4 = sub_1402CFEB0(a2);
    if ( (unsigned int)sub_14027B080(v4) != 8 )
      return 1LL;
  }
  else if ( !a3 )
  {
    v7 = sub_140317A10(a2);
    if ( (v7 & 1) != 0 )
    {
      v6 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v7) >> 12) & 0xFFFFFFFFFFLL;
      if ( (*(_QWORD *)(48 * v6 - 0x21FFFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        sub_14042A5E0(**(_QWORD **)(a1 + 168), v6);
    }
  }
  return 0LL;
}
