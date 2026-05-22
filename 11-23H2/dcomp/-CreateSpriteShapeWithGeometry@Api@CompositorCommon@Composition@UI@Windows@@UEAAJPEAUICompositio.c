/*
 * XREFs of ?CreateSpriteShapeWithGeometry@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUICompositionGeometry@345@PEAPEAUICompositionSpriteShape@345@@Z @ 0x18005B520
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ??$MakeAndInitialize2@VCompositionSpriteShape@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionSpriteShape@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18005B054 (--$MakeAndInitialize2@VCompositionSpriteShape@Composition@UI@Windows@@V1234@PEAVCompositor@234@@.c)
 *     ?IsEnabled@ApiTelemetryLogger@details@wil@@SA_NE_K@Z @ 0x1800642F8 (-IsEnabled@ApiTelemetryLogger@details@wil@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VApiTelemetryLogger@details@wil@@@details@wil@@QEAAPEAVApiTelemetryLogger@23@P6AXXZ@Z @ 0x18006431C (-get@-$static_lazy@VApiTelemetryLogger@details@wil@@@details@wil@@QEAAPEAVApiTelemetryLogger@23@.c)
 *     ?Insert@ApiDataList@ApiTelemetryLogger@details@wil@@QEAAXPEBG0PEBDPECJ@Z @ 0x180065BA0 (-Insert@ApiDataList@ApiTelemetryLogger@details@wil@@QEAAXPEBG0PEBDPECJ@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Api::CreateSpriteShapeWithGeometry(
        Windows::UI::Composition::CompositorCommon::Api *this,
        struct IUnknown *a2,
        struct Windows::UI::Composition::ICompositionSpriteShape **a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // r14
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v11; // rsi
  __int64 v12; // rbx
  int v13; // r12d
  int v14; // r15d
  DirectComposition::CDevice *v15; // rdi
  _DWORD *v16; // rax
  void (__fastcall ***v17)(_QWORD); // rcx
  signed __int32 v18; // eax
  Microsoft::WRL2::NestableRuntimeClass *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // edx
  int v26; // ecx
  void *v27; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v29; // [rsp+80h] [rbp+40h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v30; // [rsp+90h] [rbp+50h] BYREF
  struct _RTL_CRITICAL_SECTION *v31; // [rsp+98h] [rbp+58h] BYREF

  if ( _InterlockedIncrement(&dword_1802208A4) == 1
    && wil::details::ApiTelemetryLogger::IsEnabled((unsigned __int8)this, (unsigned __int64)a2) )
  {
    v24 = wil::details::static_lazy<wil::details::ApiTelemetryLogger>::get(
            v23,
            _lambda_6b26b9d13d28b4db0bc0125880e9ff13_::_lambda_invoker_cdecl_);
    wil::details::ApiTelemetryLogger::ApiDataList::Insert(
      (wil::details::ApiTelemetryLogger::ApiDataList *)(v24 + 32),
      L"Windows.UI.Composition.Compositor",
      L"CreateSpriteShapeWithGeometry",
      0LL,
      &dword_1802208A4);
  }
  *a3 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 176);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v6);
  if ( (v6->SpinCount & 2) == 0 )
  {
    v8 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_18;
  }
  v7 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
         (struct Microsoft::WRL2::ContextSession *)v6,
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionGeometry::s_InterfaceType,
         &v30);
  v8 = v7;
  if ( v7 < 0 )
  {
    v25 = 8474;
    v26 = v7;
  }
  else
  {
    v29 = 0LL;
    v31 = v6;
    v9 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionSpriteShape,Windows::UI::Composition::CompositionSpriteShape,Windows::UI::Composition::Compositor *>(
           &v29,
           (struct Windows::UI::Composition::Compositor **)&v31);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v11 = v30;
      if ( v30 )
      {
        v12 = v29;
        v13 = *((_DWORD *)v30 + 32);
        v14 = *(_DWORD *)(v29 + 128);
        if ( v14 )
        {
          v15 = *(DirectComposition::CDevice **)(*(_QWORD *)(v29 + 24) + 456LL);
          DirectComposition::CDevice::BeginKernelCommand(v15, 0x10u, &v27, 0);
          v16 = v27;
          *(_DWORD *)v27 = 13;
          v16[1] = v14;
          v16[2] = 3;
          v16[3] = v13;
          v17 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v15 + 10);
          if ( v17 )
            (**v17)(v17);
        }
        if ( *(Microsoft::WRL2::NestableRuntimeClass **)(v12 + 224) == v11 )
          goto LABEL_15;
        v18 = _InterlockedExchangeAdd((volatile signed __int32 *)v11 + 4, 1u);
        v11 = v30;
        if ( !v18 )
          (*(void (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *))(*(_QWORD *)v30 + 80LL))(v30);
        v19 = *(Microsoft::WRL2::NestableRuntimeClass **)(v12 + 224);
        *(_QWORD *)(v12 + 224) = v11;
        if ( v19 )
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v19);
      }
      v12 = v29;
LABEL_15:
      v20 = v12 + 192;
      v21 = -(__int64)(v12 != 0);
      v8 = 0;
      *a3 = (struct Windows::UI::Composition::ICompositionSpriteShape *)(v20 & v21);
      if ( v11 && _InterlockedExchangeAdd((volatile signed __int32 *)v11 + 4, 0xFFFFFFFF) == 1 )
      {
        LOBYTE(v10) = 1;
        (*(void (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *, __int64))(*(_QWORD *)v30 + 64LL))(v30, v10);
      }
      goto LABEL_18;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7FB,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v9);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v29);
    v25 = 8475;
    v26 = v8;
  }
  DoStackCaptureDirect(v26, v25);
  if ( v30 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v30);
LABEL_18:
  Microsoft::WRL2::ContextSession::EndApiEntry(v6);
  return v8;
}
