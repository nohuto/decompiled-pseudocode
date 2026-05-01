/*
 * XREFs of ?RemoveVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x1802E71E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsRemote@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@PEAH@Z @ 0x1800DF144 (-IsRemote@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@PEAH@Z.c)
 *     ??$FindEx@VComPtrCompareHelper@@@?$CTSimpleFixedArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJAEBVComPtrCompareHelper@@AEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800DF1F0 (--$FindEx@VComPtrCompareHelper@@@-$CTSimpleFixedArray@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x1805FC3C8 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTas.c)
 *     ?RemoveRemoteDesktop@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x1805FC434 (-RemoveRemoteDesktop@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopCollection::RemoveVirtualDesktop(
        CVirtualDesktopCollection *this,
        struct IVirtualDesktop *a2)
{
  __int64 v5; // rdx
  int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // eax
  _QWORD v10[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v12; // [rsp+70h] [rbp+30h] BYREF
  struct IUnknown *v13; // [rsp+78h] [rbp+38h] BYREF

  v12 = 0;
  if ( (int)CVirtualDesktopCollection::IsRemote(
              this,
              (__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, CVirtualDesktopCollection **))a2,
              &v12) >= 0
    && v12 )
  {
    return CVirtualDesktopCollection::RemoveRemoteDesktop(this, a2);
  }
  if ( *((_QWORD *)this + 7) == 1LL )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x86,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
  else
  {
    v13 = (struct IUnknown *)a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
    v6 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,ComPtrCompareHelper>::FindEx<ComPtrCompareHelper>(
           (_QWORD *)this + 6,
           v5,
           &v13,
           v10);
    if ( v6 >= 0 )
      v6 = CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::RemoveAt(
             (char *)this + 48,
             v10[0]);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v13);
    if ( v6 >= 0 )
    {
      v7 = *((_QWORD *)this + 4);
      if ( v7 )
        (*(void (__fastcall **)(__int64, CVirtualDesktopCollection *))(*(_QWORD *)v7 + 24LL))(v7, this);
      v13 = (struct IUnknown *)a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
      v9 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,ComPtrCompareHelper>::FindEx<ComPtrCompareHelper>(
             (_QWORD *)this + 14,
             v8,
             &v13,
             v10);
      if ( v9 >= 0 )
        v9 = CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::RemoveAt(
               (char *)this + 112,
               v10[0]);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8D,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
          (const char *)(unsigned int)v9);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v13);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x87,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
  }
}
