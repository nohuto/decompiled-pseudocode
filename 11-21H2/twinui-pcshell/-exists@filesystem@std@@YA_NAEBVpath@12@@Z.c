/*
 * XREFs of ?exists@filesystem@std@@YA_NAEBVpath@12@@Z @ 0x1805824B4
 * Callers:
 *     ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x180580BC0 (-StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z.c)
 *     _lambda_fd4539b3655cc22a40f9c1e0d2159299_::operator() @ 0x180584A60 (_lambda_fd4539b3655cc22a40f9c1e0d2159299_--operator().c)
 *     ?CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ @ 0x180585B70 (-CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18034C21C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0filesystem_error@filesystem@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEBVpath@12@Verror_code@2@@Z @ 0x18057E9BC (--0filesystem_error@filesystem@std@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 *     ?_Refresh@file_status@filesystem@std@@QEAAXW4__std_win_error@@AEBU__std_fs_stats@@@Z @ 0x180581ED0 (-_Refresh@file_status@filesystem@std@@QEAAXW4__std_win_error@@AEBU__std_fs_stats@@@Z.c)
 *     __std_fs_get_stats @ 0x1805E34A4 (__std_fs_get_stats.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall std::filesystem::exists(std::filesystem *this, const struct std::filesystem::path *a2)
{
  std::filesystem *v2; // rdi
  char v3; // bl
  unsigned int v5; // [rsp+20h] [rbp-89h] BYREF
  unsigned int stats; // [rsp+28h] [rbp-81h]
  __int128 v7[2]; // [rsp+30h] [rbp-79h] BYREF
  _QWORD v8[4]; // [rsp+50h] [rbp-59h] BYREF
  _BYTE pExceptionObject[144]; // [rsp+70h] [rbp-39h] BYREF

  v2 = this;
  v3 = 0;
  v5 = 0;
  if ( *((_QWORD *)this + 3) >= 8uLL )
    this = *(std::filesystem **)this;
  stats = _std_fs_get_stats((LPCWSTR)this);
  std::filesystem::file_status::_Refresh(&v5, stats, (__int64)v7);
  LODWORD(v7[0]) = stats;
  *((_QWORD *)&v7[0] + 1) = &`std::_Immortalize_memcpy_image<std::_System_error_category>'::`2'::_Static;
  if ( v5 )
    return v5 != 1;
  if ( stats )
  {
    std::string::string(v8, (__int64)"exists");
    std::filesystem::filesystem_error::filesystem_error((__int64)pExceptionObject, (__int64)v8, (__int64)v2, v7);
    throw (std::filesystem::filesystem_error *)pExceptionObject;
  }
  return v3;
}
