/*
 * XREFs of sub_18002A244 @ 0x18002A244
 * Callers:
 *     sub_180033400 @ 0x180033400 (sub_180033400.c)
 *     sub_1800341C8 @ 0x1800341C8 (sub_1800341C8.c)
 *     sub_180034264 @ 0x180034264 (sub_180034264.c)
 *     sub_1800342AC @ 0x1800342AC (sub_1800342AC.c)
 *     sub_180034328 @ 0x180034328 (sub_180034328.c)
 *     sub_1800344A0 @ 0x1800344A0 (sub_1800344A0.c)
 *     sub_180035944 @ 0x180035944 (sub_180035944.c)
 *     sub_18003655C @ 0x18003655C (sub_18003655C.c)
 *     sub_1800365A8 @ 0x1800365A8 (sub_1800365A8.c)
 *     sub_18003699C @ 0x18003699C (sub_18003699C.c)
 * Callees:
 *     sub_180029FA0 @ 0x180029FA0 (sub_180029FA0.c)
 *     sub_18002A21C @ 0x18002A21C (sub_18002A21C.c)
 *     sub_18002A2E0 @ 0x18002A2E0 (sub_18002A2E0.c)
 *     sub_18002A334 @ 0x18002A334 (sub_18002A334.c)
 *     sub_18002A638 @ 0x18002A638 (sub_18002A638.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18002A244(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  _BYTE v6[32]; // [rsp+28h] [rbp-20h] BYREF

  *(_QWORD *)a2 = 0LL;
  *(_BYTE *)(a2 + 8) = 0;
  if ( !(unsigned __int8)sub_18002A334(a1) && !(unsigned __int8)sub_18002A2E0(a1) )
  {
    v4 = sub_18002A21C(a1, (__int64)v6);
    if ( *(_BYTE *)(a2 + 8) )
      sub_18002A638(*(_QWORD *)a2);
    *(_QWORD *)a2 = *(_QWORD *)v4;
    *(_BYTE *)(a2 + 8) = *(_BYTE *)(v4 + 8);
    *(_QWORD *)v4 = 0LL;
    *(_BYTE *)(v4 + 8) = 0;
    sub_180029FA0((__int64)v6);
  }
  return a2;
}
