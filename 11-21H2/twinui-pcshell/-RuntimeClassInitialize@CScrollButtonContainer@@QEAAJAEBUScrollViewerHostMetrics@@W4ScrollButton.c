/*
 * XREFs of ?RuntimeClassInitialize@CScrollButtonContainer@@QEAAJAEBUScrollViewerHostMetrics@@W4ScrollButtonContainerFlags@@PEAUIWeakReference@WeakReference@@PEAUIDWriteTextFormat@@PEAUISwitchThumbnailFactory@@@Z @ 0x1804D3DC4
 * Callers:
 *     ??$MakeAndInitialize@VCScrollButtonContainer@@V1@AEBUScrollViewerHostMetrics@@AEAW4ScrollButtonContainerFlags@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIDWriteTextFormat@@AEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVCScrollButtonContainer@@AEBUScrollViewerHostMetrics@@AEAW4ScrollButtonContainerFlags@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIDWriteTextFormat@@AEAPEAUISwitchThumbnailFactory@@@Z @ 0x1804D37C0 (--$MakeAndInitialize@VCScrollButtonContainer@@V1@AEBUScrollViewerHostMetrics@@AEAW4ScrollButtonC.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CGlyphButtonElement_CreateInstance@@YAJGW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@@IPEAUIWeakReference@WeakReference@@PEAUIDWriteTextFormat@@PEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x180236932 (-CGlyphButtonElement_CreateInstance@@YAJGW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@@IPEAUIWeakR.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@PEAUIWeakReference@WeakReference@@@Z @ 0x1804A3094 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@PEAUIWeakReference@WeakRe.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@VCScrollButtonContainer@@@WeakReference@@V12@AEAPEAVCScrollButtonContainer@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VCScrollButtonContainer@@@WeakReference@@AEAPEAVCScrollButtonContainer@@@Z @ 0x1804D372C (--$MakeAndInitialize@V-$CWeakReference@VCScrollButtonContainer@@@WeakReference@@V12@AEAPEAVCScro.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CScrollButtonContainer::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // r15
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64, GUID *, __int64); // rdi
  char v9; // bp
  int v10; // ebx
  __int64 v11; // rdx
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // r13
  int Instance; // eax
  unsigned int v17; // edi
  __int64 v18; // rdx
  int v19; // r9d
  int v20; // eax
  __int64 v21; // [rsp+38h] [rbp-50h]
  __int64 v22; // [rsp+38h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v24; // [rsp+90h] [rbp+8h] BYREF

  *(_OWORD *)(a1 + 240) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 256) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 272) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 288) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 304) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 320) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 336) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 352) = *(_OWORD *)(a2 + 112);
  *(_OWORD *)(a1 + 368) = *(_OWORD *)(a2 + 128);
  *(_OWORD *)(a1 + 384) = *(_OWORD *)(a2 + 144);
  *(_QWORD *)(a1 + 400) = *(_QWORD *)(a2 + 160);
  *(_DWORD *)(a1 + 232) = a3;
  Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)(a1 + 424), a4);
  v7 = a6;
  v8 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64))(*(_QWORD *)a6 + 120LL);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)(a1 + 88));
  v9 = 1;
  v24 = 0x100000001LL;
  v10 = v8(v7, 0LL, 0x100000001LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, a1 + 88);
  if ( v10 < 0 )
  {
    v11 = 57LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\scrollbuttoncontainerelement.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  v24 = a1;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 432));
  v13 = Microsoft::WRL::Details::MakeAndInitialize<WeakReference::CWeakReference<CScrollButtonContainer>,WeakReference::CWeakReference<CScrollButtonContainer>,CScrollButtonContainer * &>(
          (_QWORD *)(a1 + 432),
          &v24);
  v10 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\CustomWeakReference.h",
      (const char *)(unsigned int)v13);
    v11 = 58LL;
    goto LABEL_3;
  }
  v24 = *(_QWORD *)(a1 + 432);
  v14 = v24;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v24);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 408));
  v15 = a5;
  Instance = CGlyphButtonElement_CreateInstance(
               (*(_DWORD *)(a1 + 232) & 1) != 0 ? -6293 : -6386,
               1u,
               a1 + 280,
               2 * (*(_DWORD *)(a1 + 232) & 1u) + 13018,
               v14,
               a5,
               v7,
               v21,
               (CGlyphButtonElement *)(a1 + 408));
  v17 = Instance;
  if ( Instance >= 0 )
  {
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 416));
    if ( (*(_BYTE *)(a1 + 232) & 1) != 0 )
    {
      v19 = 13021;
      v20 = 1;
    }
    else
    {
      v20 = 0;
      v19 = 13019;
    }
    Instance = CGlyphButtonElement_CreateInstance(
                 v20 != 0 ? -6292 : -6387,
                 1u,
                 a1 + 280,
                 v19,
                 v14,
                 v15,
                 a6,
                 v22,
                 (CGlyphButtonElement *)(a1 + 416));
    v17 = Instance;
    if ( Instance >= 0 )
    {
      Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, *(_QWORD *)(a1 + 408));
      v17 = Instance;
      if ( Instance >= 0 )
      {
        Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, *(_QWORD *)(a1 + 416));
        v17 = Instance;
        if ( Instance >= 0 )
        {
          v9 = 0;
          v17 = 0;
          goto LABEL_19;
        }
        v18 = 88LL;
      }
      else
      {
        v18 = 87LL;
      }
    }
    else
    {
      v18 = 85LL;
    }
  }
  else
  {
    v18 = 75LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\scrollbuttoncontainerelement.cpp",
    (const char *)(unsigned int)Instance);
LABEL_19:
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
  return v17;
}
