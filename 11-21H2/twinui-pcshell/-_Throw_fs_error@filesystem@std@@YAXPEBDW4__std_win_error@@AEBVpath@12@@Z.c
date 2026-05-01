/*
 * XREFs of ?_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z @ 0x18058793C
 * Callers:
 *     ?CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z @ 0x180584FA0 (-CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z.c)
 *     ?status@directory_entry@filesystem@std@@QEBA?AVfile_status@23@XZ @ 0x180587C84 (-status@directory_entry@filesystem@std@@QEBA-AVfile_status@23@XZ.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18034C21C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0filesystem_error@filesystem@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEBVpath@12@Verror_code@2@@Z @ 0x18057E9BC (--0filesystem_error@filesystem@std@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall __noreturn std::filesystem::_Throw_fs_error(__int64 a1, int a2, __int64 a3)
{
  __int128 v4; // [rsp+20h] [rbp-C8h] BYREF
  _QWORD v5[4]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE pExceptionObject[152]; // [rsp+50h] [rbp-98h] BYREF

  LODWORD(v4) = a2;
  *((_QWORD *)&v4 + 1) = &`std::_Immortalize_memcpy_image<std::_System_error_category>'::`2'::_Static;
  std::string::string(v5, a1);
  std::filesystem::filesystem_error::filesystem_error((__int64)pExceptionObject, (__int64)v5, a3, &v4);
  throw (std::filesystem::filesystem_error *)pExceptionObject;
}
