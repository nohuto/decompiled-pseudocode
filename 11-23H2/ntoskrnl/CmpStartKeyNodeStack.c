/*
 * XREFs of CmpStartKeyNodeStack @ 0x140A20548
 * Callers:
 *     CmSaveKey @ 0x140A0BC40 (CmSaveKey.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140A205FC (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpSubtreeEnumeratorStart @ 0x140A209E0 (CmpSubtreeEnumeratorStart.c)
 *     CmpKeyEnumStackStart @ 0x140A244EC (CmpKeyEnumStackStart.c)
 * Callees:
 *     CmpAllocatePool @ 0x14022CFFC (CmpAllocatePool.c)
 *     HvpGetCellContextReinitialize @ 0x1406E02CC (HvpGetCellContextReinitialize.c)
 */

__int64 __fastcall CmpStartKeyNodeStack(__int64 a1, __int16 a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rbp
  __int64 Pool; // rax
  __int64 v7; // rdi
  __int64 v8; // rcx

  v3 = 0;
  if ( a2 < 2 )
    goto LABEL_6;
  LOWORD(v5) = a2 - 1;
  Pool = CmpAllocatePool(256LL, 32LL * a2 - 32, 959860035LL);
  *(_QWORD *)(a1 + 72) = Pool;
  if ( Pool )
  {
    v7 = 0LL;
    v5 = (unsigned __int16)v5;
    do
    {
      v8 = *(_QWORD *)(a1 + 72);
      *(_OWORD *)(v7 + v8) = 0LL;
      *(_OWORD *)(v7 + v8 + 16) = 0LL;
      *(_DWORD *)(v7 + v8 + 8) = -1;
      HvpGetCellContextReinitialize((_QWORD *)(v7 + v8 + 24));
      v7 += 32LL;
      --v5;
    }
    while ( v5 );
LABEL_6:
    *(_WORD *)a1 = a2;
    return v3;
  }
  return (unsigned int)-1073741670;
}
