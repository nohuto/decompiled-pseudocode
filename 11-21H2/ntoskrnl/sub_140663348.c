/*
 * XREFs of sub_140663348 @ 0x140663348
 * Callers:
 *     sub_140662E08 @ 0x140662E08 (sub_140662E08.c)
 *     sub_14074E474 @ 0x14074E474 (sub_14074E474.c)
 * Callees:
 *     sub_140202120 @ 0x140202120 (sub_140202120.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 */

void __fastcall sub_140663348(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  PVOID v4; // rcx

  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 && (*(_DWORD *)(a1 + 40) & 0x400) == 0 && !*(_QWORD *)(a1 + 96) )
  {
    v3 = 792LL;
    if ( *(_QWORD *)(a1 + 224) )
      v3 = *(_QWORD *)(a1 + 232) + 792LL;
    *(_QWORD *)(a1 + 48) = sub_140202120(v2, v3);
    ObfDereferenceObjectWithTag(v4, 0x63706C41u);
    *(_DWORD *)(a1 + 40) |= 0x400u;
  }
}
