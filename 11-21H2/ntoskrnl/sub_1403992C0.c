/*
 * XREFs of sub_1403992C0 @ 0x1403992C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140389160 @ 0x140389160 (sub_140389160.c)
 *     sub_14053D2E4 @ 0x14053D2E4 (sub_14053D2E4.c)
 */

char __fastcall sub_1403992C0(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a2 )
    sub_14053D2E4(a2, a3);
  else
    sub_140389160(a1, a3);
  return 1;
}
