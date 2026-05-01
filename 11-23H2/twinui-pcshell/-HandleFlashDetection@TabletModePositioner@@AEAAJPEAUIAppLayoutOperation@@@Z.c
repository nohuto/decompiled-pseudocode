/*
 * XREFs of ?HandleFlashDetection@TabletModePositioner@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1805BCB00
 * Callers:
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1805B8FC4 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_df999f07d52093701c0c38e9d5359aaf___ @ 0x1805B7AC4 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_df999f07d52093701c0c38e9d5359aaf___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabletModePositioner::HandleFlashDetection(
        TabletModePositioner *this,
        struct IAppLayoutOperation *a2)
{
  __int64 *v4; // r14
  __int64 v5; // rcx
  __int64 (__fastcall *v6)(struct IAppLayoutOperation *, __int64 *); // rbx
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v14; // [rsp+40h] [rbp+20h] BYREF
  struct IAppLayoutOperation *v15; // [rsp+48h] [rbp+28h] BYREF

  v4 = (__int64 *)((char *)this + 288);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 36);
  v5 = *((_QWORD *)this + 35);
  if ( v5 )
  {
    *((_QWORD *)this + 35) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v14 = 0LL;
  v6 = *(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(*(_QWORD *)a2 + 120LL);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v14);
  v7 = v6(a2, &v14);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA85,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_18;
  }
  if ( !v14 )
  {
LABEL_17:
    v8 = 0;
    goto LABEL_18;
  }
  v15 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
  v15 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v4);
  v8 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_df999f07d52093701c0c38e9d5359aaf___(
         v10,
         v9,
         (__int64)v4,
         &v15);
  if ( v15 )
    (*(void (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v8 >= 0 )
  {
    if ( *((struct IAppLayoutOperation **)this + 35) != a2 )
    {
      v15 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
      v11 = *((_QWORD *)this + 35);
      *((_QWORD *)this + 35) = a2;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( this )
      (*(void (__fastcall **)(TabletModePositioner *))(*(_QWORD *)this + 16LL))(this);
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA8C,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v8);
  if ( this )
    (*(void (__fastcall **)(TabletModePositioner *))(*(_QWORD *)this + 16LL))(this);
LABEL_18:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v14);
  return (unsigned int)v8;
}
