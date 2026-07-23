/*
 * XREFs of sub_140369ECC @ 0x140369ECC
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_14036A698 @ 0x14036A698 (sub_14036A698.c)
 *     sub_14036B090 @ 0x14036B090 (sub_14036B090.c)
 *     sub_14036B98C @ 0x14036B98C (sub_14036B98C.c)
 *     ObInsertObject @ 0x14066BA50 (ObInsertObject.c)
 *     sub_1407F0F98 @ 0x1407F0F98 (sub_1407F0F98.c)
 *     sub_1409A4784 @ 0x1409A4784 (sub_1409A4784.c)
 */

__int64 __fastcall sub_140369ECC(int a1, int a2, HANDLE *a3)
{
  char v4; // bl
  int v5; // eax
  __int64 v6; // rdx
  PVOID v7; // rdi
  NTSTATUS inserted; // esi
  int v9; // eax
  unsigned int *v10; // rbx
  PVOID Object[3]; // [rsp+30h] [rbp-18h] BYREF
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  P = 0LL;
  Object[0] = 0LL;
  v4 = a2;
  LOBYTE(a2) = 1;
  v5 = sub_14036B98C(a1, a2, 0, 1, 0LL, (__int64)&P);
  v7 = P;
  inserted = v5;
  if ( v5 >= 0 )
  {
    LOBYTE(v6) = v4;
    v9 = sub_14036A698(P, v6, Object);
    v10 = (unsigned int *)Object[0];
    inserted = v9;
    if ( v9 >= 0 )
    {
      v7 = 0LL;
      ObfReferenceObjectWithTag(Object[0], 0x72506F50u);
      inserted = ObInsertObject(v10, 0LL, 0, 0, 0LL, a3);
      if ( inserted >= 0 )
      {
        if ( (unsigned __int8)sub_1407F0F98() )
          sub_1409A4784(v10[4], v10[9], v10[26], *a3);
        inserted = 0;
      }
    }
    if ( v10 )
      ObfDereferenceObjectWithTag(v10, 0x72506F50u);
  }
  if ( v7 )
    sub_14036B090(v7);
  return (unsigned int)inserted;
}
