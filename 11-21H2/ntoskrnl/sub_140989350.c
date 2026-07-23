/*
 * XREFs of sub_140989350 @ 0x140989350
 * Callers:
 *     sub_1409882B4 @ 0x1409882B4 (sub_1409882B4.c)
 * Callees:
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY __fastcall sub_140989350(__int64 a1)
{
  _SLIST_HEADER *i; // rcx
  ULONG v3; // edx
  PSLIST_ENTRY v4; // rax
  ULONG v5; // edx
  PSLIST_ENTRY v6; // rax
  PSLIST_ENTRY result; // rax

  for ( i = (_SLIST_HEADER *)(a1 + 32); ; i = (_SLIST_HEADER *)(a1 + 32) )
  {
    v4 = ExpInterlockedPopEntrySList(i);
    if ( !v4 )
      break;
    if ( (*((_DWORD *)&v4[2].Next + 3) & 1) != 0 )
    {
      v3 = *(_DWORD *)(a1 + 68);
      *(_DWORD *)(a1 + 112) += (_DWORD)v4 - LODWORD(v4[2].Next);
      ExFreePoolWithTag(v4, v3);
    }
  }
  while ( 1 )
  {
    v6 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 16));
    if ( !v6 )
      break;
    if ( (*((_DWORD *)&v6[2].Next + 3) & 1) != 0 )
    {
      v5 = *(_DWORD *)(a1 + 68);
      *(_DWORD *)(a1 + 112) += (_DWORD)v6 - LODWORD(v6[2].Next);
      ExFreePoolWithTag(v6, v5);
    }
  }
  while ( 1 )
  {
    result = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 48));
    if ( !result )
      break;
    *(_DWORD *)(a1 + 112) -= *((_DWORD *)&result[1].Next + 2);
    ExFreePoolWithTag(result, *(_DWORD *)(a1 + 68));
  }
  return result;
}
