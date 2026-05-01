/*
 * XREFs of ?ShellTargetChanged@JointDivider@@UEAAJPEAUIApplicationView@@@Z @ 0x1805DAAC0
 * Callers:
 *     ?AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z @ 0x1805DA2A0 (-AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18009FF88 (-IsPPIEdition@@YA_NXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall JointDivider::ShellTargetChanged(JointDivider *this, struct IUnknown *a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, _QWORD, __int64, GUID *, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64, __int64, GUID *, __int64 *); // rbx
  int v10; // eax
  __int64 v12; // rbx
  int (__fastcall *v13)(__int64, GUID *, struct IUnknown **); // rdi
  __int64 v14; // rbx
  int (__fastcall *v15)(__int64, GUID *, struct IUnknown **); // rdi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct IUnknown *v17; // [rsp+60h] [rbp+30h] BYREF
  __int64 v18; // [rsp+70h] [rbp+40h] BYREF
  __int64 v19; // [rsp+78h] [rbp+48h] BYREF

  *((_DWORD *)this + 8) = 0;
  if ( *((_QWORD *)this + 5)
    && a2
    && !IsPPIEdition()
    && (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 72LL))(*((_QWORD *)this + 5)) > 1
    && (*(unsigned int (__fastcall **)(_QWORD, struct IUnknown *))(**((_QWORD **)this + 5) + 184LL))(
         *((_QWORD *)this + 5),
         a2) )
  {
    v19 = 0LL;
    v4 = *((_QWORD *)this + 5);
    v5 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v4 + 104LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
    v6 = v5(v4, 0LL, 5LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v19);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x90,
        (int)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
        (const char *)(unsigned int)v6);
LABEL_10:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
      return v7;
    }
    v18 = 0LL;
    v8 = *((_QWORD *)this + 5);
    v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64, GUID *, __int64 *))(*(_QWORD *)v8 + 104LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
    v10 = v9(v8, 1LL, 5LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v18);
    v7 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x93,
        (int)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
      goto LABEL_10;
    }
    v17 = 0LL;
    v12 = v19;
    v13 = *(int (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)v19 + 48LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v17);
    if ( v13(v12, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v17) >= 0 && (unsigned int)SHIsSameObject(v17, a2) )
    {
      *((_DWORD *)this + 8) = 1;
    }
    else
    {
      v14 = v18;
      v15 = *(int (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)v18 + 48LL);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v17);
      if ( v15(v14, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v17) >= 0 )
      {
        if ( (unsigned int)SHIsSameObject(v17, a2) )
          *((_DWORD *)this + 8) = 2;
      }
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v17);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
  }
  InvalidateRect(*((HWND *)this + 3), 0LL, 1);
  return 0LL;
}
