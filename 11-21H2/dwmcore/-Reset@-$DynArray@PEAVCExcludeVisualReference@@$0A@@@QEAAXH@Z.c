/*
 * XREFs of ?Reset@?$DynArray@PEAVCExcludeVisualReference@@$0A@@@QEAAXH@Z @ 0x1801038E8
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x18019233C (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DynArray<CExcludeVisualReference *,0>::Reset(__int64 a1)
{
  *(_DWORD *)(a1 + 24) = 0;
  DynArrayImpl<0>::ShrinkToSize(a1, 8u);
}
