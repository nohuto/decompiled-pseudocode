/*
 * XREFs of sub_1405A5940 @ 0x1405A5940
 * Callers:
 *     sub_1405A511C @ 0x1405A511C (sub_1405A511C.c)
 *     sub_1405A5628 @ 0x1405A5628 (sub_1405A5628.c)
 *     sub_1405A5894 @ 0x1405A5894 (sub_1405A5894.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1405A5940(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned __int16 *)(a2 + 32);
  if ( (_DWORD)result != 2 )
    KeBugCheckEx(
      0x1Au,
      0x3505uLL,
      BugCheckParameter2,
      0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4),
      *(unsigned __int16 *)(a2 + 32));
  return result;
}
