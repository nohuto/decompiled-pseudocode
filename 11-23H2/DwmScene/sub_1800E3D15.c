/*
 * XREFs of sub_1800E3D15 @ 0x1800E3D15
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800124EC @ 0x1800124EC (sub_1800124EC.c)
 */

__int64 __fastcall sub_1800E3D15(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_1800124EC();
  }
  return result;
}
