/*
 * XREFs of ??$MakeAndInitialize@VInteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@V12345@AEAHAEA_N@Details@WRL@Microsoft@@YAJPEAPEAVInteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@AEAHAEA_N@Z @ 0x180134DB4
 * Callers:
 *     ?Message_CustomAnimationBegin_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJH_N@Z @ 0x180139B98 (-Message_CustomAnimationBegin_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@Q.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800826A8 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0InteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@QEAA@XZ @ 0x1801360E0 (--0InteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@QEAA@X.c)
 *     ?InternalRelease@?$ComPtr@VInteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180139B48 (-InternalRelease@-$ComPtr@VInteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Compos.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs,Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs,int &,bool &>(
        __int64 *a1,
        int *a2,
        _BYTE *a3)
{
  void *v6; // rax
  Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs *v8; // rax
  volatile int *v9; // rdx
  __int64 v10; // r10
  int v11; // ecx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  void *v14; // [rsp+30h] [rbp+8h] BYREF
  __int64 v15; // [rsp+48h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = DefaultHeap::Alloc(0x60uLL);
  v14 = v6;
  if ( v6 )
  {
    v8 = (Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs *)memset_0(v6, 0, 0x60uLL);
    if ( v8 )
      v10 = Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs::InteractionTrackerCustomAnimationStateEnteredArgs(v8);
    else
      v10 = 0LL;
    v11 = *a2;
    *(_BYTE *)(v10 + 92) = *a3;
    v15 = v10;
    *(_DWORD *)(v10 + 88) = v11;
    if ( v10 )
    {
      v12 = *(_QWORD *)(v10 + 80);
      while ( v12 >= 0 )
      {
        if ( (_DWORD)v12 != 0x7FFFFFFF )
        {
          v13 = v12;
          v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 80), v12 + 1, v12);
          if ( v13 != v12 )
            continue;
        }
        goto LABEL_13;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v12 + 16), v9);
    }
LABEL_13:
    *a1 = v10;
    Microsoft::WRL::ComPtr<Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs>::InternalRelease(&v15);
    return 0LL;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v14);
    return 2147942414LL;
  }
}
