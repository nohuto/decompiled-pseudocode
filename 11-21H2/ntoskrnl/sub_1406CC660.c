/*
 * XREFs of sub_1406CC660 @ 0x1406CC660
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1406F6C24 @ 0x1406F6C24 (sub_1406F6C24.c)
 *     sub_1407A501C @ 0x1407A501C (sub_1407A501C.c)
 */

__int64 __fastcall sub_1406CC660(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    sub_1407A501C(v2, *(_QWORD *)(a1 + 24), a1);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
  {
    sub_1406F6C24(v3, a1);
    ObfDereferenceObject(*(PVOID *)(a1 + 40));
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  if ( *(_QWORD *)a1 )
    ObfDereferenceObject(*(PVOID *)a1);
  return 0LL;
}
