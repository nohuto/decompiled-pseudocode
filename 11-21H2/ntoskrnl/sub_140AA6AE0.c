/*
 * XREFs of sub_140AA6AE0 @ 0x140AA6AE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1405FFB44 @ 0x1405FFB44 (sub_1405FFB44.c)
 */

__int64 __fastcall sub_140AA6AE0(const void **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( *((_DWORD *)*a1 + 12) == -1073741637 && *(_DWORD *)(a3 + 96) != -1073741637 )
    return sub_1405FFB44(0x21Au, *(const void **)(a4 + 40), *a1);
  return result;
}
