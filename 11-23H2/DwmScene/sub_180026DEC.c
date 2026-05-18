/*
 * XREFs of sub_180026DEC @ 0x180026DEC
 * Callers:
 *     sub_180032D40 @ 0x180032D40 (sub_180032D40.c)
 * Callees:
 *     sub_180011CA0 @ 0x180011CA0 (sub_180011CA0.c)
 *     sub_180024BC0 @ 0x180024BC0 (sub_180024BC0.c)
 */

void __fastcall sub_180026DEC(__int64 a1)
{
  int v2; // ecx
  float v3; // xmm0_4
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  sub_180011CA0(&v4);
  v2 = v4;
  *(_QWORD *)(a1 + 440) = v4;
  v3 = sub_180024BC0(v2 - *(_DWORD *)(a1 + 424));
  sub_18001DB68(&stru_1801C8228, 3, "RenderDevice startup duration to attach complete: %8.3fms", v3);
}
