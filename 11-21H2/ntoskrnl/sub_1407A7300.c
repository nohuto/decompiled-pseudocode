/*
 * XREFs of sub_1407A7300 @ 0x1407A7300
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1406F6C24 @ 0x1406F6C24 (sub_1406F6C24.c)
 *     sub_1407A501C @ 0x1407A501C (sub_1407A501C.c)
 *     sub_1407A7378 @ 0x1407A7378 (sub_1407A7378.c)
 *     SeDeleteClientSecurity @ 0x1407A8070 (SeDeleteClientSecurity.c)
 */

__int64 __fastcall sub_1407A7300(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD **)a1;
  if ( v2 )
    sub_1407A501C(v2, *(_QWORD *)(a1 + 8), a1);
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    sub_1406F6C24(v3, a1);
    ObfDereferenceObject(*(PVOID *)(a1 + 24));
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
    SeDeleteClientSecurity(a1 + 32);
    sub_1407A7378(*(_QWORD *)(a1 + 16), 160LL);
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 16), 0x63706C41u);
  }
  return 0LL;
}
