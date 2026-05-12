/*
 * XREFs of sub_1C007C8A0 @ 0x1C007C8A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C00811A0 @ 0x1C00811A0 (sub_1C00811A0.c)
 */

__int64 __fastcall sub_1C007C8A0(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  __int64 v4; // rcx
  unsigned int v7; // ecx
  __int64 result; // rax
  __int64 v9; // rcx

  v4 = *(unsigned int *)(a3 + 12);
  if ( (unsigned int)(v4 + 1) > *(_DWORD *)(a3 + 8) )
    return 3221225507LL;
  *(_BYTE *)(v4 + *(_QWORD *)a3) = -16;
  ++*(_DWORD *)(a3 + 12);
  v7 = a4[1];
  if ( !v7
    || v7 < *a4
    || (result = sub_1C00811A0(a3, 3LL, *a4), (int)result >= 0)
    && (result = sub_1C00811A0(a3, 4LL, a4[1]), (int)result >= 0) )
  {
    v9 = *(unsigned int *)(a3 + 12);
    if ( (unsigned int)(v9 + 1) > *(_DWORD *)(a3 + 8) )
      return 3221225507LL;
    *(_BYTE *)(v9 + *(_QWORD *)a3) = -15;
    ++*(_DWORD *)(a3 + 12);
    return 0LL;
  }
  return result;
}
