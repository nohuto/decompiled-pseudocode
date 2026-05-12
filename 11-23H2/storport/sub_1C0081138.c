/*
 * XREFs of sub_1C0081138 @ 0x1C0081138
 * Callers:
 *     sub_1C007B510 @ 0x1C007B510 (sub_1C007B510.c)
 *     sub_1C007D570 @ 0x1C007D570 (sub_1C007D570.c)
 *     sub_1C007E9A0 @ 0x1C007E9A0 (sub_1C007E9A0.c)
 * Callees:
 *     sub_1C0080EE8 @ 0x1C0080EE8 (sub_1C0080EE8.c)
 *     sub_1C00810F0 @ 0x1C00810F0 (sub_1C00810F0.c)
 */

__int64 __fastcall sub_1C0081138(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  __int64 v8; // r9
  __int64 v9; // rcx

  result = sub_1C00810F0(a1, a2);
  if ( (int)result >= 0 )
  {
    result = sub_1C0080EE8(a1, a3, a4, v8);
    if ( (int)result >= 0 )
    {
      v9 = *(unsigned int *)(a1 + 12);
      if ( (unsigned int)(v9 + 1) <= *(_DWORD *)(a1 + 8) )
      {
        *(_BYTE *)(v9 + *(_QWORD *)a1) = -13;
        ++*(_DWORD *)(a1 + 12);
        return 0LL;
      }
      else
      {
        return 3221225507LL;
      }
    }
  }
  return result;
}
