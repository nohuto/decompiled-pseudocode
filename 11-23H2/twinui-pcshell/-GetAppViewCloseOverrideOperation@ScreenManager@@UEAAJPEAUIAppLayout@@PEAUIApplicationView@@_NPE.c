/*
 * XREFs of ?GetAppViewCloseOverrideOperation@ScreenManager@@UEAAJPEAUIAppLayout@@PEAUIApplicationView@@_NPEAPEAUIAppLayoutOperation@@@Z @ 0x1805C58D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveAll@?$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardCompareHelper@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardMergeHelper@UCacheEntry@ScreenManager@@@@@@QEAAXXZ @ 0x1801BD1A0 (-RemoveAll@-$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@UCacheEntr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetApplicationViewsFromLayout@TabletModePositionerHelpers@@YAJPEAUIAppLayout@@PEAIPEAPEAUIApplicationView@@2@Z @ 0x18056FB28 (-GetApplicationViewsFromLayout@TabletModePositionerHelpers@@YAJPEAUIAppLayout@@PEAIPEAPEAUIAppli.c)
 *     ?CreateReverseAppToAppSwitchLayoutOperation@ScreenManagerHelpers@@YAJPEAUITabletModePositioner@@PEAUIApplicationView@@_NPEAPEAUIAppLayoutOperation@@@Z @ 0x1805C56EC (-CreateReverseAppToAppSwitchLayoutOperation@ScreenManagerHelpers@@YAJPEAUITabletModePositioner@@.c)
 *     ?RemoveAt@?$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardCompareHelper@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardMergeHelper@UCacheEntry@ScreenManager@@@@@@QEAAJ_K@Z @ 0x1805C61A4 (-RemoveAt@-$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@UCacheEntry.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ScreenManager::GetAppViewCloseOverrideOperation(
        ScreenManager *this,
        struct IAppLayout *a2,
        struct IUnknown *a3,
        char a4,
        struct IAppLayoutOperation **a5)
{
  struct IAppLayoutOperation **v7; // r12
  unsigned int v8; // edi
  char *v10; // r14
  __int64 v11; // r15
  char *v12; // rbx
  char v13; // si
  struct IApplicationView *v14; // r8
  int ReverseAppToAppSwitchLayoutOperation; // eax
  struct IApplicationView *v16[2]; // [rsp+20h] [rbp-20h] BYREF
  char v17; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  struct ITabletModePositioner *v19; // [rsp+80h] [rbp+40h] BYREF
  struct IApplicationView *v20; // [rsp+98h] [rbp+58h]

  LOBYTE(v20) = a4;
  v7 = a5;
  *a5 = 0LL;
  if ( *((_BYTE *)this + 336) )
  {
    if ( !*((_QWORD *)this + 39) )
      return 2147500037LL;
    v10 = (char *)this + 304;
    v11 = *((_QWORD *)this + 38);
    v12 = (char *)this - 8;
    v16[1] = (ScreenManager *)((char *)this - 8);
    v13 = 1;
    v17 = 1;
    if ( (unsigned int)SHIsSameObject(*(struct IUnknown **)(v11 + 16), a3)
      && (*(unsigned int (__fastcall **)(_QWORD, struct IAppLayout *, __int64))(**(_QWORD **)(v11 + 8) + 200LL))(
           *(_QWORD *)(v11 + 8),
           a2,
           2LL) )
    {
      v19 = 0LL;
      v16[0] = 0LL;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)v16);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v19);
      TabletModePositionerHelpers::GetApplicationViewsFromLayout(
        *(TabletModePositionerHelpers **)v11,
        (struct IAppLayout *)&a5,
        (unsigned int *)&v19,
        v16);
      LOBYTE(v14) = (_BYTE)v20;
      ReverseAppToAppSwitchLayoutOperation = ScreenManagerHelpers::CreateReverseAppToAppSwitchLayoutOperation(
                                               *((ScreenManagerHelpers **)this + 37),
                                               v19,
                                               v14,
                                               (__int64)v7);
      v8 = ReverseAppToAppSwitchLayoutOperation;
      if ( ReverseAppToAppSwitchLayoutOperation >= 0 )
      {
        CTSimpleArray<ScreenManager::CacheEntry,4294967294,CTPolicyCoTaskMem<ScreenManager::CacheEntry>,CSimpleArrayStandardCompareHelper<ScreenManager::CacheEntry>,CSimpleArrayStandardMergeHelper<ScreenManager::CacheEntry>>::RemoveAt(
          v10,
          0LL);
        v13 = 0;
        v8 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB9,
          (int)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
          (const char *)(unsigned int)ReverseAppToAppSwitchLayoutOperation);
      }
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)v16);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v19);
    }
    else
    {
      v8 = -2147019873;
    }
    if ( v13 )
      CTSimpleArray<ScreenManager::CacheEntry,4294967294,CTPolicyCoTaskMem<ScreenManager::CacheEntry>,CSimpleArrayStandardCompareHelper<ScreenManager::CacheEntry>,CSimpleArrayStandardMergeHelper<ScreenManager::CacheEntry>>::RemoveAll((__int64)(v12 + 312));
  }
  else
  {
    v8 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA6,
      (int)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
      (const char *)0x8007139FLL);
  }
  return v8;
}
