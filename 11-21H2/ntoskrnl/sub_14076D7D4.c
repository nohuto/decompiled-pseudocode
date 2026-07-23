/*
 * XREFs of sub_14076D7D4 @ 0x14076D7D4
 * Callers:
 *     sub_140779A08 @ 0x140779A08 (sub_140779A08.c)
 * Callees:
 *     sub_14076D824 @ 0x14076D824 (sub_14076D824.c)
 *     sub_14076D9FC @ 0x14076D9FC (sub_14076D9FC.c)
 *     sub_14076DC10 @ 0x14076DC10 (sub_14076DC10.c)
 */

__int64 __fastcall sub_14076D7D4(__int64 a1)
{
  unsigned int v1; // r9d
  __int64 v2; // rdx
  __int64 v5; // r8

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 4) & 2) == 0 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( *(_DWORD *)(v2 + 28) == 1 )
    {
      return (unsigned int)sub_14076D824(a1, v2, (unsigned int)(*(_DWORD *)(v2 + 28) - 1), 0LL);
    }
    else
    {
      v5 = (unsigned int)(*(_DWORD *)(v2 + 28) - 3);
      if ( *(_DWORD *)(v2 + 28) == 3 )
      {
        return (unsigned int)sub_14076D9FC(a1, v2, v5, 0LL);
      }
      else
      {
        if ( *(_DWORD *)(v2 + 28) != 5 )
          return v1;
        return (unsigned int)sub_14076DC10(a1, v2, v5, 0LL);
      }
    }
  }
  return v1;
}
