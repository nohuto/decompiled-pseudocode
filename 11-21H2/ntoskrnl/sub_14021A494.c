/*
 * XREFs of sub_14021A494 @ 0x14021A494
 * Callers:
 *     sub_140218C94 @ 0x140218C94 (sub_140218C94.c)
 *     sub_140218D80 @ 0x140218D80 (sub_140218D80.c)
 * Callees:
 *     sub_140300374 @ 0x140300374 (sub_140300374.c)
 */

__int64 __fastcall sub_14021A494(__int64 a1)
{
  bool v1; // zf
  __int64 i; // rdx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 12) == 1;
  *(_DWORD *)(a1 + 8) = 0;
  if ( !v1 && *(_QWORD *)(a1 + 16) )
  {
    for ( i = 56LL; i < 72; i += 8LL )
      *(_QWORD *)(i + *(_QWORD *)(a1 + 16)) = 0LL;
    return sub_140300374(*(_QWORD *)(a1 + 16));
  }
  return result;
}
