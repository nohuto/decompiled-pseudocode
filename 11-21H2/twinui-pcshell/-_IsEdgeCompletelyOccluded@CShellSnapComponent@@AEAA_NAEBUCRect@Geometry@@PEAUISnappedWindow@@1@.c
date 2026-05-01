/*
 * XREFs of ?_IsEdgeCompletelyOccluded@CShellSnapComponent@@AEAA_NAEBUCRect@Geometry@@PEAUISnappedWindow@@1@Z @ 0x180597AC8
 * Callers:
 *     ?GetAdjacentHalfSnappedView@CShellSnapComponent@@UEAAJPEAUIApplicationView@@PEAPEAU2@@Z @ 0x1805928A0 (-GetAdjacentHalfSnappedView@CShellSnapComponent@@UEAAJPEAUIApplicationView@@PEAPEAU2@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1800FE4F8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180168FA0 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
char __fastcall CShellSnapComponent::_IsEdgeCompletelyOccluded(
        CShellSnapComponent *this,
        const RECT *a2,
        struct ISnappedWindow *a3,
        struct ISnappedWindow *a4)
{
  char v7; // si
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rbx
  int v10; // eax
  HRGN RectRgnIndirect; // rbx
  char v12; // r14
  char v13; // r15
  struct IUnknown *v14; // rdi
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  __int64 v17; // rdx
  HRGN v18; // rax
  HRGN v19; // rdi
  struct IUnknown *v21; // [rsp+20h] [rbp-69h] BYREF
  __int64 v22; // [rsp+28h] [rbp-61h] BYREF
  int v23; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v24; // [rsp+38h] [rbp-51h] BYREF
  struct IUnknown *v25; // [rsp+40h] [rbp-49h] BYREF
  __int64 *v26; // [rsp+48h] [rbp-41h]
  struct IUnknown *v27; // [rsp+50h] [rbp-39h] BYREF
  struct IUnknown *v28; // [rsp+58h] [rbp-31h] BYREF
  __int64 v29; // [rsp+60h] [rbp-29h] BYREF
  unsigned int v30; // [rsp+68h] [rbp-21h]
  unsigned int v31; // [rsp+70h] [rbp-19h] BYREF
  __int64 v32; // [rsp+78h] [rbp-11h] BYREF
  __int64 *v33; // [rsp+80h] [rbp-9h]
  HRGN v34; // [rsp+88h] [rbp-1h]
  RECT rect; // [rsp+90h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v7 = 0;
  v22 = 0LL;
  v8 = *((_QWORD *)this + 29);
  v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 32LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
  v10 = v9(v8, &v22);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x520,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_30;
  }
  RectRgnIndirect = CreateRectRgnIndirect(a2);
  v34 = RectRgnIndirect;
  if ( RectRgnIndirect )
  {
    (*(void (__fastcall **)(struct ISnappedWindow *, struct IUnknown **))(*(_QWORD *)a3 + 112LL))(a3, &v28);
    (*(void (__fastcall **)(struct ISnappedWindow *, struct IUnknown **))(*(_QWORD *)a4 + 112LL))(a4, &v27);
    v12 = 0;
    v13 = 0;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
      (__int64)&v29,
      v22);
    v24 = 0;
    v25 = 0LL;
    v26 = &v29;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v24);
    v31 = v30;
    v32 = 0LL;
    v33 = &v29;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v31);
    while ( 1 )
    {
      if ( v24 == v31 && v26 == v33 )
      {
LABEL_27:
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v32);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v25);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v29);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v27);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v28);
        goto LABEL_28;
      }
      v14 = v25;
      v21 = v25;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
      if ( !(unsigned int)SHIsSameObject(v14, v28) )
        break;
      v12 = 1;
LABEL_23:
      if ( v13 )
        goto LABEL_26;
LABEL_24:
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v21);
      ++v24;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v24);
    }
    if ( (unsigned int)SHIsSameObject(v14, v27) )
    {
      v13 = 1;
      goto LABEL_22;
    }
    rect = 0LL;
    v15 = ((__int64 (__fastcall *)(struct IUnknown *, RECT *))v14->lpVtbl[5].AddRef)(v14, &rect);
    v16 = retaddr;
    if ( v15 >= 0 )
    {
      v15 = ((__int64 (__fastcall *)(struct IUnknown *, int *))v14->lpVtbl[3].Release)(v14, &v23);
      v16 = retaddr;
      if ( v15 >= 0 )
      {
        if ( v23 )
        {
          if ( rect.left < rect.right && rect.top < rect.bottom )
          {
            v18 = CreateRectRgnIndirect(&rect);
            v19 = v18;
            if ( v18 )
            {
              if ( CombineRgn(RectRgnIndirect, RectRgnIndirect, v18, 4) == 1 )
              {
                v7 = 1;
                DeleteObject(v19);
LABEL_26:
                Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v21);
                goto LABEL_27;
              }
              DeleteObject(v19);
            }
          }
        }
LABEL_22:
        if ( !v12 )
          goto LABEL_24;
        goto LABEL_23;
      }
      v17 = 1339LL;
    }
    else
    {
      v17 = 1338LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v16,
      (void *)v17,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_22;
  }
LABEL_28:
  if ( RectRgnIndirect )
    DeleteObject(RectRgnIndirect);
LABEL_30:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
  return v7;
}
