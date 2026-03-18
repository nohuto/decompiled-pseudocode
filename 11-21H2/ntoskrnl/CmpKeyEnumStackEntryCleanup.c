/*
 * XREFs of CmpKeyEnumStackEntryCleanup @ 0x14069F090
 * Callers:
 *     CmpKeyEnumStackReset @ 0x14065BC50 (CmpKeyEnumStackReset.c)
 *     CmpKeyEnumStackCleanup @ 0x14069F024 (CmpKeyEnumStackCleanup.c)
 * Callees:
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 */

__int64 __fastcall CmpKeyEnumStackEntryCleanup(_QWORD *a1)
{
  _QWORD *v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax
  _QWORD *v5; // rsi
  __int64 v6; // rbp
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  __int64 v10; // rcx

  if ( a1[1] )
  {
    v2 = a1 + 2;
    v3 = *a1;
    if ( (*(_BYTE *)(v3 + 140) & 1) != 0 )
      result = HvpReleaseCellFlat(v3, v2);
    else
      result = HvpReleaseCellPaged(v3, v2);
  }
  v5 = a1 + 10;
  v6 = 2LL;
  v7 = a1 + 12;
  do
  {
    if ( *(v5 - 5) )
    {
      v8 = *a1;
      v9 = v7 - 5;
      if ( (*(_BYTE *)(*a1 + 140LL) & 1) != 0 )
        result = HvpReleaseCellFlat(v8, v9);
      else
        result = HvpReleaseCellPaged(v8, v9);
    }
    if ( *v5 )
    {
      v10 = *a1;
      if ( (*(_BYTE *)(*a1 + 140LL) & 1) != 0 )
        result = HvpReleaseCellFlat(v10, v7);
      else
        result = HvpReleaseCellPaged(v10, v7);
    }
    ++v7;
    ++v5;
    --v6;
  }
  while ( v6 );
  return result;
}
