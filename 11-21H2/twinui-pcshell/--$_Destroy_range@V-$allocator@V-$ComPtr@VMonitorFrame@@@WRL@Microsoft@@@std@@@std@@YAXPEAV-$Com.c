/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@0@@Z @ 0x18042C49C
 * Callers:
 *     _std::vector_Microsoft::WRL::ComPtr_MonitorFrame__std::allocator_Microsoft::WRL::ComPtr_MonitorFrame_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_MonitorFrame__const_&__::_1_::catch$0 @ 0x18042C766 (_std--vector_Microsoft--WRL--ComPtr_MonitorFrame__std--allocator_Microsoft--WRL--ComPtr_MonitorF.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@0@@Z @ 0x18042C9B4 (--$_Uninitialized_move@PEAV-$ComPtr@VMonitorFrame@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VMonit.c)
 *     ??1XamlAllUpViewHost@@UEAA@XZ @ 0x18042EEA0 (--1XamlAllUpViewHost@@UEAA@XZ.c)
 *     ?_Change_array@?$vector@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@_K1@Z @ 0x18043A120 (-_Change_array@-$vector@V-$ComPtr@VMonitorFrame@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VMonitor.c)
 *     ?v_DismissView@XamlAllUpViewHost@@MEAAXXZ @ 0x18043FB60 (-v_DismissView@XamlAllUpViewHost@@MEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<MonitorFrame>>>(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
