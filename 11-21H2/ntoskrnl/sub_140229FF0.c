/*
 * XREFs of sub_140229FF0 @ 0x140229FF0
 * Callers:
 *     sub_1406FDCD0 @ 0x1406FDCD0 (sub_1406FDCD0.c)
 *     sub_140701218 @ 0x140701218 (sub_140701218.c)
 *     sub_140731DA0 @ 0x140731DA0 (sub_140731DA0.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 */

unsigned __int64 __fastcall sub_140229FF0(ULONG_PTR BugCheckParameter2, int a2)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // rax

  v3 = a2;
  if ( dword_140D05010 )
    sub_1405C5EC8(BugCheckParameter2 - 48);
  v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 48), v3);
  if ( v4 <= 0 )
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x10uLL, v3 + v4);
  return v3 + v4;
}
