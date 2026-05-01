/*
 * XREFs of ?RegisterForFilterChanges@VirtualDesktopThumbnailWindowFilter@@UEAAJPEAUIWeakReference@WeakReference@@@Z @ 0x18049FE40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18031A2A4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopThumbnailWindowFilter::RegisterForFilterChanges(
        VirtualDesktopThumbnailWindowFilter *this,
        struct IWeakReference *a2,
        void *a3)
{
  _QWORD *v4; // rbx
  int v5; // edi
  __int64 v6; // rdx
  __int64 *v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IWeakReference *v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0LL;
  v4 = (_QWORD *)((char *)this + 64);
  v10 = a2;
  if ( a2 )
    ((void (__fastcall *)(struct IWeakReference *))a2->lpVtbl->AddRef)(a2);
  v5 = 0;
  v6 = v4[1];
  if ( v6 != v4[3]
    || (v5 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
               (__int64)v4,
               v6 + 1,
               a3),
        v5 >= 0) )
  {
    v7 = (__int64 *)(*v4 + 8 * v4[1]++);
    if ( v7 )
    {
      *v7 = 0LL;
      if ( v7 != (__int64 *)&v10 )
      {
        *v7 = (__int64)a2;
        v10 = 0LL;
      }
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopthumbnailwindowfilter.cpp",
      (const char *)(unsigned int)v5);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  return (unsigned int)v5;
}
