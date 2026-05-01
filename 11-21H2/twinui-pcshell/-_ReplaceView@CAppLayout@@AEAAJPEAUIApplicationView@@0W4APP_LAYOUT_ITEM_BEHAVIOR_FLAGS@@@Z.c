/*
 * XREFs of ?_ReplaceView@CAppLayout@@AEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x180618BBC
 * Callers:
 *     ?ReplaceView@CAppLayout@@UEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x180617B80 (-ReplaceView@CAppLayout@@UEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18003FC5C (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?s_CreateInstance_Buffer@CAppLayoutItem@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x18011D6A8 (-s_CreateInstance_Buffer@CAppLayoutItem@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_InsertAt@$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@_K@Z @ 0x1801697C4 (--$_InsertAt@$$QEAV-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@-$CTSimpleArray@V-$ComPtr@UIAppLay.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180541B9C (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTas.c)
 *     ??$FindEx@VCAppLayoutItemFinderByView@AppLayoutFinders@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutItemFinderByView@AppLayoutFinders@@AEBV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180615F48 (--$FindEx@VCAppLayoutItemFinderByView@AppLayoutFinders@@@-$CTSimpleFixedArray@V-$ComPtr@UIAppLay.c)
 *     ?_FindBufferItem@CAppLayout@@AEAAJPEAPEAUIAppLayoutItem@@PEAI@Z @ 0x1806187C8 (-_FindBufferItem@CAppLayout@@AEAAJPEAPEAUIAppLayoutItem@@PEAI@Z.c)
 *     ?_RemoveView@CAppLayout@@AEAAJPEAUIApplicationView@@@Z @ 0x180618B48 (-_RemoveView@CAppLayout@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?s_CreateInstance_View@CAppLayoutItem@@SAJPEAUIApplicationView@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x180619AA4 (-s_CreateInstance_View@CAppLayoutItem@@SAJPEAUIApplicationView@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS.c)
 */

__int64 __fastcall CAppLayout::_ReplaceView(__int64 *a1, __int64 a2, struct IApplicationView *a3, unsigned int a4)
{
  int BufferItem; // ebx
  __int64 v8; // rdx
  unsigned __int64 v9; // r14
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 *v12; // rbx
  int Instance_View; // eax
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int Instance_Buffer; // eax
  unsigned int v18[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v19; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-30h] BYREF
  __int64 v21; // [rsp+48h] [rbp-28h] BYREF
  __int128 v22; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  if ( a2 )
  {
    v21 = 0LL;
    *(_QWORD *)v18 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v18);
    BufferItem = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::FindEx<AppLayoutFinders::CAppLayoutItemFinderByView>(
                   a1 + 13,
                   (__int64)v18,
                   v10,
                   &v20);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)v18);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v21);
    if ( BufferItem < 0 )
    {
      v8 = 1070LL;
      goto LABEL_4;
    }
    v9 = v20;
    goto LABEL_11;
  }
  if ( a3 )
  {
    CAppLayout::_RemoveView((CAppLayout *)a1, a3);
    BufferItem = CAppLayout::_FindBufferItem((CAppLayout *)a1, 0LL, v18);
    if ( BufferItem < 0 )
    {
      v8 = 1081LL;
      goto LABEL_4;
    }
    v9 = v18[0];
LABEL_11:
    v11 = a1[13];
    v22 = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int128 *))(**(_QWORD **)(v11 + 8 * v9) + 56LL))(
      *(_QWORD *)(v11 + 8 * v9),
      0LL,
      &v22);
    BufferItem = CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::RemoveAt(
                   a1 + 13,
                   v9);
    if ( BufferItem < 0 )
    {
      v8 = 1090LL;
      goto LABEL_4;
    }
    v19 = 0LL;
    v12 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v19, &v20);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v12);
    if ( a3 )
    {
      Instance_View = CAppLayoutItem::s_CreateInstance_View(a3, a4, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, v12);
      BufferItem = Instance_View;
      if ( Instance_View < 0 )
      {
        v14 = (unsigned int)Instance_View;
        v15 = 1097LL;
        goto LABEL_20;
      }
    }
    else
    {
      Instance_Buffer = CAppLayoutItem::s_CreateInstance_Buffer(
                          &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
                          (void **)v12);
      BufferItem = Instance_Buffer;
      if ( Instance_Buffer < 0 )
      {
        v14 = (unsigned int)Instance_Buffer;
        v15 = 1102LL;
        goto LABEL_20;
      }
    }
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v19 + 104LL))(v19, 0LL, &v22);
    *(_QWORD *)v18 = v19;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)v18);
    BufferItem = CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::_InsertAt<Microsoft::WRL::ComPtr<IAppLayoutItem> &&>(
                   a1 + 13,
                   v18,
                   v9);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v18);
    if ( BufferItem >= 0 )
    {
      BufferItem = 0;
      goto LABEL_22;
    }
    v14 = (unsigned int)BufferItem;
    v15 = 1110LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\applayout\\lib\\applayout.cpp",
      (const char *)v14);
LABEL_22:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
    return (unsigned int)BufferItem;
  }
  BufferItem = -2147024809;
  v8 = 1064LL;
LABEL_4:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\applayout\\lib\\applayout.cpp",
    (const char *)(unsigned int)BufferItem);
  return (unsigned int)BufferItem;
}
