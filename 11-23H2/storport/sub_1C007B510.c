/*
 * XREFs of sub_1C007B510 @ 0x1C007B510
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0081138 @ 0x1C0081138 (sub_1C0081138.c)
 *     sub_1C00811A0 @ 0x1C00811A0 (sub_1C00811A0.c)
 */

__int64 __fastcall sub_1C007B510(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v7; // r9d
  __int64 v8; // r8

  result = sub_1C00811A0(a3, 0LL, *(_QWORD *)a4);
  if ( (int)result >= 0 )
  {
    v7 = *(_DWORD *)(a4 + 24);
    v8 = *(_QWORD *)(a4 + 16);
    if ( v7 >= *(_DWORD *)(a3 + 8) - *(_DWORD *)(a3 + 12) - 14 )
      v7 = *(_DWORD *)(a3 + 8) - *(_DWORD *)(a3 + 12) - 14;
    *(_DWORD *)(a4 + 24) = v7;
    return sub_1C0081138(a3, 1LL, v8);
  }
  return result;
}
