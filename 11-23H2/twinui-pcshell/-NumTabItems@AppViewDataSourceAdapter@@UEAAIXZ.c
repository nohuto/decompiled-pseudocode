/*
 * XREFs of ?NumTabItems@AppViewDataSourceAdapter@@UEAAIXZ @ 0x18078EC00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@@Z @ 0x180082848 (--0-$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@@.c)
 *     ?IsTabWindowOwner@@YA_NPEAUIApplicationView@@@Z @ 0x180082AD4 (-IsTabWindowOwner@@YA_NPEAUIApplicationView@@@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUhstring@winrt@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801E8DE0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUhstring@win.c)
 */

__int64 __fastcall AppViewDataSourceAdapter::NumTabItems(AppViewDataSourceAdapter *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  struct IApplicationView *v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct IApplicationView *v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v3 = **((_QWORD **)this - 4);
  v10 = v3;
  while ( v3 != *((_QWORD *)this - 4) )
  {
    wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>::com_ptr_t<IApplicationView,wil::err_returncode_policy>(
      &v9,
      *(_QWORD *)(v3 + 32));
    if ( IsTabWindowOwner(v9, v4) )
      ++v2;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v9);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,winrt::hstring>>>,std::_Iterator_base0>::operator++(
      &v10,
      v5,
      v6,
      v7);
    v3 = v10;
  }
  return v2;
}
