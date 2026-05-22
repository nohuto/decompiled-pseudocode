/*
 * XREFs of ?SetSourceParameter@CompositionEffectBrush@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAUICompositionBrush@234@@Z @ 0x1800459F0
 * Callers:
 *     ?SetSourceParameter@Api@?$CompositionEffectBrushT@VCompositionEffectBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUICompositionBrush@345@@Z @ 0x1800457C0 (-SetSourceParameter@Api@-$CompositionEffectBrushT@VCompositionEffectBrush@Composition@UI@Windows.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?ValidateSetSourceParameter@CompositionEffectBrush@Composition@UI@Windows@@QEAAJPEAUICompositionBrush@234@PEAVContextSession@WRL2@Microsoft@@PEAPEAVCompositionBrush@234@@Z @ 0x180045838 (-ValidateSetSourceParameter@CompositionEffectBrush@Composition@UI@Windows@@QEAAJPEAUIComposition.c)
 *     ?CheckForCycle@CompositionBrush@Composition@UI@Windows@@QEBAJPEBV1234@@Z @ 0x18004659C (-CheckForCycle@CompositionBrush@Composition@UI@Windows@@QEBAJPEBV1234@@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?UpdateTreeEffectCounter@CompositionEffectBrush@Composition@UI@Windows@@AEAAXH@Z @ 0x1800937F0 (-UpdateTreeEffectCounter@CompositionEffectBrush@Composition@UI@Windows@@AEAAXH@Z.c)
 *     ?ContainsBackdropInput@CompositionEffectBrush@Composition@UI@Windows@@QEBA_NXZ @ 0x18009466C (-ContainsBackdropInput@CompositionEffectBrush@Composition@UI@Windows@@QEBA_NXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Lookup@ApiErrorMessageTable@Composition@UI@Windows@@SAPEBGW4ApiError@234@@Z @ 0x18014997C (-Lookup@ApiErrorMessageTable@Composition@UI@Windows@@SAPEBGW4ApiError@234@@Z.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionEffectBrush::SetSourceParameter(
        Windows::UI::Composition::CompositionEffectBrush *this,
        HSTRING a2,
        struct IUnknown *a3)
{
  struct Windows::UI::Composition::CompositionBrush *v3; // rsi
  int v6; // ebx
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rdi
  signed __int32 v10; // eax
  Microsoft::WRL2::NestableRuntimeClass *v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rdx
  int v14; // esi
  int v15; // r15d
  DirectComposition::CDevice *v16; // rdi
  _DWORD *v17; // rax
  void (__fastcall ***v18)(_QWORD); // rcx
  int v20; // eax
  Microsoft::WRL2::NestableRuntimeClass *v21; // rbx
  __int64 v22; // rdx
  int v23; // eax
  struct Microsoft::WRL2::ContextRuntimeClass **v24; // rcx
  __int64 v25; // rax
  Microsoft::WRL2::NestableRuntimeClass *v26; // rdi
  struct Microsoft::WRL2::ContextRuntimeClass *v27; // r13
  struct Microsoft::WRL2::ContextRuntimeClass *v28; // r12
  int v29; // eax
  int v30; // eax
  bool v31; // zf
  int v32; // eax
  int v33; // eax
  __int64 v34; // rax
  int v35; // eax
  struct Microsoft::WRL2::ContextRuntimeClass *v36; // [rsp+20h] [rbp-60h] BYREF
  struct Windows::UI::Composition::CompositionBrush *v37; // [rsp+28h] [rbp-58h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v38; // [rsp+30h] [rbp-50h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v39; // [rsp+38h] [rbp-48h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v40; // [rsp+40h] [rbp-40h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v41; // [rsp+48h] [rbp-38h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v42; // [rsp+50h] [rbp-30h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v43; // [rsp+58h] [rbp-28h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v44; // [rsp+60h] [rbp-20h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v45; // [rsp+68h] [rbp-18h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v46; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  unsigned int v48; // [rsp+D0h] [rbp+50h] BYREF
  void *v49; // [rsp+D8h] [rbp+58h] BYREF

  v3 = 0LL;
  v37 = 0LL;
  if ( a3 )
  {
    v6 = Windows::UI::Composition::CompositionEffectBrush::ValidateSetSourceParameter(
           this,
           a3,
           *((struct Microsoft::WRL2::ContextSession **)this + 3),
           &v37);
    if ( v6 < 0 )
    {
      v22 = 168LL;
    }
    else
    {
      v3 = v37;
      if ( !v37 )
        goto LABEL_5;
      v6 = Windows::UI::Composition::CompositionBrush::CheckForCycle(this, v37);
      if ( v6 >= 0 )
        goto LABEL_5;
      v22 = 174LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioneffectbrush.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
LABEL_5:
  v7 = *(_QWORD *)(*((_QWORD *)this + 21) + 152LL);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, HSTRING, unsigned int *))(*(_QWORD *)v7 + 144LL))(v7, a2, &v48) )
  {
    Windows::UI::Composition::OriginateInvalidArgument(7LL, L"name");
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB6,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioneffectbrush.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 48LL))(v7, v48) )
  {
    v21 = 0LL;
    v38 = 0LL;
    if ( v3
      && (v23 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                  *((struct Microsoft::WRL2::ContextSession **)this + 3),
                  (struct IUnknown *)v3,
                  (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionBackdropBrushT<Windows::UI::Composition::CompositionBackdropBrush,Windows::UI::Composition::CompositionBrush>::s_InterfaceType,
                  &v40),
          v21 = v40,
          v38 = v40,
          v23 >= 0) )
    {
      Windows::UI::Composition::OriginateInvalidArgument(3LL, L"value");
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBF,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioneffectbrush.cpp",
        (const char *)0x80070057LL);
    }
    else
    {
      v26 = 0LL;
      v27 = 0LL;
      v36 = 0LL;
      v28 = 0LL;
      v39 = 0LL;
      if ( !v3
        || (v29 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                    *((struct Microsoft::WRL2::ContextSession **)this + 3),
                    (struct IUnknown *)v3,
                    (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionEffectBrushT<Windows::UI::Composition::CompositionEffectBrush,Windows::UI::Composition::CompositionBrush>::s_InterfaceType,
                    &v41),
            v26 = v41,
            v39 = v41,
            v27 = v41,
            v36 = v41,
            v28 = v41,
            v29 < 0) )
      {
        v49 = 0LL;
        if ( v3 )
        {
          Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)&v49);
          v30 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                  *((struct Microsoft::WRL2::ContextSession **)this + 3),
                  (struct IUnknown *)v3,
                  (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionRadialGradientBrush::s_InterfaceType,
                  &v42);
          v28 = v36;
          v49 = v42;
          if ( v30 >= 0 )
          {
            Windows::UI::Composition::OriginateInvalidArgument(5LL, L"value");
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xD1,
              (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioneffectbrush.cpp",
              (const char *)0x80070057LL);
            Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)&v49);
            v31 = v27 == 0LL;
            goto LABEL_53;
          }
        }
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)&v49);
        if ( v28 )
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v26);
        if ( v21 )
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v21);
        goto LABEL_7;
      }
      Windows::UI::Composition::OriginateInvalidArgument(4LL, L"value");
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC9,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioneffectbrush.cpp",
        (const char *)0x80070057LL);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v39);
    }
    v24 = &v38;
LABEL_36:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(v24);
    return 2147942487LL;
  }
LABEL_7:
  if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 56LL))(v7, v48) && v3 )
  {
    v20 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
            *((struct Microsoft::WRL2::ContextSession **)this + 3),
            (struct IUnknown *)v3,
            (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionEffectBrushT<Windows::UI::Composition::CompositionEffectBrush,Windows::UI::Composition::CompositionBrush>::s_InterfaceType,
            &v43);
    v21 = v43;
    if ( v20 >= 0 )
    {
      Windows::UI::Composition::OriginateInvalidArgument(6LL, L"value");
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDB,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioneffectbrush.cpp",
        (const char *)0x80070057LL);
LABEL_55:
      if ( v21 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v21);
      return 2147942487LL;
    }
    if ( v43 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v43);
  }
  if ( *((_DWORD *)this + 46) )
  {
    v21 = 0LL;
    v36 = 0LL;
    if ( !v3
      || (v32 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                  *((struct Microsoft::WRL2::ContextSession **)this + 3),
                  (struct IUnknown *)v3,
                  (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionBackdropBrushT<Windows::UI::Composition::CompositionBackdropBrush,Windows::UI::Composition::CompositionBrush>::s_InterfaceType,
                  &v44),
          v21 = v44,
          v36 = v44,
          v32 < 0) )
    {
      v26 = 0LL;
      if ( v3 )
      {
        v33 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                *((struct Microsoft::WRL2::ContextSession **)this + 3),
                (struct IUnknown *)v3,
                (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionEffectBrushT<Windows::UI::Composition::CompositionEffectBrush,Windows::UI::Composition::CompositionBrush>::s_InterfaceType,
                &v45);
        v26 = v45;
        if ( v33 >= 0 )
        {
          if ( Windows::UI::Composition::CompositionEffectBrush::ContainsBackdropInput(v45) )
          {
            v34 = Windows::UI::Composition::ApiErrorMessageTable::Lookup(8LL);
            RoOriginateErrorW(2147942487LL, 0LL, v34);
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xF3,
              (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioneffectbrush.cpp",
              (const char *)0x80070057LL);
            v31 = v26 == 0LL;
LABEL_53:
            if ( !v31 )
              Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v26);
            goto LABEL_55;
          }
          Windows::UI::Composition::CompositionEffectBrush::UpdateTreeEffectCounter(v26, *((_DWORD *)this + 46));
        }
      }
      if ( *(_QWORD *)(*((_QWORD *)this + 22) + 8LL * v48) )
      {
        if ( v26 )
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v26);
        v35 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                *((struct Microsoft::WRL2::ContextSession **)this + 3),
                *(struct IUnknown **)(*((_QWORD *)this + 22) + 8LL * v48),
                (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionEffectBrushT<Windows::UI::Composition::CompositionEffectBrush,Windows::UI::Composition::CompositionBrush>::s_InterfaceType,
                &v46);
        v26 = v46;
        if ( v35 >= 0 )
          Windows::UI::Composition::CompositionEffectBrush::UpdateTreeEffectCounter(v46, -*((_DWORD *)this + 46));
      }
      if ( v26 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v26);
      if ( v21 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v21);
      goto LABEL_9;
    }
    v25 = Windows::UI::Composition::ApiErrorMessageTable::Lookup(8LL);
    RoOriginateErrorW(2147942487LL, 0LL, v25);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE8,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioneffectbrush.cpp",
      (const char *)0x80070057LL);
    v24 = &v36;
    goto LABEL_36;
  }
LABEL_9:
  v8 = v48;
  v9 = *((_QWORD *)this + 22);
  if ( *(struct Windows::UI::Composition::CompositionBrush **)(v9 + 8LL * v48) != v3 )
  {
    if ( v3 )
    {
      v10 = _InterlockedExchangeAdd((volatile signed __int32 *)v3 + 4, 1u);
      v3 = v37;
      if ( !v10 )
        (*(void (__fastcall **)(struct Windows::UI::Composition::CompositionBrush *))(*(_QWORD *)v37 + 80LL))(v37);
    }
    v11 = *(Microsoft::WRL2::NestableRuntimeClass **)(v9 + 8 * v8);
    *(_QWORD *)(v9 + 8 * v8) = v3;
    if ( v11 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v11);
  }
  v12 = v48 & 0x3FFFFFFF | 0x80000000;
  v13 = *(_QWORD *)(*((_QWORD *)this + 22) + 8LL * v48);
  if ( v13 )
    v14 = *(_DWORD *)(v13 + 128);
  else
    v14 = 0;
  v15 = *((_DWORD *)this + 32);
  if ( v15 )
  {
    v16 = *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL);
    DirectComposition::CDevice::BeginKernelCommand(v16, 0x10u, &v49, 0);
    v17 = v49;
    *(_DWORD *)v49 = 13;
    v17[1] = v15;
    v17[2] = v12;
    v17[3] = v14;
    v18 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v16 + 10);
    if ( v18 )
      (**v18)(v18);
  }
  return 0LL;
}
