/*
 * XREFs of ??$emplace_back@UGetInputReportResult@@@?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@QEAAAEAUGetInputReportResult@@$$QEAU2@@Z @ 0x1800C817C
 * Callers:
 *     ?OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800C8970 (-OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x180004EC0 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Growmap@?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@AEAAX_K@Z @ 0x1800C8EA4 (-_Growmap@-$deque@UGetInputReportResult@@V-$allocator@UGetInputReportResult@@@std@@@std@@AEAAX_K.c)
 */

__int64 __fastcall std::deque<GetInputReportResult>::emplace_back<GetInputReportResult>(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v4; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  size_t size_of; // rax
  __int64 v10; // rcx
  __int64 v11; // rax

  v2 = a1[4];
  v4 = a1[2];
  if ( v4 <= v2 + 1 )
  {
    std::deque<GetInputReportResult>::_Growmap(a1);
    v4 = a1[2];
    v2 = a1[4];
  }
  a1[3] &= v4 - 1;
  v6 = v4 - 1;
  v7 = a1[1];
  v8 = v6 & (v2 + a1[3]);
  if ( !*(_QWORD *)(v7 + 8 * v8) )
  {
    size_of = std::_Get_size_of_n<24>(1uLL);
    *(_QWORD *)(a1[1] + 8 * v8) = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v7 = a1[1];
  }
  v10 = *(_QWORD *)(v7 + 8 * v8);
  *(_DWORD *)v10 = *(_DWORD *)a2;
  v11 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(v10 + 8) = v11;
  *(_DWORD *)(v10 + 16) = *(_DWORD *)(a2 + 16);
  return *(_QWORD *)(a1[1] + 8 * ((a1[3] + a1[4]++) & (a1[2] - 1LL)));
}
