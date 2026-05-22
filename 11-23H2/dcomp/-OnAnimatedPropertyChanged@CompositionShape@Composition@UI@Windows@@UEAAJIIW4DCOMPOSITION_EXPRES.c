/*
 * XREFs of ?OnAnimatedPropertyChanged@CompositionShape@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x180071090
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
 *     _invalid_parameter_noinfo @ 0x18009690A (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     memcpy_0 @ 0x1800A812C (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionShape::OnAnimatedPropertyChanged(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        float *Src,
        unsigned __int16 a8)
{
  __int64 v8; // r10
  __int64 v10; // rdx
  float *v11; // r13
  const struct Windows::UI::Composition::AnimationHelper::AnimatedProperty *const near *const *v12; // rax
  const struct Windows::UI::Composition::AnimationHelper::AnimatedProperty *const near *v13; // rcx
  unsigned int v14; // ebx
  unsigned int v15; // edi
  size_t v16; // rsi
  float *v17; // r12
  char v18; // al
  __int64 v19; // rbp
  int v20; // r15d
  int v21; // ecx
  unsigned int v22; // r15d
  unsigned int v23; // ecx
  _DWORD *v24; // r14
  void (__fastcall ***v25)(_QWORD); // rcx
  __int64 v26; // rcx
  unsigned __int64 v27; // rsi
  int v28; // edx
  __int64 v29; // rcx
  int v31; // eax
  unsigned int v32; // ebx
  _QWORD *v33; // rcx
  float v34; // eax
  int v35; // eax
  unsigned int v36; // ebx
  int v37; // [rsp+20h] [rbp-58h]
  float v38; // [rsp+40h] [rbp-38h] BYREF
  void *v39; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v41; // [rsp+80h] [rbp+8h]

  v8 = *(_QWORD *)(a1 + 152);
  if ( v8 )
  {
    v10 = *(unsigned int *)(v8 + 128);
    v41 = v10;
    if ( a2 == (_DWORD)v10 )
    {
      v11 = Src;
      if ( (_DWORD)a3 == 4 )
      {
        v11 = &v38;
        v38 = (float)(*Src * 3.1415927) / 180.0;
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
          v31 = Windows::UI::Composition::CompositionObject::OnAnimatedPropertyChanged(
                  v8,
                  a2,
                  a3,
                  a4,
                  a5,
                  a6,
                  (__int64)v11,
                  a8);
          v32 = v31;
          if ( v31 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x141,
              (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcomponenttransform2d.cpp",
              (const char *)(unsigned int)v31);
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x6A,
              (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionshape.cpp",
              (const char *)v32);
            return v32;
          }
          return 0LL;
        }
      }
      v15 = 0;
      v16 = *((_QWORD *)v13 + 4);
      v17 = (float *)(v8 + *((_QWORD *)v13 + 3));
      if ( a6 )
      {
        if ( *((_BYTE *)v13 + 21) )
          v14 = *((_DWORD *)v13 + 3);
        v18 = *((_BYTE *)v13 + 20);
        if ( v18 )
        {
          if ( v18 == 1 )
          {
            v19 = *(_QWORD *)(*(_QWORD *)(v8 + 24) + 456LL);
            if ( (_DWORD)v10 )
            {
              if ( v16 > 0xFFFFFFFF )
                wil::details::in1diag3::FailFast_Hr(
                  retaddr,
                  (void *)0x189D,
                  (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\device.cpp",
                  (const char *)0x80070216LL,
                  v37);
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
                    v37);
                v20 = v16 - v21 + 4;
              }
              v22 = v20 + 16;
              if ( v22 < 0x10 )
                wil::details::in1diag3::FailFast_Hr(
                  retaddr,
                  (void *)0x18AD,
                  (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\device.cpp",
                  (const char *)0x80070216LL,
                  v37);
              if ( *(_QWORD *)(v19 + 192) )
              {
                DirectComposition::CDevice::FlushKernelCommands((DirectComposition::CDevice *)v19, 0);
                v10 = v41;
              }
              if ( v22 <= *(_DWORD *)(v19 + 176) )
              {
                v23 = *(_DWORD *)(v19 + 180);
                if ( v23 < v22 )
                {
                  do
                  {
                    DirectComposition::CDevice::FlushKernelCommands((DirectComposition::CDevice *)v19, 0);
                    v23 = *(_DWORD *)(v19 + 180);
                  }
                  while ( v23 < v22 );
                  v10 = v41;
                }
                v24 = (_DWORD *)(*(unsigned int *)(v19 + 176) + *(_QWORD *)(v19 + 168) - v23);
                *(_DWORD *)(v19 + 180) = v23 - v22;
                goto LABEL_23;
              }
              v24 = operator new[](v22);
              if ( v24 )
              {
                DirectComposition::CDevice::BeginKernelCommand((DirectComposition::CDevice *)v19, 0x18u, &v39, 0);
                v33 = v39;
                v10 = v41;
                *(_DWORD *)v39 = 0;
                v33[1] = v24;
                *((_DWORD *)v33 + 4) = v22;
                *(_QWORD *)(v19 + 192) = v24;
LABEL_23:
                ++*(_DWORD *)(v19 + 184);
                *v24 = 12;
                v24[1] = v10;
                v24[2] = v14;
                v24[3] = v16;
                if ( v16 )
                  memcpy_0(v24 + 4, v11, v16);
                v25 = *(void (__fastcall ****)(_QWORD))(v19 + 80);
                if ( v25 )
                  (**v25)(v25);
                goto LABEL_27;
              }
LABEL_55:
              Microsoft::WRL2::FailFast::Unexpected(0LL);
            }
          }
          else
          {
            switch ( v16 )
            {
              case 1uLL:
                LODWORD(v34) = *(unsigned __int8 *)v11;
                break;
              case 2uLL:
                LODWORD(v34) = *(unsigned __int16 *)v11;
                break;
              case 4uLL:
                v34 = *v11;
                break;
              default:
                goto LABEL_55;
            }
            DirectComposition::CDevice::ResourceSetIntegerProperty(
              *(DirectComposition::CDevice **)(*(_QWORD *)(v8 + 24) + 456LL),
              v10,
              v14,
              SLODWORD(v34));
          }
        }
        else
        {
          DirectComposition::CDevice::ResourceSetFloatProperty(
            *(DirectComposition::CDevice **)(*(_QWORD *)(v8 + 24) + 456LL),
            v10,
            v14,
            *v11);
        }
      }
LABEL_27:
      if ( a5 )
      {
        v26 = 0xFFFFLL;
        if ( a8 != 0xFFFF )
        {
          v27 = v16 >> 2;
          if ( v27 )
          {
            v28 = a8;
            v29 = 0LL;
            do
            {
              if ( _bittest(&v28, v15) )
                v17[v29] = v11[v29];
              v29 = ++v15;
            }
            while ( v15 < v27 );
          }
          return 0LL;
        }
        if ( v16 )
        {
          if ( v17 )
          {
            if ( v11 )
            {
              memcpy_0(v17, v11, v16);
              return 0LL;
            }
            memset_0(v17, 0, v16);
          }
          *(_DWORD *)_o__errno(v26, v10, a3, a4) = 22;
          invalid_parameter_noinfo();
        }
      }
      return 0LL;
    }
  }
  v35 = Windows::UI::Composition::CompositionObject::OnAnimatedPropertyChanged(a1, a2, a3, a4, a5, a6, (__int64)Src, a8);
  v36 = v35;
  if ( v35 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x70,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionshape.cpp",
    (const char *)(unsigned int)v35);
  return v36;
}
