/*
 * XREFs of sub_180028EA0 @ 0x180028EA0
 * Callers:
 *     sub_1800DC1A0 @ 0x1800DC1A0 (sub_1800DC1A0.c)
 * Callees:
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 *     sub_180026A18 @ 0x180026A18 (sub_180026A18.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_180028EA0(__int64 a1)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v4; // rax
  bool v5; // zf
  __int64 v6; // rax
  float v7; // xmm0_4

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 272) + 48LL))(*(_QWORD *)(a1 + 272));
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v4 = 1000000000 * (perf_counter / perf_frequency) + 1000000000 * (perf_counter % perf_frequency) / perf_frequency;
  v5 = *(_DWORD *)(a1 + 3884) == 1;
  *(_QWORD *)(a1 + 488) = v4 - *(_QWORD *)(a1 + 464);
  *(_QWORD *)(a1 + 464) = v4;
  if ( v5 )
  {
    *(_QWORD *)(a1 + 456) = v4;
    v6 = v4 - *(_QWORD *)(a1 + 424);
    *(_QWORD *)(a1 + 472) = v6;
    v7 = sub_180026A18(v6);
    sub_18001F2B4(&stru_1801EA228, 3, "RenderDevice startup duration until first frame presented: %8.3fms", v7);
  }
}
