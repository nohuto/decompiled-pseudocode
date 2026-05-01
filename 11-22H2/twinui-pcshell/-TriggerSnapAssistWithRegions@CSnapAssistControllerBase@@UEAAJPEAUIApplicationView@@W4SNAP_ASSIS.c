/*
 * XREFs of ?TriggerSnapAssistWithRegions@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4SNAP_ASSIST_VIEW_FLAGS@@PEBUtagRECT@@I@Z @ 0x18066CEB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180223E10 (--1-$test_data_control@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@1@XZ @ 0x180223F44 (--C-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@0@@Z @ 0x1802D0C58 (--$_Destroy_range@V-$allocator@V-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$C.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x1802D2954 (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ??$AdjustRegionsForInitialSnapPosition@V?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXPEAUHWND__@@AEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@PEAUIImmersiveMonitor@@@Z @ 0x180668BCC (--$AdjustRegionsForInitialSnapPosition@V-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@.c)
 *     ??$SetGuidedSnapAssistRegions@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@0@Z @ 0x180669060 (--$SetGuidedSnapAssistRegions@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UCRect@Geometr.c)
 *     ??$_Assign_range@PEBUtagRECT@@@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXPEBUtagRECT@@0Uforward_iterator_tag@1@@Z @ 0x180669460 (--$_Assign_range@PEBUtagRECT@@@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@st.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Geometry::CRect_______lambda_6cce0248af815829567eceed5222eb6d___ @ 0x180669D78 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Geometry--_ea_180669D78.c)
 *     ?_RetrieveSnappedWindowsForMonitor@CSnapAssistControllerBase@@IEAAJPEAUIImmersiveMonitor@@AEAV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18066DE14 (-_RetrieveSnappedWindowsForMonitor@CSnapAssistControllerBase@@IEAAJPEAUIImmersiveMonitor@@AEAV-$.c)
 *     ?_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@W4SNAP_ASSIST_VIEW_FLAGS@@HPEA_N@Z @ 0x18066E048 (-_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@.c)
 *     ?erase@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@2@0@Z @ 0x18066E458 (-erase@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@QEAA-AV-$_Vector_iter.c)
 *     ?ComputeOcclusionErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z @ 0x180677DC0 (-ComputeOcclusionErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall CSnapAssistControllerBase::TriggerSnapAssistWithRegions(
        __int64 a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64),
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 (__fastcall **v8)(ApplicationViewHelpers *, GUID *, __int64); // rax
  int v9; // eax
  struct IImmersiveMonitor *v10; // rdx
  unsigned int v11; // ebx
  struct IApplicationView *v13; // rdx
  HWND WindowForView; // r12
  int v15; // eax
  unsigned int v16; // edi
  void *v17; // rbx
  __int64 v18; // rcx
  __int64 *v19; // rbx
  __int128 i; // rdi
  __int128 v21; // kr10_16
  int v22; // [rsp+40h] [rbp-B8h] BYREF
  SnapRectHelpers *v23; // [rsp+48h] [rbp-B0h] BYREF
  __int128 v24; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+60h] [rbp-98h]
  __int128 v26; // [rsp+68h] [rbp-90h] BYREF
  __int64 v27; // [rsp+78h] [rbp-80h]
  void *v28[2]; // [rsp+80h] [rbp-78h] BYREF
  _QWORD v29[2]; // [rsp+90h] [rbp-68h] BYREF
  _BYTE v30[8]; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v31; // [rsp+A8h] [rbp-50h] BYREF
  char v32; // [rsp+B0h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v8 = *a2;
  v23 = 0LL;
  v9 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), SnapRectHelpers **))v8[10])(
         a2,
         &v23);
  v11 = v9;
  if ( v9 >= 0 )
  {
    v22 = SnapRectHelpers::ComputeOcclusionErrorThresholdForMonitor(v23, v10);
    WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a2, v13);
    if ( WindowForView )
    {
      v24 = 0LL;
      v25 = 0LL;
      v15 = CSnapAssistControllerBase::_RetrieveSnappedWindowsForMonitor(a1, v23, &v24);
      v16 = v15;
      if ( v15 >= 0 )
      {
        v26 = 0LL;
        v27 = 0LL;
        std::vector<Geometry::CRect>::_Assign_range<tagRECT const *>((void **)&v26, a4, (int *)(a4 + 16LL * a5));
        CSnapAssistControllerBase::AdjustRegionsForInitialSnapPosition<std::vector<Geometry::CRect>>(
          v18,
          WindowForView,
          (const struct tagRECT **)&v26,
          v23);
        v19 = (__int64 *)v24;
        for ( i = v24; (_QWORD)i != *((_QWORD *)&i + 1); *(_QWORD *)&i = i + 8 )
        {
          (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)i + 48LL))(*(_QWORD *)i, &v31);
          v29[0] = &v31;
          v29[1] = &v22;
          std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Geometry::CRect_______lambda_6cce0248af815829567eceed5222eb6d___(
            v28,
            (_OWORD *)v26,
            *((_OWORD **)&v26 + 1),
            v29);
          std::vector<Geometry::CRect>::erase(&v26, v30);
        }
        v21 = v26;
        if ( (_QWORD)v26 != *((_QWORD *)&v26 + 1) )
        {
          CSnapAssistControllerBase::SetGuidedSnapAssistRegions<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Geometry::CRect>>>>(
            a1,
            v26 + 16,
            *((__int64 *)&v26 + 1));
          v31 = a1;
          v32 = 1;
          *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::operator->(
                         a1 + 240,
                         (__int64 *)v28)
                    + 264) = (__int64)(*((_QWORD *)&v21 + 1) - v21) >> 4;
          tip2::test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>(v28);
          CSnapAssistControllerBase::_SnapAssistTriggered(a1, v21, v23, &v24);
          *(_QWORD *)(a1 + 272) = WindowForView;
          *((_QWORD *)&i + 1) = *((_QWORD *)&v24 + 1);
          v19 = (__int64 *)v24;
        }
        std::vector<Geometry::CRect>::_Tidy((__int64)&v26);
        if ( v19 )
        {
          std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ISnappedWindow>>>(v19, *((__int64 **)&i + 1));
          std::_Deallocate<16,0>(v19, (v25 - (_QWORD)v19) & 0xFFFFFFFFFFFFFFF8uLL);
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v23);
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x119,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
          (const char *)(unsigned int)v15);
        v17 = (void *)v24;
        if ( (_QWORD)v24 )
        {
          std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ISnappedWindow>>>(
            (__int64 *)v24,
            *((__int64 **)&v24 + 1));
          std::_Deallocate<16,0>(v17, (v25 - (_QWORD)v17) & 0xFFFFFFFFFFFFFFF8uLL);
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v23);
        return v16;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x116,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
        (const char *)0x80070057LL);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v23);
      return 2147942487LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x112,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      (const char *)(unsigned int)v9);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v23);
    return v11;
  }
}
