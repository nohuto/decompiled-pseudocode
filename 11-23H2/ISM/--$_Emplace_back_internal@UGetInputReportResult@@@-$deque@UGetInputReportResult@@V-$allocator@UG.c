/*
 * XREFs of ??$_Emplace_back_internal@UGetInputReportResult@@@?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@AEAAX$$QEAUGetInputReportResult@@@Z @ 0x1800E1B1C
 * Callers:
 *     ?OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800E2340 (-OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x18003E074 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Growmap@?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@AEAAX_K@Z @ 0x1800E2864 (-_Growmap@-$deque@UGetInputReportResult@@V-$allocator@UGetInputReportResult@@@std@@@std@@AEAAX_K.c)
 */

__int64 __fastcall std::deque<GetInputReportResult>::_Emplace_back_internal<GetInputReportResult>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rsi
  size_t size_of; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 result; // rax

  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<GetInputReportResult>::_Growmap();
  v4 = a1[2] - 1LL;
  a1[3] &= v4;
  v5 = v4 & (a1[4] + a1[3]);
  if ( !*(_QWORD *)(a1[1] + 8 * v5) )
  {
    size_of = std::_Get_size_of_n<24>(1uLL);
    *(_QWORD *)(a1[1] + 8 * v5) = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  }
  v7 = *(_QWORD *)(a1[1] + 8 * v5);
  *(_DWORD *)v7 = *(_DWORD *)a2;
  v8 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(v7 + 8) = v8;
  result = *(unsigned int *)(a2 + 16);
  *(_DWORD *)(v7 + 16) = result;
  ++a1[4];
  return result;
}
