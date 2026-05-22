/*
 * XREFs of ??$MakeAndInitialize@VInteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@V12345@AEAH@Details@WRL@Microsoft@@YAJPEAPEAVInteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@AEAH@Z @ 0x1801351D8
 * Callers:
 *     ?Message_RequestIgnored_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJH@Z @ 0x180139FE0 (-Message_RequestIgnored_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJH@.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800826A8 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VInteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B6CA0 (-InternalRelease@-$ComPtr@VInteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Wind.c)
 *     ??0InteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@QEAA@XZ @ 0x180136278 (--0InteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs,Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs,int &>(
        __int64 *a1,
        _DWORD *a2)
{
  void *v4; // rax
  Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs *v6; // rax
  volatile int *v7; // rdx
  __int64 v8; // r10
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  void *v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = DefaultHeap::Alloc(0x58uLL);
  v11 = v4;
  if ( v4 )
  {
    v6 = (Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs *)memset_0(v4, 0, 0x58uLL);
    if ( v6 )
      v8 = Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs::InteractionTrackerRequestIgnoredArgs(v6);
    else
      v8 = 0LL;
    *(_DWORD *)(v8 + 80) = *a2;
    v9 = *(_QWORD *)(v8 + 72);
    v12 = v8;
    while ( v9 >= 0 )
    {
      if ( (_DWORD)v9 != 0x7FFFFFFF )
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 72), v9 + 1, v9);
        if ( v10 != v9 )
          continue;
      }
      goto LABEL_12;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v9 + 16), v7);
LABEL_12:
    *a1 = v8;
    Microsoft::WRL::ComPtr<Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs>::InternalRelease(&v12);
    return 0LL;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v11);
    return 2147942414LL;
  }
}
