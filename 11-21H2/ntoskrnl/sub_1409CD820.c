/*
 * XREFs of sub_1409CD820 @ 0x1409CD820
 * Callers:
 *     <none>
 * Callees:
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 */

_QWORD *sub_1409CD820()
{
  _QWORD *result; // rax
  int v1; // r8d
  __int64 v2; // rdx

  result = sub_140347DB0();
  *(_DWORD *)(result[165] + 24LL) = v1;
  *(_DWORD *)(v2 + 40) = 0;
  return result;
}
