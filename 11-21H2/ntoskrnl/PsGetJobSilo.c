/*
 * XREFs of PsGetJobSilo @ 0x140212000
 * Callers:
 *     sub_140690378 @ 0x140690378 (sub_140690378.c)
 *     sub_140690CFC @ 0x140690CFC (sub_140690CFC.c)
 *     sub_140691898 @ 0x140691898 (sub_140691898.c)
 *     sub_1407F5E04 @ 0x1407F5E04 (sub_1407F5E04.c)
 *     sub_1407F5F80 @ 0x1407F5F80 (sub_1407F5F80.c)
 *     sub_1409262FC @ 0x1409262FC (sub_1409262FC.c)
 *     sub_140926868 @ 0x140926868 (sub_140926868.c)
 * Callees:
 *     sub_140212034 @ 0x140212034 (sub_140212034.c)
 */

__int64 __fastcall PsGetJobSilo(__int64 a1)
{
  __int64 v1; // rax
  __int64 *v2; // rdx

  if ( !a1 )
    return 3221225485LL;
  v1 = sub_140212034();
  if ( !v1 )
    return 3221226761LL;
  *v2 = v1;
  return 0LL;
}
