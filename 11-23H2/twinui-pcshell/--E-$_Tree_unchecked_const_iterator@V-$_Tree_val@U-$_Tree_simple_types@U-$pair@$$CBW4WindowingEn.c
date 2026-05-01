/*
 * XREFs of ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18008E754
 * Callers:
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18008E67C (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4WindowingEnvironmentType@@V-$com_ptr_t.c)
 *     _lambda_37b02de6af5cc70082ddb03b5db08654_::operator() @ 0x18008E79C (_lambda_37b02de6af5cc70082ddb03b5db08654_--operator().c)
 *     ?GetWindowingEnvironmentConfigById@WindowingEnvironmentManager@@UEAAJIPEAPEAUIWindowingEnvironmentConfig@@@Z @ 0x1804F4300 (-GetWindowingEnvironmentConfigById@WindowingEnvironmentManager@@UEAAJIPEAPEAUIWindowingEnvironme.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x1801F031C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 */

__int64 *__fastcall std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v4; // r8
  __int64 v5; // rcx
  __int64 i; // rax

  v4 = a1;
  v5 = *a1;
  if ( *(_BYTE *)(*(_QWORD *)(v5 + 16) + 25LL) )
  {
    for ( i = *(_QWORD *)(v5 + 8); !*(_BYTE *)(i + 25) && v5 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
    {
      *v4 = i;
      v5 = i;
    }
  }
  else
  {
    i = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>::_Min(
          *(_QWORD *)(v5 + 16),
          0LL,
          v4,
          a4);
  }
  *v4 = i;
  return v4;
}
