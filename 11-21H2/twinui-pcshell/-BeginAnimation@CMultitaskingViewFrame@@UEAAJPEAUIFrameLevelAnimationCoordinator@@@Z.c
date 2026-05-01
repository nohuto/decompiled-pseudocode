/*
 * XREFs of ?BeginAnimation@CMultitaskingViewFrame@@UEAAJPEAUIFrameLevelAnimationCoordinator@@@Z @ 0x1804B0250
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18030D564 (--4-$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??$As@UIFrameElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFrameElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804AF534 (--$As@UIFrameElement@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CMultitaskingViewFrame::BeginAnimation(
        CMultitaskingViewFrame *this,
        struct IFrameLevelAnimationCoordinator *a2)
{
  __int64 *v4; // rax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64 *); // rdi
  int v9; // eax
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, __int64, __int64, GUID *, __int64 *); // rbx
  int v12; // eax
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v16; // [rsp+60h] [rbp+30h] BYREF
  __int64 v17; // [rsp+68h] [rbp+38h] BYREF
  __int64 v18; // [rsp+70h] [rbp+40h] BYREF
  __int64 v19; // [rsp+78h] [rbp+48h] BYREF

  v4 = (__int64 *)(*(__int64 (__fastcall **)(struct IFrameLevelAnimationCoordinator *, __int64 *))(*(_QWORD *)a2 + 88LL))(
                    a2,
                    &v19);
  Microsoft::WRL::ComPtr<IObjectArray>::operator=((__int64 *)this + 314, v4);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
  if ( *((_QWORD *)this + 315) )
  {
    v18 = 0LL;
    v6 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IFrameElement>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 315,
           &v18);
    v5 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2E9,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
        (const char *)(unsigned int)v6);
LABEL_14:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
      return v5;
    }
    v17 = 0LL;
    v7 = v18;
    v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 40LL);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v17);
    v9 = v8(v7, &v17);
    v5 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2EC,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
        (const char *)(unsigned int)v9);
LABEL_13:
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v17);
      goto LABEL_14;
    }
    v16 = 0LL;
    v10 = *((_QWORD *)this + 310);
    v11 = *(__int64 (__fastcall **)(__int64, __int64, __int64, GUID *, __int64 *))(*(_QWORD *)v10 + 120LL);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v16);
    v19 = 0x100000001LL;
    v12 = v11(v10, v17, 0x100000001LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v16);
    v5 = v12;
    if ( v12 >= 0 )
    {
      (*(void (__fastcall **)(struct IFrameLevelAnimationCoordinator *, _QWORD, CMultitaskingViewFrame *, __int64))(*(_QWORD *)a2 + 80LL))(
        a2,
        *((_QWORD *)this + 310),
        this,
        v16);
      v12 = (*(__int64 (__fastcall **)(struct IFrameLevelAnimationCoordinator *))(*(_QWORD *)a2 + 72LL))(a2);
      v5 = v12;
      if ( v12 >= 0 )
      {
LABEL_12:
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v16);
        goto LABEL_13;
      }
      v13 = 753LL;
    }
    else
    {
      v13 = 751LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_12;
  }
  v5 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2E6,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
    (const char *)0x8007139FLL);
  return v5;
}
