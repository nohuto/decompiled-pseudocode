/*
 * XREFs of CmpKeyEnumStackEntryBegin @ 0x14065BDD8
 * Callers:
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x14065BD24 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 * Callees:
 *     CmpCompareKeysByName @ 0x14065C51C (CmpCompareKeysByName.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     CmpDoFindSubKeyByNumber @ 0x1407C82B0 (CmpDoFindSubKeyByNumber.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpKeyEnumStackEntryBegin(_QWORD *a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v5; // rcx
  ULONG_PTR v6; // rdx
  __int64 CellFlat; // rax
  __int64 *v8; // rsi
  unsigned int *v9; // rdi
  __int64 result; // rax
  _QWORD *v11; // rbp
  __int64 v12; // r8
  __int64 v13; // r15
  unsigned int v14; // edx
  unsigned int v15; // eax
  ULONG_PTR v16; // rcx
  __int64 CellPaged; // rax
  unsigned int SubKeyByNumber; // eax
  ULONG_PTR v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx

  *a1 = *(_QWORD *)a2;
  v5 = *(_QWORD *)a2;
  v6 = *(unsigned int *)(a2 + 8);
  if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v5, v6);
  else
    CellFlat = HvpGetCellPaged(v5);
  a1[1] = CellFlat;
  v8 = a1 + 10;
  v9 = (unsigned int *)(a1 + 3);
  result = -4LL - (_QWORD)a1;
  v11 = a1 + 12;
  v12 = 4LL - (_QWORD)a1;
  v13 = 2LL;
  do
  {
    v14 = *(unsigned int *)((char *)v9 + result + a1[1]);
    v9[2] = v14;
    if ( a3 )
      v15 = *(unsigned int *)((char *)v9 + a3 - (_QWORD)a1 - 8);
    else
      v15 = 0;
    *v9 = v15;
    if ( v14 > v15 )
    {
      v16 = *a1;
      if ( (*(_BYTE *)(*a1 + 140LL) & 1) != 0 )
        CellPaged = HvpGetCellFlat(v16, *(unsigned int *)((char *)v9 + v12 + a1[1]));
      else
        CellPaged = HvpGetCellPaged(v16);
      *(v8 - 5) = CellPaged;
      SubKeyByNumber = CmpDoFindSubKeyByNumber(*a1);
      v9[12] = SubKeyByNumber;
      v19 = *a1;
      if ( (*(_BYTE *)(*a1 + 140LL) & 1) != 0 )
        v20 = HvpGetCellFlat(v19, SubKeyByNumber);
      else
        v20 = HvpGetCellPaged(v19);
      *v8 = v20;
      v21 = a1[15];
      if ( !v21 || (int)CmpCompareKeysByName(v20, v21) < 0 )
      {
        a1[15] = *v8;
        *((_DWORD *)a1 + 28) = v9[12];
      }
      v12 = 4LL - (_QWORD)a1;
    }
    result = -4LL - (_QWORD)a1;
    ++v11;
    ++v8;
    ++v9;
    --v13;
  }
  while ( v13 );
  return result;
}
