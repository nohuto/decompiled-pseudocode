/*
 * XREFs of ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180028AF0
 * Callers:
 *     ?GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@PEAK@Z @ 0x180011EF0 (-GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Coloriz.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x1800284A0 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@_NPEAVCGlassColorizationParameters@@@Z @ 0x1800B50C0 (-GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Col.c)
 * Callees:
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x18001B540 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800391CC (-IsPPIEdition@@YA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003A9F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil.c)
 *     ?LoadAccentColorSettings@CDesktopManager@@QEAA_NXZ @ 0x1800571C4 (-LoadAccentColorSettings@CDesktopManager@@QEAA_NXZ.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x18005774C (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     floorf @ 0x18005D2D4 (floorf.c)
 *     ?GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x18006BC34 (-GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ?GetAccentColor@CDesktopManager@@QEAA_N_NPEAK@Z @ 0x18006C928 (-GetAccentColor@CDesktopManager@@QEAA_N_NPEAK@Z.c)
 *     GetStaticImmersiveColorPrivForHighContrastState @ 0x18006F1D2 (GetStaticImmersiveColorPrivForHighContrastState.c)
 *     PacksRGBColor @ 0x1800C1248 (PacksRGBColor.c)
 */

__int64 __fastcall CGlassColorizationParameters::AdjustWindowColorization(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        float a3,
        __int16 a4)
{
  float v7; // xmm6_4
  float v8; // xmm14_4
  float v9; // xmm7_4
  float v10; // xmm8_4
  float v11; // xmm9_4
  float v12; // xmm12_4
  float v13; // xmm13_4
  CDesktopManager *v14; // rcx
  CDesktopManager *v15; // rsi
  int v16; // r14d
  _BOOL8 v17; // rsi
  bool AccentColor; // al
  unsigned int Color; // edx
  _DWORD *v20; // rax
  _DWORD *v21; // rsi
  int v22; // ebx
  __m128i v23; // xmm7
  __m128i v24; // xmm8
  int v25; // eax
  int v26; // eax
  float v27; // xmm2_4
  float v28; // xmm7_4
  float v29; // xmm11_4
  float v30; // xmm8_4
  float v31; // xmm9_4
  int v32; // eax
  float v33; // xmm0_4
  __int64 result; // rax
  BOOL v35; // ebp
  __int64 v36; // rdx
  int v37; // ebx
  DWORD v38; // ebp
  unsigned __int8 v39; // bl
  bool v40; // al
  unsigned int v41; // r8d
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rcx
  int v45; // ecx
  unsigned __int8 IsHighContrastMode; // al
  __int64 StaticImmersiveColorPrivForHighContrastState; // rax
  unsigned int v48; // ecx
  struct _RTL_CRITICAL_SECTION *v49; // [rsp+20h] [rbp-E8h] BYREF
  int v50; // [rsp+28h] [rbp-E0h] BYREF
  int v51; // [rsp+2Ch] [rbp-DCh]
  char v52; // [rsp+30h] [rbp-D8h]
  __int64 Buffer; // [rsp+38h] [rbp-D0h] BYREF
  float v54; // [rsp+40h] [rbp-C8h]
  float v55; // [rsp+44h] [rbp-C4h]
  unsigned int v56; // [rsp+128h] [rbp+20h] BYREF

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
      v15 = CDesktopManager::s_pDesktopManagerInstance;
      if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 632) )
      {
        CDesktopManager::LoadAccentColorSettings(CDesktopManager::s_pDesktopManagerInstance);
        v14 = CDesktopManager::s_pDesktopManagerInstance;
      }
      v16 = *((_DWORD *)v15 + 159);
      v17 = a4 & 1;
      if ( (a4 & 8) != 0 )
      {
        AccentColor = 0;
        Color = 0;
        *(float *)&v56 = 0.0;
        if ( (a4 & 0x160) == 0 && v16 )
        {
          AccentColor = CDesktopManager::GetAccentColor(v14, v17, &v56);
          Color = v56;
        }
        if ( (v17 || AccentColor) && v16 )
        {
          if ( !Color )
          {
            switch ( v16 )
            {
              case 1:
              case 2:
                v44 = 4LL;
                break;
              case 3:
                v44 = 3LL;
                break;
              case 4:
                v44 = 2LL;
                break;
              case 5:
                v44 = 1LL;
                break;
              default:
                v44 = 343LL;
                break;
            }
            Color = ColorCache::GetColor(v44);
          }
          v23 = _mm_cvtsi32_si128((unsigned __int8)Color);
          v24 = _mm_cvtsi32_si128(BYTE1(Color));
          v25 = BYTE2(Color);
        }
        else
        {
          if ( (a4 & 0x80u) != 0 )
          {
            v43 = 303LL;
            if ( (a4 & 2) == 0 )
              v43 = 312LL;
            v22 = ColorCache::GetColor(v43);
          }
          else
          {
            v49 = &ColorCache::_lock;
            EnterCriticalSection(&ColorCache::_lock);
            Buffer = 343LL;
            LOBYTE(v54) = 1;
            v20 = RtlLookupElementGenericTable(&ColorCache::_cachedColors, &Buffer);
            v21 = v20;
            if ( v20 )
            {
              if ( !*((_BYTE *)v20 + 8) )
              {
                v20[1] = CImmersiveColor::GetColor(343LL);
                *((_BYTE *)v21 + 8) = 1;
              }
              v22 = v21[1];
              LeaveCriticalSection(&ColorCache::_lock);
            }
            else
            {
              v52 = 1;
              v50 = 343;
              v51 = CImmersiveColor::GetColor(343LL);
              RtlInsertElementGenericTable(&ColorCache::_cachedColors, &v50, 0xCu, 0LL);
              v22 = v51;
              CGuard<CDwmCS>::~CGuard<CDwmCS>(&v49);
            }
          }
          v7 = FLOAT_1_0;
          v23 = _mm_cvtsi32_si128((unsigned __int8)v22);
          v24 = _mm_cvtsi32_si128(BYTE1(v22));
          v25 = BYTE2(v22);
        }
      }
      else
      {
        if ( v16 )
        {
          if ( (a4 & 1) != 0 )
          {
            a3 = FLOAT_1_0;
            v7 = FLOAT_1_0;
            goto LABEL_18;
          }
          IsHighContrastMode = CDesktopManager::IsHighContrastMode((__int64)v14, (__int64)a2);
          StaticImmersiveColorPrivForHighContrastState = GetStaticImmersiveColorPrivForHighContrastState(
                                                           302LL,
                                                           IsHighContrastMode);
          a3 = FLOAT_0_2;
          v23 = _mm_cvtsi32_si128((unsigned __int8)StaticImmersiveColorPrivForHighContrastState);
          v48 = BYTE1(StaticImmersiveColorPrivForHighContrastState);
          v25 = BYTE2(StaticImmersiveColorPrivForHighContrastState);
          v24 = _mm_cvtsi32_si128(v48);
        }
        else
        {
          v35 = !(a4 & 1);
          LOBYTE(a2) = 1;
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::ReportUsage(
            &`wil::Feature<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::GetImpl'::`2'::impl,
            a2);
          v36 = *((unsigned __int8 *)CDesktopManager::s_pDesktopManagerInstance + 26);
          v37 = a4 & 0x80;
          if ( v37 )
          {
            v38 = GetStaticImmersiveColorPrivForHighContrastState((unsigned int)(v35 + 315), v36);
          }
          else if ( (_BYTE)v36 )
          {
            v45 = dword_180122828[v17];
            if ( v45 == 31 )
              v38 = 0;
            else
              v38 = GetSysColor(v45) | 0xFF000000;
          }
          else
          {
            v38 = dword_1801214F0[v17];
          }
          if ( !*(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54) + 643LL) || v37 )
          {
            if ( v17 )
              a3 = FLOAT_0_60000002;
            else
              a3 = FLOAT_0_2;
          }
          else
          {
            a3 = FLOAT_0_14;
          }
          v23 = _mm_cvtsi32_si128((unsigned __int8)v38);
          v24 = _mm_cvtsi32_si128(BYTE1(v38));
          v25 = BYTE2(v38);
        }
        v7 = a3;
      }
      v10 = _mm_cvtepi32_ps(v24).m128_f32[0] / 255.0;
      v11 = (float)v25 / 255.0;
      v9 = _mm_cvtepi32_ps(v23).m128_f32[0] / 255.0;
      v8 = v11;
      v13 = v10;
      v12 = v9;
    }
LABEL_18:
    v26 = *((_DWORD *)a1 + 2);
    *(float *)&v56 = fmaxf(0.0, fminf(1.0, (float)*((int *)a1 + 3) / 100.0)) * (float)(1.0 - v7);
    v27 = fmaxf(0.0, fminf(1.0, (float)v26 / 100.0)) * a3;
    v28 = (float)((float)(v9 * v7) * (float)(1.0 - v27)) + (float)(v27 * v12);
    v29 = (float)(v7 * (float)(1.0 - v27)) + v27;
    v30 = (float)((float)(v10 * v7) * (float)(1.0 - v27)) + (float)(v27 * v13);
    v31 = (float)((float)(v11 * v7) * (float)(1.0 - v27)) + (float)(v27 * v8);
    if ( v29 > 0.0 )
    {
      v28 = v28 / v29;
      v30 = v30 / v29;
      v31 = v31 / v29;
    }
    a1[2] = (int)fminf(floorf((float)(v28 * 255.0) + 0.5), 255.0);
    a1[1] = (int)fminf(floorf((float)(v30 * 255.0) + 0.5), 255.0);
    *a1 = (int)fminf(floorf((float)(v31 * 255.0) + 0.5), 255.0);
    a1[3] = (int)fminf(floorf((float)(v29 * 255.0) + 0.5), 255.0);
    v32 = (int)floorf((float)(v29 * 100.0) + 0.5);
    v33 = *(float *)&v56 * 100.0;
    *((_DWORD *)a1 + 2) = v32;
    *((_DWORD *)a1 + 3) = (int)floorf(v33 + 0.5);
    result = (unsigned int)(int)floorf(0.5);
    *((_DWORD *)a1 + 4) = result;
    return result;
  }
  v39 = CDesktopManager::IsHighContrastMode((__int64)a1, (__int64)a2);
  v40 = IsPPIEdition();
  v41 = 312;
  if ( v40 )
    v41 = 1178;
  v42 = GetStaticImmersiveColorPrivForHighContrastState(v41, v39);
  v55 = FLOAT_1_0;
  *(float *)&Buffer = (float)(unsigned __int8)v42 / 255.0;
  *((float *)&Buffer + 1) = (float)BYTE1(v42) / 255.0;
  v54 = (float)BYTE2(v42) / 255.0;
  return PacksRGBColor(&Buffer, a1);
}
