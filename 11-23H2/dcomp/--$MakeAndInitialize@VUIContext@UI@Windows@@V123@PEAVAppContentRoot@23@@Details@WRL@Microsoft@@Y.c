/*
 * XREFs of ??$MakeAndInitialize@VUIContext@UI@Windows@@V123@PEAVAppContentRoot@23@@Details@WRL@Microsoft@@YAJPEAPEAVUIContext@UI@Windows@@$$QEAPEAVAppContentRoot@45@@Z @ 0x180018860
 * Callers:
 *     ?RuntimeClassInitialize@AppContentRoot@UI@Windows@@QEAAJPEAUICompositionIsland@Composition@23@PEAUIInputSite@Input@Internal@23@@Z @ 0x180018790 (-RuntimeClassInitialize@AppContentRoot@UI@Windows@@QEAAJPEAUICompositionIsland@Composition@23@PE.c)
 * Callees:
 *     ??0UIContext@UI@Windows@@QEAA@XZ @ 0x180018B74 (--0UIContext@UI@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VUIContext@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVUIContext@UI@Windows@@@Z @ 0x180018DB4 (-Attach@-$ComPtr@VUIContext@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVUIContext@UI@Windows@@@Z.c)
 *     ?RuntimeClassInitialize@UIContext@UI@Windows@@QEAAJPEAUIUIContentRoot@23@@Z @ 0x180018DE8 (-RuntimeClassInitialize@UIContext@UI@Windows@@QEAAJPEAUIUIContentRoot@23@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800826A8 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VUIContext@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18008C910 (-InternalRelease@-$ComPtr@VUIContext@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::UIContext,Windows::UI::UIContext,Windows::UI::AppContentRoot *>(
        Windows::UI::UIContext **a1,
        struct Windows::UI::IUIContentRoot **a2)
{
  Windows::UI::UIContext *v4; // rax
  __int64 v5; // rax
  struct Windows::UI::IUIContentRoot *v6; // rdx
  Windows::UI::UIContext *v7; // rbx
  volatile int *v8; // rdx
  int v9; // edi
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  Windows::UI::UIContext *v13; // [rsp+30h] [rbp+8h] BYREF
  Windows::UI::UIContext *v14; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (Windows::UI::UIContext *)DefaultHeap::Alloc(0x60uLL);
  v14 = v4;
  if ( !v4 )
  {
    v9 = -2147024882;
LABEL_12:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v14);
    return (unsigned int)v9;
  }
  v5 = Windows::UI::UIContext::UIContext(v4);
  v13 = 0LL;
  Microsoft::WRL::ComPtr<Windows::UI::UIContext>::Attach(&v13, v5);
  v6 = *a2;
  v7 = v13;
  v14 = 0LL;
  v9 = Windows::UI::UIContext::RuntimeClassInitialize(v13, v6);
  if ( v9 < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::UI::UIContext>::InternalRelease(&v13);
    goto LABEL_12;
  }
  if ( v7 )
  {
    v10 = *((_QWORD *)v7 + 9);
    while ( v10 >= 0 )
    {
      if ( (_DWORD)v10 != 0x7FFFFFFF )
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange64((volatile signed __int64 *)v7 + 9, v10 + 1, v10);
        if ( v11 != v10 )
          continue;
      }
      goto LABEL_8;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v10 + 16), v8);
LABEL_8:
    v7 = v13;
  }
  *a1 = v7;
  Microsoft::WRL::ComPtr<Windows::UI::UIContext>::InternalRelease(&v13);
  return 0LL;
}
