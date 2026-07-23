/*
 * XREFs of sub_1405C11C0 @ 0x1405C11C0
 * Callers:
 *     sub_1405C0D40 @ 0x1405C0D40 (sub_1405C0D40.c)
 * Callees:
 *     sub_140235E10 @ 0x140235E10 (sub_140235E10.c)
 */

__int64 __fastcall sub_1405C11C0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD *v4; // rcx

  result = a1 + 24LL * (unsigned int)sub_140235E10((__int64)a2);
  v4 = *(_QWORD **)(result + 8);
  if ( *v4 != result )
    __fastfail(3u);
  *a2 = result;
  a2[1] = v4;
  *v4 = a2;
  *(_QWORD *)(result + 8) = a2;
  ++*(_QWORD *)(result + 16);
  return result;
}
