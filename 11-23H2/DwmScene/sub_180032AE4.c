/*
 * XREFs of sub_180032AE4 @ 0x180032AE4
 * Callers:
 *     sub_180035390 @ 0x180035390 (sub_180035390.c)
 * Callees:
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_180035B90 @ 0x180035B90 (sub_180035B90.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180032AE4(__int64 a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_18002A0C4(a1 + 312, (__int64)v3);
  sub_180035B90(a1);
  if ( *(_QWORD *)(a1 + 288) != *(_QWORD *)(a1 + 296) )
    sub_18001DB68(&stru_1801C8288, 5, "Engine::CheckAllLoadersDestroyed() -- detected live Loader objects!");
  return sub_180010F54((__int64)v3);
}
