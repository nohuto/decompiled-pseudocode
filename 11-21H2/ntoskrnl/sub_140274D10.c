/*
 * XREFs of sub_140274D10 @ 0x140274D10
 * Callers:
 *     sub_140226EE0 @ 0x140226EE0 (sub_140226EE0.c)
 *     sub_140272A10 @ 0x140272A10 (sub_140272A10.c)
 *     sub_140274860 @ 0x140274860 (sub_140274860.c)
 *     sub_14027B820 @ 0x14027B820 (sub_14027B820.c)
 *     sub_14027E810 @ 0x14027E810 (sub_14027E810.c)
 *     DnsPrint_RpcZoneInfo @ 0x1402E97D4 (DnsPrint_RpcZoneInfo.c)
 *     sub_140367190 @ 0x140367190 (sub_140367190.c)
 *     sub_140374BBC @ 0x140374BBC (sub_140374BBC.c)
 *     sub_1405972B4 @ 0x1405972B4 (sub_1405972B4.c)
 * Callees:
 *     sub_140274D80 @ 0x140274D80 (sub_140274D80.c)
 *     sub_140333040 @ 0x140333040 (sub_140333040.c)
 */

__int64 __fastcall sub_140274D10(__int64 a1, _BYTE *a2)
{
  unsigned __int64 v4; // rdx
  __int64 result; // rax

  v4 = (__int64)((_QWORD)a2 << 25) >> 16;
  if ( v4 >= 0xFFFFF68000000000uLL && (result = 0xFFFFF6FFFFFFFFFFuLL, v4 <= 0xFFFFF6FFFFFFFFFFuLL)
    || (result = sub_140274D80(0xFFFFF68000000000uLL, v4), (_BYTE)result != 7) )
  {
    if ( (*a2 & 0x20) != 0 )
      return sub_140333040(a1, a2);
  }
  return result;
}
