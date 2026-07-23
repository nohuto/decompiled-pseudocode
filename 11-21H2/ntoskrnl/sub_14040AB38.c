/*
 * XREFs of sub_14040AB38 @ 0x14040AB38
 * Callers:
 *     sub_140400BD4 @ 0x140400BD4 (sub_140400BD4.c)
 * Callees:
 *     sub_1403FDDE8 @ 0x1403FDDE8 (sub_1403FDDE8.c)
 *     sub_14040B1B0 @ 0x14040B1B0 (sub_14040B1B0.c)
 */

__int64 __fastcall sub_14040AB38(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  unsigned int v11; // ecx
  unsigned int v12; // ecx

  result = sub_14040B1B0((void *)(a1 + 32), (void *)((a4 + 32) & -(__int64)(a4 != 0)), a5, a6);
  if ( a3 )
  {
    result = *(unsigned int *)(a3 + 4);
    v11 = *(_DWORD *)(a1 + 4);
    if ( (unsigned int)result > v11 )
      result = sub_1403FDDE8(a3 + 4 * (16 * v11 + 8LL), ((unsigned int)result - v11) << 6);
  }
  if ( a4 )
  {
    result = *(unsigned int *)(a4 + 4);
    v12 = *(_DWORD *)(a2 + 4);
    if ( (unsigned int)result > v12 )
      return sub_1403FDDE8(a4 + 4 * (16 * v12 + 8LL), ((unsigned int)result - v12) << 6);
  }
  return result;
}
