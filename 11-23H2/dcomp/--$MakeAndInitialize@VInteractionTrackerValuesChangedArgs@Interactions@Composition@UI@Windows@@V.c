/*
 * XREFs of ??$MakeAndInitialize@VInteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@V12345@AEBUVector3@Numerics@Foundation@5@AEAMAEAH@Details@WRL@Microsoft@@YAJPEAPEAVInteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@AEBUVector3@Numerics@Foundation@7@AEAMAEAH@Z @ 0x1800B6A0A
 * Callers:
 *     ??$MakeAndInitialize@VInteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@V12345@AEBUVector3@Numerics@Foundation@5@AEAMAEAH@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VInteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@@WRL@Microsoft@@@012@AEBUVector3@Numerics@Foundation@Windows@@AEAMAEAH@Z @ 0x1800B6B02 (--$MakeAndInitialize@VInteractionTrackerValuesChangedArgs@Interactions@Composition@_ea_1800B6B02.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800826A8 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0InteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@QEAA@XZ @ 0x1800B6B52 (--0InteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VInteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B6CA0 (-InternalRelease@-$ComPtr@VInteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Wind.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs,Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs,Windows::Foundation::Numerics::Vector3 const &,float &,int &>(
        __int64 *a1,
        __int64 a2,
        int *a3,
        int *a4)
{
  void *v8; // rax
  Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs *v10; // rax
  volatile int *v11; // rdx
  __int64 v12; // r10
  int v13; // ecx
  int v14; // xmm1_4
  int v15; // eax
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  __int64 v18[3]; // [rsp+20h] [rbp-18h] BYREF
  void *v19; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = DefaultHeap::Alloc(0x68uLL);
  v19 = v8;
  if ( v8 )
  {
    v10 = (Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs *)memset_0(v8, 0, 0x68uLL);
    if ( v10 )
      v12 = Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs::InteractionTrackerValuesChangedArgs(v10);
    else
      v12 = 0LL;
    v13 = *a4;
    v14 = *a3;
    *(_QWORD *)(v12 + 80) = *(_QWORD *)a2;
    v15 = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(v12 + 96) = v14;
    *(_DWORD *)(v12 + 88) = v15;
    *(_DWORD *)(v12 + 92) = v13;
    v18[0] = v12;
    if ( v12 )
    {
      v16 = *(_QWORD *)(v12 + 72);
      while ( v16 >= 0 )
      {
        if ( (_DWORD)v16 != 0x7FFFFFFF )
        {
          v17 = v16;
          v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 72), v16 + 1, v16);
          if ( v17 != v16 )
            continue;
        }
        goto LABEL_13;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v16 + 16), v11);
    }
LABEL_13:
    *a1 = v12;
    Microsoft::WRL::ComPtr<Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs>::InternalRelease(v18);
    return 0LL;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v19);
    return 2147942414LL;
  }
}
