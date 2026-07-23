/*
 * XREFs of PsGetPermanentSiloContext @ 0x140211FA0
 * Callers:
 *     sub_140690BDC @ 0x140690BDC (sub_140690BDC.c)
 *     sub_140690C50 @ 0x140690C50 (sub_140690C50.c)
 *     sub_140690CFC @ 0x140690CFC (sub_140690CFC.c)
 *     sub_140691898 @ 0x140691898 (sub_140691898.c)
 *     sub_1406928FC @ 0x1406928FC (sub_1406928FC.c)
 *     sub_1407349A0 @ 0x1407349A0 (sub_1407349A0.c)
 *     sub_1407CB6C0 @ 0x1407CB6C0 (sub_1407CB6C0.c)
 *     sub_1407F5F80 @ 0x1407F5F80 (sub_1407F5F80.c)
 *     sub_14080F9EC @ 0x14080F9EC (sub_14080F9EC.c)
 *     sub_140859318 @ 0x140859318 (sub_140859318.c)
 *     sub_1409262FC @ 0x1409262FC (sub_1409262FC.c)
 *     sub_140926868 @ 0x140926868 (sub_140926868.c)
 *     sub_1409ABED8 @ 0x1409ABED8 (sub_1409ABED8.c)
 *     sub_140A34854 @ 0x140A34854 (sub_140A34854.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetPermanentSiloContext(__int64 a1, unsigned int a2, unsigned __int64 *a3)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1496);
  else
    v3 = qword_140D32A90;
  *a3 = 0LL;
  if ( a2 >= 0x20 )
  {
    a2 -= 32;
    if ( a2 >= 0x100 )
      return 3221225485LL;
    v3 = *(_QWORD *)(v3 + 512);
    if ( !v3 )
      return 3221226021LL;
  }
  v4 = *(_QWORD *)(v3 + 16LL * a2 + 8);
  if ( (v4 & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    return 3221226021LL;
  if ( (v4 & 1) == 0 )
    return 3221225659LL;
  *a3 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
  return 0LL;
}
