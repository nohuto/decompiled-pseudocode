/*
 * XREFs of sub_140707460 @ 0x140707460
 * Callers:
 *     sub_1407074F0 @ 0x1407074F0 (sub_1407074F0.c)
 * Callees:
 *     sub_140280D08 @ 0x140280D08 (sub_140280D08.c)
 *     sub_140281750 @ 0x140281750 (sub_140281750.c)
 *     sub_1407E5148 @ 0x1407E5148 (sub_1407E5148.c)
 */

void __fastcall sub_140707460(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned __int64 v6; // rbp
  __int64 **i; // rbx
  __int64 v8; // rcx

  v6 = sub_140281750(a1);
  sub_1407E5148(*a2, a2[1], v6, a1);
  for ( i = *(__int64 ***)(a3 + 16); i; i = (__int64 **)*i )
  {
    v8 = *((unsigned int *)i + 2);
    if ( (v8 & 0xFFF) != 0 )
      sub_1407E5148(v8, 0x2000LL, v6, a1);
  }
  sub_140280D08(a1, v6);
}
