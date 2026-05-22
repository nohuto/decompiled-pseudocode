/*
 * XREFs of ?OnAnimatedPropertyChanged@CompositionSpriteShape@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x180070E40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FlushKernelCommands@CDevice@DirectComposition@@AEAAX_N@Z @ 0x180030EB4 (-FlushKernelCommands@CDevice@DirectComposition@@AEAAX_N@Z.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800691D8 (--_U@YAPEAX_K@Z.c)
 *     ?OnAnimatedPropertyChanged@CompositionObject@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x18006DAE0 (-OnAnimatedPropertyChanged@CompositionObject@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRE.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 *     ??$UpdateAnimatedPropertyWorker@VTypelessPropertyUpdater@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAVTypelessPropertyUpdater@123@AEBVPropertyUpdateInfo@123@_N2G@Z @ 0x180072480 (--$UpdateAnimatedPropertyWorker@VTypelessPropertyUpdater@Composition@UI@Windows@@VPropertyUpdate.c)
 *     _invalid_parameter_noinfo @ 0x18009690A (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     memcpy_0 @ 0x1800A812C (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSpriteShape::OnAnimatedPropertyChanged(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        char a6,
        float *Src,
        unsigned __int16 a8)
{
  __int64 v9; // r11
  unsigned int v10; // esi
  float *v11; // r13
  const struct Windows::UI::Composition::AnimationHelper::AnimatedProperty *const near *const *v12; // rax
  const struct Windows::UI::Composition::AnimationHelper::AnimatedProperty *const near *v13; // rcx
  unsigned int v14; // ebx
  unsigned int v15; // r14d
  size_t v16; // rdi
  void *v17; // r12
  char v18; // al
  __int64 v19; // rbp
  int v20; // r15d
  int v21; // ecx
  unsigned int v22; // r15d
  unsigned int i; // ecx
  _DWORD *v24; // rsi
  int v25; // eax
  void (__fastcall ***v26)(_QWORD); // rcx
  __int64 v27; // rcx
  unsigned __int64 v29; // rdi
  int v30; // edx
  __int64 v31; // rcx
  const struct Windows::UI::Composition::AnimationHelper::AnimatedProperty *const near *const *v32; // rax
  const struct Windows::UI::Composition::AnimationHelper::AnimatedProperty *const near *v33; // r11
  __int64 v34; // rcx
  int v35; // eax
  unsigned int v36; // ebx
  unsigned __int64 v37; // r9
  __int64 v38; // rdx
  _QWORD *v39; // rax
  float v40; // eax
  int v41; // eax
  int v42; // [rsp+20h] [rbp-78h]
  float v43; // [rsp+40h] [rbp-58h] BYREF
  const struct Windows::UI::Composition::AnimationHelper::AnimatedProperty *const near *v44; // [rsp+48h] [rbp-50h] BYREF
  void *v45; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v46[3]; // [rsp+58h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  if ( (_DWORD)a2 == *(_DWORD *)(a1 + 128) )
  {
    v32 = &Windows::UI::Composition::CompositionSpriteShape::k_rgAnimDef;
    do
    {
      v33 = *v32;
      if ( (_DWORD)a3 == *((_DWORD *)*v32 + 2) )
      {
        v34 = *((_QWORD *)v33 + 3);
        v46[1] = Src;
        v46[2] = v33[4];
        v46[0] = a1 + v34;
        v44 = v33;
        Windows::UI::Composition::ProxyObject::UpdateAnimatedPropertyWorker<Windows::UI::Composition::TypelessPropertyUpdater,Windows::UI::Composition::PropertyUpdateInfo>(
          a1,
          (unsigned int)v46,
          (unsigned int)&v44,
          a5,
          a6,
          a8);
        return 0LL;
      }
      ++v32;
    }
    while ( v32 != &Windows::UI::Composition::Visual::k_rgAnimDef );
  }
  v9 = *(_QWORD *)(a1 + 152);
  if ( !v9 || (v10 = *(_DWORD *)(v9 + 128), LODWORD(v44) = v10, (_DWORD)a2 != v10) )
  {
    v41 = Windows::UI::Composition::CompositionObject::OnAnimatedPropertyChanged(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            (__int64)Src,
            a8);
    v36 = v41;
    if ( v41 >= 0 )
      return 0LL;
    v37 = (unsigned int)v41;
    v38 = 112LL;
LABEL_70:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v38,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionshape.cpp",
      (const char *)v37);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FE,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionspriteshape.cpp",
      (const char *)v36);
    return v36;
  }
  v11 = Src;
  if ( (_DWORD)a3 == 4 )
  {
    v11 = &v43;
    v43 = (float)(*Src * 3.1415927) / 180.0;
  }
  v12 = &Windows::UI::Composition::ComponentTransform2D::k_rgAnimDef;
  while ( 1 )
  {
    v13 = *v12;
    v14 = *((_DWORD *)*v12 + 2);
    if ( (_DWORD)a3 == v14 )
      break;
    if ( ++v12 == &Windows::UI::Composition::CompositionSpriteShape::k_rgAnimDef )
    {
      v35 = Windows::UI::Composition::CompositionObject::OnAnimatedPropertyChanged(
              v9,
              a2,
              a3,
              a4,
              a5,
              a6,
              (__int64)v11,
              a8);
      v36 = v35;
      if ( v35 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x141,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcomponenttransform2d.cpp",
          (const char *)(unsigned int)v35);
        v37 = v36;
        v38 = 106LL;
        goto LABEL_70;
      }
      return 0LL;
    }
  }
  v15 = 0;
  v16 = *((_QWORD *)v13 + 4);
  v17 = (void *)(v9 + *((_QWORD *)v13 + 3));
  if ( a6 )
  {
    if ( *((_BYTE *)v13 + 21) )
      v14 = *((_DWORD *)v13 + 3);
    v18 = *((_BYTE *)v13 + 20);
    if ( v18 )
    {
      if ( v18 == 1 )
      {
        v19 = *(_QWORD *)(*(_QWORD *)(v9 + 24) + 456LL);
        if ( v10 )
        {
          if ( v16 > 0xFFFFFFFF )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x189D,
              (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\device.cpp",
              (const char *)0x80070216LL,
              v42);
          v20 = *((_QWORD *)v13 + 4);
          if ( (v16 & 3) != 0 )
          {
            v21 = v16 & 3;
            if ( (int)v16 - v21 + 4 < (unsigned int)v16 )
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0x18A6,
                (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\device.cpp",
                (const char *)0x80070216LL,
                v42);
            v20 = v16 - v21 + 4;
          }
          v22 = v20 + 16;
          if ( v22 < 0x10 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x18AD,
              (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\device.cpp",
              (const char *)0x80070216LL,
              v42);
          if ( *(_QWORD *)(v19 + 192) )
            DirectComposition::CDevice::FlushKernelCommands((DirectComposition::CDevice *)v19, 0);
          if ( v22 <= *(_DWORD *)(v19 + 176) )
          {
            for ( i = *(_DWORD *)(v19 + 180); i < v22; i = *(_DWORD *)(v19 + 180) )
              DirectComposition::CDevice::FlushKernelCommands((DirectComposition::CDevice *)v19, 0);
            v24 = (_DWORD *)(*(unsigned int *)(v19 + 176) + *(_QWORD *)(v19 + 168) - i);
            *(_DWORD *)(v19 + 180) = i - v22;
            goto LABEL_24;
          }
          v24 = operator new[](v22);
          if ( v24 )
          {
            DirectComposition::CDevice::BeginKernelCommand((DirectComposition::CDevice *)v19, 0x18u, &v45, 0);
            v39 = v45;
            *(_DWORD *)v45 = 0;
            v39[1] = v24;
            *((_DWORD *)v39 + 4) = v22;
            *(_QWORD *)(v19 + 192) = v24;
LABEL_24:
            ++*(_DWORD *)(v19 + 184);
            v25 = (int)v44;
            *v24 = 12;
            v24[1] = v25;
            v24[2] = v14;
            v24[3] = v16;
            if ( v16 )
              memcpy_0(v24 + 4, v11, v16);
            v26 = *(void (__fastcall ****)(_QWORD))(v19 + 80);
            if ( v26 )
              (**v26)(v26);
            goto LABEL_28;
          }
LABEL_62:
          Microsoft::WRL2::FailFast::Unexpected(0LL);
        }
      }
      else
      {
        switch ( v16 )
        {
          case 1uLL:
            LODWORD(v40) = *(unsigned __int8 *)v11;
            break;
          case 2uLL:
            LODWORD(v40) = *(unsigned __int16 *)v11;
            break;
          case 4uLL:
            v40 = *v11;
            break;
          default:
            goto LABEL_62;
        }
        DirectComposition::CDevice::ResourceSetIntegerProperty(
          *(DirectComposition::CDevice **)(*(_QWORD *)(v9 + 24) + 456LL),
          v10,
          v14,
          SLODWORD(v40));
      }
    }
    else
    {
      DirectComposition::CDevice::ResourceSetFloatProperty(
        *(DirectComposition::CDevice **)(*(_QWORD *)(v9 + 24) + 456LL),
        v10,
        v14,
        *v11);
    }
  }
LABEL_28:
  if ( !a5 )
    return 0LL;
  v27 = 0xFFFFLL;
  if ( a8 == 0xFFFF )
  {
    if ( !v16 )
      return 0LL;
    if ( v17 )
    {
      if ( v11 )
      {
        memcpy_0(v17, v11, v16);
        return 0LL;
      }
      memset_0(v17, 0, v16);
    }
    *(_DWORD *)_o__errno(v27, a2, a3, a4) = 22;
    invalid_parameter_noinfo();
  }
  else
  {
    v29 = v16 >> 2;
    if ( v29 )
    {
      v30 = a8;
      v31 = 0LL;
      do
      {
        if ( _bittest(&v30, v15) )
          *((float *)v17 + v31) = v11[v31];
        v31 = ++v15;
      }
      while ( v15 < v29 );
    }
  }
  return 0LL;
}
