/*
 * XREFs of sub_180026000 @ 0x180026000
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011CA0 @ 0x180011CA0 (sub_180011CA0.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     sub_180024BC0 @ 0x180024BC0 (sub_180024BC0.c)
 */

void __fastcall sub_180026000(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  float v4; // xmm0_4
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( ++*(_DWORD *)(a1 + 3884) == 1 )
  {
    sub_180011CA0(&v5);
    v2 = v5;
    *(_QWORD *)(a1 + 448) = v5;
    v3 = v2 - *(_QWORD *)(a1 + 424);
    *(_QWORD *)(a1 + 480) = v3;
    v4 = sub_180024BC0(v3);
    sub_18001DB68(&stru_1801C8228, 3, "RenderDevice startup duration until first frame begin: %8.3fms", v4);
  }
}
