/*
 * XREFs of ?OnMonitorAttached@CVirtualDesktopCollection@@UEAAJPEAUHMONITOR__@@@Z @ 0x1805418A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@@Z @ 0x18010FEA0 (-AddVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@PEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUHMONITOR__@@U?$hash@PEAUHMONITOR__@@@std@@U?$equal_to@PEAUHMONITOR__@@@3@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEBQEAUHMONITOR__@@@Z @ 0x180540F2C (--$find@X@-$_Hash@V-$_Umap_traits@PEAUHMONITOR__@@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode.c)
 */

__int64 __fastcall CVirtualDesktopCollection::OnMonitorAttached(CVirtualDesktopCollection *this, HMONITOR a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  HMONITOR v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  if ( *std::_Hash<std::_Umap_traits<HMONITOR__ *,wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>,std::_Uhash_compare<HMONITOR__ *,std::hash<HMONITOR__ *>,std::equal_to<HMONITOR__ *>>,std::allocator<std::pair<HMONITOR__ * const,wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>,0>>::find<void>(
          (_QWORD *)this + 10,
          &v8,
          (const unsigned __int8 *)&v9) != *((_QWORD *)this + 11) )
    return 0LL;
  v4 = CVirtualDesktopCollection::AddVirtualDesktop(this, a2, 0LL);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x10C,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
