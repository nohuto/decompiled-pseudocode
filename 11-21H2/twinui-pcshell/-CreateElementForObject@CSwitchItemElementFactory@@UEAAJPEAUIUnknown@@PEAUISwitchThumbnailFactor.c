/*
 * XREFs of ?CreateElementForObject@CSwitchItemElementFactory@@UEAAJPEAUIUnknown@@PEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x1804AC9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCSwitchItemElement@@UIMultitaskingViewElement@@USwitchItemElementInitializeArgs@1@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@$$QEAUSwitchItemElementInitializeArgs@CSwitchItemElement@@@Z @ 0x1804AC160 (--$MakeAndInitialize@VCSwitchItemElement@@UIMultitaskingViewElement@@USwitchItemElementInitializ.c)
 *     ??$SwitchItemInitializationError@AEAJ@MultitaskingViewTelemetry@@SAXAEAJ@Z @ 0x1804B49AC (--$SwitchItemInitializationError@AEAJ@MultitaskingViewTelemetry@@SAXAEAJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSwitchItemElementFactory::CreateElementForObject(
        CSwitchItemElementFactory *this,
        struct IUnknown *a2,
        struct ISwitchThumbnailFactory *a3,
        const struct _GUID *a4,
        void **a5)
{
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  int v10; // eax
  int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // eax
  __int64 v19; // [rsp+28h] [rbp-51h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, const struct _GUID *, void **); // [rsp+30h] [rbp-49h] BYREF
  __int64 v21; // [rsp+38h] [rbp-41h] BYREF
  _DWORD v22[4]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v23; // [rsp+50h] [rbp-29h]
  __int64 v24; // [rsp+58h] [rbp-21h]
  int v25; // [rsp+60h] [rbp-19h]
  int v26; // [rsp+64h] [rbp-15h]
  char *v27; // [rsp+68h] [rbp-11h] BYREF
  int v28; // [rsp+70h] [rbp-9h]
  _DWORD *v29; // [rsp+78h] [rbp-1h]
  __int64 v30; // [rsp+80h] [rbp+7h]
  __int64 v31; // [rsp+88h] [rbp+Fh]
  __int64 v32; // [rsp+90h] [rbp+17h]
  __int64 v33; // [rsp+98h] [rbp+1Fh]
  struct ISwitchThumbnailFactory *v34; // [rsp+A0h] [rbp+27h]
  int v35; // [rsp+A8h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+57h]
  int v37; // [rsp+E0h] [rbp+67h] BYREF

  v19 = 0LL;
  QueryInterface = a2->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
  v10 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
          a2,
          &GUID_c0944116_18f0_4c1c_a1a4_224296b2d4fc,
          &v19);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v21 = 0LL;
    v14 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 40LL))(v19);
    if ( !v14 )
    {
      v11 = -2147418113;
      v12 = 2147549183LL;
      v13 = 104LL;
      goto LABEL_5;
    }
    DwmpQueryWindowThumbnailSourceSize(v14, 0LL, &v21);
    v20 = 0LL;
    v27 = (char *)this + 16;
    v28 = *((_DWORD *)this + 74);
    v22[0] = *((_DWORD *)this + 17)
           + *((_DWORD *)this + 26)
           + *((_DWORD *)this + 27)
           + *((_DWORD *)this + 30)
           + *((_DWORD *)this + 31);
    v22[1] = *((_DWORD *)this + 4);
    v22[2] = *((_DWORD *)this + 24) + *((_DWORD *)this + 25);
    v23 = *((_QWORD *)this + 7);
    v24 = v21;
    v25 = 0;
    v26 = 0;
    v29 = v22;
    v30 = v19;
    v31 = *((_QWORD *)this + 41);
    v32 = *((_QWORD *)this + 38);
    v33 = *((_QWORD *)this + 42);
    v34 = a3;
    v35 = *((_DWORD *)this + 86);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
    v11 = Microsoft::WRL::Details::MakeAndInitialize<CSwitchItemElement,IMultitaskingViewElement,CSwitchItemElement::SwitchItemElementInitializeArgs>(
            &v20,
            (const struct CSwitchItemElement::SwitchItemElementInitializeArgs *)&v27);
    v37 = v11;
    if ( v11 >= 0 )
    {
      v17 = (**v20)(v20, a4, a5);
      v11 = v17;
      if ( v17 >= 0 )
      {
LABEL_11:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
        goto LABEL_12;
      }
      v15 = (unsigned int)v17;
      v16 = 122LL;
    }
    else
    {
      MultitaskingViewTelemetry::SwitchItemInitializationError<long &>(&v37);
      v15 = (unsigned int)v11;
      v16 = 121LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelementfactory.cpp",
      (const char *)v15);
    goto LABEL_11;
  }
  v12 = (unsigned int)v10;
  v13 = 99LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelementfactory.cpp",
    (const char *)v12);
LABEL_12:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
  return (unsigned int)v11;
}
