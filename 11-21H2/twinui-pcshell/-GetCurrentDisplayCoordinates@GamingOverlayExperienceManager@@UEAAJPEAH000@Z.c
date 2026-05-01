/*
 * XREFs of ?GetCurrentDisplayCoordinates@GamingOverlayExperienceManager@@UEAAJPEAH000@Z @ 0x18032F9D0
 * Callers:
 *     ?ResetWindowRect@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180338590 (-ResetWindowRect@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?ResetWindowRegion@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180338790 (-ResetWindowRegion@GamingOverlayExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18009EBB4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?GetDisplayMonitors@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@PEAH@Z @ 0x18032FEF0 (-GetDisplayMonitors@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAU-$IVectorView@PEAUHSTRING__@@@.c)
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
  struct _RTL_CRITICAL_SECTION *v12; // rbx
  bool v13; // zf
  __int64 v14; // rdx
  __int64 v15; // r9
  int DisplayMonitors; // eax
  __int64 v17; // rax
  unsigned __int64 v18; // xmm0_8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    if ( !a3 )
    {
      v9 = 577LL;
      goto LABEL_3;
    }
    if ( !a4 )
    {
      v9 = 578LL;
      goto LABEL_3;
    }
    v11 = a5;
    if ( !a5 )
    {
      v9 = 579LL;
      goto LABEL_3;
    }
    v12 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 272);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 272));
    v13 = *((_QWORD *)this + 21) == 0LL;
    v21 = v12;
    if ( v13 )
    {
      v10 = -2147418113;
      v14 = 583LL;
      v15 = 2147549183LL;
    }
    else
    {
      if ( *((_DWORD *)this + 284) != -1
        || (DisplayMonitors = GamingOverlayExperienceManager::GetDisplayMonitors(
                                this,
                                *((_QWORD *)this + 146),
                                0LL,
                                0LL),
            v10 = DisplayMonitors,
            DisplayMonitors >= 0) )
      {
        v17 = *(_QWORD *)((char *)this + 1140);
        v18 = _mm_srli_si128(*(__m128i *)((char *)this + 1140), 8).m128i_u64[0];
        *a2 = v17;
        *a3 = HIDWORD(v17);
        *a4 = v18;
        *v11 = HIDWORD(v18);
        v10 = 0;
        goto LABEL_17;
      }
      v15 = (unsigned int)DisplayMonitors;
      v14 = 589LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)v15);
LABEL_17:
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v21);
    return v10;
  }
  v9 = 576LL;
LABEL_3:
  v10 = -2147467261;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
    (const char *)0x80004003LL);
  return v10;
}
