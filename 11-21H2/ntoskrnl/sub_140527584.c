/*
 * XREFs of sub_140527584 @ 0x140527584
 * Callers:
 *     sub_14051AD44 @ 0x14051AD44 (sub_14051AD44.c)
 *     sub_140528380 @ 0x140528380 (sub_140528380.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140527584(int a1, __int64 a2)
{
  __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  if ( !(_BYTE)a2 )
    return 3221225659LL;
  LODWORD(v3) = a1;
  BYTE4(v3) = a2;
  return sub_14042A5E0(&v3, a2);
}
