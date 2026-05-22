/*
 * XREFs of ?EnsureComponentTransform@CompositionShape@Composition@UI@Windows@@AEAAJXZ @ 0x18005A150
 * Callers:
 *     ?SetTransformMatrix@CompositionShape@Composition@UI@Windows@@QEAAJAEBUMatrix3x2@Numerics@Foundation@4@@Z @ 0x18005C238 (-SetTransformMatrix@CompositionShape@Composition@UI@Windows@@QEAAJAEBUMatrix3x2@Numerics@Foundat.c)
 *     ?SetOffset@CompositionShape@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z @ 0x18006DE74 (-SetOffset@CompositionShape@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z.c)
 *     ?SetCenterPoint@CompositionShape@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z @ 0x18006DF74 (-SetCenterPoint@CompositionShape@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@.c)
 *     ?SetScale@CompositionShape@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z @ 0x18006E104 (-SetScale@CompositionShape@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z.c)
 *     ?SetRotationAngleInDegrees@CompositionShape@Composition@UI@Windows@@QEAAJM@Z @ 0x180086F38 (-SetRotationAngleInDegrees@CompositionShape@Composition@UI@Windows@@QEAAJM@Z.c)
 *     ?SetFinalValueParameter@CompositionShape@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x180189970 (-SetFinalValueParameter@CompositionShape@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompos.c)
 *     ?SetRotationAngle@CompositionShape@Composition@UI@Windows@@QEAAJM@Z @ 0x180189A40 (-SetRotationAngle@CompositionShape@Composition@UI@Windows@@QEAAJM@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ @ 0x1800292C0 (-Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ?AllocateHandle@CHandleAllocator@DirectComposition@@QEAAJPEAI@Z @ 0x180058970 (-AllocateHandle@CHandleAllocator@DirectComposition@@QEAAJPEAI@Z.c)
 *     ?ResourceSetCallbackId@CDevice@DirectComposition@@QEAAXII@Z @ 0x180058A80 (-ResourceSetCallbackId@CDevice@DirectComposition@@QEAAXII@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqxqttx_EventWriteTransfer @ 0x1800F7268 (McTemplateU0qqxqttx_EventWriteTransfer.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionShape::EnsureComponentTransform(
        Windows::UI::Composition::CompositionShape *this)
{
  HANDLE ProcessHeap; // rax
  void *v3; // rax
  Microsoft::WRL2::NestableRuntimeClass *v4; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v5; // rcx
  struct Windows::UI::Composition::Compositor *v6; // rdx
  int v7; // edi
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rsi
  _DWORD *v11; // rcx
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // esi
  int v15; // r15d
  DirectComposition::CDevice *v16; // rdi
  _DWORD *v17; // rax
  void (__fastcall ***v18)(_QWORD); // rcx
  signed __int32 v19; // r14d
  Microsoft::WRL2::NestableRuntimeClass *v20; // rcx
  __int64 v22; // rcx
  int v23; // esi
  __int64 v24; // rcx
  int v25; // eax
  int v26; // edx
  int v27; // ecx
  unsigned int v28; // edx
  void *v29; // [rsp+50h] [rbp-48h] BYREF
  void *v30; // [rsp+58h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v32; // [rsp+A0h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v33; // [rsp+A8h] [rbp+10h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v34; // [rsp+B0h] [rbp+18h] BYREF
  void *v35; // [rsp+B8h] [rbp+20h] BYREF

  if ( *((_QWORD *)this + 19) )
    return 0LL;
  v33 = 0LL;
  v34 = 0LL;
  ProcessHeap = GetProcessHeap();
  v3 = HeapAlloc(ProcessHeap, 0, 0xD0uLL);
  v35 = v3;
  if ( v3 )
  {
    v4 = (Microsoft::WRL2::NestableRuntimeClass *)memset_0(v3, 0, 0xD0uLL);
    if ( v4 )
    {
      v5 = Microsoft::WRL::Details::ModuleBase::module_;
      *(_QWORD *)v4 = &Microsoft::WRL2::NestableRuntimeClass::`vftable';
      *((_DWORD *)v4 + 4) = 1;
      *((_QWORD *)v4 + 1) = 0LL;
      if ( v5 )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v5 + 8LL))(v5);
      *((_QWORD *)v4 + 5) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Windows::UI::Composition::ICompositionObject'};
      *((_QWORD *)v4 + 6) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionObject2,Windows::UI::Composition::ICompositionObject3,Windows::UI::Composition::ICompositionObject4,Windows::UI::Composition::IAnimationObject,Windows::UI::Composition::ICompositionObject5>'};
      *((_QWORD *)v4 + 7) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Windows::UI::Composition::ICompositionObject3'};
      *((_QWORD *)v4 + 8) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionObject4,Windows::UI::Composition::IAnimationObject,Windows::UI::Composition::ICompositionObject5>'};
      *((_QWORD *)v4 + 9) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Windows::UI::Composition::IAnimationObject'};
      *((_QWORD *)v4 + 10) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionObject5>'};
      *((_QWORD *)v4 + 12) = &Windows::UI::Composition::CompositionObject::Partner::`vftable';
      *((_QWORD *)v4 + 14) = &CSparseStorage::s_defaultEmptyAllocatedStorage;
      *(_QWORD *)v4 = &Windows::UI::Composition::ComponentTransform2D::`vftable';
    }
    else
    {
      v4 = 0LL;
    }
    v34 = v4;
    *((_QWORD *)v4 + 1) = &Windows::UI::Composition::CompositionObject::s_InterfaceType;
    v6 = (struct Windows::UI::Composition::Compositor *)*((_QWORD *)this + 3);
    v35 = 0LL;
    v7 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(v4, v6);
    if ( v7 < 0 )
    {
      v28 = 56;
    }
    else
    {
      v10 = *(_QWORD *)(*((_QWORD *)v4 + 3) + 456LL);
      v7 = DirectComposition::CHandleAllocator::AllocateHandle(
             (DirectComposition::CHandleAllocator *)(v10 + 200),
             &v32,
             v8,
             v9);
      if ( v7 >= 0 )
      {
        DirectComposition::CDevice::BeginKernelCommand((DirectComposition::CDevice *)v10, 0x10u, &v29, 0);
        v11 = v29;
        v12 = v32;
        *(_DWORD *)v29 = 1;
        v11[1] = v12;
        *((_QWORD *)v11 + 1) = 29LL;
        *((_DWORD *)v4 + 32) = v12;
        if ( (Microsoft_Windows_DirectCompositionEnableBits & 1) != 0 )
        {
          v22 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 3) + 456LL) + 160LL);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
          v23 = *((_DWORD *)v4 + 32);
          v24 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 3) + 456LL) + 160LL);
          v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
          McTemplateU0qqxqttx_EventWriteTransfer(v27, v26, v25, v23, v23, 29, 0, 0, (char)v4);
        }
        if ( (*(unsigned __int8 (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *))(*(_QWORD *)v4 + 104LL))(v4) )
          DirectComposition::CDevice::ResourceSetCallbackId(
            *(DirectComposition::CDevice **)(*((_QWORD *)v4 + 3) + 456LL),
            *((_DWORD *)v4 + 32),
            *((_DWORD *)v4 + 30));
        *((_DWORD *)v4 + 46) = Windows::UI::Composition::ComponentTransform2D::sc_defaultScale;
        *((_DWORD *)v4 + 47) = *(&Windows::UI::Composition::ComponentTransform2D::sc_defaultScale + 1);
        *((_DWORD *)v4 + 34) = 1065353216;
        *((_DWORD *)v4 + 37) = 1065353216;
        *((_QWORD *)v4 + 25) = this;
        v14 = *((_DWORD *)this + 32);
        v15 = *((_DWORD *)v4 + 32);
        v33 = v4;
        if ( v14 )
        {
          v16 = *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL);
          DirectComposition::CDevice::BeginKernelCommand(v16, 0x10u, &v30, 0);
          v17 = v30;
          *(_DWORD *)v30 = 13;
          v17[1] = v14;
          v17[2] = 0;
          v17[3] = v15;
          v18 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v16 + 10);
          if ( v18 )
            (**v18)(v18);
        }
        if ( *((Microsoft::WRL2::NestableRuntimeClass **)this + 19) != v4 )
        {
          v19 = _InterlockedExchangeAdd((volatile signed __int32 *)v4 + 4, 1u);
          v4 = v33;
          if ( !v19 )
            (*(void (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *))(*(_QWORD *)v33 + 80LL))(v33);
          v20 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 19);
          *((_QWORD *)this + 19) = v4;
          if ( v20 )
            Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v20);
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4 + 4, 0xFFFFFFFF) == 1 )
        {
          LOBYTE(v13) = 1;
          (*(void (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *, __int64))(*(_QWORD *)v33 + 64LL))(v33, v13);
        }
        return 0LL;
      }
      v28 = 66;
    }
    DoStackCaptureDirect(v7, v28);
    Microsoft::WRL2::ContextRuntimeClass::Dispose(v4);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcomponenttransform2d.cpp",
      (const char *)(unsigned int)v7);
  }
  else
  {
    v7 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v35);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v34);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAF,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionshape.cpp",
    (const char *)(unsigned int)v7);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v33);
  return (unsigned int)v7;
}
