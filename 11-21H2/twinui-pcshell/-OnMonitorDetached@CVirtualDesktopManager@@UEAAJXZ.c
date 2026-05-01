/*
 * XREFs of ?OnMonitorDetached@CVirtualDesktopManager@@UEAAJXZ @ 0x180546D30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18009B6E0 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Xlength@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@CAXXZ @ 0x1801B1A04 (-_Xlength@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@CAXXZ.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Tidy@?$vector@PEAUHMONITOR__@@V?$allocator@PEAUHMONITOR__@@@std@@@std@@AEAAXXZ @ 0x18031D0B8 (-_Tidy@-$vector@PEAUHMONITOR__@@V-$allocator@PEAUHMONITOR__@@@std@@@std@@AEAAXXZ.c)
 *     ?_Calculate_growth@?$vector@PEAUHMONITOR__@@V?$allocator@PEAUHMONITOR__@@@std@@@std@@AEBA_K_K@Z @ 0x18033B9C0 (-_Calculate_growth@-$vector@PEAUHMONITOR__@@V-$allocator@PEAUHMONITOR__@@@std@@@std@@AEBA_K_K@Z.c)
 *     ?GetMonitors@VirtualDesktopHelpers@@YA?AV?$vector@PEAUHMONITOR__@@V?$allocator@PEAUHMONITOR__@@@std@@@std@@XZ @ 0x18048AE5C (-GetMonitors@VirtualDesktopHelpers@@YA-AV-$vector@PEAUHMONITOR__@@V-$allocator@PEAUHMONITOR__@@@.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@PEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUHMONITOR__@@U?$hash@PEAUHMONITOR__@@@std@@U?$equal_to@PEAUHMONITOR__@@@3@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEBQEAUHMONITOR__@@@Z @ 0x180540F2C (--$find@X@-$_Hash@V-$_Umap_traits@PEAUHMONITOR__@@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode.c)
 *     ?SetCurrentDesktopForMonitorHelper@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z @ 0x180547EC0 (-SetCurrentDesktopForMonitorHelper@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesk.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@PEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUHMONITOR__@@U?$hash@PEAUHMONITOR__@@@std@@U?$equal_to@PEAUHMONITOR__@@@3@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEAUHMONITOR__@@@Z @ 0x18054CCD4 (-erase@-$_Hash@V-$_Umap_traits@PEAUHMONITOR__@@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_po.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualDesktopManager::OnMonitorDetached(
        CVirtualDesktopManager *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  HMONITOR *v5; // rdi
  HMONITOR *v6; // rsi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  void **v12; // rdi
  _QWORD *v13; // r14
  _QWORD *v14; // r13
  __int64 v15; // rdx
  HMONITOR *v16; // rax
  signed __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  __int64 v20; // r10
  size_t size_of; // rax
  char *v22; // rax
  char *v23; // rbx
  void *Src[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct IVirtualDesktop *v27; // [rsp+88h] [rbp+38h] BYREF
  __int64 v28; // [rsp+90h] [rbp+40h] BYREF

  VirtualDesktopHelpers::GetMonitors(Src, a2, a3, a4);
  v5 = (HMONITOR *)Src[0];
  v6 = (HMONITOR *)Src[1];
  while ( v5 != v6 )
  {
    if ( *std::_Hash<std::_Umap_traits<HMONITOR__ *,wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>,std::_Uhash_compare<HMONITOR__ *,std::hash<HMONITOR__ *>,std::equal_to<HMONITOR__ *>>,std::allocator<std::pair<HMONITOR__ * const,wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>,0>>::find<void>(
            (_QWORD *)this + 22,
            &v28,
            (const unsigned __int8 *)v5) == *((_QWORD *)this + 23) )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, HMONITOR))(**((_QWORD **)this + 11) + 128LL))(*((_QWORD *)this + 11), *v5);
      v8 = v7;
      if ( v7 < 0 )
      {
        v15 = 312LL;
LABEL_24:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
          (const char *)(unsigned int)v7);
        goto LABEL_30;
      }
      v27 = 0LL;
      v9 = (__int64 *)*((_QWORD *)this + 11);
      v10 = *v9;
      v27 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, GUID *, struct IVirtualDesktop **))(v10 + 72))(
              v9,
              0LL,
              5LL,
              &GUID_536d3495_b208_4cc9_ae26_de8111275bf8,
              &v27);
      v8 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x13B,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
          (const char *)(unsigned int)v11);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v27);
        goto LABEL_30;
      }
      CVirtualDesktopManager::SetCurrentDesktopForMonitorHelper((CVirtualDesktopManager *)((char *)this - 8), *v5, v27);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v27);
    }
    ++v5;
  }
  v12 = (void **)((char *)this + 248);
  v13 = (_QWORD *)*((_QWORD *)this + 31);
  v14 = (_QWORD *)*((_QWORD *)this + 32);
  while ( v13 != v14 )
  {
    v16 = (HMONITOR *)Src[0];
    if ( Src[0] == v6 )
      goto LABEL_15;
    do
    {
      if ( *v16 == (HMONITOR)*v13 )
        break;
      ++v16;
    }
    while ( v16 != v6 );
    if ( v16 == v6 )
    {
LABEL_15:
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 11) + 136LL))(*((_QWORD *)this + 11), *v13);
      v8 = v7;
      if ( v7 < 0 )
      {
        v15 = 326LL;
        goto LABEL_24;
      }
      std::_Hash<std::_Umap_traits<HMONITOR__ *,wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>,std::_Uhash_compare<HMONITOR__ *,std::hash<HMONITOR__ *>,std::equal_to<HMONITOR__ *>>,std::allocator<std::pair<HMONITOR__ * const,wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>,0>>::erase(
        (char *)this + 176,
        v13);
    }
    ++v13;
  }
  if ( v12 != Src )
  {
    v17 = (char *)v6 - (char *)Src[0];
    v18 = v17 >> 3;
    if ( v17 >> 3 > (unsigned __int64)((__int64)(*((_QWORD *)this + 33) - *((_QWORD *)this + 31)) >> 3) )
    {
      if ( v18 > 0x1FFFFFFFFFFFFFFFLL )
        std::vector<Geometry::CRect>::_Xlength();
      v19 = std::vector<HMONITOR__ *>::_Calculate_growth((_QWORD *)this + 31, v18);
      if ( *v12 )
      {
        std::_Deallocate<16,0>(*v12, 8 * v20);
        *v12 = 0LL;
        *((_QWORD *)this + 32) = 0LL;
        *((_QWORD *)this + 33) = 0LL;
      }
      size_of = std::_Get_size_of_n<8>(v19);
      v22 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      *v12 = v22;
      *((_QWORD *)this + 32) = v22;
      *((_QWORD *)this + 33) = &v22[8 * v19];
    }
    v23 = (char *)*v12;
    memmove_0(*v12, Src[0], v17);
    *((_QWORD *)this + 32) = &v23[v17];
  }
  v8 = 0;
LABEL_30:
  std::vector<HMONITOR__ *>::_Tidy((__int64)Src);
  return v8;
}
