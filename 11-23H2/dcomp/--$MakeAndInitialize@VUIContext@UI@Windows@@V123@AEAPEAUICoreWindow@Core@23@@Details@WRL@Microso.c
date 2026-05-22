/*
 * XREFs of ??$MakeAndInitialize@VUIContext@UI@Windows@@V123@AEAPEAUICoreWindow@Core@23@@Details@WRL@Microsoft@@YAJPEAPEAVUIContext@UI@Windows@@AEAPEAUICoreWindow@Core@45@@Z @ 0x180018AA8
 * Callers:
 *     ?CreateForCoreWindow@UIContextFactory@UI@Windows@@UEAAJPEAUICoreWindow@Core@23@HPEAPEAUIUIContext@23@@Z @ 0x180018980 (-CreateForCoreWindow@UIContextFactory@UI@Windows@@UEAAJPEAUICoreWindow@Core@23@HPEAPEAUIUIContex.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0UIContext@UI@Windows@@QEAA@XZ @ 0x180018B74 (--0UIContext@UI@Windows@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180018C44 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@UICoreWindow@Core@UI@Windows@@@WRL@Microsoft@@YAJPEAUICoreWindow@Core@UI@Windows@@PEAVWeakRef@01@@Z @ 0x180018C88 (--$AsWeak@UICoreWindow@Core@UI@Windows@@@WRL@Microsoft@@YAJPEAUICoreWindow@Core@UI@Windows@@PEAV.c)
 *     ?Attach@?$ComPtr@VUIContext@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVUIContext@UI@Windows@@@Z @ 0x180018DB4 (-Attach@-$ComPtr@VUIContext@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVUIContext@UI@Windows@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800826A8 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VUIContext@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18008C910 (-InternalRelease@-$ComPtr@VUIContext@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::UIContext,Windows::UI::UIContext,Windows::UI::Core::ICoreWindow * &>(
        _QWORD *a1,
        __int64 *a2)
{
  Windows::UI::UIContext *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  int v9; // eax
  volatile int *v10; // rdx
  unsigned int v11; // edi
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v16; // [rsp+40h] [rbp+20h] BYREF
  Windows::UI::UIContext *v17; // [rsp+50h] [rbp+30h] BYREF
  __int64 v18; // [rsp+58h] [rbp+38h] BYREF

  *a1 = 0LL;
  v4 = (Windows::UI::UIContext *)DefaultHeap::Alloc(0x60uLL);
  v17 = v4;
  if ( v4 )
  {
    v5 = Windows::UI::UIContext::UIContext(v4);
    v16 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::UIContext>::Attach(&v16, v5);
    v6 = v16;
    v17 = 0LL;
    v7 = *a2;
    v18 = v16 + 88;
    v8 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v18);
    v9 = Microsoft::WRL::AsWeak<Windows::UI::Core::ICoreWindow>(v7, v8);
    v11 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtuicontext.cpp",
        (const char *)(unsigned int)v9);
      Microsoft::WRL::ComPtr<Windows::UI::UIContext>::InternalRelease(&v16);
      Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v17);
      return v11;
    }
    else
    {
      if ( v6 )
      {
        v12 = *(_QWORD *)(v6 + 72);
        while ( v12 >= 0 )
        {
          if ( (_DWORD)v12 != 0x7FFFFFFF )
          {
            v13 = v12;
            v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 72), v12 + 1, v12);
            if ( v13 != v12 )
              continue;
          }
          goto LABEL_8;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v12 + 16), v10);
LABEL_8:
        v6 = v16;
      }
      *a1 = v6;
      Microsoft::WRL::ComPtr<Windows::UI::UIContext>::InternalRelease(&v16);
      return 0LL;
    }
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v17);
    return 2147942414LL;
  }
}
