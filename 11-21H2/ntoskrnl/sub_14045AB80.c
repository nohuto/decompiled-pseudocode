/*
 * XREFs of sub_14045AB80 @ 0x14045AB80
 * Callers:
 *     sub_14028FFD0 @ 0x14028FFD0 (sub_14028FFD0.c)
 *     sub_14030F970 @ 0x14030F970 (sub_14030F970.c)
 *     sub_14045AD66 @ 0x14045AD66 (sub_14045AD66.c)
 *     sub_140574018 @ 0x140574018 (sub_140574018.c)
 *     sub_140576AA4 @ 0x140576AA4 (sub_140576AA4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14045AB80(__int64 a1, int a2)
{
  __int64 result; // rax
  signed __int32 v3; // ett

  do
  {
    v3 = *(_DWORD *)(a1 + 512);
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 512), a2 | v3 & 0xFFFFFF00, v3);
  }
  while ( v3 != (_DWORD)result );
  return result;
}
