/*
 * XREFs of ?SetAppIdInfo@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAAXPEAUIApplicationView@@W4AppIdKind@Activities@Data@56@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1802D6356
 * Callers:
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x1802D65F2 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@@Z @ 0x180082848 (--0-$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@@.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$try_emplace@$$V@?$map@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@UApplicationViewComparator@456789@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1802D6024 (--$try_emplace@$$V@-$map@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppVi.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::SetAppIdInfo(
        __int64 *a1,
        __int64 a2,
        int a3,
        void **a4)
{
  unsigned __int64 v7; // r9
  __int64 v8; // rbx
  char *result; // rax
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>::com_ptr_t<IApplicationView,wil::err_returncode_policy>(
    &v11,
    a2);
  std::map<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::ApplicationViewComparator,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>::try_emplace<>(
    a1,
    (__int64)v10,
    &v11,
    v7);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
  v8 = v10[0];
  result = std::wstring::assign((char *)(v10[0] + 48LL), *a4, _mm_srli_si128(*(__m128i *)a4, 8).m128i_u64[0]);
  *(_DWORD *)(v8 + 40) = a3;
  return result;
}
