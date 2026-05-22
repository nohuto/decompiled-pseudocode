/*
 * XREFs of ??$MakeAndInitialize2@VCompositionColorBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionColorBrush@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1800484E0
 * Callers:
 *     ?CreateColorBrushWithColor@CompositorCommon@Composition@UI@Windows@@QEAAJUColor@34@PEAPEAVCompositionColorBrush@234@@Z @ 0x18004173C (-CreateColorBrushWithColor@CompositorCommon@Composition@UI@Windows@@QEAAJUColor@34@PEAPEAVCompos.c)
 *     ?CreateColorBrush@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUICompositionColorBrush@345@@Z @ 0x180047170 (-CreateColorBrush@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUICompositionColorBrush@345@.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ @ 0x18001E0A8 (-EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ @ 0x1800292C0 (-Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?ResourceSetCallbackId@CDevice@DirectComposition@@QEAAXII@Z @ 0x180058A80 (-ResourceSetCallbackId@CDevice@DirectComposition@@QEAAXII@Z.c)
 *     ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x180078698 (-Grow@-$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqxqttx_EventWriteTransfer @ 0x1800F7268 (McTemplateU0qqxqttx_EventWriteTransfer.c)
 *     ?Do@FailFast@WRL2@Microsoft@@SAXXZ @ 0x180108A5C (-Do@FailFast@WRL2@Microsoft@@SAXXZ.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionColorBrush,Windows::UI::Composition::CompositionColorBrush,Windows::UI::Composition::Compositor *>(
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
  unsigned int *v25; // r14
  unsigned int v27; // edx
  int v28; // eax
  unsigned int v29; // edx
  int v30; // ecx
  __int64 v31; // rcx
  unsigned int v32; // esi
  unsigned int v33; // edi
  __int64 v34; // rcx
  int v35; // eax
  int v36; // edx
  int v37; // ecx
  unsigned int v38; // edx
  int *v39; // [rsp+50h] [rbp-48h] BYREF
  void *v40; // [rsp+58h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  int v42; // [rsp+A0h] [rbp+8h] BYREF
  void *v43; // [rsp+B0h] [rbp+18h] BYREF
  volatile signed __int32 *v44; // [rsp+B8h] [rbp+20h] BYREF

  *a1 = 0LL;
  v44 = 0LL;
  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0xB8uLL);
  v43 = v5;
  if ( !v5 )
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v43);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v44);
    return 2147942414LL;
  }
  v6 = (volatile signed __int32 *)memset_0(v5, 0, 0xB8uLL);
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
    *((_QWORD *)v6 + 17) = &Windows::UI::Composition::CompositionBrushT<Windows::UI::Composition::CompositionBrush,Windows::UI::Composition::ProxyObject>::Api::`vftable';
    *((_QWORD *)v6 + 19) = &Windows::UI::Composition::CompositionColorBrushT<Windows::UI::Composition::CompositionColorBrush,Windows::UI::Composition::CompositionBrush>::Api::`vftable';
    *(_QWORD *)v6 = &Windows::UI::Composition::CompositionColorBrush::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  v44 = v6;
  *((_QWORD *)v6 + 1) = &Windows::UI::Composition::CompositionColorBrushT<Windows::UI::Composition::CompositionColorBrush,Windows::UI::Composition::CompositionBrush>::s_InterfaceType;
  v8 = *a2;
  v43 = 0LL;
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
    v38 = 56;
    goto LABEL_42;
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
    goto LABEL_32;
  }
  v18 = (unsigned int)v15[56];
  if ( v16 >> 5 >= (unsigned int)v18 )
  {
    v27 = v18 + 1;
    v42 = 0;
    i = v18;
    if ( (int)v18 + 1 < (unsigned int)v18 )
    {
      v13 = -2147024362;
      v29 = 181;
      v30 = -2147024362;
    }
    else
    {
      if ( v27 <= v15[55] )
      {
        *(_DWORD *)(*v17 + 4 * v18) = 0;
        v15[56] = v27;
        goto LABEL_16;
      }
      v39 = &v42;
      v28 = DynArrayImpl<1>::Grow((int)v15 + 200, v27, v18, v12, (__int64)&v39);
      v13 = v28;
      if ( v28 >= 0 )
      {
        *(_DWORD *)((unsigned int)(4 * v15[56]++) + *v17) = *v39;
        goto LABEL_16;
      }
      v29 = 192;
      v30 = v28;
    }
    DoStackCaptureDirect(v30, v29);
LABEL_32:
    v25 = (unsigned int *)(v6 + 32);
    if ( v13 >= 0 )
      goto LABEL_19;
    v38 = 66;
LABEL_42:
    DoStackCaptureDirect(v13, v38);
    Microsoft::WRL2::ContextRuntimeClass::Dispose((Microsoft::WRL2::ContextRuntimeClass *)v6);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioncolorbrush.cpp",
      (const char *)(unsigned int)v13);
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v43);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v44);
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
    goto LABEL_32;
  DirectComposition::CDevice::BeginKernelCommand((DirectComposition::CDevice *)v15, 0x10u, &v40, 0);
  v24 = v40;
  v25 = (unsigned int *)(v6 + 32);
  *(_DWORD *)v40 = 1;
  v24[1] = v23;
  *((_QWORD *)v24 + 1) = 22LL;
  *((_DWORD *)v6 + 32) = v23;
LABEL_19:
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 1) != 0 )
  {
    v31 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 3) + 456LL) + 160LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
    v32 = *v25;
    v33 = *v25;
    v34 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 3) + 456LL) + 160LL);
    v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 8LL))(v34);
    McTemplateU0qqxqttx_EventWriteTransfer(v37, v36, v35, v32, v33, 22, 0, 0, (char)v6);
  }
  if ( (*(unsigned __int8 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 104LL))(v6) )
    DirectComposition::CDevice::ResourceSetCallbackId(
      *(DirectComposition::CDevice **)(*((_QWORD *)v6 + 3) + 456LL),
      *v25,
      *((_DWORD *)v6 + 30));
  *a1 = v6;
  return 0LL;
}
