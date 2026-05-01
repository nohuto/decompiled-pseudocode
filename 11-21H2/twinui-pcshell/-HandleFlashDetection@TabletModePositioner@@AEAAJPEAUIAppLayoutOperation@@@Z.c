/*
 * XREFs of ?HandleFlashDetection@TabletModePositioner@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x18050456C
 * Callers:
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180500804 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_df999f07d52093701c0c38e9d5359aaf___ @ 0x1804FF224 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_df999f07d52093701c0c38e9d5359aaf___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabletModePositioner::HandleFlashDetection(
        TabletModePositioner *this,
        struct IAppLayoutOperation *a2)
{
  __int64 *v4; // r14
  __int64 v5; // rcx
  __int64 (__fastcall *v6)(struct IAppLayoutOperation *, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct IAppLayoutOperation *v15; // [rsp+40h] [rbp+20h] BYREF
  __int64 v16; // [rsp+48h] [rbp+28h] BYREF

  v4 = (__int64 *)((char *)this + 288);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 36);
  v5 = *((_QWORD *)this + 35);
  if ( v5 )
  {
    *((_QWORD *)this + 35) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v16 = 0LL;
  v6 = *(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(*(_QWORD *)a2 + 120LL);
  AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v16);
  v8 = v6(a2, AddressOf);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA86,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_18;
  }
  if ( !v16 )
  {
LABEL_17:
    v9 = 0;
    goto LABEL_18;
  }
  v15 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
  v15 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v4);
  v9 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_df999f07d52093701c0c38e9d5359aaf___(
         v11,
         v10,
         (__int64)v4,
         &v15);
  if ( v15 )
    (*(void (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v9 >= 0 )
  {
    if ( *((struct IAppLayoutOperation **)this + 35) != a2 )
    {
      v15 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
      v12 = *((_QWORD *)this + 35);
      *((_QWORD *)this + 35) = a2;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    if ( this )
      (*(void (__fastcall **)(TabletModePositioner *))(*(_QWORD *)this + 16LL))(this);
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA8D,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v9);
  if ( this )
    (*(void (__fastcall **)(TabletModePositioner *))(*(_QWORD *)this + 16LL))(this);
LABEL_18:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
  return (unsigned int)v9;
}
