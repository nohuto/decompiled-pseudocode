/*
 * XREFs of ?make_folder_change_reader@wil@@YA?AV?$unique_any_t@V?$folder_change_reader_t@V?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@1@PEBG_NW4FolderChangeEvents@1@$$QEAV?$function@$$A6AXW4FolderChangeEvent@wil@@PEBG@Z@wistd@@@Z @ 0x18021DF80
 * Callers:
 *     ?StartMonitor@StartupAppMonitor@@QEAAXXZ @ 0x18063F3CC (-StartMonitor@StartupAppMonitor@@QEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?create_common@?$folder_change_reader_t@V?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@AEAAJPEBG_NW4FolderChangeEvents@2@$$QEAV?$function@$$A6AXW4FolderChangeEvent@wil@@PEBG@Z@wistd@@@Z @ 0x180640DAC (-create_common@-$folder_change_reader_t@V-$unique_storage@U-$resource_policy@PEAUfolder_change_r.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::make_folder_change_reader(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int common; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a1 = 0LL;
  common = wil::folder_change_reader_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>,wil::err_exception_policy>::create_common(
             a1,
             a2,
             0LL,
             287LL);
  if ( common < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1815,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)common,
      a5);
  return a1;
}
