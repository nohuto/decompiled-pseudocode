/*
 * XREFs of ExSecurePoolUpdate @ 0x14063F650
 * Callers:
 *     <none>
 * Callees:
 *     sub_14054F710 @ 0x14054F710 (sub_14054F710.c)
 */

__int64 __fastcall ExSecurePoolUpdate(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        struct _MDL *a7)
{
  if ( a6 && a7 && a1 )
    return sub_14054F710(a1, a2, a3, a4, a5, a6, a7);
  else
    return 3221225485LL;
}
