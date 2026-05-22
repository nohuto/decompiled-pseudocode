/*
 * XREFs of ?OnAnimatedPropertyChanged@CompositionPropertySet@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x180070840
 * Callers:
 *     ?OnAnimatedPropertyChanged@CompositionObject@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x18006DAE0 (-OnAnimatedPropertyChanged@CompositionObject@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRE.c)
 * Callees:
 *     ??$UpdateAnimatedProperty@UPropertySetVector3Value@@UD2DVector3@@@CompositionPropertySet@Composition@UI@Windows@@AEAAXIPEBUD2DVector3@@_N1G@Z @ 0x180004998 (--$UpdateAnimatedProperty@UPropertySetVector3Value@@UD2DVector3@@@CompositionPropertySet@Composi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ??$UpdateAnimatedProperty@UPropertySetColorValue@@U_D3DCOLORVALUE@@@CompositionPropertySet@Composition@UI@Windows@@AEAAXIPEBU_D3DCOLORVALUE@@_N1G@Z @ 0x1800947B0 (--$UpdateAnimatedProperty@UPropertySetColorValue@@U_D3DCOLORVALUE@@@CompositionPropertySet@Compo.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x18009690A (_invalid_parameter_noinfo.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ??$UpdateAnimatedProperty@UPropertySetBooleanValue@@_N@CompositionPropertySet@Composition@UI@Windows@@AEAAXIPEB_N_N1G@Z @ 0x180148704 (--$UpdateAnimatedProperty@UPropertySetBooleanValue@@_N@CompositionPropertySet@Composition@UI@Win.c)
 *     ??$UpdateAnimatedProperty@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@CompositionPropertySet@Composition@UI@Windows@@AEAAXIPEBUD2D_MATRIX_3X2_F@@_N1G@Z @ 0x1801487E8 (--$UpdateAnimatedProperty@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@CompositionPropertySet.c)
 *     ??$UpdateAnimatedProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CompositionPropertySet@Composition@UI@Windows@@AEAAXIPEBUD2DMatrix@@_N1G@Z @ 0x1801488D0 (--$UpdateAnimatedProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CompositionPropertySet@Compos.c)
 *     ??$UpdateAnimatedProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CompositionPropertySet@Composition@UI@Windows@@AEAAXIPEBUD2DQuaternion@@_N1G@Z @ 0x1801489C8 (--$UpdateAnimatedProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CompositionPropertySet@C.c)
 *     ??$UpdateAnimatedProperty@UPropertySetVector2Value@@UD2DVector2@@@CompositionPropertySet@Composition@UI@Windows@@AEAAXIPEBUD2DVector2@@_N1G@Z @ 0x180148AB0 (--$UpdateAnimatedProperty@UPropertySetVector2Value@@UD2DVector2@@@CompositionPropertySet@Composi.c)
 *     ??$UpdateAnimatedProperty@UPropertySetVector4Value@@UD2DVector4@@@CompositionPropertySet@Composition@UI@Windows@@AEAAXIPEBUD2DVector4@@_N1G@Z @ 0x180148B94 (--$UpdateAnimatedProperty@UPropertySetVector4Value@@UD2DVector4@@@CompositionPropertySet@Composi.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x180148F20 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertySet::OnAnimatedPropertyChanged(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned __int8 a5,
        char a6,
        int *a7,
        unsigned __int16 a8)
{
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // r10d
  unsigned int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 *v23; // r8
  __int64 v24; // r10
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r10
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // xmm0_4
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r10
  __int64 v40; // r11
  _DWORD *v41; // rdi
  int v42; // edx
  _DWORD v43[3]; // [rsp+30h] [rbp-20h] BYREF
  int v44; // [rsp+3Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  if ( a3 < *(_DWORD *)(a1 + 232) )
  {
    v9 = a4 - 17;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 17;
        if ( v11 )
        {
          v12 = v11 - 17;
          if ( v12 )
          {
            v13 = v12 - 17;
            if ( v13 )
            {
              v14 = v13 - 1;
              if ( v14 )
              {
                v15 = v14 - 1;
                if ( v15 )
                {
                  v16 = v15 - 33;
                  if ( v16 )
                  {
                    if ( v16 != 161 )
                      Microsoft::WRL2::FailFast::Unexpected(0LL);
                    LOBYTE(v16) = a5;
                    Windows::UI::Composition::CompositionPropertySet::UpdateAnimatedProperty<PropertySetMatrix4x4Value,D2DMatrix>(
                      a1,
                      a3,
                      (_DWORD)a7,
                      v16,
                      a6,
                      a8);
                  }
                  else
                  {
                    Windows::UI::Composition::CompositionPropertySet::UpdateAnimatedProperty<PropertySetMatrix3x2Value,D2D_MATRIX_3X2_F>(
                      a1,
                      a3,
                      (_DWORD)a7,
                      a5,
                      a6,
                      a8);
                  }
                }
                else
                {
                  Windows::UI::Composition::CompositionPropertySet::UpdateAnimatedProperty<PropertySetQuaternionValue,D2DQuaternion>(
                    a1,
                    a3,
                    (_DWORD)a7,
                    a5,
                    a6,
                    a8);
                }
              }
              else
              {
                Windows::UI::Composition::CompositionPropertySet::UpdateAnimatedProperty<PropertySetColorValue,_D3DCOLORVALUE>(
                  a1,
                  a3,
                  (_DWORD)a7,
                  a5,
                  a6,
                  a8);
              }
            }
            else
            {
              Windows::UI::Composition::CompositionPropertySet::UpdateAnimatedProperty<PropertySetVector4Value,D2DVector4>(
                a1,
                a3,
                (_DWORD)a7,
                a5,
                a6,
                a8);
            }
          }
          else
          {
            Windows::UI::Composition::CompositionPropertySet::UpdateAnimatedProperty<PropertySetVector3Value,D2DVector3>(
              a1,
              a3,
              (__int64)a7,
              a5,
              a6,
              a8);
          }
        }
        else
        {
          Windows::UI::Composition::CompositionPropertySet::UpdateAnimatedProperty<PropertySetVector2Value,D2DVector2>(
            a1,
            a3,
            (_DWORD)a7,
            a5,
            a6,
            a8);
        }
      }
      else
      {
        v20 = 0;
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                                 a1 + 208,
                                 a3) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        v43[0] = v19;
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                                 v18,
                                 v17) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        v25 = *v23;
        v43[2] = *(_DWORD *)(*v23 + 8 * v24);
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                                 v22,
                                 v21) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        v43[1] = *(_DWORD *)(v25 + 8 * v29 + 4) & 0x1FFFFFFF;
        if ( a7 )
        {
          v32 = *a7;
        }
        else
        {
          if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                                   v27,
                                   v26) )
            ModuleFailFastForHRESULT(2147942487LL, retaddr);
          if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                                   v31,
                                   v30) )
            ModuleFailFastForHRESULT(2147942487LL, retaddr);
          v32 = *(_DWORD *)((*(_DWORD *)(v25 + 8 * v29 + 4) & 0x1FFFFFFF) + *(_QWORD *)(v28 + 32));
        }
        v44 = v32;
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                                 v28,
                                 (unsigned int)v29) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                                 v34,
                                 v33) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        v41 = (_DWORD *)(*(_QWORD *)(v37 + 32) + (*(_DWORD *)(v25 + 8 * v39 + 4) & 0x1FFFFFFF));
        if ( a6 )
          DirectComposition::CDevice::ResourceSetBufferProperty(
            *(DirectComposition::CDevice **)(*(_QWORD *)(v40 + 24) + 456LL),
            *(_DWORD *)(v40 + 128),
            1,
            v43,
            0x10uLL);
        if ( a5 )
        {
          if ( a8 == 0xFFFF )
          {
            if ( v41 )
            {
              *v41 = v44;
            }
            else
            {
              *(_DWORD *)_o__errno(v36, v35, v37, v38) = 22;
              invalid_parameter_noinfo();
            }
          }
          else
          {
            v42 = a8;
            do
            {
              if ( _bittest(&v42, v20) )
                v41[v20] = *(&v44 + v20);
              ++v20;
            }
            while ( !v20 );
          }
        }
      }
    }
    else
    {
      Windows::UI::Composition::CompositionPropertySet::UpdateAnimatedProperty<PropertySetBooleanValue,bool>(
        a1,
        a3,
        (_DWORD)a7,
        a5,
        a6,
        a8);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C0,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpropertyset.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
