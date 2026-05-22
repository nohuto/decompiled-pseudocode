/*
 * XREFs of ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_K_N3@Z @ 0x1801A4B8C
 * Callers:
 *     ?EnableNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x18019ED98 (-EnableNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z.c)
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x18019FC50 (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 *     ?UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ @ 0x1801A7130 (-UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x18003DD08 (-IsEdition@@YA_N_K@Z.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?MapRectByVisualIdentifier@ControllerProcessor@@AEAAXPEAU_LUID@@0PEAUtagRECT@@1@Z @ 0x1801A4AEC (-MapRectByVisualIdentifier@ControllerProcessor@@AEAAXPEAU_LUID@@0PEAUtagRECT@@1@Z.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x1801A74C4 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 */

__int64 __fastcall ControllerProcessor::NavigationEnable(
        ControllerProcessor *this,
        int a2,
        struct tagRECT *a3,
        struct tagPOINT a4,
        unsigned __int64 a5)
{
  LONG x; // ebx
  struct tagRECT v9; // xmm0
  __m128i v10; // xmm1
  ControllerProcessor *v11; // rcx
  struct _LUID *v12; // r8
  struct tagPOINT v14; // [rsp+30h] [rbp-30h] BYREF
  struct tagPOINT v15; // [rsp+38h] [rbp-28h] BYREF
  struct tagRECT v16; // [rsp+40h] [rbp-20h] BYREF

  x = a4.x;
  v14 = a4;
  if ( !IsEdition(8778LL) )
  {
    v9 = *a3;
    v10 = _mm_cvtsi32_si128(v14.y);
    *((_QWORD *)this + 42) = a5;
    *(struct tagRECT *)((char *)this + 344) = v9;
    *((_DWORD *)this + 82) = a2;
    *(float *)&v15.x = (float)x;
    v15.y = _mm_cvtepi32_ps(v10).m128_u32[0];
    MapPointsByVisualIdentifier(((unsigned __int64)this + 336) & -(__int64)(a5 != 0), 0LL, 1LL, &v15, &v14);
    v15.x = (int)*(float *)&v14.x;
    v15.y = (int)*(float *)&v14.y;
    v14 = v15;
    ControllerProcessor::MapRectByVisualIdentifier(
      v11,
      (struct _LUID *)(((unsigned __int64)this + 336) & -(__int64)(a5 != 0)),
      v12,
      a3,
      &v16);
    ControllerProcessor::UpdateNavigationState(this, 0LL, &v16);
  }
  return 0LL;
}
