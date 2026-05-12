/*
 * XREFs of sub_1C0081248 @ 0x1C0081248
 * Callers:
 *     sub_1C007C930 @ 0x1C007C930 (sub_1C007C930.c)
 *     sub_1C007D570 @ 0x1C007D570 (sub_1C007D570.c)
 *     sub_1C007D640 @ 0x1C007D640 (sub_1C007D640.c)
 *     sub_1C007EA10 @ 0x1C007EA10 (sub_1C007EA10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0081248(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = *(unsigned int *)(a1 + 12);
  if ( (unsigned int)(v2 + 1) > *(_DWORD *)(a1 + 8) )
    return 3221225507LL;
  *(_BYTE *)(v2 + *(_QWORD *)a1) = -15;
  v3 = (unsigned int)(*(_DWORD *)(a1 + 12) + 1);
  *(_DWORD *)(a1 + 12) = v3;
  if ( (unsigned int)(v3 + 1) > *(_DWORD *)(a1 + 8) )
    return 3221225507LL;
  *(_BYTE *)(v3 + *(_QWORD *)a1) = -13;
  result = 0LL;
  ++*(_DWORD *)(a1 + 12);
  return result;
}
