/*
 * XREFs of sub_14081BA34 @ 0x14081BA34
 * Callers:
 *     sub_140397424 @ 0x140397424 (sub_140397424.c)
 *     sub_14081B500 @ 0x14081B500 (sub_14081B500.c)
 * Callees:
 *     sub_140811A68 @ 0x140811A68 (sub_140811A68.c)
 */

__int64 __fastcall sub_14081BA34(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&v5 = 0LL;
  DWORD2(v5) = 0;
  sub_140811A68(&v5);
  result = 0LL;
  if ( *(_QWORD *)(a2 + 8) )
  {
    *(_DWORD *)a1 = v5 | *(_DWORD *)a2;
    result = *((_QWORD *)&v5 + 1) - *(_QWORD *)(a2 + 8);
  }
  else
  {
    *(_DWORD *)a1 = 1;
  }
  *(_QWORD *)(a1 + 8) = result;
  *(_OWORD *)a2 = v5;
  return result;
}
