/*
 * XREFs of _lambda_3729ee5694c21d370e67b314ad1382e5_::operator() @ 0x18042F528
 * Callers:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_MonitorFrame_________lambda_3729ee5694c21d370e67b314ad1382e5___ @ 0x18042CD9C (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_M.c)
 * Callees:
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1800F65E4 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DismissAnimated@MonitorFrame@@QEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z @ 0x1804335B4 (-DismissAnimated@MonitorFrame@@QEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_3729ee5694c21d370e67b314ad1382e5_::operator()(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v6; // rcx

  v3 = *a2;
  v4 = __abi_winrt_cast_to(
         0,
         *(__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))(*(_QWORD *)a1 + 200LL),
         (__int64)&_uuidof__AUIMonitorFrameDismissAnimationCallback__);
  result = MonitorFrame::DismissAnimated(v3, v4);
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v6 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return result;
}
