/*
 * XREFs of sub_18002A070 @ 0x18002A070
 * Callers:
 *     sub_180015AE0 @ 0x180015AE0 (sub_180015AE0.c)
 *     sub_180015C10 @ 0x180015C10 (sub_180015C10.c)
 *     sub_1800273E0 @ 0x1800273E0 (sub_1800273E0.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_180032900 @ 0x180032900 (sub_180032900.c)
 *     sub_180032D40 @ 0x180032D40 (sub_180032D40.c)
 *     sub_180033400 @ 0x180033400 (sub_180033400.c)
 *     sub_180033C44 @ 0x180033C44 (sub_180033C44.c)
 *     sub_180034A40 @ 0x180034A40 (sub_180034A40.c)
 *     sub_180036F2C @ 0x180036F2C (sub_180036F2C.c)
 *     sub_180040814 @ 0x180040814 (sub_180040814.c)
 *     sub_1800408A8 @ 0x1800408A8 (sub_1800408A8.c)
 *     sub_18004EF88 @ 0x18004EF88 (sub_18004EF88.c)
 *     sub_180057C24 @ 0x180057C24 (sub_180057C24.c)
 *     sub_180064EF0 @ 0x180064EF0 (sub_180064EF0.c)
 *     sub_1800C4D60 @ 0x1800C4D60 (sub_1800C4D60.c)
 * Callees:
 *     sub_180029E78 @ 0x180029E78 (sub_180029E78.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 */

__int64 __fastcall sub_18002A070(__int64 a1, __int64 a2)
{
  _Thrd_id_t v4; // eax
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  sub_180029E78(a2, a1);
  v4 = Thrd_id();
  sub_180029FC0(a1 + 28, (__int64)&v6, v4);
  return a2;
}
