/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x140064648
 * Callers:
 *     ??1?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@@std@@QEAA@XZ @ 0x140064D0C (--1-$list@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$com_ptr_t.c)
 *     ??1?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@@std@@QEAA@XZ @ 0x140064DA8 (--1-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$com_ptr_t@VC.c)
 *     ??1CAPOProcessingHost@@UEAA@XZ @ 0x140064DF8 (--1CAPOProcessingHost@@UEAA@XZ.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x14002D290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node<std::pair<std::wstring const,wil::com_ptr_t<CAPOEndpointNotificationsHandler,wil::err_returncode_policy>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<std::wstring const,wil::com_ptr_t<CAPOEndpointNotificationsHandler,wil::err_returncode_policy>>,void *>>>(
        __int64 a1,
        __int64 a2)
{
  void *v2; // rbx
  void *v3; // rdi
  unsigned __int64 v4; // rdx

  **(_QWORD **)(a2 + 8) = 0LL;
  v2 = *(void **)a2;
  if ( *(_QWORD *)a2 )
  {
    do
    {
      v3 = *(void **)v2;
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)v2 + 6);
      v4 = *((_QWORD *)v2 + 5);
      if ( v4 >= 8 )
        std::_Deallocate<16,0>(*((void **)v2 + 2), 2 * v4 + 2);
      *((_QWORD *)v2 + 4) = 0LL;
      *((_QWORD *)v2 + 5) = 7LL;
      *((_WORD *)v2 + 8) = 0;
      std::_Deallocate<16,0>(v2, 0x38uLL);
      v2 = v3;
    }
    while ( v3 );
  }
}
