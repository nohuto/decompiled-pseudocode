/*
 * XREFs of ??0system_error@std@@QEAA@Verror_code@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x1803D4798
 * Callers:
 *     ??0filesystem_error@filesystem@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEBVpath@12@Verror_code@2@@Z @ 0x1803D44FC (--0filesystem_error@filesystem@std@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 *     ?_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@@Z @ 0x180645588 (-_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@@Z.c)
 * Callees:
 *     ??0_System_error@std@@IEAA@Verror_code@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x1803D4368 (--0_System_error@std@@IEAA@Verror_code@1@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 */

_QWORD *__fastcall std::system_error::system_error(_QWORD *a1, __int128 *a2, __int64 a3)
{
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = *a2;
  std::_System_error::_System_error(a1, &v5, a3);
  *a1 = &std::system_error::`vftable';
  return a1;
}
