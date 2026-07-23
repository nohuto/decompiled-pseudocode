/*
 * XREFs of sub_14028AE58 @ 0x14028AE58
 * Callers:
 *     sub_140234D58 @ 0x140234D58 (sub_140234D58.c)
 *     sub_14028AE3C @ 0x14028AE3C (sub_14028AE3C.c)
 *     sub_1402F0574 @ 0x1402F0574 (sub_1402F0574.c)
 *     sub_140731DA0 @ 0x140731DA0 (sub_140731DA0.c)
 * Callees:
 *     sub_1402440B4 @ 0x1402440B4 (sub_1402440B4.c)
 *     sub_140347B50 @ 0x140347B50 (sub_140347B50.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_14028AE58(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  __int64 v2; // rbx
  signed __int64 v3; // rsi
  signed __int64 BugCheckParameter4; // rdi

  v2 = (int)a2;
  v3 = BugCheckParameter2 - 48;
  sub_140347B50(BugCheckParameter2 - 48, a2);
  BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)v3, -(int)v2) - v2;
  if ( BugCheckParameter4 <= 0 )
  {
    if ( *(_QWORD *)(v3 + 8) )
      KeBugCheckEx(
        0x18u,
        qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(v3 + 24) ^ (unsigned __int64)BYTE1(v3)],
        BugCheckParameter2,
        6uLL,
        *(_QWORD *)(v3 + 8));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 5uLL, BugCheckParameter4);
    sub_1402440B4(v3);
  }
  return BugCheckParameter4;
}
