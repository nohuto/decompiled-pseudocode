/*
 * XREFs of ?HandleAppToAppLayoutChange@ScreenManager@@AEAAJPEAUIAppLayoutOperation@@PEA_N@Z @ 0x1805C5A7C
 * Callers:
 *     ?AppLayoutChanged@ScreenManager@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z @ 0x1805C5640 (-AppLayoutChanged@ScreenManager@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_InsertAt@AEBUCacheEntry@ScreenManager@@@?$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardCompareHelper@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardMergeHelper@UCacheEntry@ScreenManager@@@@@@QEAAJAEBUCacheEntry@ScreenManager@@_K@Z @ 0x1805C5484 (--$_InsertAt@AEBUCacheEntry@ScreenManager@@@-$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPP.c)
 *     ??1CacheEntry@ScreenManager@@QEAA@XZ @ 0x1805C5570 (--1CacheEntry@ScreenManager@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ScreenManager::HandleAppToAppLayoutChange(__int64 **this, struct IAppLayoutOperation *a2, bool *a3)
{
  __int64 (__fastcall *v6)(struct IAppLayoutOperation *, __int64 *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 (__fastcall *v9)(struct IAppLayoutOperation *, __int64 *); // rbx
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, GUID *, __int128 *); // rdi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, GUID *, char *); // rdi
  __int64 (__fastcall *v17)(struct IAppLayoutOperation *, __int64 *); // rbx
  __int128 v19; // [rsp+20h] [rbp-20h] BYREF
  __int64 v20[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v22; // [rsp+78h] [rbp+38h] BYREF
  __int64 v23; // [rsp+80h] [rbp+40h] BYREF

  *a3 = 0;
  v23 = 0LL;
  v6 = *(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(*(_QWORD *)a2 + 40LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
  v7 = v6(a2, &v23);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v23 + 48LL))(v23) )
    {
      v22 = 0LL;
      v9 = *(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(*(_QWORD *)a2 + 48LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v22);
      v10 = v9(a2, &v22);
      v8 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x10A,
          (int)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
          (const char *)(unsigned int)v10);
LABEL_15:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v22);
        goto LABEL_18;
      }
      v19 = 0LL;
      v20[0] = 0LL;
      v11 = v23;
      v12 = *(__int64 (__fastcall **)(__int64, GUID *, __int128 *))(*(_QWORD *)v23 + 192LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v19);
      v13 = v12(v11, &GUID_7baad876_2fc5_4561_93e1_17e868a174ed, &v19);
      v8 = v13;
      if ( v13 < 0 )
      {
        v14 = 269LL;
LABEL_14:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (int)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
          (const char *)(unsigned int)v13);
        ScreenManager::CacheEntry::~CacheEntry((ScreenManager::CacheEntry *)&v19);
        goto LABEL_15;
      }
      v15 = v22;
      v16 = *(__int64 (__fastcall **)(__int64, GUID *, char *))(*(_QWORD *)v22 + 192LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v19 + 1);
      v13 = v16(v15, &GUID_7baad876_2fc5_4561_93e1_17e868a174ed, (char *)&v19 + 8);
      v8 = v13;
      if ( v13 < 0 )
      {
        v14 = 270LL;
        goto LABEL_14;
      }
      v17 = *(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(*(_QWORD *)a2 + 64LL);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v20);
      v13 = v17(a2, v20);
      v8 = v13;
      if ( v13 < 0 )
      {
        v14 = 271LL;
        goto LABEL_14;
      }
      v13 = CTSimpleArray<ScreenManager::CacheEntry,4294967294,CTPolicyCoTaskMem<ScreenManager::CacheEntry>,CSimpleArrayStandardCompareHelper<ScreenManager::CacheEntry>,CSimpleArrayStandardMergeHelper<ScreenManager::CacheEntry>>::_InsertAt<ScreenManager::CacheEntry const &>(
              this + 39,
              (__int64 *)&v19);
      v8 = v13;
      if ( v13 < 0 )
      {
        v14 = 272LL;
        goto LABEL_14;
      }
      *a3 = 1;
      ScreenManager::CacheEntry::~CacheEntry((ScreenManager::CacheEntry *)&v19);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v22);
    }
    v8 = 0;
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x106,
    (int)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
    (const char *)(unsigned int)v7);
LABEL_18:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
  return v8;
}
