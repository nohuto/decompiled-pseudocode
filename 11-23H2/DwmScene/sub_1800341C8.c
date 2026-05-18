/*
 * XREFs of sub_1800341C8 @ 0x1800341C8
 * Callers:
 *     sub_1800185E0 @ 0x1800185E0 (sub_1800185E0.c)
 *     sub_180019608 @ 0x180019608 (sub_180019608.c)
 *     sub_180033CA0 @ 0x180033CA0 (sub_180033CA0.c)
 *     sub_1800344A0 @ 0x1800344A0 (sub_1800344A0.c)
 *     sub_180035390 @ 0x180035390 (sub_180035390.c)
 *     sub_180035944 @ 0x180035944 (sub_180035944.c)
 *     sub_18003699C @ 0x18003699C (sub_18003699C.c)
 *     sub_18006D0BC @ 0x18006D0BC (sub_18006D0BC.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180029FA0 @ 0x180029FA0 (sub_180029FA0.c)
 *     sub_18002A244 @ 0x18002A244 (sub_18002A244.c)
 *     sub_180034264 @ 0x180034264 (sub_180034264.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800341C8(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned __int64 v3; // rsi
  __int64 v6; // rdx
  _BYTE v8[32]; // [rsp+28h] [rbp-20h] BYREF

  v3 = a3;
  sub_18002A244(a1 + 112, (__int64)v8);
  if ( (unsigned int)v3 >= (unsigned int)sub_180034264(a1) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v6 = (unsigned int)v3;
    if ( (__int64)(*(_QWORD *)(a1 + 96) - *(_QWORD *)(a1 + 88)) >> 4 <= v3 )
    {
      std::_Xout_of_range("invalid vector subscript");
      __debugbreak();
    }
    sub_18001246C(a2, (_QWORD *)(*(_QWORD *)(a1 + 88) + 16 * v6));
  }
  sub_180029FA0((__int64)v8);
  return a2;
}
