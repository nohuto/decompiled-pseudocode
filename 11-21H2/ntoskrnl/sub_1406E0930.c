/*
 * XREFs of sub_1406E0930 @ 0x1406E0930
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1406F6C24 @ 0x1406F6C24 (sub_1406F6C24.c)
 *     sub_1407A501C @ 0x1407A501C (sub_1407A501C.c)
 *     sub_1407A6A34 @ 0x1407A6A34 (sub_1407A6A34.c)
 *     sub_1407A7628 @ 0x1407A7628 (sub_1407A7628.c)
 */

__int64 __fastcall sub_1406E0930(PVOID *a1)
{
  ULONG_PTR v1; // rdi
  PVOID v3; // rcx

  v1 = (ULONG_PTR)a1[3];
  if ( v1 )
  {
    sub_1407A6A34((ULONG_PTR)a1[3]);
    *(_QWORD *)(v1 + 96) = 0LL;
    a1[3] = 0LL;
    sub_1407A7628(v1);
  }
  v3 = a1[1];
  if ( v3 )
    sub_1407A501C(v3, a1[2], a1);
  if ( *a1 )
  {
    sub_1406F6C24(*a1, a1);
    ObfDereferenceObject(*a1);
  }
  return 0LL;
}
