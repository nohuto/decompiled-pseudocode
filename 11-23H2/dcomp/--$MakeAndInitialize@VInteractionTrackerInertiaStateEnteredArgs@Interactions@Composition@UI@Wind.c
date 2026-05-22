/*
 * XREFs of ??$MakeAndInitialize@VInteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@V12345@AEBUVector3@Numerics@Foundation@5@AEAMAEBU6785@AEAMPEBU6785@PEAMAEA_NAEAHAEA_N@Details@WRL@Microsoft@@YAJPEAPEAVInteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@AEBUVector3@Numerics@Foundation@7@AEAM12$$QEAPEBU89Foundation@7@$$QEAPEAMAEA_NAEAH5@Z @ 0x180134F9C
 * Callers:
 *     ?Message_InertiaBegin_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEBUVector3@Numerics@Foundation@5@M0M0_NM11H1@Z @ 0x180139EB8 (-Message_InertiaBegin_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEBU.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800826A8 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@QEAA@XZ @ 0x1801361A0 (--0InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VInteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180139B70 (-InternalRelease@-$ComPtr@VInteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI.c)
 *     ?RuntimeClassInitialize@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@QEAAJAEBUVector3@Numerics@Foundation@5@M0MPEBU6785@PEAM_NH3@Z @ 0x1801914CC (-RuntimeClassInitialize@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Wi.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs,Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs,Windows::Foundation::Numerics::Vector3 const &,float &,Windows::Foundation::Numerics::Vector3 const &,float &,Windows::Foundation::Numerics::Vector3 const *,float *,bool &,int &,bool &>(
        _QWORD *a1,
        const struct Windows::Foundation::Numerics::Vector3 *a2,
        float *a3,
        const struct Windows::Foundation::Numerics::Vector3 *a4,
        float *a5,
        const struct Windows::Foundation::Numerics::Vector3 **a6,
        float **a7,
        bool *a8,
        int *a9,
        bool *a10)
{
  void *v14; // rax
  int v15; // ebx
  Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs *v16; // rax
  Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs *v17; // r11
  float v18; // xmm2_4
  volatile int *v19; // rdx
  __int64 v20; // r11
  signed __int64 v22; // rax
  signed __int64 v23; // rtt
  _QWORD v24[2]; // [rsp+50h] [rbp-18h] BYREF
  void *v25; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v14 = DefaultHeap::Alloc(0xA0uLL);
  v25 = v14;
  if ( !v14 )
  {
    v15 = -2147024882;
LABEL_8:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v25);
    return (unsigned int)v15;
  }
  v16 = (Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs *)memset_0(v14, 0, 0xA0uLL);
  if ( v16 )
    v17 = (Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs *)Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs::InteractionTrackerInertiaStateEnteredArgs(v16);
  else
    v17 = 0LL;
  v18 = *a3;
  v25 = 0LL;
  v24[0] = v17;
  v15 = Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs::RuntimeClassInitialize(
          v17,
          a2,
          v18,
          a4,
          *a5,
          *a6,
          *a7,
          *a8,
          *a9,
          *a10);
  if ( v15 < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs>::InternalRelease(v24);
    goto LABEL_8;
  }
  if ( v20 )
  {
    v22 = *(_QWORD *)(v20 + 88);
    while ( v22 >= 0 )
    {
      if ( (_DWORD)v22 != 0x7FFFFFFF )
      {
        v23 = v22;
        v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 88), v22 + 1, v22);
        if ( v23 != v22 )
          continue;
      }
      goto LABEL_16;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v22 + 16), v19);
  }
LABEL_16:
  *a1 = v20;
  Microsoft::WRL::ComPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs>::InternalRelease(v24);
  return 0LL;
}
