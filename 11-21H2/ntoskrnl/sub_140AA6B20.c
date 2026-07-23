/*
 * XREFs of sub_140AA6B20 @ 0x140AA6B20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1405FFB44 @ 0x1405FFB44 (sub_1405FFB44.c)
 */

__int64 __fastcall sub_140AA6B20(const void **a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, const void *a6)
{
  int v6; // ebx
  __int64 result; // rax

  v6 = *((_DWORD *)*a1 + 12);
  if ( v6 != -1073741637 )
  {
    result = sub_1405FFB44(0x20Fu, a6, *a1);
    if ( v6 < 0 )
    {
      result = a5;
      *(_DWORD *)(a5 + 4) |= 0x2000000u;
    }
  }
  return result;
}
