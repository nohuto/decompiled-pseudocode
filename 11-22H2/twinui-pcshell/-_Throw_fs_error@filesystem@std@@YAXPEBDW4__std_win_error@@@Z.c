/*
 * XREFs of ?_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@@Z @ 0x180645588
 * Callers:
 *     ??Edirectory_iterator@filesystem@std@@QEAAAEAV012@XZ @ 0x1806427F8 (--Edirectory_iterator@filesystem@std@@QEAAAEAV012@XZ.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18018AB94 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0system_error@std@@QEAA@Verror_code@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x1803D4798 (--0system_error@std@@QEAA@Verror_code@1@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall __noreturn std::filesystem::_Throw_fs_error(__int64 a1, int a2)
{
  const char *v2; // rdx
  __int128 v3; // [rsp+20h] [rbp-69h] BYREF
  void **pExceptionObject; // [rsp+30h] [rbp-59h] BYREF
  const char *v5; // [rsp+38h] [rbp-51h]
  __int64 v6; // [rsp+58h] [rbp-31h]
  __int64 v7; // [rsp+68h] [rbp-21h]
  __int64 v8; // [rsp+70h] [rbp-19h]
  __int64 v9; // [rsp+78h] [rbp-11h]
  __int64 v10; // [rsp+88h] [rbp-1h]
  __int64 v11; // [rsp+90h] [rbp+7h]
  _QWORD v12[5]; // [rsp+98h] [rbp+Fh] BYREF
  _QWORD v13[4]; // [rsp+C0h] [rbp+37h] BYREF

  LODWORD(v3) = a2;
  *((_QWORD *)&v3 + 1) = &`std::_Immortalize_memcpy_image<std::_System_error_category>'::`2'::_Static;
  std::string::string(v13, (__int64)"directory_iterator::operator++");
  std::system_error::system_error(&pExceptionObject, &v3, (__int64)v13);
  pExceptionObject = &std::filesystem::filesystem_error::`vftable';
  v6 = 0LL;
  v7 = 0LL;
  v8 = 7LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 7LL;
  v2 = "Unknown exception";
  if ( v5 )
    v2 = v5;
  std::string::string(v12, (__int64)v2);
  throw (std::filesystem::filesystem_error *)&pExceptionObject;
}
