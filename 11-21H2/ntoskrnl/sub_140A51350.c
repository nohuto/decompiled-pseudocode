/*
 * XREFs of sub_140A51350 @ 0x140A51350
 * Callers:
 *     sub_140A50D3C @ 0x140A50D3C (sub_140A50D3C.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_14036CCBC @ 0x14036CCBC (sub_14036CCBC.c)
 */

char __fastcall sub_140A51350(__int64 a1, int a2)
{
  _DWORD *v2; // rdi
  char v4; // si
  _DWORD *v5; // rbx

  v2 = *(_DWORD **)(a1 + 48);
  v4 = 0;
  ObfReferenceObjectWithTag(v2, 0x70506F50u);
  if ( v2 )
  {
    while ( (a2 & v2[12]) == 0 )
    {
      v5 = sub_14036CCBC((__int64)v2, 0x70506F50u);
      ObfDereferenceObjectWithTag(v2, 0x70506F50u);
      v2 = v5;
      if ( !v5 )
        return v4;
    }
    v4 = 1;
    ObfDereferenceObjectWithTag(v2, 0x70506F50u);
  }
  return v4;
}
