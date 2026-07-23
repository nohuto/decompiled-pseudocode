/*
 * XREFs of sub_1406C61D8 @ 0x1406C61D8
 * Callers:
 *     sub_14068A024 @ 0x14068A024 (sub_14068A024.c)
 * Callees:
 *     sub_140247B20 @ 0x140247B20 (sub_140247B20.c)
 *     sub_14079B0D0 @ 0x14079B0D0 (sub_14079B0D0.c)
 */

__int64 __fastcall sub_1406C61D8(ULONG_PTR BugCheckParameter2)
{
  unsigned int v2; // esi
  __int64 result; // rax
  int v4; // ebp
  int v5; // r14d
  unsigned int v6; // ebx
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0;
  v2 = *(_DWORD *)(BugCheckParameter2 + 88);
  result = 0LL;
  v4 = *(_DWORD *)(BugCheckParameter2 + 104);
  while ( (unsigned int)result < v2 )
  {
    result = sub_140247B20(BugCheckParameter2 + 88, result, &v7);
    v5 = result;
    if ( !(_DWORD)result )
      break;
    v6 = v7;
    sub_14079B0D0(BugCheckParameter2, v7 << 9);
    result = v5 + v6;
    v4 -= v5;
    if ( !v4 )
      break;
  }
  return result;
}
