/*
 * XREFs of ?GenerateInstance@KeyFrameAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@PEAVCompositionObject@234@PEAUHSTRING__@@PEAVSubchannelMaskInfo@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x180052740
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Reset@AnimationObjectInfoCache@CompositionAnimation@Composition@UI@Windows@@QEAAXPEAVContextSession@WRL2@Microsoft@@@Z @ 0x180029C40 (-Reset@AnimationObjectInfoCache@CompositionAnimation@Composition@UI@Windows@@QEAAXPEAVContextSes.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?EnsureReferenceCleared@ParameterEntry@@QEAAXPEAVContextSession@WRL2@Microsoft@@@Z @ 0x18003E52C (-EnsureReferenceCleared@ParameterEntry@@QEAAXPEAVContextSession@WRL2@Microsoft@@@Z.c)
 *     ?RuntimeClassInitialize@KeyFrameAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAVKeyFrameAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x180050BA0 (-RuntimeClassInitialize@KeyFrameAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4DCOMP.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z @ 0x180108EB4 (-OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1801097D0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::KeyFrameAnimation::GenerateInstance(
        __int64 a1,
        volatile signed __int32 *a2,
        volatile signed __int32 *a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 v8; // r15
  char v9; // r13
  __int64 v12; // rax
  float *v13; // rax
  Windows::UI::Composition::CompositorCommon *v14; // rdi
  unsigned __int8 v15; // r14
  HANDLE ProcessHeap; // rax
  void *v17; // rax
  _DWORD *v18; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v19; // rcx
  unsigned int v20; // r8d
  __int64 v21; // rdx
  int v22; // edi
  unsigned int v23; // r8d
  char v24; // cl
  int v25; // r15d
  DirectComposition::CDevice *v26; // rdi
  _DWORD *v27; // rcx
  void (__fastcall ***v28)(_QWORD); // rcx
  volatile signed __int32 *v29; // rcx
  unsigned __int64 v31; // rax
  HRESULT v32; // eax
  int v33; // edx
  unsigned int v34; // r8d
  HSTRING v35; // r15
  Microsoft::WRL2::NestableRuntimeClass **v36; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v37; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v38; // rcx
  unsigned __int64 v39; // rcx
  Microsoft::WRL2::NestableRuntimeClass **inserted; // rax
  Microsoft::WRL2::NestableRuntimeClass *v41; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v42; // rcx
  int v43; // eax
  Microsoft::WRL2::NestableRuntimeClass *v44; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v45; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v46; // rcx
  unsigned __int64 v47; // rax
  HRESULT v48; // eax
  int v49; // edx
  unsigned int v50; // r8d
  struct _RTL_GENERIC_TABLE *v51; // r14
  __int64 v52; // rdx
  volatile signed __int32 **v53; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v54; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v55; // rcx
  int v56; // eax
  HSTRING v57; // rsi
  volatile signed __int32 *v58; // rcx
  volatile signed __int32 *v59; // rcx
  void *v60; // rcx
  unsigned __int64 v61; // rdx
  struct Microsoft::WRL2::ContextSession *v62; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v63; // rcx
  unsigned __int64 v64; // rdx
  struct Microsoft::WRL2::ContextSession *v65; // rdx
  volatile signed __int32 *v66; // rcx
  unsigned __int64 v67; // rdx
  unsigned __int8 NewElement[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v69; // [rsp+38h] [rbp-C8h] BYREF
  void *v70; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING newString; // [rsp+50h] [rbp-B0h] BYREF
  void *v72; // [rsp+58h] [rbp-A8h] BYREF
  HSTRING Buffer; // [rsp+60h] [rbp-A0h] BYREF
  int v74; // [rsp+68h] [rbp-98h]
  Microsoft::WRL2::NestableRuntimeClass *v75[2]; // [rsp+70h] [rbp-90h]
  int v76; // [rsp+80h] [rbp-80h]
  void *v77; // [rsp+88h] [rbp-78h]
  HSTRING v78; // [rsp+98h] [rbp-68h] BYREF
  int v79; // [rsp+A0h] [rbp-60h]
  Microsoft::WRL2::NestableRuntimeClass *v80[2]; // [rsp+A8h] [rbp-58h]
  int v81; // [rsp+B8h] [rbp-48h]
  void *v82; // [rsp+C0h] [rbp-40h]
  HSTRING v83; // [rsp+D0h] [rbp-30h] BYREF
  int v84; // [rsp+D8h] [rbp-28h]
  Microsoft::WRL2::NestableRuntimeClass *v85[2]; // [rsp+E0h] [rbp-20h]
  int v86; // [rsp+F0h] [rbp-10h]
  void *v87; // [rsp+F8h] [rbp-8h]
  HSTRING_HEADER hstringHeader; // [rsp+108h] [rbp+8h] BYREF
  HSTRING string; // [rsp+120h] [rbp+20h] BYREF
  HSTRING_HEADER v90; // [rsp+128h] [rbp+28h] BYREF
  HSTRING v91; // [rsp+140h] [rbp+40h] BYREF

  v8 = a6;
  v9 = 0;
  v70 = a4;
  v69 = a6;
  *a7 = 0LL;
  if ( (*(_BYTE *)(a1 + 480) & 1) == 0 )
  {
    v12 = *(_QWORD *)(a1 + 264);
    if ( !v12 || !*(_DWORD *)(v12 + 160) )
    {
      v13 = *(float **)(a1 + 424);
      if ( v13 )
      {
        if ( *v13 <= 0.0 )
          goto LABEL_5;
      }
    }
  }
  string = 0LL;
  v31 = -1LL;
  do
    ++v31;
  while ( Windows::UI::Composition::CompositionAnimation::c_thisParameterName[v31] );
  if ( v31 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, -1, (unsigned int)a3);
    JUMPOUT(0x1800CF0A2LL);
  }
  if ( (int)v31 + 1 < (unsigned int)v31 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v31 + 1, (unsigned int)a3);
    __debugbreak();
  }
  v32 = WindowsCreateStringReference(
          Windows::UI::Composition::CompositionAnimation::c_thisParameterName,
          v31,
          &hstringHeader,
          &string);
  if ( v32 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v32, v33, v34);
    __debugbreak();
  }
  v35 = string;
  if ( !a2 )
  {
    v22 = -2147024809;
    DoStackCaptureDirect(-2147024809, 0xEAu);
    string = 0LL;
    MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_1801F5B20, 3u, -2147024809, 0xC2u, 0LL);
    goto LABEL_19;
  }
  NewElement[0] = 0;
  Buffer = string;
  newString = 0LL;
  v74 = 0;
  v76 = 0;
  *(_OWORD *)v75 = 0LL;
  v36 = (Microsoft::WRL2::NestableRuntimeClass **)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(a1 + 192), &Buffer);
  if ( v74 == 104 )
  {
    if ( v77 )
    {
      operator delete(v77, 0x18uLL);
      v77 = 0LL;
    }
  }
  else if ( v74 == 265 && v77 )
  {
    operator delete(v77, 0x40uLL);
    v77 = 0LL;
  }
  v37 = v75[1];
  if ( v75[1] )
  {
    v75[1] = 0LL;
    (*(void (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *))(*(_QWORD *)v37 + 16LL))(v37);
  }
  v38 = v75[0];
  if ( v75[0] )
  {
    v75[0] = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v38);
  }
  if ( !v36 )
  {
    v79 = 0;
    v81 = 0;
    *(_OWORD *)v80 = 0LL;
    if ( WindowsDuplicateString(v35, &newString) < 0 )
      Microsoft::WRL2::FailFast::OutOfMemory(v39);
    v78 = newString;
    inserted = (Microsoft::WRL2::NestableRuntimeClass **)RtlInsertElementGenericTable(
                                                           (PRTL_GENERIC_TABLE)(a1 + 192),
                                                           &v78,
                                                           0x38u,
                                                           NewElement);
    v36 = inserted;
    newString = 0LL;
    if ( !NewElement[0] || !inserted )
      Microsoft::WRL2::FailFast::Unexpected(0LL);
    if ( v79 == 104 )
    {
      v60 = v82;
      if ( !v82 )
      {
LABEL_40:
        v41 = v80[1];
        if ( v80[1] )
        {
          v80[1] = 0LL;
          (*(void (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *))(*(_QWORD *)v41 + 16LL))(v41);
        }
        v42 = v80[0];
        if ( v80[0] )
        {
          v80[0] = 0LL;
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v42);
        }
        goto LABEL_44;
      }
      v61 = 24LL;
    }
    else
    {
      if ( v79 != 265 )
        goto LABEL_40;
      v60 = v82;
      if ( !v82 )
        goto LABEL_40;
      v61 = 64LL;
    }
    operator delete(v60, v61);
    v82 = 0LL;
    goto LABEL_40;
  }
LABEL_44:
  if ( !NewElement[0] && *((_DWORD *)v36 + 8) == 2 )
  {
    v62 = *(struct Microsoft::WRL2::ContextSession **)(a1 + 24);
    --*(_DWORD *)(a1 + 304);
    ParameterEntry::EnsureReferenceCleared((ParameterEntry *)v36, v62);
    Windows::UI::Composition::CompositionAnimation::AnimationObjectInfoCache::Reset(
      (Windows::UI::Composition::CompositionAnimation::AnimationObjectInfoCache *)(a1 + 312),
      *(struct Microsoft::WRL2::ContextSession **)(a1 + 24));
  }
  v43 = *((_DWORD *)v36 + 2);
  if ( v43 == 104 && (v63 = v36[5]) != 0LL )
  {
    v64 = 24LL;
  }
  else
  {
    if ( v43 != 265 )
      goto LABEL_47;
    v63 = v36[5];
    if ( !v63 )
      goto LABEL_47;
    v64 = 64LL;
  }
  operator delete(v63, v64);
  v36[5] = 0LL;
LABEL_47:
  *((_DWORD *)v36 + 2) = 0;
  if ( v36[2] != (Microsoft::WRL2::NestableRuntimeClass *)a2 )
  {
    if ( _InterlockedIncrement(a2 + 4) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a2 + 80LL))(a2);
    v44 = v36[2];
    v36[2] = (Microsoft::WRL2::NestableRuntimeClass *)a2;
    if ( v44 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v44);
  }
  *((_DWORD *)v36 + 8) = 1;
  v45 = v36[3];
  if ( v45 )
  {
    v36[3] = 0LL;
    (*(void (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *))(*(_QWORD *)v45 + 16LL))(v45);
  }
  string = 0LL;
  v9 = 1;
  if ( *(volatile signed __int32 **)(a1 + 272) != a3 )
  {
    if ( a3 && _InterlockedIncrement(a3 + 4) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a3 + 80LL))(a3);
    v46 = *(Microsoft::WRL2::NestableRuntimeClass **)(a1 + 272);
    *(_QWORD *)(a1 + 272) = a3;
    if ( v46 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v46);
  }
  v8 = v69;
  *(_QWORD *)(a1 + 280) = v70;
  *(_QWORD *)(a1 + 288) = a5;
LABEL_5:
  v14 = *(Windows::UI::Composition::CompositorCommon **)(a1 + 24);
  v15 = 0;
  v69 = 0LL;
  ProcessHeap = GetProcessHeap();
  v17 = HeapAlloc(ProcessHeap, 0, 0x188uLL);
  v70 = v17;
  if ( !v17 )
  {
    v22 = -2147024882;
LABEL_111:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v70);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v69);
    MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_1801F5B20, 3u, v22, 0xD6u, 0LL);
    goto LABEL_19;
  }
  v18 = memset_0(v17, 0, 0x188uLL);
  if ( v18 )
  {
    v19 = Microsoft::WRL::Details::ModuleBase::module_;
    *(_QWORD *)v18 = &Microsoft::WRL2::NestableRuntimeClass::`vftable';
    v18[4] = 1;
    *((_QWORD *)v18 + 1) = 0LL;
    if ( v19 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v19 + 8LL))(v19);
    *((_QWORD *)v18 + 5) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Windows::UI::Composition::ICompositionObject'};
    *((_QWORD *)v18 + 6) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionObject2,Windows::UI::Composition::ICompositionObject3,Windows::UI::Composition::ICompositionObject4,Windows::UI::Composition::IAnimationObject,Windows::UI::Composition::ICompositionObject5>'};
    *((_QWORD *)v18 + 7) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Windows::UI::Composition::ICompositionObject3'};
    *((_QWORD *)v18 + 8) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionObject4,Windows::UI::Composition::IAnimationObject,Windows::UI::Composition::ICompositionObject5>'};
    *((_QWORD *)v18 + 9) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Windows::UI::Composition::IAnimationObject'};
    *((_QWORD *)v18 + 10) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionObject5>'};
    *((_QWORD *)v18 + 12) = &Windows::UI::Composition::CompositionObject::Partner::`vftable';
    *((_QWORD *)v18 + 14) = &CSparseStorage::s_defaultEmptyAllocatedStorage;
    *((_QWORD *)v18 + 17) = &Windows::UI::Composition::CompositionPropertyAnimator::Partner::`vftable';
    *((_QWORD *)v18 + 25) = 0LL;
    *((_QWORD *)v18 + 26) = 0LL;
    *((_QWORD *)v18 + 27) = 0LL;
    *((_QWORD *)v18 + 28) = 0LL;
    *((_QWORD *)v18 + 29) = 0LL;
    *((_QWORD *)v18 + 30) = 0LL;
    *((_QWORD *)v18 + 31) = 0LL;
    *((_QWORD *)v18 + 32) = 0LL;
    *((_QWORD *)v18 + 33) = 0LL;
    *((_QWORD *)v18 + 34) = 0LL;
    *(_QWORD *)v18 = &Windows::UI::Composition::KeyFrameAnimator::`vftable';
    *((_QWORD *)v18 + 40) = 0LL;
    *((_QWORD *)v18 + 41) = 0LL;
    *((_QWORD *)v18 + 43) = 0LL;
  }
  else
  {
    v18 = 0LL;
  }
  v69 = (__int64)v18;
  *((_QWORD *)v18 + 1) = &Windows::UI::Composition::CompositionPropertyAnimator::s_InterfaceType;
  v20 = *(_DWORD *)(a1 + 416);
  v70 = 0LL;
  v22 = Windows::UI::Composition::KeyFrameAnimator::RuntimeClassInitialize(
          (Windows::UI::Composition::ProxyObject *)v18,
          v14,
          v20,
          a1,
          v8);
  if ( v22 < 0 )
    goto LABEL_111;
  if ( (*(_BYTE *)(a1 + 480) & 2) != 0 || (*(_BYTE *)(*((_QWORD *)v18 + 3) + 1032LL) & 4) != 0 )
    v15 = 1;
  v24 = *((_BYTE *)v18 + 384);
  if ( ((v24 & 4) != 0) != v15 )
  {
    v25 = v18[32];
    *((_BYTE *)v18 + 384) = (4 * v15) | v24 & 0xFB;
    if ( v25 )
    {
      v26 = *(DirectComposition::CDevice **)(*((_QWORD *)v18 + 3) + 456LL);
      DirectComposition::CDevice::BeginKernelCommand(v26, 0x18u, &v72, 0);
      v27 = v72;
      *(_DWORD *)v72 = 8;
      v27[1] = v25;
      v27[2] = 35;
      *((_QWORD *)v27 + 2) = v15;
      v28 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v26 + 10);
      if ( v28 )
        (**v28)(v28);
    }
  }
  *a7 = v18;
  v22 = 0;
LABEL_19:
  v29 = *(volatile signed __int32 **)(a1 + 272);
  if ( v29 )
  {
    *(_QWORD *)(a1 + 272) = 0LL;
    if ( _InterlockedExchangeAdd(v29 + 4, 0xFFFFFFFF) == 1 )
    {
      LOBYTE(v21) = 1;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v29 + 64LL))(v29, v21);
    }
  }
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  if ( v9 )
  {
    v47 = -1LL;
    v91 = 0LL;
    do
      ++v47;
    while ( Windows::UI::Composition::CompositionAnimation::c_thisParameterName[v47] );
    if ( v47 > 0xFFFFFFFF )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v21, v23);
      __debugbreak();
    }
    if ( (int)v47 + 1 < (unsigned int)v47 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v47 + 1, v23);
      __debugbreak();
    }
    v48 = WindowsCreateStringReference(
            Windows::UI::Composition::CompositionAnimation::c_thisParameterName,
            v47,
            &v90,
            &v91);
    if ( v48 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v48, v49, v50);
      __debugbreak();
    }
    v84 = 0;
    v86 = 0;
    v51 = (struct _RTL_GENERIC_TABLE *)(a1 + 192);
    v83 = v91;
    *(_OWORD *)v85 = 0LL;
    v53 = (volatile signed __int32 **)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(a1 + 192), &v83);
    if ( v84 == 104 )
    {
      if ( v87 )
      {
        operator delete(v87, 0x18uLL);
        v87 = 0LL;
      }
    }
    else if ( v84 == 265 && v87 )
    {
      operator delete(v87, 0x40uLL);
      v87 = 0LL;
    }
    v54 = v85[1];
    if ( v85[1] )
    {
      v85[1] = 0LL;
      (*(void (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *))(*(_QWORD *)v54 + 16LL))(v54);
    }
    v55 = v85[0];
    if ( v85[0] )
    {
      v85[0] = 0LL;
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v55);
    }
    if ( v53 )
    {
      if ( *((_DWORD *)v53 + 8) == 2 )
      {
        v65 = *(struct Microsoft::WRL2::ContextSession **)(a1 + 24);
        --*(_DWORD *)(a1 + 304);
        ParameterEntry::EnsureReferenceCleared((ParameterEntry *)v53, v65);
        Windows::UI::Composition::CompositionAnimation::AnimationObjectInfoCache::Reset(
          (Windows::UI::Composition::CompositionAnimation::AnimationObjectInfoCache *)(a1 + 312),
          *(struct Microsoft::WRL2::ContextSession **)(a1 + 24));
      }
      v56 = *((_DWORD *)v53 + 2);
      v57 = (HSTRING)*v53;
      if ( v56 == 104 && (v66 = v53[5]) != 0LL )
      {
        v67 = 24LL;
      }
      else
      {
        if ( v56 != 265 )
          goto LABEL_77;
        v66 = v53[5];
        if ( !v66 )
          goto LABEL_77;
        v67 = 64LL;
      }
      operator delete((void *)v66, v67);
      v53[5] = 0LL;
LABEL_77:
      v58 = v53[3];
      if ( v58 )
      {
        v53[3] = 0LL;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 16LL))(v58);
      }
      v59 = v53[2];
      if ( v59 )
      {
        v53[2] = 0LL;
        if ( _InterlockedExchangeAdd(v59 + 4, 0xFFFFFFFF) == 1 )
        {
          LOBYTE(v52) = 1;
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v59 + 64LL))(v59, v52);
        }
      }
      if ( !RtlDeleteElementGenericTable(v51, v53) )
        RaiseFailFastException(0LL, 0LL, 1u);
      WindowsDeleteString(v57);
    }
  }
  return (unsigned int)v22;
}
