/*
 * XREFs of sub_140546FB0 @ 0x140546FB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140544670 @ 0x140544670 (sub_140544670.c)
 */

__int64 __fastcall sub_140546FB0(int a1, _DWORD *a2)
{
  __int64 result; // rax
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  result = sub_140544670(a1, &v4);
  *a2 = v4;
  return result;
}
