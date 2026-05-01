/*
 * XREFs of ?_Change_array@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@AEAAXQEAU?$com_ptr@UIApplicationView@@@winrt@@_K1@Z @ 0x180685AC8
 * Callers:
 *     ??$_Emplace_reallocate@AEAU?$com_ptr@UIApplicationView@@@winrt@@@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@QEAAPEAU?$com_ptr@UIApplicationView@@@winrt@@QEAU23@AEAU23@@Z @ 0x1806810F8 (--$_Emplace_reallocate@AEAU-$com_ptr@UIApplicationView@@@winrt@@@-$vector@U-$com_ptr@UIApplicati.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@YAXPEAU?$com_ptr@UIApplicationView@@@winrt@@QEAU12@AEAV?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@0@@Z @ 0x180681040 (--$_Destroy_range@V-$allocator@U-$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@YAXPEAU-$com_pt.c)
 */

__int64 __fastcall std::vector<winrt::com_ptr<IApplicationView>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v6; // rcx
  __int64 result; // rax

  v6 = *(__int64 **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<winrt::com_ptr<IApplicationView>>>(v6, *(__int64 **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
