/*
 * XREFs of CmpQueryKeyData @ 0x1406D6284
 * Callers:
 *     CmQueryKey @ 0x1406D7200 (CmQueryKey.c)
 * Callees:
 *     CmpQueryKeyDataFromCache @ 0x1406D4FE0 (CmpQueryKeyDataFromCache.c)
 *     CmpQueryKeyDataFromNode @ 0x1406DAA80 (CmpQueryKeyDataFromNode.c)
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpQueryKeyData(__int64 a1, int a2, __int64 a3, unsigned int a4, _DWORD *a5, __int64 a6)
{
  unsigned int v8; // ebx
  ULONG_PTR v10; // rdx
  ULONG_PTR v11; // rcx
  __int64 CellFlat; // rax
  unsigned int KeyDataFromNode; // eax
  __int64 v14; // rcx
  _DWORD v15[6]; // [rsp+40h] [rbp-18h] BYREF

  v15[0] = -1;
  v15[1] = 0;
  if ( a2 == 4 )
  {
    return (unsigned int)CmpQueryKeyDataFromCache(a1, 4, a3, a4, a5, a6);
  }
  else
  {
    v10 = *(unsigned int *)(a1 + 40);
    v11 = *(_QWORD *)(a1 + 32);
    if ( (*(_BYTE *)(v11 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(v11, v10);
    else
      CellFlat = HvpGetCellPaged(v11);
    if ( CellFlat )
    {
      KeyDataFromNode = CmpQueryKeyDataFromNode(*(_QWORD *)(a1 + 32), a4, (__int64)a5, a1, a6);
      v14 = *(_QWORD *)(a1 + 32);
      v8 = KeyDataFromNode;
      if ( (*(_BYTE *)(v14 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v14, v15);
      else
        HvpReleaseCellPaged(v14, v15);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v8;
}
