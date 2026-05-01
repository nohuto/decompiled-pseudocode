/*
 * XREFs of ??$_Assign_range@PEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@0Uforward_iterator_tag@1@@Z @ 0x1804AA14C
 * Callers:
 *     ?SetVirtualDesktopCollectionFilter@SwitchItemFilteredCollection@@UEAAJPEAUIVirtualDesktopNotificationService@@V?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1804AB560 (-SetVirtualDesktopCollectionFilter@SwitchItemFilteredCollection@@UEAAJPEAUIVirtualDesktopNotific.c)
 * Callees:
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIVirtualDesktop@@@Z @ 0x18009D1E4 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIVirtualDesktop@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18016978C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ??$_Copy_unchecked@PEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@PEAV12@@std@@YAPEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@PEAV12@00@Z @ 0x1804AA220 (--$_Copy_unchecked@PEAV-$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@PEAV12@@st.c)
 *     ?_Clear_and_reserve_geometric@?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAX_K@Z @ 0x1804ABCC0 (-_Clear_and_reserve_geometric@-$vector@V-$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@.c)
 */

void __fastcall std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_exception_policy>>::_Assign_range<wil::com_ptr_t<IVirtualDesktop,wil::err_exception_policy> *>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  __int64 *v9; // rdi
  __int64 *i; // rbx
  __int64 *v11; // rcx
  __int64 *v12; // rdx

  v6 = ((__int64)a3 - a2) >> 3;
  v7 = *a1;
  v8 = (a1[1] - *a1) >> 3;
  if ( v6 <= v8 )
  {
    i = (__int64 *)(v7 + 8 * v6);
    std::_Copy_unchecked<wil::com_ptr_t<IVirtualDesktop,wil::err_exception_policy> *,wil::com_ptr_t<IVirtualDesktop,wil::err_exception_policy> *>(
      a2,
      a3);
    v12 = (__int64 *)a1[1];
    v11 = i;
  }
  else
  {
    if ( v6 > (a1[2] - v7) >> 3 )
    {
      std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_exception_policy>>::_Clear_and_reserve_geometric(a1, v6);
      v8 = 0LL;
    }
    v9 = (__int64 *)(a2 + 8 * v8);
    std::_Copy_unchecked<wil::com_ptr_t<IVirtualDesktop,wil::err_exception_policy> *,wil::com_ptr_t<IVirtualDesktop,wil::err_exception_policy> *>(
      a2,
      v9);
    for ( i = (__int64 *)a1[1]; ; ++i )
    {
      v11 = i;
      if ( v9 == a3 )
        break;
      wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
        i,
        *v9++);
    }
    v12 = i;
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>(v11, v12);
  a1[1] = (__int64)i;
}
