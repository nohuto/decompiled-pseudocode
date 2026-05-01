/*
 * XREFs of ?HandleInPlaceCacheUpdateForLayoutChange@ScreenManager@@AEAAJPEAUIAppLayoutOperation@@PEA_N@Z @ 0x1805C5CD8
 * Callers:
 *     ?AppLayoutChanged@ScreenManager@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z @ 0x1805C5640 (-AppLayoutChanged@ScreenManager@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ScreenManager::HandleInPlaceCacheUpdateForLayoutChange(
        ScreenManager *this,
        struct IAppLayoutOperation *a2,
        bool *a3)
{
  __int64 v5; // r14
  __int64 (__fastcall *v6)(struct IAppLayoutOperation *, __int64 *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 (__fastcall *v9)(struct IAppLayoutOperation *, __int64 *); // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, GUID *, __int64); // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v16; // [rsp+40h] [rbp+20h] BYREF
  __int64 v17; // [rsp+50h] [rbp+30h] BYREF

  *a3 = 0;
  if ( *((_QWORD *)this + 40) )
  {
    v5 = *((_QWORD *)this + 39);
    v17 = 0LL;
    v6 = *(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(*(_QWORD *)a2 + 40LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
    v7 = v6(a2, &v17);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x122,
        (int)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
        (const char *)(unsigned int)v7);
LABEL_11:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
      return v8;
    }
    v16 = 0LL;
    v9 = *(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(*(_QWORD *)a2 + 48LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
    v10 = v9(a2, &v16);
    v8 = v10;
    if ( v10 < 0 )
    {
      v11 = 292LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
      goto LABEL_11;
    }
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v5 + 8) + 200LL))(
           *(_QWORD *)(v5 + 8),
           v17,
           3LL)
      && (*(unsigned int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v16 + 200LL))(v16, v17, 4LL) )
    {
      v12 = v16;
      v13 = *(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v16 + 192LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(v5 + 8));
      v10 = v13(v12, &GUID_7baad876_2fc5_4561_93e1_17e868a174ed, v5 + 8);
      v8 = v10;
      if ( v10 < 0 )
      {
        v11 = 300LL;
        goto LABEL_10;
      }
      *a3 = 1;
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
  }
  return 0LL;
}
