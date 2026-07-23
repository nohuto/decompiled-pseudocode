/*
 * XREFs of sub_1402510D0 @ 0x1402510D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1402510D0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  bool v7; // zf
  PVOID v8; // rbx

  v3 = 0;
  if ( *(int *)(a2 + 48) < 0 )
    v7 = *(_BYTE *)(a3 + 24) == 0;
  else
    v7 = *(_BYTE *)(a3 + 25) == 0;
  if ( !v7 || *(_BYTE *)(a2 + 68) && *(_BYTE *)(a3 + 26) )
  {
    v8 = *(PVOID *)a3;
    ObfReferenceObjectWithTag(*(PVOID *)a3, 0x70436F49u);
    v3 = sub_14042A5E0(a1, a2);
    ExFreePoolWithTag((PVOID)a3, 0);
    ObfDereferenceObjectWithTag(v8, 0x70436F49u);
  }
  else
  {
    if ( *(_BYTE *)(a2 + 65) )
    {
      v3 = 259;
      *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
    }
    ExFreePoolWithTag((PVOID)a3, 0);
  }
  return v3;
}
