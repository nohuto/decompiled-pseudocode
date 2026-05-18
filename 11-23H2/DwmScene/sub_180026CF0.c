/*
 * XREFs of sub_180026CF0 @ 0x180026CF0
 * Callers:
 *     sub_1800C5D20 @ 0x1800C5D20 (sub_1800C5D20.c)
 * Callees:
 *     sub_180011CA0 @ 0x180011CA0 (sub_180011CA0.c)
 *     sub_180024BC0 @ 0x180024BC0 (sub_180024BC0.c)
 *     sub_180026238 @ 0x180026238 (sub_180026238.c)
 *     sub_18002A404 @ 0x18002A404 (sub_18002A404.c)
 */

void __fastcall sub_180026CF0(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  float v4; // xmm0_4
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  sub_18002A404(a1 + 3);
  sub_180026238((__int64)a1);
  sub_180011CA0(&v5);
  v2 = v5;
  a1[54] = v5;
  v3 = v2 - a1[53];
  a1[59] = v3;
  v4 = sub_180024BC0(v3);
  sub_18001DB68(&stru_1801C8228, 3, "RenderDevice startup duration to initialization complete: %8.3fms", v4);
}
