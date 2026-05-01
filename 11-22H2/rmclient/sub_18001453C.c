/*
 * XREFs of sub_18001453C @ 0x18001453C
 * Callers:
 *     sub_180012470 @ 0x180012470 (sub_180012470.c)
 *     sub_180014518 @ 0x180014518 (sub_180014518.c)
 * Callees:
 *     sub_180016348 @ 0x180016348 (sub_180016348.c)
 */

__int64 __fastcall sub_18001453C(__int64 a1)
{
  unsigned int i; // edi
  __int64 result; // rax

  for ( i = 0; i < *(_DWORD *)(a1 + 12); ++i )
    result = sub_180016348(*(_QWORD *)(((unsigned __int64)i << 6) + *(_QWORD *)a1 + 32));
  *(_DWORD *)(a1 + 12) = 0;
  return result;
}
