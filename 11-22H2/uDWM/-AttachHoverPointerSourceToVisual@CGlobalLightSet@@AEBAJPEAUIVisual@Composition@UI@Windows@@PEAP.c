/*
 * XREFs of ?AttachHoverPointerSourceToVisual@CGlobalLightSet@@AEBAJPEAUIVisual@Composition@UI@Windows@@PEAPEAUIHoverPointerSourcePartner@345@@Z @ 0x18003F398
 * Callers:
 *     ?Initialize@CGlobalLightSet@@AEAAJXZ @ 0x18003F6F8 (-Initialize@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180014868 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180052380 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CGlobalLightSet::AttachHoverPointerSourceToVisual(
        CGlobalLightSet *this,
        __int64 (__fastcall ***a2)(struct Windows::UI::Composition::IVisual *, GUID *, __int64 *),
        struct Windows::UI::Composition::IHoverPointerSourcePartner **a3)
{
  __int64 (__fastcall *v5)(struct Windows::UI::Composition::IVisual *, GUID *, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  __int64 (__fastcall ***v10)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rdi
  int v12; // eax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, struct Windows::UI::Composition::IVisual *, CGlobalLightSet **); // rdi
  struct Windows::UI::Composition::IHoverPointerSourcePartner *v15; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  CGlobalLightSet *v21; // [rsp+60h] [rbp+30h] BYREF
  __int64 v22; // [rsp+68h] [rbp+38h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, GUID *, __int64 *); // [rsp+78h] [rbp+48h] BYREF

  v21 = this;
  v19[0] = 0LL;
  v23 = 0LL;
  v5 = **a2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v19);
  v6 = v5((struct Windows::UI::Composition::IVisual *)a2, &GUID_bcb4ad45_7609_4550_934f_16002a68fded, v19);
  v7 = v6;
  if ( v6 < 0 )
  {
    v17 = 117LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v6,
      v19[0]);
    goto LABEL_6;
  }
  v8 = v19[0];
  v9 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v19[0] + 48LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
  v6 = v9(v8, &v23);
  v7 = v6;
  if ( v6 < 0 )
  {
    v17 = 118LL;
    goto LABEL_9;
  }
  v22 = 0LL;
  v21 = 0LL;
  v10 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v23;
  v11 = **v23;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
  v12 = v11(v10, &GUID_36af3eb2_0371_49d7_9bb8_9c9414a9229c, &v22);
  v7 = v12;
  if ( v12 < 0 )
  {
    v18 = 123LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v12,
      v19[0]);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
    goto LABEL_6;
  }
  v13 = v22;
  v14 = *(__int64 (__fastcall **)(__int64, struct Windows::UI::Composition::IVisual *, CGlobalLightSet **))(*(_QWORD *)v22 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
  v12 = v14(v13, (struct Windows::UI::Composition::IVisual *)a2, &v21);
  v7 = v12;
  if ( v12 < 0 )
  {
    v18 = 124LL;
    goto LABEL_12;
  }
  v15 = v21;
  v21 = 0LL;
  *a3 = v15;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
  v7 = 0;
LABEL_6:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v19);
  return v7;
}
