/*
 * XREFs of ?GetAppViewCloseOverrideOperation@ScreenManager@@UEAAJPEAUIAppLayout@@PEAUIApplicationView@@_NPEAPEAUIAppLayoutOperation@@@Z @ 0x18050D450
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardCompareHelper@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardMergeHelper@UCacheEntry@ScreenManager@@@@@@QEAAXXZ @ 0x1800AABF8 (-RemoveAll@-$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@UCacheEntr.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetApplicationViewsFromLayout@TabletModePositionerHelpers@@YAJPEAUIAppLayout@@PEAIPEAPEAUIApplicationView@@2@Z @ 0x1804B31C8 (-GetApplicationViewsFromLayout@TabletModePositionerHelpers@@YAJPEAUIAppLayout@@PEAIPEAPEAUIAppli.c)
 *     ?CreateReverseAppToAppSwitchLayoutOperation@ScreenManagerHelpers@@YAJPEAUITabletModePositioner@@PEAUIApplicationView@@_NPEAPEAUIAppLayoutOperation@@@Z @ 0x18050D26C (-CreateReverseAppToAppSwitchLayoutOperation@ScreenManagerHelpers@@YAJPEAUITabletModePositioner@@.c)
 *     ?RemoveAt@?$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardCompareHelper@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardMergeHelper@UCacheEntry@ScreenManager@@@@@@QEAAJ_K@Z @ 0x18050DD40 (-RemoveAt@-$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@UCacheEntry.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ScreenManager::GetAppViewCloseOverrideOperation(
        ScreenManager *this,
        struct IAppLayout *a2,
        struct IUnknown *a3,
        char a4,
        struct IAppLayoutOperation **a5)
{
  struct IAppLayoutOperation **v8; // r12
  unsigned int v9; // edi
  char *v11; // r14
  __int64 v12; // r15
  char *v13; // rbx
  char v14; // bp
  __int64 *AddressOf; // rdi
  __int64 *v16; // rax
  struct IApplicationView *v17; // r8
  int ReverseAppToAppSwitchLayoutOperation; // eax
  __int64 v19[2]; // [rsp+20h] [rbp-48h] BYREF
  char v20; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct ITabletModePositioner *v22; // [rsp+70h] [rbp+8h] BYREF

  v8 = a5;
  *a5 = 0LL;
  if ( *((_BYTE *)this + 336) )
  {
    if ( !*((_QWORD *)this + 39) )
      return 2147500037LL;
    v11 = (char *)this + 304;
    v12 = *((_QWORD *)this + 38);
    v13 = (char *)this - 8;
    v19[1] = (__int64)this - 8;
    v14 = 1;
    v20 = 1;
    if ( (unsigned int)SHIsSameObject(*(struct IUnknown **)(v12 + 16), a3)
      && (*(unsigned int (__fastcall **)(_QWORD, struct IAppLayout *, __int64))(**(_QWORD **)(v12 + 8) + 200LL))(
           *(_QWORD *)(v12 + 8),
           a2,
           2LL) )
    {
      v22 = 0LL;
      v19[0] = 0LL;
      AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(v19);
      v16 = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v22);
      TabletModePositionerHelpers::GetApplicationViewsFromLayout(
        *(TabletModePositionerHelpers **)v12,
        (struct IAppLayout *)&a5,
        (unsigned int *)v16,
        (struct IApplicationView **)AddressOf);
      LOBYTE(v17) = a4;
      ReverseAppToAppSwitchLayoutOperation = ScreenManagerHelpers::CreateReverseAppToAppSwitchLayoutOperation(
                                               *((ScreenManagerHelpers **)this + 37),
                                               v22,
                                               v17,
                                               (__int64)v8);
      v9 = ReverseAppToAppSwitchLayoutOperation;
      if ( ReverseAppToAppSwitchLayoutOperation >= 0 )
      {
        CTSimpleArray<ScreenManager::CacheEntry,4294967294,CTPolicyCoTaskMem<ScreenManager::CacheEntry>,CSimpleArrayStandardCompareHelper<ScreenManager::CacheEntry>,CSimpleArrayStandardMergeHelper<ScreenManager::CacheEntry>>::RemoveAt(
          v11,
          0LL);
        v14 = 0;
        v9 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB9,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
          (const char *)(unsigned int)ReverseAppToAppSwitchLayoutOperation);
      }
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v19);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v22);
    }
    else
    {
      v9 = -2147019873;
    }
    if ( v14 )
      CTSimpleArray<ScreenManager::CacheEntry,4294967294,CTPolicyCoTaskMem<ScreenManager::CacheEntry>,CSimpleArrayStandardCompareHelper<ScreenManager::CacheEntry>,CSimpleArrayStandardMergeHelper<ScreenManager::CacheEntry>>::RemoveAll((__int64)(v13 + 312));
  }
  else
  {
    v9 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA6,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
      (const char *)0x8007139FLL);
  }
  return v9;
}
