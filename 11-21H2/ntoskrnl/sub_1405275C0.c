/*
 * XREFs of sub_1405275C0 @ 0x1405275C0
 * Callers:
 *     sub_14090AB10 @ 0x14090AB10 (sub_14090AB10.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405275C0(int a1, char a2, unsigned int a3)
{
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  if ( !a2 )
    return 3221225659LL;
  LODWORD(v4) = a1;
  BYTE4(v4) = a2;
  return sub_14042A5E0(&v4, a3);
}
