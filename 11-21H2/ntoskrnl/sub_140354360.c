/*
 * XREFs of sub_140354360 @ 0x140354360
 * Callers:
 *     sub_14067368C @ 0x14067368C (sub_14067368C.c)
 *     sub_14071F740 @ 0x14071F740 (sub_14071F740.c)
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 *     sub_1407D38A8 @ 0x1407D38A8 (sub_1407D38A8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140354360(unsigned __int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // rdx

  v3 = a1 + a2;
  if ( v3 < a1 )
  {
    *a3 = -1LL;
    return 3221225621LL;
  }
  else
  {
    *a3 = v3;
    return 0LL;
  }
}
