/*
 * XREFs of ?exists@filesystem@std@@YA_NAEBVpath@12@@Z @ 0x18019366C
 * Callers:
 *     ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x1800905A0 (-CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ.c)
 *     ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x18063FC30 (-StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z.c)
 *     _lambda_88c52b909d46191f2a7b9cf853665f36_::operator() @ 0x1806429B8 (_lambda_88c52b909d46191f2a7b9cf853665f36_--operator().c)
 *     ?CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ @ 0x180643870 (-CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ.c)
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806F121C (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18018AB94 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     __std_fs_get_stats @ 0x180193700 (__std_fs_get_stats.c)
 *     ?_Refresh@file_status@filesystem@std@@QEAAXW4__std_win_error@@AEBU__std_fs_stats@@@Z @ 0x1801937EC (-_Refresh@file_status@filesystem@std@@QEAAXW4__std_win_error@@AEBU__std_fs_stats@@@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0filesystem_error@filesystem@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEBVpath@12@Verror_code@2@@Z @ 0x1803D44FC (--0filesystem_error@filesystem@std@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall std::filesystem::exists(std::filesystem *this, const struct std::filesystem::path *a2)
{
  std::filesystem *v2; // rdi
  char v3; // bl
  int v5; // [rsp+20h] [rbp-89h] BYREF
  unsigned int stats; // [rsp+28h] [rbp-81h]
  unsigned int v7; // [rsp+30h] [rbp-79h] BYREF
  void ***v8; // [rsp+38h] [rbp-71h]
  _QWORD v9[4]; // [rsp+50h] [rbp-59h] BYREF
  _BYTE pExceptionObject[144]; // [rsp+70h] [rbp-39h] BYREF

  v2 = this;
  v3 = 0;
  v5 = 0;
  if ( *((_QWORD *)this + 3) >= 8uLL )
    this = *(std::filesystem **)this;
  stats = _std_fs_get_stats((LPCWSTR)this);
  std::filesystem::file_status::_Refresh(&v5, stats, &v7);
  v7 = stats;
  v8 = &`std::_Immortalize_memcpy_image<std::_System_error_category>'::`2'::_Static;
  if ( v5 )
    return v5 != 1;
  if ( stats )
  {
    std::string::string(v9, (__int64)"exists");
    std::filesystem::filesystem_error::filesystem_error(pExceptionObject, v9, v2, &v7);
    throw (std::filesystem::filesystem_error *)pExceptionObject;
  }
  return v3;
}
