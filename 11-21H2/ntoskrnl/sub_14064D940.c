/*
 * XREFs of sub_14064D940 @ 0x14064D940
 * Callers:
 *     sub_14064D5F4 @ 0x14064D5F4 (sub_14064D5F4.c)
 * Callees:
 *     sub_1403A8954 @ 0x1403A8954 (sub_1403A8954.c)
 */

__int64 __fastcall sub_14064D940(__int64 a1, _QWORD *a2, unsigned int *a3)
{
  __int64 v5; // rcx
  unsigned int v6; // eax

  if ( !a1 || !a2 && !a3 || (*(_DWORD *)(a1 + 72) & 1) == 0 )
    return 3221225485LL;
  if ( a2 )
    *(_QWORD *)a1 = *a2;
  if ( a3 )
  {
    v5 = *(_QWORD *)(a1 + 24);
    if ( v5 )
    {
      v6 = *a3;
      if ( *(_DWORD *)(a1 + 40) != *a3 )
      {
        *(_DWORD *)(a1 + 40) = v6;
        sub_1403A8954(v5, v6);
      }
    }
    *(_DWORD *)(a1 + 44) = a3[1];
  }
  return 0LL;
}
