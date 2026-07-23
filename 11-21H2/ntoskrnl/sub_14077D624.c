/*
 * XREFs of sub_14077D624 @ 0x14077D624
 * Callers:
 *     sub_14036B8CC @ 0x14036B8CC (sub_14036B8CC.c)
 *     SeQueryServerSiloToken @ 0x1406C1480 (SeQueryServerSiloToken.c)
 *     sub_1406E9070 @ 0x1406E9070 (sub_1406E9070.c)
 *     SeQuerySessionIdTokenEx @ 0x14077D580 (SeQuerySessionIdTokenEx.c)
 *     sub_1409E8E6C @ 0x1409E8E6C (sub_1409E8E6C.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402DF880 @ 0x1402DF880 (sub_1402DF880.c)
 */

__int64 __fastcall sub_14077D624(unsigned int a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax

  v3 = (_QWORD *)sub_1402DF880(a1);
  if ( !v3 )
    return 3221226581LL;
  v4 = *(_QWORD *)(v3[171] + 880LL);
  ObfDereferenceObject(v3);
  result = 0LL;
  *a2 = v4;
  return result;
}
