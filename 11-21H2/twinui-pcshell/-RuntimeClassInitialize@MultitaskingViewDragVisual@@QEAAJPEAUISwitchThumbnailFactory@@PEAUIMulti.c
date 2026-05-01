/*
 * XREFs of ?RuntimeClassInitialize@MultitaskingViewDragVisual@@QEAAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1AEBUCSize@Geometry@@N@Z @ 0x1804DDAE8
 * Callers:
 *     ??$MakeAndInitialize@VMultitaskingViewDragVisual@@V1@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMultitaskingViewElement@@AEAPEAU3@AEBUCSize@Geometry@@AEAN@Details@WRL@Microsoft@@YAJPEAPEAVMultitaskingViewDragVisual@@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMultitaskingViewElement@@2AEBUCSize@Geometry@@AEAN@Z @ 0x1804DD588 (--$MakeAndInitialize@VMultitaskingViewDragVisual@@V1@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMul.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18030318C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingViewElement@@@Z @ 0x1804B9120 (--4-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingViewElement@.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1804DD770 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall MultitaskingViewDragVisual::RuntimeClassInitialize(
        MultitaskingViewDragVisual *this,
        struct ISwitchThumbnailFactory *a2,
        struct IMultitaskingViewElement *a3,
        __int64 (__fastcall ***a4)(struct IMultitaskingViewElement *, GUID *, __int64 *),
        const struct Geometry::CSize *a5,
        double a6)
{
  __int64 v10; // rbx
  unsigned int v11; // ebx
  __int64 (__fastcall *v12)(struct ISwitchThumbnailFactory *, _QWORD, __int64, GUID *, int *); // rbx
  _QWORD *v13; // rax
  __int64 (__fastcall *v14)(struct IMultitaskingViewElement *, GUID *, __int64 *); // rbx
  int v15; // eax
  int *v16; // rax
  int v17; // r9d
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  __int64 (__fastcall *v21)(struct ISwitchThumbnailFactory *, _QWORD, __int64, GUID *, int *); // rbx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64, struct ISwitchThumbnailFactory *, _QWORD, __int64 *, int *); // rdi
  int v26; // eax
  __int64 v28; // [rsp+30h] [rbp-50h] BYREF
  int v29[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v30; // [rsp+40h] [rbp-40h] BYREF
  int v31[2]; // [rsp+48h] [rbp-38h] BYREF
  int v32[2]; // [rsp+50h] [rbp-30h] BYREF
  int v33; // [rsp+58h] [rbp-28h] BYREF
  int v34; // [rsp+5Ch] [rbp-24h]
  int v35; // [rsp+60h] [rbp-20h]
  int v36; // [rsp+64h] [rbp-1Ch]
  __int64 v37; // [rsp+68h] [rbp-18h] BYREF
  int v38; // [rsp+70h] [rbp-10h]
  int v39; // [rsp+74h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v10 = *(_QWORD *)(*(__int64 (__fastcall **)(struct IMultitaskingViewElement *, __int64 *))(*(_QWORD *)a3 + 40LL))(
                     a3,
                     &v28);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v28);
  if ( v10 )
  {
    *(_QWORD *)v31 = 0LL;
    v12 = *(__int64 (__fastcall **)(struct ISwitchThumbnailFactory *, _QWORD, __int64, GUID *, int *))(*(_QWORD *)a2 + 120LL);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)v31);
    v28 = 0x100000001LL;
    v13 = (_QWORD *)(*(__int64 (__fastcall **)(struct IMultitaskingViewElement *, __int64 *))(*(_QWORD *)a3 + 40LL))(
                      a3,
                      &v37);
    v11 = v12(a2, *v13, v28, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v31);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v37);
    if ( (v11 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\dragvisual.cpp",
        (const char *)v11);
LABEL_18:
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)v31);
      return v11;
    }
    v30 = 0LL;
    v14 = **a4;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
    v15 = v14((struct IMultitaskingViewElement *)a4, &GUID_f8242c35_7f82_4b56_b5c8_37345206289d, &v30);
    v11 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\dragvisual.cpp",
        (const char *)(unsigned int)v15);
LABEL_17:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
      goto LABEL_18;
    }
    v16 = (int *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v30 + 32LL))(v30, &v37);
    v17 = v16[3] - v16[1];
    v18 = v16[2];
    v19 = *v16;
    v20 = -*((_DWORD *)a5 + 1);
    v33 = -*(_DWORD *)a5;
    v34 = v20;
    v35 = v18 + v33 - v19;
    v36 = v20 + v17;
    *(_QWORD *)v29 = 0LL;
    v21 = *(__int64 (__fastcall **)(struct ISwitchThumbnailFactory *, _QWORD, __int64, GUID *, int *))(*(_QWORD *)a2 + 120LL);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)v29);
    LODWORD(v28) = v35 - v33;
    HIDWORD(v28) = v36 - v34;
    v22 = v21(a2, *(_QWORD *)v31, v28, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v29);
    v11 = v22;
    if ( v22 >= 0 )
    {
      v22 = (*(__int64 (__fastcall **)(_QWORD, int *, _QWORD, _QWORD))(**(_QWORD **)v29 + 24LL))(
              *(_QWORD *)v29,
              &v33,
              0LL,
              0LL);
      v11 = v22;
      if ( v22 >= 0 )
      {
        *(_QWORD *)v32 = 0LL;
        v24 = v30;
        v25 = *(__int64 (__fastcall **)(__int64, struct ISwitchThumbnailFactory *, _QWORD, __int64 *, int *))(*(_QWORD *)v30 + 24LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v32);
        v37 = 0LL;
        v38 = v35 - v33;
        v39 = v36 - v34;
        v26 = v25(v24, a2, *(_QWORD *)v29, &v37, v32);
        v11 = v26;
        if ( v26 >= 0 )
        {
          *((_QWORD *)this + 6) = *(_QWORD *)a5;
          Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=((__int64 *)this + 3, (__int64 *)v31);
          Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=((__int64 *)this + 4, (__int64 *)v29);
          LODWORD(v28) = v35 - v33;
          HIDWORD(v28) = v36 - v34;
          *((_QWORD *)this + 7) = v28;
          Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)this + 5, (__int64 *)v32);
          *((double *)this + 10) = a6;
          Microsoft::WRL::ComPtr<IMultitaskingViewElement>::operator=((__int64 *)this + 2, (__int64)a4);
          v11 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x49,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\dragvisual.cpp",
            (const char *)(unsigned int)v26);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v32);
        goto LABEL_16;
      }
      v23 = 69LL;
    }
    else
    {
      v23 = 68LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\dragvisual.cpp",
      (const char *)(unsigned int)v22);
LABEL_16:
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)v29);
    goto LABEL_17;
  }
  v11 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x37,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\dragvisual.cpp",
    (const char *)0x8007139FLL);
  return v11;
}
