/*
 * XREFs of sub_1C00668E8 @ 0x1C00668E8
 * Callers:
 *     sub_1C0037720 @ 0x1C0037720 (sub_1C0037720.c)
 * Callees:
 *     sub_1C0066974 @ 0x1C0066974 (sub_1C0066974.c)
 */

__int64 __fastcall sub_1C00668E8(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int v3; // esi
  __int64 v4; // rdx
  __int64 result; // rax

  v2 = 0;
  v3 = *(_DWORD *)(a1 + 548) / *(_DWORD *)(a1 + 904);
  do
  {
    v4 = 320LL * v2;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)(*(_QWORD *)(a1 + 896) + v4 + 136),
                             0,
                             0);
    if ( (unsigned int)result > v3 )
      result = sub_1C0066974(v4 + *(_QWORD *)(a1 + 896), v3);
    ++v2;
  }
  while ( v2 < *(_DWORD *)(a1 + 904) );
  return result;
}
