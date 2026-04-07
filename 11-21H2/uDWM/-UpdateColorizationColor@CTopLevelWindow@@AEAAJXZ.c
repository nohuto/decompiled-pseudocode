/*
 * XREFs of ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18002CD50
 * Callers:
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x1800299A4 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18002A510 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18002B020 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18002D380 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     floorf @ 0x180060ED4 (floorf.c)
 *     IsOpenThemeDataPresent @ 0x180061548 (IsOpenThemeDataPresent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetColor@CGlassColorizationResources@@QEAAXK@Z @ 0x1800BD3AC (-SetColor@CGlassColorizationResources@@QEAAXK@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateColorizationColor(CTopLevelWindow *this)
{
  int v1; // esi
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
  unsigned int v21; // ebx
  int v22; // eax
  __int128 v23; // xmm1
  float *v24; // rdi
  float v25; // xmm6_4
  float v26; // xmm7_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // [rsp+30h] [rbp-98h] BYREF
  __int128 v35; // [rsp+38h] [rbp-90h] BYREF
  __int128 v36; // [rsp+48h] [rbp-80h]

  v1 = *((_DWORD *)this + 152);
  v3 = *((_QWORD *)this + 94);
  if ( (v1 & 0x40) != 0 || (*(_BYTE *)(v3 + 667) & 0x10) != 0 )
    v4 = 1;
  else
    v4 = 2;
  if ( *(_DWORD *)(v3 + 96) == 0x7FFFFFFF
    && *(_DWORD *)(v3 + 100) == 0x7FFFFFFF
    && *(_DWORD *)(v3 + 104) == 0x7FFFFFFF
    && *(_DWORD *)(v3 + 108) == 0x7FFFFFFF )
  {
    v4 |= 0x40u;
  }
  if ( (*(_BYTE *)(v3 + 669) & 4) != 0 )
    v4 |= 0x80u;
  IsOpenThemeDataPresent();
  if ( !*((_QWORD *)this + 74) )
  {
    v31 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            40LL);
    v34 = v31;
    if ( !v31 )
    {
      *((_QWORD *)this + 74) = 0LL;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x808u);
      return 2147942414LL;
    }
    *(_DWORD *)(v31 + 8) = 1;
    *(_QWORD *)v31 = &CGlassColorizationResources::`vftable';
    *((_QWORD *)this + 74) = v31;
  }
  if ( *((_QWORD *)this + 75) )
    goto LABEL_9;
  v32 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          40LL);
  v34 = v32;
  if ( !v32 )
  {
    *((_QWORD *)this + 75) = 0LL;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x80Du);
    return 2147942414LL;
  }
  *(_DWORD *)(v32 + 8) = 1;
  *(_QWORD *)v32 = &CGlassColorizationResources::`vftable';
  *((_QWORD *)this + 75) = v32;
LABEL_9:
  v6 = *((_QWORD *)this + 94);
  if ( (*(_BYTE *)(v6 + 668) & 0x40) != 0 )
    v4 |= 0x10u;
  v7 = !*(_DWORD *)(v6 + 96) && !*(_DWORD *)(v6 + 104) && !*(_DWORD *)(v6 + 100) && !*(_DWORD *)(v6 + 108);
  v8 = CDesktopManager::s_pDesktopManagerInstance;
  if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 492) )
    goto LABEL_23;
  if ( (unsigned int)IsWindowArranged(*(_QWORD *)(v6 + 40))
    || (*((_BYTE *)this + 608) & 0x20) != 0
    || !v7
    || (v4 & 1) != 0 )
  {
    v8 = CDesktopManager::s_pDesktopManagerInstance;
LABEL_23:
    if ( !v7 && (((v4 & 0x80u) == 0) & (unsigned __int8)~(*(_BYTE *)(*((_QWORD *)this + 94) + 668LL) >> 6)) != 0 )
      v4 |= 8u;
    goto LABEL_24;
  }
  v8 = CDesktopManager::s_pDesktopManagerInstance;
LABEL_24:
  v9 = *(_DWORD *)(*((_QWORD *)this + 94) + 188LL);
  if ( v9 )
  {
    v33 = *((_QWORD *)this + 74);
    if ( v9 == 1 )
    {
      *(_QWORD *)(v33 + 16) = 0LL;
      *(_QWORD *)(v33 + 24) = 0LL;
      *(_DWORD *)(v33 + 32) = 0;
    }
    else
    {
      CGlassColorizationResources::SetColor(*((CGlassColorizationResources **)this + 74), v9);
    }
  }
  else
  {
    v10 = *((_BYTE *)v8 + 25) == 0;
    v11 = v4;
    v12 = *((_DWORD *)v8 + 106);
    v13 = *(_OWORD *)((char *)v8 + 476);
    v14 = (float *)*((_QWORD *)this + 74);
    v35 = *(_OWORD *)((char *)v8 + 460);
    LODWORD(v34) = v12;
    v36 = v13;
    if ( !v10 )
      v11 = v4 | 4;
    if ( *((_BYTE *)v8 + 492) )
      v11 = (unsigned int)v11 | 0x20;
    CGlassColorizationParameters::AdjustWindowColorization(&v35, &v34, v5, v11);
    v15 = (float)BYTE1(v35);
    v16 = (float)(unsigned __int8)v35;
    v17 = (float)((float)((float)BYTE2(v35) / 255.0) * 255.0) + 0.5;
    v14[7] = (float)BYTE3(v35) / 255.0;
    v14[4] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(floorf(v17), 255.0)] / 255.0;
    v14[5] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(
                                                            floorf((float)((float)(v15 / 255.0) * 255.0) + 0.5),
                                                            255.0)]
           / 255.0;
    v18 = floorf((float)((float)(v16 / 255.0) * 255.0) + 0.5);
    v19 = (float)SDWORD2(v35) / 100.0;
    v14[6] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(v18, 255.0)] / 255.0;
    v14[8] = v19;
    v8 = CDesktopManager::s_pDesktopManagerInstance;
  }
  v20 = *(_DWORD *)(*((_QWORD *)this + 94) + 192LL);
  if ( v20 )
  {
    CGlassColorizationResources::SetColor(*((CGlassColorizationResources **)this + 75), v20);
  }
  else
  {
    v21 = v4 & 0xFFFFFFE7 | 8;
    v10 = *((_BYTE *)v8 + 25) == 0;
    v22 = *((_DWORD *)v8 + 106);
    v23 = *(_OWORD *)((char *)v8 + 476);
    v24 = (float *)*((_QWORD *)this + 75);
    v35 = *(_OWORD *)((char *)v8 + 460);
    LODWORD(v34) = v22;
    v36 = v23;
    if ( !v10 )
      v21 |= 4u;
    if ( *((_BYTE *)v8 + 492) )
      v21 |= 0x20u;
    CGlassColorizationParameters::AdjustWindowColorization(&v35, &v34, v5, v21);
    v25 = (float)BYTE1(v35);
    v26 = (float)(unsigned __int8)v35;
    v27 = (float)((float)((float)BYTE2(v35) / 255.0) * 255.0) + 0.5;
    v24[7] = (float)BYTE3(v35) / 255.0;
    v24[4] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(floorf(v27), 255.0)] / 255.0;
    v24[5] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(
                                                            floorf((float)((float)(v25 / 255.0) * 255.0) + 0.5),
                                                            255.0)]
           / 255.0;
    v28 = floorf((float)((float)(v26 / 255.0) * 255.0) + 0.5);
    v29 = (float)SDWORD2(v35) / 100.0;
    v24[6] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(v28, 255.0)] / 255.0;
    v24[8] = v29;
  }
  return 0LL;
}
