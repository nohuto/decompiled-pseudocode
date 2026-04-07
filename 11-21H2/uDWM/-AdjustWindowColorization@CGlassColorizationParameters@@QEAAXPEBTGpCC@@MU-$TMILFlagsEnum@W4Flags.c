/*
 * XREFs of ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18002D380
 * Callers:
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18002CD50 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetWindowColorizationColor@CTopLevelWindow@@AEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x1800353A4 (-GetWindowColorizationColor@CTopLevelWindow@@AEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 *     ?GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@_NPEAVCGlassColorizationParameters@@@Z @ 0x1800B0BC8 (-GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Col.c)
 * Callees:
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180012C38 (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800169E8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x180018A58 (-IsPPIEdition@@YA_NXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x180031960 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?EnsureAccentColorSettingsLoaded@CDesktopManager@@QEAAXXZ @ 0x180035610 (-EnsureAccentColorSettingsLoaded@CDesktopManager@@QEAAXXZ.c)
 *     floorf @ 0x180060ED4 (floorf.c)
 *     ?GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180068B28 (-GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ?GetAccentColor@CDesktopManager@@QEAA_N_NPEAK@Z @ 0x1800B087C (-GetAccentColor@CDesktopManager@@QEAA_N_NPEAK@Z.c)
 *     PacksRGBColor @ 0x1800BD2F4 (PacksRGBColor.c)
 *     GetStaticImmersiveColorPrivForHighContrastState @ 0x18010A048 (GetStaticImmersiveColorPrivForHighContrastState.c)
 */

__int64 __fastcall CGlassColorizationParameters::AdjustWindowColorization(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        float a3,
        char a4)
{
  float v7; // xmm6_4
  float v8; // xmm14_4
  float v9; // xmm7_4
  float v10; // xmm8_4
  float v11; // xmm9_4
  float v12; // xmm12_4
  float v13; // xmm13_4
  CDesktopManager *v14; // rdi
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // r14d
  _BOOL8 v18; // rdi
  bool AccentColor; // al
  unsigned int Color; // ecx
  _DWORD *v21; // rax
  _DWORD *v22; // rbx
  int v23; // ebx
  __m128i v24; // xmm7
  __m128i v25; // xmm8
  int v26; // eax
  int v27; // eax
  float v28; // xmm2_4
  float v29; // xmm7_4
  float v30; // xmm11_4
  float v31; // xmm8_4
  float v32; // xmm9_4
  int v33; // eax
  float v34; // xmm0_4
  __int64 result; // rax
  BOOL v36; // ebp
  __int64 v37; // rdx
  int v38; // ebx
  DWORD v39; // ebp
  bool v40; // bl
  bool v41; // al
  unsigned int v42; // r8d
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rcx
  int v46; // ecx
  bool IsHighContrastMode; // al
  __int64 StaticImmersiveColorPrivForHighContrastState; // rax
  unsigned int v49; // ecx
  struct _RTL_CRITICAL_SECTION *v50; // [rsp+20h] [rbp-E8h] BYREF
  int v51; // [rsp+28h] [rbp-E0h] BYREF
  int v52; // [rsp+2Ch] [rbp-DCh]
  char v53; // [rsp+30h] [rbp-D8h]
  __int64 Buffer; // [rsp+38h] [rbp-D0h] BYREF
  float v55; // [rsp+40h] [rbp-C8h]
  float v56; // [rsp+44h] [rbp-C4h]
  unsigned int v57; // [rsp+128h] [rbp+20h] BYREF

  if ( (a4 & 0x30) != 0x30 )
  {
    v7 = (float)a2[3] / 255.0;
    v8 = (float)*a1 / 255.0;
    v9 = (float)a2[2] / 255.0;
    v10 = (float)a2[1] / 255.0;
    v11 = (float)*a2 / 255.0;
    v12 = (float)a1[2] / 255.0;
    v13 = (float)a1[1] / 255.0;
    if ( (a4 & 4) != 0 )
    {
      v14 = CDesktopManager::s_pDesktopManagerInstance;
      CDesktopManager::EnsureAccentColorSettingsLoaded(CDesktopManager::s_pDesktopManagerInstance);
      v17 = *((_DWORD *)v14 + 155);
      v18 = a4 & 1;
      if ( (a4 & 8) != 0 )
      {
        AccentColor = 0;
        Color = 0;
        *(float *)&v57 = 0.0;
        if ( (a4 & 0x60) == 0 && v17 )
        {
          AccentColor = CDesktopManager::GetAccentColor(CDesktopManager::s_pDesktopManagerInstance, v18, &v57);
          Color = v57;
        }
        if ( (v18 || AccentColor) && v17 )
        {
          if ( !Color )
          {
            if ( v17 <= 2 )
            {
              v45 = 4LL;
            }
            else
            {
              switch ( v17 )
              {
                case 3u:
                  v45 = 3LL;
                  break;
                case 4u:
                  v45 = 2LL;
                  break;
                case 5u:
                  v45 = 1LL;
                  break;
                default:
                  v45 = 343LL;
                  break;
              }
            }
            Color = ColorCache::GetColor(v45);
          }
          v24 = _mm_cvtsi32_si128((unsigned __int8)Color);
          v25 = _mm_cvtsi32_si128(BYTE1(Color));
          v26 = BYTE2(Color);
        }
        else
        {
          if ( a4 < 0 )
          {
            v44 = 303LL;
            if ( (a4 & 2) == 0 )
              v44 = 312LL;
            v23 = ColorCache::GetColor(v44);
          }
          else
          {
            v50 = &ColorCache::_lock;
            EnterCriticalSection(&ColorCache::_lock);
            Buffer = 343LL;
            LOBYTE(v55) = 1;
            v21 = RtlLookupElementGenericTable(&ColorCache::_cachedColors, &Buffer);
            v22 = v21;
            if ( v21 )
            {
              if ( !*((_BYTE *)v21 + 8) )
              {
                v21[1] = CImmersiveColor::GetColor(0x157u);
                *((_BYTE *)v22 + 8) = 1;
              }
              v23 = v22[1];
              LeaveCriticalSection(&ColorCache::_lock);
            }
            else
            {
              v53 = 1;
              v51 = 343;
              v52 = CImmersiveColor::GetColor(0x157u);
              RtlInsertElementGenericTable(&ColorCache::_cachedColors, &v51, 0xCu, 0LL);
              v23 = v52;
              CGuard<CDwmCS>::~CGuard<CDwmCS>(&v50);
            }
          }
          v7 = FLOAT_1_0;
          v24 = _mm_cvtsi32_si128((unsigned __int8)v23);
          v25 = _mm_cvtsi32_si128(BYTE1(v23));
          v26 = BYTE2(v23);
        }
      }
      else
      {
        if ( v17 )
        {
          if ( (a4 & 1) != 0 )
          {
            a3 = FLOAT_1_0;
            v7 = FLOAT_1_0;
            goto LABEL_16;
          }
          IsHighContrastMode = CDesktopManager::IsHighContrastMode();
          StaticImmersiveColorPrivForHighContrastState = GetStaticImmersiveColorPrivForHighContrastState(
                                                           302LL,
                                                           IsHighContrastMode);
          a3 = FLOAT_0_2;
          v24 = _mm_cvtsi32_si128((unsigned __int8)StaticImmersiveColorPrivForHighContrastState);
          v49 = BYTE1(StaticImmersiveColorPrivForHighContrastState);
          v26 = BYTE2(StaticImmersiveColorPrivForHighContrastState);
          v25 = _mm_cvtsi32_si128(v49);
        }
        else
        {
          v36 = !(a4 & 1);
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::ReportUsage(
            &`wil::Feature<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::GetImpl'::`2'::impl,
            1u,
            v15,
            v16);
          v37 = *((unsigned __int8 *)CDesktopManager::s_pDesktopManagerInstance + 26);
          v38 = a4 & 0x80;
          if ( v38 )
          {
            v39 = GetStaticImmersiveColorPrivForHighContrastState((unsigned int)(v36 + 315), v37);
          }
          else if ( (_BYTE)v37 )
          {
            v46 = dword_18011CBC8[v18];
            if ( v46 == 31 )
              v39 = 0;
            else
              v39 = GetSysColor(v46) | 0xFF000000;
          }
          else
          {
            v39 = dword_18011B890[v18];
          }
          if ( !*(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 52) + 659LL) || v38 )
          {
            if ( v18 )
              a3 = FLOAT_0_60000002;
            else
              a3 = FLOAT_0_2;
          }
          else
          {
            a3 = FLOAT_0_14;
          }
          v24 = _mm_cvtsi32_si128((unsigned __int8)v39);
          v25 = _mm_cvtsi32_si128(BYTE1(v39));
          v26 = BYTE2(v39);
        }
        v7 = a3;
      }
      v10 = _mm_cvtepi32_ps(v25).m128_f32[0] / 255.0;
      v11 = (float)v26 / 255.0;
      v9 = _mm_cvtepi32_ps(v24).m128_f32[0] / 255.0;
      v8 = v11;
      v13 = v10;
      v12 = v9;
    }
LABEL_16:
    v27 = *((_DWORD *)a1 + 2);
    *(float *)&v57 = fmaxf(0.0, fminf(1.0, (float)*((int *)a1 + 3) / 100.0)) * (float)(1.0 - v7);
    v28 = fmaxf(0.0, fminf(1.0, (float)v27 / 100.0)) * a3;
    v29 = (float)((float)(v9 * v7) * (float)(1.0 - v28)) + (float)(v28 * v12);
    v30 = (float)(v7 * (float)(1.0 - v28)) + v28;
    v31 = (float)((float)(v10 * v7) * (float)(1.0 - v28)) + (float)(v28 * v13);
    v32 = (float)((float)(v11 * v7) * (float)(1.0 - v28)) + (float)(v28 * v8);
    if ( v30 > 0.0 )
    {
      v29 = v29 / v30;
      v31 = v31 / v30;
      v32 = v32 / v30;
    }
    a1[2] = (int)fminf(floorf((float)(v29 * 255.0) + 0.5), 255.0);
    a1[1] = (int)fminf(floorf((float)(v31 * 255.0) + 0.5), 255.0);
    *a1 = (int)fminf(floorf((float)(v32 * 255.0) + 0.5), 255.0);
    a1[3] = (int)fminf(floorf((float)(v30 * 255.0) + 0.5), 255.0);
    v33 = (int)floorf((float)(v30 * 100.0) + 0.5);
    v34 = *(float *)&v57 * 100.0;
    *((_DWORD *)a1 + 2) = v33;
    *((_DWORD *)a1 + 3) = (int)floorf(v34 + 0.5);
    result = (unsigned int)(int)floorf(0.5);
    *((_DWORD *)a1 + 4) = result;
    return result;
  }
  v40 = CDesktopManager::IsHighContrastMode();
  v41 = IsPPIEdition();
  v42 = 312;
  if ( v41 )
    v42 = 1178;
  v43 = GetStaticImmersiveColorPrivForHighContrastState(v42, v40);
  v56 = FLOAT_1_0;
  *(float *)&Buffer = (float)(unsigned __int8)v43 / 255.0;
  *((float *)&Buffer + 1) = (float)BYTE1(v43) / 255.0;
  v55 = (float)BYTE2(v43) / 255.0;
  return PacksRGBColor(&Buffer, a1);
}
