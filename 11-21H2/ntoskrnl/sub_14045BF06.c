/*
 * XREFs of sub_14045BF06 @ 0x14045BF06
 * Callers:
 *     sub_14045BDA0 @ 0x14045BDA0 (sub_14045BDA0.c)
 *     sub_1405974D0 @ 0x1405974D0 (sub_1405974D0.c)
 * Callees:
 *     sub_140226EE0 @ 0x140226EE0 (sub_140226EE0.c)
 *     sub_140273234 @ 0x140273234 (sub_140273234.c)
 *     sub_140386110 @ 0x140386110 (sub_140386110.c)
 */

__int64 __fastcall sub_14045BF06(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  _DWORD *v7; // r9
  __int64 v8; // r11
  __int64 v9; // rdx

  result = sub_140273234(a3);
  v9 = (unsigned int)v7[1];
  if ( (*v7 & 2) != 0 )
  {
    if ( (_DWORD)v9 == 8 || (_DWORD)result == (_DWORD)v9 )
      return sub_140226EE0(a1, v8, (__int64)(v7 + 6), 0);
  }
  else if ( (unsigned int)result > (unsigned int)v9 )
  {
    return sub_140386110(v5, v9, v6, (__int64)v7);
  }
  return result;
}
