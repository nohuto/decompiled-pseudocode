/*
 * XREFs of ?GetCurrentDisplayCoordinates@GamingOverlayExperienceManager@@UEAAJPEAH000@Z @ 0x1803FCD80
 * Callers:
 *     ?ResetWindowRect@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180406210 (-ResetWindowRect@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?ResetWindowRegion@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180406430 (-ResetWindowRegion@GamingOverlayExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDisplayMonitors@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@PEAH@Z @ 0x1803FD3D0 (-GetDisplayMonitors@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAU-$IVectorView@PEAUHSTRING__@@@.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::GetCurrentDisplayCoordinates(
        GamingOverlayExperienceManager *this,
        int *a2,
        int *a3,
        int *a4,
        int *a5)
{
  __int64 v9; // rdx
  unsigned int v10; // ebx
  int *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r9
  int DisplayMonitors; // eax
  __int64 v15; // rax
  unsigned __int64 v16; // xmm0_8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v9 = 597LL;
LABEL_3:
    v10 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)0x80004003LL);
    return v10;
  }
  if ( !a3 )
  {
    v9 = 598LL;
    goto LABEL_3;
  }
  if ( !a4 )
  {
    v9 = 599LL;
    goto LABEL_3;
  }
  v11 = a5;
  if ( !a5 )
  {
    v9 = 600LL;
    goto LABEL_3;
  }
  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 312));
  if ( !*((_QWORD *)this + 26) )
  {
    v10 = -2147418113;
    v12 = 604LL;
    v13 = 2147549183LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)v13);
    goto LABEL_17;
  }
  if ( *((_DWORD *)this + 294) == -1 )
  {
    DisplayMonitors = GamingOverlayExperienceManager::GetDisplayMonitors(this, *((_QWORD *)this + 151), 0LL, 0LL);
    v10 = DisplayMonitors;
    if ( DisplayMonitors < 0 )
    {
      v13 = (unsigned int)DisplayMonitors;
      v12 = 610LL;
      goto LABEL_15;
    }
  }
  v15 = *(_QWORD *)((char *)this + 1180);
  v16 = _mm_srli_si128(*(__m128i *)((char *)this + 1180), 8).m128i_u64[0];
  *a2 = v15;
  *a3 = HIDWORD(v15);
  *a4 = v16;
  *v11 = HIDWORD(v16);
  v10 = 0;
LABEL_17:
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v10;
}
