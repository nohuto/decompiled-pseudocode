/*
 * XREFs of sub_1C0081208 @ 0x1C0081208
 * Callers:
 *     sub_1C007C930 @ 0x1C007C930 (sub_1C007C930.c)
 *     sub_1C007D570 @ 0x1C007D570 (sub_1C007D570.c)
 *     sub_1C007D640 @ 0x1C007D640 (sub_1C007D640.c)
 *     sub_1C007EA10 @ 0x1C007EA10 (sub_1C007EA10.c)
 * Callees:
 *     sub_1C00810F0 @ 0x1C00810F0 (sub_1C00810F0.c)
 */

__int64 __fastcall sub_1C0081208(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = sub_1C00810F0(a1, a2);
  if ( (int)result >= 0 )
  {
    v4 = *(unsigned int *)(a1 + 12);
    if ( (unsigned int)(v4 + 1) <= *(_DWORD *)(a1 + 8) )
    {
      *(_BYTE *)(v4 + *(_QWORD *)a1) = -16;
      ++*(_DWORD *)(a1 + 12);
      return 0LL;
    }
    else
    {
      return 3221225507LL;
    }
  }
  return result;
}
