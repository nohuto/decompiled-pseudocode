/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18057EF54
 * Callers:
 *     _wil::make_folder_change_reader_::_1_::dtor$2 @ 0x1801BE325 (_wil--make_folder_change_reader_--_1_--dtor$2.c)
 *     ??1FOLDERINFO@@QEAA@XZ @ 0x18057EFB0 (--1FOLDERINFO@@QEAA@XZ.c)
 *     ?StartMonitor@StartupAppMonitor@@QEAAXXZ @ 0x1805803E4 (-StartMonitor@StartupAppMonitor@@QEAAXXZ.c)
 * Callees:
 *     ?delete_folder_change_reader_state@details@wil@@YAXPEAUfolder_change_reader_state@12@@Z @ 0x1805823F0 (-delete_folder_change_reader_state@details@wil@@YAXPEAUfolder_change_reader_state@12@@Z.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>(
        wil::details **a1,
        struct wil::details::folder_change_reader_state *a2)
{
  wil::details *v2; // rcx

  v2 = *a1;
  if ( v2 )
    wil::details::delete_folder_change_reader_state(v2, a2);
}
