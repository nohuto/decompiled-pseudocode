/*
 * XREFs of sub_180034328 @ 0x180034328
 * Callers:
 *     sub_180033400 @ 0x180033400 (sub_180033400.c)
 *     sub_180067610 @ 0x180067610 (sub_180067610.c)
 * Callees:
 *     sub_180015678 @ 0x180015678 (sub_180015678.c)
 *     sub_180029FA0 @ 0x180029FA0 (sub_180029FA0.c)
 *     sub_18002A244 @ 0x18002A244 (sub_18002A244.c)
 *     sub_180034264 @ 0x180034264 (sub_180034264.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180034328(__int64 a1, _QWORD *a2)
{
  unsigned int i; // ebx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_18002A244(a1 + 112, (__int64)v6);
  for ( i = 0; i < (unsigned int)sub_180034264(a1); ++i )
  {
    if ( sub_180015678((_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL * i), a2) )
      goto LABEL_6;
  }
  i = -1;
LABEL_6:
  sub_180029FA0((__int64)v6);
  return i;
}
