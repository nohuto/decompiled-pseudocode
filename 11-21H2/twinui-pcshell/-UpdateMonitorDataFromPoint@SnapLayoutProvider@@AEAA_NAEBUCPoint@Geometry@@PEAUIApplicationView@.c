/*
 * XREFs of ?UpdateMonitorDataFromPoint@SnapLayoutProvider@@AEAA_NAEBUCPoint@Geometry@@PEAUIApplicationView@@PEAUISnappedWindowModel@@@Z @ 0x1805ACDD8
 * Callers:
 *     ?CalculateSnapRegion@SnapLayoutProvider@@QEAA?AUCalculatedSnapRegion@@AEBUSnapRegionCalculationArgs@@@Z @ 0x1805AC170 (-CalculateSnapRegion@SnapLayoutProvider@@QEAA-AUCalculatedSnapRegion@@AEBUSnapRegionCalculationA.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003DA78 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180319714 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x1804B8170 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?s_CreateInstance@CSnappedWindow@@SAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x1805AB918 (-s_CreateInstance@CSnappedWindow@@SAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@AEBU_GUID@@PEA.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall SnapLayoutProvider::UpdateMonitorDataFromPoint(
        SnapLayoutProvider *this,
        const struct tagPOINT *a2,
        struct IApplicationView *a3,
        struct ISnappedWindowModel *a4)
{
  struct IImmersiveMonitor **v8; // rdi
  __int64 v9; // rcx
  int v10; // eax
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(__int64, const struct tagPOINT *, GUID *, GUID *); // r15
  struct IImmersiveMonitor *v14; // rcx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  const struct _GUID *v20; // r8
  int Instance; // eax
  int v22; // [rsp+20h] [rbp-68h]
  _BYTE v23[8]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v24; // [rsp+38h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v8 = (struct IImmersiveMonitor **)((char *)this + 48);
  v9 = *((_QWORD *)this + 6);
  if ( v9 )
  {
    v24 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v9 + 72LL))(v9, &v24);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x20B,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
        (const char *)(unsigned int)v10,
        v22);
    if ( Geometry::CRect::Contains((Geometry::CRect *)&v24, a2) )
      return 0;
  }
  v12 = *((_QWORD *)this + 5);
  v13 = *(__int64 (__fastcall **)(__int64, const struct tagPOINT *, GUID *, GUID *))(*(_QWORD *)v12 + 96LL);
  v14 = *v8;
  *v8 = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v14 + 16LL))(v14);
  v15 = v13(v12, a2, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x213,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
      (const char *)(unsigned int)v15,
      (int)v8);
  v16 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, char *))(*(_QWORD *)*v8 + 88LL))(*v8, (char *)this + 56);
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x214,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
      (const char *)(unsigned int)v16,
      (int)v8);
  v17 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, char *))(*(_QWORD *)*v8 + 72LL))(*v8, (char *)this + 72);
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x215,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
      (const char *)(unsigned int)v17,
      (int)v8);
  v18 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, char *, _BYTE *))(*(_QWORD *)*v8 + 112LL))(
          *v8,
          (char *)this + 88,
          v23);
  if ( v18 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x218,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
      (const char *)(unsigned int)v18,
      (int)v8);
  if ( a4 )
  {
    v19 = (*(__int64 (__fastcall **)(struct ISnappedWindowModel *, struct IImmersiveMonitor *, __int64, char *))(*(_QWORD *)a4 + 24LL))(
            a4,
            *v8,
            1LL,
            (char *)this + 96);
    if ( v19 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x21C,
        (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
        (const char *)(unsigned int)v19);
      CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll((__int64)this + 96);
    }
  }
  if ( a3 )
  {
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 4);
    Instance = CSnappedWindow::s_CreateInstance(*v8, a3, v20, (void **)this + 4);
    if ( Instance < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x222,
        (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
        (const char *)(unsigned int)Instance);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 4);
    }
  }
  *((_BYTE *)this + 128) = *((_DWORD *)this + 17) - *((_DWORD *)this + 15) > *((_DWORD *)this + 16)
                                                                           - *((_DWORD *)this + 14);
  return 1;
}
