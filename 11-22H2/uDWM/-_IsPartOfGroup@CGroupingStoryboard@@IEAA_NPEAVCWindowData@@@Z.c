/*
 * XREFs of ?_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z @ 0x18006D586
 * Callers:
 *     ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800DCAE8 (-_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800DDEC0 (-_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DEF90 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DFB00 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?_GetUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAUtagRECT@@@Z @ 0x18006D51C (-_GetUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAUtagRECT@@@Z.c)
 */

char __fastcall CGroupingStoryboard::_IsPartOfGroup(CGroupingStoryboard *this, struct CWindowData *a2)
{
  __int64 v3; // rdx
  char v4; // bl
  RECT rc2; // [rsp+20h] [rbp-38h] BYREF
  RECT rc1; // [rsp+30h] [rbp-28h] BYREF

  v3 = *((unsigned int *)a2 + 170);
  rc2 = 0LL;
  rc1 = *(RECT *)((char *)a2 + ((v3 & 0x1000000) != 0 ? 0x28C : 0) + 48);
  v4 = 0;
  if ( (int)CGroupingStoryboard::_GetUnionRect((__int64)this, v3, &rc2) >= 0 )
    return !EqualRect(&rc1, &rc2);
  return v4;
}
