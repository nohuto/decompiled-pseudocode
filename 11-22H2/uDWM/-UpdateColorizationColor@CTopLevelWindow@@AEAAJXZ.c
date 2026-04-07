/*
 * XREFs of ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x1800284A0
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x180023F14 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180026780 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180050D9C (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180028AF0 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     floorf @ 0x18005D2D4 (floorf.c)
 *     IsOpenThemeDataPresent @ 0x18005D948 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetColor@CGlassColorizationResources@@QEAAXK@Z @ 0x18006D008 (-SetColor@CGlassColorizationResources@@QEAAXK@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateColorizationColor(CTopLevelWindow *this)
{
  int v1; // r14d
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // rcx
  bool v7; // bp
  CDesktopManager *v8; // r10
  unsigned int v9; // ecx
  bool v10; // zf
  __int64 v11; // r9
  int v12; // eax
  __int128 v13; // xmm1
  float *v14; // rsi
  float v15; // xmm6_4
  float v16; // xmm7_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  unsigned int v20; // edx
  int v21; // r9d
  __int64 v22; // r9
  int v23; // eax
  __int128 v24; // xmm1
  float *v25; // rbx
  float v26; // xmm6_4
  float v27; // xmm7_4
  float v28; // xmm0_4
  float v29; // xmm0_4
  float v30; // xmm1_4
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // [rsp+38h] [rbp-B0h] BYREF
  __int128 v36; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v37; // [rsp+50h] [rbp-98h]

  v1 = *((_DWORD *)this + 156);
  if ( (v1 & 0x40) != 0 || (v3 = *((_QWORD *)this + 94), (*(_BYTE *)(v3 + 675) & 0x10) != 0) )
  {
    v3 = *((_QWORD *)this + 94);
    v4 = 1;
  }
  else
  {
    v4 = 2;
  }
  if ( *(_DWORD *)(v3 + 96) == 0x7FFFFFFF
    && *(_DWORD *)(v3 + 100) == 0x7FFFFFFF
    && *(_DWORD *)(v3 + 104) == 0x7FFFFFFF
    && *(_DWORD *)(v3 + 108) == 0x7FFFFFFF )
  {
    v4 |= 0x40u;
  }
  if ( (*(_BYTE *)(v3 + 677) & 4) != 0 )
    v4 |= 0x80u;
  IsOpenThemeDataPresent(this);
  if ( !*((_QWORD *)this + 76) )
  {
    v32 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            40LL);
    v35 = v32;
    if ( !v32 )
    {
      *((_QWORD *)this + 76) = 0LL;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x844u, 0LL);
      return 2147942414LL;
    }
    *(_DWORD *)(v32 + 8) = 1;
    *(_QWORD *)v32 = &CGlassColorizationResources::`vftable';
    *((_QWORD *)this + 76) = v32;
  }
  if ( *((_QWORD *)this + 77) )
    goto LABEL_9;
  v33 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          40LL);
  v35 = v33;
  if ( !v33 )
  {
    *((_QWORD *)this + 77) = 0LL;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x849u, 0LL);
    return 2147942414LL;
  }
  *(_DWORD *)(v33 + 8) = 1;
  *(_QWORD *)v33 = &CGlassColorizationResources::`vftable';
  *((_QWORD *)this + 77) = v33;
LABEL_9:
  v6 = *((_QWORD *)this + 94);
  if ( (*(_BYTE *)(v6 + 676) & 0x40) != 0 )
    v4 |= 0x10u;
  v7 = !*(_DWORD *)(v6 + 96) && !*(_DWORD *)(v6 + 104) && !*(_DWORD *)(v6 + 100) && !*(_DWORD *)(v6 + 108);
  v8 = CDesktopManager::s_pDesktopManagerInstance;
  if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 508) )
    goto LABEL_23;
  if ( (unsigned int)IsWindowArranged(*(_QWORD *)(v6 + 40))
    || (*((_BYTE *)this + 624) & 0x20) != 0
    || !v7
    || (v4 & 1) != 0 )
  {
    v8 = CDesktopManager::s_pDesktopManagerInstance;
LABEL_23:
    if ( !v7 && (((v4 & 0x80u) == 0) & (unsigned __int8)~(*(_BYTE *)(*((_QWORD *)this + 94) + 676LL) >> 6)) != 0 )
      v4 |= 8u;
    goto LABEL_24;
  }
  v8 = CDesktopManager::s_pDesktopManagerInstance;
LABEL_24:
  v9 = *(_DWORD *)(*((_QWORD *)this + 94) + 188LL);
  if ( v9 )
  {
    v34 = *((_QWORD *)this + 76);
    if ( v9 == 1 )
    {
      *(_QWORD *)(v34 + 16) = 0LL;
      *(_QWORD *)(v34 + 24) = 0LL;
      *(_DWORD *)(v34 + 32) = 0;
    }
    else
    {
      CGlassColorizationResources::SetColor(*((CGlassColorizationResources **)this + 76), v9);
    }
  }
  else
  {
    v10 = *((_BYTE *)v8 + 25) == 0;
    v11 = v4;
    v12 = *((_DWORD *)v8 + 110);
    v13 = *(_OWORD *)((char *)v8 + 492);
    v14 = (float *)*((_QWORD *)this + 76);
    v36 = *(_OWORD *)((char *)v8 + 476);
    LODWORD(v35) = v12;
    v37 = v13;
    if ( !v10 )
      v11 = v4 | 4;
    if ( *((_BYTE *)v8 + 508) )
      v11 = (unsigned int)v11 | 0x20;
    CGlassColorizationParameters::AdjustWindowColorization(&v36, &v35, v5, v11);
    v15 = (float)BYTE1(v36);
    v16 = (float)(unsigned __int8)v36;
    v17 = (float)((float)((float)BYTE2(v36) / 255.0) * 255.0) + 0.5;
    v14[7] = (float)BYTE3(v36) / 255.0;
    v14[4] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(floorf(v17), 255.0)] / 255.0;
    v14[5] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(
                                                            floorf((float)((float)(v15 / 255.0) * 255.0) + 0.5),
                                                            255.0)]
           / 255.0;
    v18 = floorf((float)((float)(v16 / 255.0) * 255.0) + 0.5);
    v19 = (float)SDWORD2(v36) / 100.0;
    v14[6] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(v18, 255.0)] / 255.0;
    v14[8] = v19;
    v8 = CDesktopManager::s_pDesktopManagerInstance;
  }
  v20 = *(_DWORD *)(*((_QWORD *)this + 94) + 192LL);
  if ( v20 >= 2 )
  {
    CGlassColorizationResources::SetColor(*((CGlassColorizationResources **)this + 77), v20);
  }
  else
  {
    v21 = 264;
    if ( v20 != 1 )
      v21 = 8;
    v22 = v4 & 0xFFFFFFEF | v21;
    v10 = *((_BYTE *)v8 + 25) == 0;
    v23 = *((_DWORD *)v8 + 110);
    v24 = *(_OWORD *)((char *)v8 + 492);
    v25 = (float *)*((_QWORD *)this + 77);
    v36 = *(_OWORD *)((char *)v8 + 476);
    LODWORD(v35) = v23;
    v37 = v24;
    if ( !v10 )
      v22 = (unsigned int)v22 | 4;
    if ( *((_BYTE *)v8 + 508) )
      v22 = (unsigned int)v22 | 0x20;
    CGlassColorizationParameters::AdjustWindowColorization(&v36, &v35, v5, v22);
    v26 = (float)BYTE1(v36);
    v27 = (float)(unsigned __int8)v36;
    v28 = (float)((float)((float)BYTE2(v36) / 255.0) * 255.0) + 0.5;
    v25[7] = (float)BYTE3(v36) / 255.0;
    v25[4] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(floorf(v28), 255.0)] / 255.0;
    v25[5] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(
                                                            floorf((float)((float)(v26 / 255.0) * 255.0) + 0.5),
                                                            255.0)]
           / 255.0;
    v29 = floorf((float)((float)(v27 / 255.0) * 255.0) + 0.5);
    v30 = (float)SDWORD2(v36) / 100.0;
    v25[6] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(v29, 255.0)] / 255.0;
    v25[8] = v30;
  }
  return 0LL;
}
