/*
 * XREFs of ??$make@UInputViewOptions@implementation@KeyboardHosting@Shell@Internal@Windows@winrt@@AEA_NAEA_NAEA_NAEA_NW4ViewAnimationKind@Text@4567@W4ViewEffectKind@94567@W4ViewZOrder@94567@URect@Foundation@67@AEAU?$IVectorView@URect@Foundation@Windows@winrt@@@Collections@Foundation@67@@winrt@@YA?A_PAEA_N000$$QEAW4ViewAnimationKind@Text@Shell@Internal@Windows@0@$$QEAW4ViewEffectKind@23450@$$QEAW4ViewZOrder@23450@$$QEAURect@Foundation@50@AEAU?$IVectorView@URect@Foundation@Windows@winrt@@@Collections@950@@Z @ 0x180520E14
 * Callers:
 *     ?InvokeInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@UViewOptions@@@Z @ 0x180524A60 (-InvokeInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@UViewOptions@@@Z.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??0?$heap_implements@UInputViewOptions@implementation@KeyboardHosting@Shell@Internal@Windows@winrt@@@impl@winrt@@QEAA@_N000W4ViewAnimationKind@Text@Shell@Internal@Windows@2@W4ViewEffectKind@45672@W4ViewZOrder@45672@URect@Foundation@72@U?$IVectorView@URect@Foundation@Windows@winrt@@@Collections@Foundation@72@@Z @ 0x1805211AC (--0-$heap_implements@UInputViewOptions@implementation@KeyboardHosting@Shell@Internal@Windows@win.c)
 */

__int64 *__fastcall winrt::make<winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions,bool &,bool &,bool &,bool &,enum winrt::Windows::Internal::Shell::Text::ViewAnimationKind,enum winrt::Windows::Internal::Shell::Text::ViewEffectKind,enum winrt::Windows::Internal::Shell::Text::ViewZOrder,winrt::Windows::Foundation::Rect,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Foundation::Rect> &>(
        __int64 *a1,
        _BYTE *a2,
        _BYTE *a3,
        _BYTE *a4,
        char *a5,
        int *a6,
        int *a7,
        int *a8,
        _OWORD *a9,
        void **a10)
{
  __int64 v11; // r14
  int v15; // ebp
  int v16; // r9d
  int v17; // r8d
  int v18; // edx
  __int64 v19; // rax
  char v21; // [rsp+20h] [rbp-68h]
  int v22; // [rsp+28h] [rbp-60h]
  int v23; // [rsp+30h] [rbp-58h]
  int v24; // [rsp+38h] [rbp-50h]
  __int64 v25[2]; // [rsp+60h] [rbp-28h] BYREF
  void *v26; // [rsp+90h] [rbp+8h] BYREF

  v26 = a1;
  v11 = 0LL;
  v26 = operator new(0x48uLL);
  v15 = (int)v26;
  v26 = *a10;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v26);
  v16 = *a8;
  v17 = *a7;
  v18 = *a6;
  v24 = *a8;
  LOBYTE(v16) = *a4;
  v23 = *a7;
  LOBYTE(v17) = *a3;
  v22 = *a6;
  LOBYTE(v18) = *a2;
  v21 = *a5;
  *(_OWORD *)v25 = *a9;
  v19 = winrt::impl::heap_implements<winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions>::heap_implements<winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions>(
          v15,
          v18,
          v17,
          v16,
          v21,
          v22,
          v23,
          v24,
          (__int64)v25,
          (winrt::Windows::Foundation::IUnknown *)&v26);
  if ( v19 )
    v11 = v19 + 16;
  *a1 = v11;
  return a1;
}
