/*
 * XREFs of ??$MakeAndInitialize@VUIContext@UI@Windows@@V123@AEAPEAUIUIContentRoot@23@@Details@WRL@Microsoft@@YAJPEAPEAVUIContext@UI@Windows@@AEAPEAUIUIContentRoot@45@@Z @ 0x18011AD58
 * Callers:
 *     ?CreateForContent@UIContextFactory@UI@Windows@@UEAAJPEAUIUIContentRoot@23@PEAPEAUIUIContext@23@@Z @ 0x18011AE40 (-CreateForContent@UIContextFactory@UI@Windows@@UEAAJPEAUIUIContentRoot@23@PEAPEAUIUIContext@23@@.c)
 * Callees:
 *     ??0UIContext@UI@Windows@@QEAA@XZ @ 0x180018B74 (--0UIContext@UI@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VUIContext@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVUIContext@UI@Windows@@@Z @ 0x180018DB4 (-Attach@-$ComPtr@VUIContext@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVUIContext@UI@Windows@@@Z.c)
 *     ?RuntimeClassInitialize@UIContext@UI@Windows@@QEAAJPEAUIUIContentRoot@23@@Z @ 0x180018DE8 (-RuntimeClassInitialize@UIContext@UI@Windows@@QEAAJPEAUIUIContentRoot@23@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800826A8 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VUIContext@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18008C910 (-InternalRelease@-$ComPtr@VUIContext@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::UIContext,Windows::UI::UIContext,Windows::UI::IUIContentRoot * &>(
        Windows::UI::UIContext **a1,
        struct Windows::UI::IUIContentRoot **a2)
{
  void *v4; // rax
  int v5; // edi
  Windows::UI::UIContext *v6; // rax
  struct Windows::UI::IUIContentRoot *v7; // rdx
  Windows::UI::UIContext *v8; // rbx
  volatile int *v9; // rdx
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  Windows::UI::UIContext *v13; // [rsp+30h] [rbp+8h] BYREF
  void *v14; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = DefaultHeap::Alloc(0x60uLL);
  v14 = v4;
  if ( !v4 )
  {
    v5 = -2147024882;
LABEL_5:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v14);
    return (unsigned int)v5;
  }
  v6 = Windows::UI::UIContext::UIContext((Windows::UI::UIContext *)v4);
  v13 = 0LL;
  Microsoft::WRL::ComPtr<Windows::UI::UIContext>::Attach(&v13, (__int64)v6);
  v7 = *a2;
  v8 = v13;
  v14 = 0LL;
  v5 = Windows::UI::UIContext::RuntimeClassInitialize(v13, v7);
  if ( v5 < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::UI::UIContext>::InternalRelease((__int64 *)&v13);
    goto LABEL_5;
  }
  if ( v8 )
  {
    v11 = *((_QWORD *)v8 + 9);
    while ( v11 >= 0 )
    {
      if ( (_DWORD)v11 != 0x7FFFFFFF )
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 9, v11 + 1, v11);
        if ( v12 != v11 )
          continue;
      }
      goto LABEL_13;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v11 + 16), v9);
LABEL_13:
    v8 = v13;
  }
  *a1 = v8;
  Microsoft::WRL::ComPtr<Windows::UI::UIContext>::InternalRelease((__int64 *)&v13);
  return 0LL;
}
