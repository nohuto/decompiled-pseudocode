/*
 * XREFs of ??R_lambda_10825b8ae890a1dc19d83ed8e1513741_@@QEBAXPEAUHKEY__@@PEBG@Z @ 0x1803AFD34
 * Callers:
 *     ??$ForEachValueName@V_lambda_10825b8ae890a1dc19d83ed8e1513741_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_10825b8ae890a1dc19d83ed8e1513741_@@@Z @ 0x1803AF048 (--$ForEachValueName@V_lambda_10825b8ae890a1dc19d83ed8e1513741_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_1.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?TryGetString@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHKEY__@@PEBG1@Z @ 0x180142544 (-TryGetString@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAUHKEY__@@PEB.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$emplace_back@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@QEAAAEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@$$QEAU23@@Z @ 0x1803AF30C (--$emplace_back@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@-$vector@UClassIdAndInfo.c)
 *     ?GetComponentInfo@@YAAEBUImmersiveComponentInfo@@AEBU_GUID@@@Z @ 0x1803B030C (-GetComponentInfo@@YAAEBUImmersiveComponentInfo@@AEBU_GUID@@@Z.c)
 *     ?IsClassAvailable@ComponentCreator@@SA_NAEBUImmersiveComponentInfo@@@Z @ 0x1803B0860 (-IsClassAvailable@ComponentCreator@@SA_NAEBUImmersiveComponentInfo@@@Z.c)
 */

unsigned __int8 __fastcall _lambda_10825b8ae890a1dc19d83ed8e1513741_::operator()(
        __int64 a1,
        __int64 a2,
        const WCHAR *a3)
{
  struct _GUID *v3; // rbx
  const OLECHAR *v6; // rcx
  unsigned __int8 result; // al
  const struct ImmersiveComponentInfo *ComponentInfo; // rdi
  struct _GUID v9; // xmm0
  __int64 *v10; // rcx
  LPCOLESTR lpsz[2]; // [rsp+20h] [rbp-38h] BYREF
  const struct ImmersiveComponentInfo *v12; // [rsp+30h] [rbp-28h]
  unsigned __int64 v13; // [rsp+38h] [rbp-20h]

  v3 = *(struct _GUID **)a1;
  if ( CLSIDFromString(a3, *(LPCLSID *)a1) < 0 )
  {
    TryGetString(lpsz, **(HKEY **)(a1 + 8), 0LL, a3);
    v6 = (const OLECHAR *)lpsz;
    if ( v13 >= 8 )
      v6 = lpsz[0];
    if ( CLSIDFromString(v6, v3) < 0 )
      return std::wstring::_Tidy_deallocate((__int64)lpsz);
    std::wstring::_Tidy_deallocate((__int64)lpsz);
  }
  ComponentInfo = GetComponentInfo(v3);
  result = ComponentCreator::IsClassAvailable(ComponentInfo);
  if ( result )
  {
    v9 = *v3;
    v10 = *(__int64 **)(a1 + 16);
    v12 = ComponentInfo;
    *(struct _GUID *)lpsz = v9;
    return (unsigned __int8)std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::emplace_back<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>(
                              v10,
                              (__int64)lpsz);
  }
  return result;
}
