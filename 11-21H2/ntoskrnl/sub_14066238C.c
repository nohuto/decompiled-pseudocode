/*
 * XREFs of sub_14066238C @ 0x14066238C
 * Callers:
 *     sub_140662E08 @ 0x140662E08 (sub_140662E08.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14066238C(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a2 + 40) & 7) == 1 )
    --*(_DWORD *)(a1 + 448);
  else
    --*(_DWORD *)(a1 + 452);
  *(_DWORD *)(a2 + 40) &= 0xFFFFFFF8;
  *(_QWORD *)(a2 + 16) = 0LL;
  **(_QWORD **)(a2 + 8) = *(_QWORD *)a2;
  result = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(*(_QWORD *)a2 + 8LL) = result;
  return result;
}
