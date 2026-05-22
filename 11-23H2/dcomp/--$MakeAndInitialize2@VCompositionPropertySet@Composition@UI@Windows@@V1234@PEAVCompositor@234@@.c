/*
 * XREFs of ??$MakeAndInitialize2@VCompositionPropertySet@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionPropertySet@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1800550C0
 * Callers:
 *     ?GetProperties@CompositionObject@Composition@UI@Windows@@UEAAPEAVCompositionPropertySet@234@_N@Z @ 0x180055540 (-GetProperties@CompositionObject@Composition@UI@Windows@@UEAAPEAVCompositionPropertySet@234@_N@Z.c)
 *     ?CreatePropertySet@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVCompositionPropertySet@234@@Z @ 0x180081378 (-CreatePropertySet@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVCompositionPropertySet@2.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ @ 0x18001E0A8 (-EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ @ 0x1800292C0 (-Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x180078698 (-Grow@-$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqxqttx_EventWriteTransfer @ 0x1800F7268 (McTemplateU0qqxqttx_EventWriteTransfer.c)
 *     ?Do@FailFast@WRL2@Microsoft@@SAXXZ @ 0x180108A5C (-Do@FailFast@WRL2@Microsoft@@SAXXZ.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionPropertySet,Windows::UI::Composition::CompositionPropertySet,Windows::UI::Composition::Compositor *>(
        volatile signed __int32 **a1,
        volatile signed __int32 **a2)
{
  HANDLE ProcessHeap; // rax
  void *v5; // rax
  volatile signed __int32 *v6; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v7; // rcx
  volatile signed __int32 *v8; // rdi
  unsigned int v9; // ecx
  int v10; // eax
  __int64 v11; // rdx
  int v12; // r9d
  int v13; // ebp
  char v14; // al
  _DWORD *v15; // r14
  unsigned int v16; // eax
  _QWORD *v17; // rdi
  __int64 v18; // r8
  unsigned int i; // esi
  _DWORD *v20; // rdx
  int v22; // r8d
  int v23; // esi
  _DWORD *v24; // rax
  int *v25; // r14
  int v26; // esi
  int v27; // ebp
  DirectComposition::CDevice *v28; // rdi
  _DWORD *v29; // rax
  void (__fastcall ***v30)(_QWORD); // rcx
  unsigned int v32; // edx
  int v33; // eax
  unsigned int v34; // edx
  int v35; // ecx
  __int64 v36; // rcx
  int v37; // esi
  int v38; // edi
  __int64 v39; // rcx
  int v40; // eax
  int v41; // edx
  int v42; // ecx
  unsigned int v43; // edx
  int *v44; // [rsp+50h] [rbp-58h] BYREF
  void *v45; // [rsp+58h] [rbp-50h] BYREF
  void *v46; // [rsp+60h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  int v48; // [rsp+B0h] [rbp+8h] BYREF
  void *v49; // [rsp+C0h] [rbp+18h] BYREF
  volatile signed __int32 *v50; // [rsp+C8h] [rbp+20h] BYREF

  *a1 = 0LL;
  v50 = 0LL;
  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0x110uLL);
  v49 = v5;
  if ( !v5 )
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v49);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v50);
    return 2147942414LL;
  }
  v6 = (volatile signed __int32 *)memset_0(v5, 0, 0x110uLL);
  if ( v6 )
  {
    v7 = Microsoft::WRL::Details::ModuleBase::module_;
    *(_QWORD *)v6 = &Microsoft::WRL2::NestableRuntimeClass::`vftable';
    *((_DWORD *)v6 + 4) = 1;
    *((_QWORD *)v6 + 1) = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v7 + 8LL))(v7);
    *((_QWORD *)v6 + 5) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Windows::UI::Composition::ICompositionObject'};
    *((_QWORD *)v6 + 6) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionObject2,Windows::UI::Composition::ICompositionObject3,Windows::UI::Composition::ICompositionObject4,Windows::UI::Composition::IAnimationObject,Windows::UI::Composition::ICompositionObject5>'};
    *((_QWORD *)v6 + 7) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Windows::UI::Composition::ICompositionObject3'};
    *((_QWORD *)v6 + 8) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionObject4,Windows::UI::Composition::IAnimationObject,Windows::UI::Composition::ICompositionObject5>'};
    *((_QWORD *)v6 + 9) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Windows::UI::Composition::IAnimationObject'};
    *((_QWORD *)v6 + 10) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionObject5>'};
    *((_QWORD *)v6 + 12) = &Windows::UI::Composition::CompositionObject::Partner::`vftable';
    *((_QWORD *)v6 + 14) = &CSparseStorage::s_defaultEmptyAllocatedStorage;
    *(_QWORD *)v6 = &Windows::UI::Composition::CompositionPropertySet::`vftable';
    *((_QWORD *)v6 + 17) = &Windows::UI::Composition::CompositionPropertySet::Api::`vftable'{for `Windows::UI::Composition::ICompositionPropertySet'};
    *((_QWORD *)v6 + 18) = &Windows::UI::Composition::CompositionPropertySet::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionPropertySet2>'};
    *((_QWORD *)v6 + 20) = &Windows::UI::Composition::CompositionPropertySet::Partner::`vftable';
    *((_QWORD *)v6 + 22) = 0LL;
    *((_QWORD *)v6 + 23) = 0LL;
    *((_QWORD *)v6 + 24) = 0LL;
    *((_DWORD *)v6 + 50) = 0;
    *((_QWORD *)v6 + 26) = 0LL;
    *((_QWORD *)v6 + 27) = 0LL;
    *((_QWORD *)v6 + 28) = 0LL;
    *((_DWORD *)v6 + 58) = 0;
    *((_QWORD *)v6 + 30) = 0LL;
    *((_QWORD *)v6 + 31) = 0LL;
    *((_QWORD *)v6 + 32) = 0LL;
    *((_DWORD *)v6 + 66) = 0;
  }
  else
  {
    v6 = 0LL;
  }
  v50 = v6;
  *((_QWORD *)v6 + 1) = &Windows::UI::Composition::CompositionPropertySet::s_InterfaceType;
  v8 = *a2;
  v49 = 0LL;
  *((_QWORD *)v6 + 3) = v8;
  if ( v8 != v6 && _InterlockedIncrement(v8 + 4) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 80LL))(v8);
  v9 = v6[8] & 0xFFFFFF00 | 0x1F;
  *((_DWORD *)v6 + 8) = v9;
  *((_DWORD *)v6 + 8) = v9 ^ (*((_DWORD *)v8 + 8) ^ v9) & 0x100;
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, volatile signed __int32 *, _DWORD *))(**(_QWORD **)(*((_QWORD *)v8 + 53) + 32LL)
                                                                                       + 24LL))(
          *(_QWORD *)(*((_QWORD *)v8 + 53) + 32LL),
          *(unsigned int *)(*((_QWORD *)v8 + 53) + 64LL),
          v6,
          (_DWORD *)v6 + 30);
  v13 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionobject.cpp",
      (const char *)(unsigned int)v10);
    v43 = 56;
    goto LABEL_44;
  }
  v14 = *((_BYTE *)v8 + 452);
  if ( (v14 & 1) == 0 )
  {
    *((_BYTE *)v8 + 452) = v14 | 1;
    if ( !*((_DWORD *)v8 + 112) )
      Windows::UI::Composition::CompositorCommon::EnableMessageGroup(
        (Windows::UI::Composition::CompositorCommon *)v8,
        v11);
  }
  *((_DWORD *)v6 + 31) |= 1u;
  v13 = 0;
  v15 = *(_DWORD **)(*((_QWORD *)v6 + 3) + 456LL);
  v16 = v15[90];
  v17 = v15 + 50;
  if ( v16 == -1 )
  {
    v13 = -2147024882;
    goto LABEL_34;
  }
  v18 = (unsigned int)v15[56];
  if ( v16 >> 5 >= (unsigned int)v18 )
  {
    v32 = v18 + 1;
    v48 = 0;
    i = v18;
    if ( (int)v18 + 1 < (unsigned int)v18 )
    {
      v13 = -2147024362;
      v34 = 181;
      v35 = -2147024362;
    }
    else
    {
      if ( v32 <= v15[55] )
      {
        *(_DWORD *)(*v17 + 4 * v18) = 0;
        v15[56] = v32;
        goto LABEL_16;
      }
      v44 = &v48;
      v33 = DynArrayImpl<1>::Grow((int)v15 + 200, v32, v18, v12, (__int64)&v44);
      v13 = v33;
      if ( v33 >= 0 )
      {
        *(_DWORD *)((unsigned int)(4 * v15[56]++) + *v17) = *v44;
        goto LABEL_16;
      }
      v34 = 192;
      v35 = v33;
    }
    DoStackCaptureDirect(v35, v34);
LABEL_34:
    v25 = (int *)(v6 + 32);
    if ( v13 >= 0 )
      goto LABEL_19;
    v43 = 66;
LABEL_44:
    DoStackCaptureDirect(v13, v43);
    Microsoft::WRL2::ContextRuntimeClass::Dispose((Microsoft::WRL2::ContextRuntimeClass *)v6);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8E,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpropertyset.cpp",
      (const char *)(unsigned int)v13);
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v49);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v50);
    return (unsigned int)v13;
  }
  for ( i = v15[91]; *(_DWORD *)(*v17 + 4LL * i) == -1; i = (i + 1) % (unsigned int)v18 )
    ;
  v15[91] = i;
LABEL_16:
  v20 = (_DWORD *)(*v17 + 4LL * i);
  if ( !_BitScanForward((unsigned int *)&v22, ~*v20) )
    Microsoft::WRL2::FailFast::Do();
  *v20 |= *v20 + 1;
  v23 = v22 + 32 * i + 1;
  ++v15[90];
  if ( v13 < 0 )
    goto LABEL_34;
  DirectComposition::CDevice::BeginKernelCommand((DirectComposition::CDevice *)v15, 0x10u, &v45, 0);
  v24 = v45;
  v25 = (int *)(v6 + 32);
  *(_DWORD *)v45 = 1;
  v24[1] = v23;
  *((_QWORD *)v24 + 1) = 135LL;
  *((_DWORD *)v6 + 32) = v23;
LABEL_19:
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 1) != 0 )
  {
    v36 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 3) + 456LL) + 160LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 8LL))(v36);
    v37 = *v25;
    v38 = *v25;
    v39 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 3) + 456LL) + 160LL);
    v40 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 8LL))(v39);
    McTemplateU0qqxqttx_EventWriteTransfer(v42, v41, v40, v37, v38, 135, 0, 0, (char)v6);
  }
  if ( (*(unsigned __int8 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 104LL))(v6) )
  {
    v26 = *v25;
    v27 = *((_DWORD *)v6 + 30);
    if ( *v25 )
    {
      v28 = *(DirectComposition::CDevice **)(*((_QWORD *)v6 + 3) + 456LL);
      DirectComposition::CDevice::BeginKernelCommand(v28, 0xCu, &v46, 0);
      v29 = v46;
      *(_DWORD *)v46 = 7;
      v29[1] = v26;
      v29[2] = v27;
      v30 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v28 + 10);
      if ( v30 )
        (**v30)(v30);
    }
  }
  *a1 = v6;
  return 0LL;
}
