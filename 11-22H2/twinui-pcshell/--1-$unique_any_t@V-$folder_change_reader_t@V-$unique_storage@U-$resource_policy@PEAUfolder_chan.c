/*
 * XREFs of ??1?$unique_any_t@V?$folder_change_reader_t@V?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAA@XZ @ 0x18063DF64
 * Callers:
 *     _wil::make_folder_change_reader_::_1_::dtor$2 @ 0x18021DFD1 (_wil--make_folder_change_reader_--_1_--dtor$2.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::AppBackupListener_::_1_::dtor$14 @ 0x1802B4ACD (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--AppBackupListe_ea_1802B4ACD.c)
 * Callees:
 *     ??_Gfolder_change_reader_state@details@wil@@QEAAPEAXI@Z @ 0x18063E9A0 (--_Gfolder_change_reader_state@details@wil@@QEAAPEAXI@Z.c)
 */

void *__fastcall wil::unique_any_t<wil::folder_change_reader_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>,wil::err_returncode_policy>>::~unique_any_t<wil::folder_change_reader_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>,wil::err_returncode_policy>>(
        wil::details::folder_change_reader_state **a1,
        unsigned int a2)
{
  wil::details::folder_change_reader_state *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return wil::details::folder_change_reader_state::`scalar deleting destructor'(v2, a2);
  return result;
}
