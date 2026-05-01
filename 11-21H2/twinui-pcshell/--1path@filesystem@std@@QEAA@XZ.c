/*
 * XREFs of ??1path@filesystem@std@@QEAA@XZ @ 0x180575E00
 * Callers:
 *     _Launch_::_1_::dtor$5 @ 0x1805762EA (_Launch_--_1_--dtor$5.c)
 *     _Launch_::_1_::dtor$6 @ 0x1805762F6 (_Launch_--_1_--dtor$6.c)
 *     _std::filesystem::filesystem_error::filesystem_error_::_1_::dtor$1 @ 0x18057E996 (_std--filesystem--filesystem_error--filesystem_error_--_1_--dtor$1.c)
 *     _std::filesystem::filesystem_error::filesystem_error_::_1_::dtor$2 @ 0x18057E9A6 (_std--filesystem--filesystem_error--filesystem_error_--_1_--dtor$2.c)
 *     _std::filesystem::filesystem_error::filesystem_error_::_1_::dtor$1_0 @ 0x18057EAAE (_std--filesystem--filesystem_error--filesystem_error_--_1_--dtor$1_0.c)
 *     _std::filesystem::filesystem_error::filesystem_error_::_1_::dtor$2_0 @ 0x18057EABE (_std--filesystem--filesystem_error--filesystem_error_--_1_--dtor$2_0.c)
 *     _std::filesystem::filesystem_error::filesystem_error_::_1_::dtor$3 @ 0x18057EACE (_std--filesystem--filesystem_error--filesystem_error_--_1_--dtor$3.c)
 *     _StartupAppMonitor::StartupToastNotifier_::_1_::dtor$7 @ 0x1805816CD (_StartupAppMonitor--StartupToastNotifier_--_1_--dtor$7.c)
 *     _std::filesystem::path::operator___std::basic_string_view_unsigned_short_std::char_traits_unsigned_short____0__::_1_::dtor$0 @ 0x1805829EB (_std--filesystem--path--operator___std--basic_string_view_unsigned_short_std--char__ea_1805829EB.c)
 *     _std::filesystem::_Dir_enum_impl::_Initialize_dir_enum_std::filesystem::_Dir_enum_impl__::_1_::dtor$2 @ 0x180582F2E (_std--filesystem--_Dir_enum_impl--_Initialize_dir_enum_std--filesystem--_Dir_enum_impl__--_1_--d.c)
 *     __lambda_fd4539b3655cc22a40f9c1e0d2159299_::operator()_::_1_::dtor$0 @ 0x180584C89 (__lambda_fd4539b3655cc22a40f9c1e0d2159299_--operator()_--_1_--dtor$0.c)
 *     __lambda_fd4539b3655cc22a40f9c1e0d2159299_::operator()_::_1_::dtor$13 @ 0x180584CA1 (__lambda_fd4539b3655cc22a40f9c1e0d2159299_--operator()_--_1_--dtor$13.c)
 *     _StartupFolderNotification::CheckForNewStartupAppAdded_::_1_::dtor$0 @ 0x1805854D6 (_StartupFolderNotification--CheckForNewStartupAppAdded_--_1_--dtor$0.c)
 *     _StartupFolderNotification::CheckForNewStartupAppAdded_::_1_::dtor$7 @ 0x18058551E (_StartupFolderNotification--CheckForNewStartupAppAdded_--_1_--dtor$7.c)
 *     _StartupFolderNotification::CheckForNewStartupAppAdded_::_1_::dtor$10 @ 0x18058552A (_StartupFolderNotification--CheckForNewStartupAppAdded_--_1_--dtor$10.c)
 *     _StartupFolderNotification::CheckForRemovedStartupApp_::_1_::dtor$2 @ 0x180585EA1 (_StartupFolderNotification--CheckForRemovedStartupApp_--_1_--dtor$2.c)
 *     _StartupFolderNotification::CheckForRemovedStartupApp_::_1_::dtor$16 @ 0x180585EB9 (_StartupFolderNotification--CheckForRemovedStartupApp_--_1_--dtor$16.c)
 *     _StartupNotification::GetFileDescription_::_1_::dtor$1 @ 0x180586880 (_StartupNotification--GetFileDescription_--_1_--dtor$1.c)
 *     _StartupNotification::GetFileDescription_::_1_::dtor$2 @ 0x180586898 (_StartupNotification--GetFileDescription_--_1_--dtor$2.c)
 *     _StartupFolderNotification::IsValidStartupAppFile_::_1_::dtor$0 @ 0x180586BCC (_StartupFolderNotification--IsValidStartupAppFile_--_1_--dtor$0.c)
 *     _std::filesystem::_Dir_enum_impl::_Refresh_::_1_::dtor$0 @ 0x18058784B (_std--filesystem--_Dir_enum_impl--_Refresh_--_1_--dtor$0.c)
 *     _std::filesystem::_Throw_fs_error_::_1_::dtor$5 @ 0x180587915 (_std--filesystem--_Throw_fs_error_--_1_--dtor$5.c)
 *     _std::filesystem::_Throw_fs_error_::_1_::dtor$6 @ 0x180587925 (_std--filesystem--_Throw_fs_error_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::filesystem::path::~path(__int64 this)
{
  std::wstring::_Tidy_deallocate(this);
}
