/*
 * XREFs of ??$MakeAndInitialize@VAppContentRoot@UI@Windows@@V123@PEAUICompositionIsland@Composition@23@PEAUIInputSite@Input@Internal@23@@Details@WRL@Microsoft@@YAJPEAPEAVAppContentRoot@UI@Windows@@$$QEAPEAUICompositionIsland@Composition@45@$$QEAPEAUIInputSite@Input@Internal@45@@Z @ 0x180018600
 * Callers:
 *     ?CreateInstance@AppContentRootFactory@UI@Windows@@UEAAJPEAUIInspectable@@0PEAPEAUIUIContentRoot@23@@Z @ 0x1800183A0 (-CreateInstance@AppContentRootFactory@UI@Windows@@UEAAJPEAUIInspectable@@0PEAPEAUIUIContentRoot@.c)
 * Callees:
 *     ??0AppContentRoot@UI@Windows@@QEAA@XZ @ 0x1800186BC (--0AppContentRoot@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@AppContentRoot@UI@Windows@@QEAAJPEAUICompositionIsland@Composition@23@PEAUIInputSite@Input@Internal@23@@Z @ 0x180018790 (-RuntimeClassInitialize@AppContentRoot@UI@Windows@@QEAAJPEAUICompositionIsland@Composition@23@PE.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800826A8 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VAppContentRoot@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18008D9D8 (-InternalRelease@-$ComPtr@VAppContentRoot@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::AppContentRoot,Windows::UI::AppContentRoot,Windows::UI::Composition::ICompositionIsland *,Windows::UI::Internal::Input::IInputSite *>(
        Windows::UI::AppContentRoot **a1,
        struct Windows::UI::Composition::ICompositionIsland **a2,
        struct Windows::UI::Internal::Input::IInputSite **a3)
{
  Windows::UI::AppContentRoot *v6; // rax
  Windows::UI::AppContentRoot *v7; // rax
  struct Windows::UI::Internal::Input::IInputSite *v8; // r8
  struct Windows::UI::Composition::ICompositionIsland *v9; // rdx
  Windows::UI::AppContentRoot *v10; // rbx
  volatile int *v11; // rdx
  int v12; // edi
  signed __int64 v13; // rax
  signed __int64 v15; // rtt
  Windows::UI::AppContentRoot *v16; // [rsp+40h] [rbp+8h] BYREF
  Windows::UI::AppContentRoot *v17; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = (Windows::UI::AppContentRoot *)DefaultHeap::Alloc(0x68uLL);
  v16 = v6;
  if ( !v6 )
  {
    v12 = -2147024882;
LABEL_13:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v16);
    return (unsigned int)v12;
  }
  v7 = (Windows::UI::AppContentRoot *)Windows::UI::AppContentRoot::AppContentRoot(v6);
  v8 = *a3;
  v9 = *a2;
  v10 = v7;
  v16 = 0LL;
  v17 = v7;
  v12 = Windows::UI::AppContentRoot::RuntimeClassInitialize(v7, v9, v8);
  if ( v12 < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::UI::AppContentRoot>::InternalRelease(&v17);
    goto LABEL_13;
  }
  if ( v10 )
  {
    v13 = *((_QWORD *)v10 + 9);
    while ( v13 >= 0 )
    {
      if ( (_DWORD)v13 != 0x7FFFFFFF )
      {
        v15 = v13;
        v13 = _InterlockedCompareExchange64((volatile signed __int64 *)v10 + 9, v13 + 1, v13);
        if ( v15 != v13 )
          continue;
      }
      goto LABEL_7;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v13 + 16), v11);
  }
LABEL_7:
  *a1 = v10;
  Microsoft::WRL::ComPtr<Windows::UI::AppContentRoot>::InternalRelease(&v17);
  return 0LL;
}
