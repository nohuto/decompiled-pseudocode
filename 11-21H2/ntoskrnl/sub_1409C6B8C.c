/*
 * XREFs of sub_1409C6B8C @ 0x1409C6B8C
 * Callers:
 *     sub_1407CA1C0 @ 0x1407CA1C0 (sub_1407CA1C0.c)
 *     sub_140915DB8 @ 0x140915DB8 (sub_140915DB8.c)
 *     sub_14091607C @ 0x14091607C (sub_14091607C.c)
 *     sub_140916918 @ 0x140916918 (sub_140916918.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140347A20 @ 0x140347A20 (sub_140347A20.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 */

__int64 __fastcall sub_1409C6B8C(__int64 a1, _QWORD *a2, _QWORD *a3, ACCESS_MASK a4, GENERIC_MAPPING *a5)
{
  void *v7; // rcx
  int v10; // edi

  v7 = *(void **)a1;
  if ( v7 )
    ObfReferenceObject(v7);
  ObfReferenceObject(*(PVOID *)(a1 + 16));
  v10 = sub_140347A20((_OWORD *)a1, a2, a3, a4, a5);
  if ( v10 < 0 )
  {
    if ( *(_QWORD *)a1 )
      ObfDereferenceObject(*(PVOID *)a1);
    ObfDereferenceObject(*(PVOID *)(a1 + 16));
  }
  return (unsigned int)v10;
}
