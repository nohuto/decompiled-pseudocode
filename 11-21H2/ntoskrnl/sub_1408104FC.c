/*
 * XREFs of sub_1408104FC @ 0x1408104FC
 * Callers:
 *     sub_14071E8F0 @ 0x14071E8F0 (sub_14071E8F0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_1406DB04C @ 0x1406DB04C (sub_1406DB04C.c)
 */

__int64 __fastcall sub_1408104FC(PVOID *a1, PVOID *a2, DWORD *a3, void *a4, POOL_TYPE a5, GENERIC_MAPPING *a6)
{
  unsigned int v7; // edi
  PVOID *v10; // rbx
  unsigned int v11; // eax
  PVOID *v12; // rsi

  v7 = 0;
  v10 = a2;
  ObfReferenceObject(a2);
  do
  {
    v11 = sub_1406DB04C((__int64)v10, a3, a4, a5, a6);
    v12 = (PVOID *)v10[3];
    if ( v10 == a1 )
      v7 = v11;
    if ( v12 )
      ObfReferenceObject(v10[3]);
    ObfDereferenceObject(v10);
    v10 = v12;
  }
  while ( v12 );
  return v7;
}
