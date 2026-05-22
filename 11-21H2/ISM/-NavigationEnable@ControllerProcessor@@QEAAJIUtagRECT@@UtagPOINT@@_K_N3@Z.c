/*
 * XREFs of ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_K_N3@Z @ 0x180177844
 * Callers:
 *     ?EnableNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x1801717FC (-EnableNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z.c)
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x180172C44 (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 *     ?UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ @ 0x180179D30 (-UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x180036848 (-IsEdition@@YA_N_K@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004E16C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@details@.c)
 *     ?MapRectByVisualIdentifier@ControllerProcessor@@AEAAXPEAU_LUID@@0PEAUtagRECT@@1@Z @ 0x1801777A4 (-MapRectByVisualIdentifier@ControllerProcessor@@AEAAXPEAU_LUID@@0PEAUtagRECT@@1@Z.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x18017A0C4 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 */

__int64 __fastcall ControllerProcessor::NavigationEnable(
        ControllerProcessor *this,
        int a2,
        struct tagRECT *a3,
        struct tagPOINT a4,
        unsigned __int64 a5)
{
  LONG x; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  struct tagRECT v11; // xmm0
  __m128i v12; // xmm1
  ControllerProcessor *v13; // rcx
  struct _LUID *v14; // r8
  struct tagPOINT v16; // [rsp+30h] [rbp-30h] BYREF
  struct tagPOINT v17; // [rsp+38h] [rbp-28h] BYREF
  struct tagRECT v18; // [rsp+40h] [rbp-20h] BYREF

  x = a4.x;
  v16 = a4;
  if ( IsEdition(8778LL) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::GetImpl'::`2'::impl,
      0,
      v9,
      v10);
  }
  else
  {
    v11 = *a3;
    v12 = _mm_cvtsi32_si128(v16.y);
    *((_QWORD *)this + 42) = a5;
    *(struct tagRECT *)((char *)this + 344) = v11;
    *((_DWORD *)this + 82) = a2;
    *(float *)&v17.x = (float)x;
    v17.y = _mm_cvtepi32_ps(v12).m128_u32[0];
    MapPointsByVisualIdentifier(((unsigned __int64)this + 336) & -(__int64)(a5 != 0), 0LL, 1LL, &v17, &v16);
    v17.x = (int)*(float *)&v16.x;
    v17.y = (int)*(float *)&v16.y;
    v16 = v17;
    ControllerProcessor::MapRectByVisualIdentifier(
      v13,
      (struct _LUID *)(((unsigned __int64)this + 336) & -(__int64)(a5 != 0)),
      v14,
      a3,
      &v18);
    ControllerProcessor::UpdateNavigationState(this, 0LL, &v18);
  }
  return 0LL;
}
