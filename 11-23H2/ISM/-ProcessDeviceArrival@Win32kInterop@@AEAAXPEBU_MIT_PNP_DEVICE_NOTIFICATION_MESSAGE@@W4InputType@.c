/*
 * XREFs of ?ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@W4InputType@@@Z @ 0x18003EB00
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_2b41a082a50d31d24644deaedcc451d5__void__MIT_PNP_DEVICE_NOTIFICATION_MESSAGE_const___::_Do_call @ 0x18003E9D0 (std--_Func_impl_no_alloc__lambda_2b41a082a50d31d24644deaedcc451d5__void__MIT_PNP_DE_ea_18003E9D0.c)
 * Callees:
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x18001A404 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18001F2F0 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ?CreateDeviceInfo@Win32kInterop@@AEAA?AV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@W4InputType@@PEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x18003EC60 (-CreateDeviceInfo@Win32kInterop@@AEAA-AV-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegac.c)
 *     ??$_Insert_or_assign@AEBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@?$unordered_map@KV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBK$$QEAV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@1@@Z @ 0x18003ED80 (--$_Insert_or_assign@AEBKV-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo@@@.c)
 *     ?ProcessDeviceArrival@Win32kInterop@InputETW@@SAXK@Z @ 0x18003F294 (-ProcessDeviceArrival@Win32kInterop@InputETW@@SAXK@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AC18 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UnsuppressForDeviceArrivalImpl@CursorSuppressionProcessor@@AEAAXK@Z @ 0x18015893C (-UnsuppressForDeviceArrivalImpl@CursorSuppressionProcessor@@AEAAXK@Z.c)
 *     ?TriggerUpdateInputTarget@CursorProcessor@@SAXXZ @ 0x180159510 (-TriggerUpdateInputTarget@CursorProcessor@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Win32kInterop::ProcessDeviceArrival(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rcx
  unsigned int v7; // ebp
  unsigned __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rcx
  int v11; // eax
  ULONG v12; // [rsp+20h] [rbp-58h]
  void *v13; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  switch ( a3 )
  {
    case 2u:
      v6 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                         a1,
                         _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
           + 1);
      if ( *(_DWORD *)v6 > 4u && (*(_BYTE *)(v6 + 16) & 8) != 0 && (*(_QWORD *)(v6 + 24) & 8LL) == *(_QWORD *)(v6 + 24) )
        tlgWriteTransfer_EventWriteTransfer(v6, (int)&dword_18022698E, 0, 0, 2u, &v14);
      if ( CursorProcessor::s_processor )
        *((_BYTE *)CursorProcessor::s_processor + 72) = 1;
      if ( CursorSuppressionProcessor::s_processor )
        CursorSuppressionProcessor::UnsuppressForDeviceArrivalImpl(
          (CursorSuppressionProcessor *)v6,
          *(_DWORD *)(a2 + 4));
      break;
    case 0x20u:
      CursorProcessor::TriggerUpdateInputTarget();
      break;
    case 0u:
      return;
  }
  v7 = *(_DWORD *)(a2 + 4);
  LODWORD(v13) = v7;
  v8 = 0LL;
  v9 = 0xCBF29CE484222325uLL;
  do
    v9 = 0x100000001B3LL * (*((unsigned __int8 *)&v13 + v8++) ^ (unsigned __int64)v9);
  while ( v8 < 4 );
  if ( !std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::_Find_last<unsigned long>(
          (_QWORD *)(a1 + 64),
          &v14,
          &v13,
          v9)[1] )
  {
    InputETW::Win32kInterop::ProcessDeviceArrival(v7);
    Win32kInterop::CreateDeviceInfo(v10, &v13, a3, a2);
    v11 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(**(_QWORD **)(a1 + 56) + 40LL))(
            *(_QWORD *)(a1 + 56),
            v13,
            a1);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1D8,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v11,
        v12);
    std::unordered_map<unsigned long,std::unique_ptr<LegacyDeviceInfo>>::_Insert_or_assign<unsigned long const &,std::unique_ptr<LegacyDeviceInfo>>(
      a1 + 64,
      &v14,
      v13,
      &v13);
    if ( v13 )
      operator delete(v13, 0x60CuLL);
  }
}
