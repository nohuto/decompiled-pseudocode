/*
 * XREFs of sub_180026E50 @ 0x180026E50
 * Callers:
 *     sub_1800C6AC0 @ 0x1800C6AC0 (sub_1800C6AC0.c)
 * Callees:
 *     sub_180011CA0 @ 0x180011CA0 (sub_180011CA0.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     sub_180024BC0 @ 0x180024BC0 (sub_180024BC0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_180026E50(__int64 a1)
{
  __int64 v2; // rcx
  bool v3; // zf
  __int64 v4; // rcx
  float v5; // xmm0_4
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 272) + 48LL))(*(_QWORD *)(a1 + 272));
  sub_180011CA0(&v6);
  v2 = v6;
  v3 = *(_DWORD *)(a1 + 3884) == 1;
  *(_QWORD *)(a1 + 488) = v6 - *(_QWORD *)(a1 + 464);
  *(_QWORD *)(a1 + 464) = v2;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 456) = v2;
    v4 = v2 - *(_QWORD *)(a1 + 424);
    *(_QWORD *)(a1 + 472) = v4;
    v5 = sub_180024BC0(v4);
    sub_18001DB68(&stru_1801C8228, 3, "RenderDevice startup duration until first frame presented: %8.3fms", v5);
  }
}
