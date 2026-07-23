/*
 * XREFs of sub_1407DFF0C @ 0x1407DFF0C
 * Callers:
 *     sub_1407DF140 @ 0x1407DF140 (sub_1407DF140.c)
 *     sub_1407DF200 @ 0x1407DF200 (sub_1407DF200.c)
 *     sub_1407DFE00 @ 0x1407DFE00 (sub_1407DFE00.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1407DFFD8 @ 0x1407DFFD8 (sub_1407DFFD8.c)
 */

void __fastcall sub_1407DFF0C(__int64 a1, __int64 a2, char a3)
{
  int v5; // eax
  void *v6; // rcx
  void *v7; // rcx

  if ( a3 )
  {
    v5 = *(_DWORD *)(a1 + 48);
    if ( (v5 & 1) != 0 )
    {
      ObfDereferenceObject(*(PVOID *)(a1 + 32));
      *(_QWORD *)(a1 + 32) = 0LL;
      *(_DWORD *)(a1 + 48) &= ~1u;
      v5 = *(_DWORD *)(a1 + 48);
    }
    if ( (v5 & 2) != 0 )
    {
      ObfDereferenceObject(*(PVOID *)(a1 + 40));
      *(_QWORD *)(a1 + 40) = 0LL;
      *(_DWORD *)(a1 + 48) &= ~2u;
      v5 = *(_DWORD *)(a1 + 48);
    }
    if ( (v5 & 4) != 0 )
    {
      sub_1407DFFD8(a1, *(_QWORD *)(a2 + 8));
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
      *(_QWORD *)(a1 + 24) = 0x200000000LL;
      *(_DWORD *)(a1 + 48) &= ~4u;
    }
  }
  else
  {
    v6 = *(void **)(a1 + 32);
    if ( v6 )
      ObfDereferenceObject(v6);
    v7 = *(void **)(a1 + 40);
    if ( v7 )
      ObfDereferenceObject(v7);
    if ( _bittest64((const signed __int64 *)(a1 + 24), 0x22u) )
      sub_1407DFFD8(a1, *(_QWORD *)(a2 + 8));
  }
}
