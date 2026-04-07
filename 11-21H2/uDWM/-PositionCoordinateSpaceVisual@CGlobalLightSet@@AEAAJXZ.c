/*
 * XREFs of ?PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x18000EAA4
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x18001D898 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x18004DDEC (-CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E570 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000EC34 (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     ?ValidateUdwmDCompVisual@CGlobalLightSet@@AEBA_NPEAVUdwmDcompVisual@@@Z @ 0x18000EC90 (-ValidateUdwmDCompVisual@CGlobalLightSet@@AEBA_NPEAVUdwmDcompVisual@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180036354 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CGlobalLightSet::PositionCoordinateSpaceVisual(CGlobalLightSet *this)
{
  struct UdwmDcompVisual *v2; // rdx
  struct tagPOINT v3; // rcx
  int v4; // ebx
  int v5; // r14d
  int v6; // r15d
  int v7; // esi
  int v8; // r12d
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  int v12; // edx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  float v16[4]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 *v18; // [rsp+60h] [rbp+30h] BYREF
  struct tagPOINT v19; // [rsp+68h] [rbp+38h] BYREF

  v2 = (struct UdwmDcompVisual *)*((_QWORD *)this + 12);
  if ( !v2 || !CGlobalLightSet::ValidateUdwmDCompVisual(this, v2) )
    return 0LL;
  v18 = 0LL;
  v3 = *(struct tagPOINT *)(*((_QWORD *)this + 12) + 24LL);
  v19 = v3;
  if ( v3 )
    (*(void (__fastcall **)(struct tagPOINT))(**(_QWORD **)&v3 + 8LL))(v3);
  v4 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
         &v19,
         &v18);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
  if ( v4 < 0 )
  {
    v14 = (unsigned int)v4;
    v15 = 432LL;
  }
  else
  {
    v5 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 93);
    v6 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 95);
    v7 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 94);
    v8 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 96);
    v9 = *v18;
    v16[0] = (float)v5;
    v16[1] = (float)v7;
    v16[2] = 0.0;
    v10 = (*(__int64 (__fastcall **)(__int64 *, float *))(v9 + 168))(v18, v16);
    v4 = v10;
    if ( v10 < 0 )
    {
      v15 = 438LL;
    }
    else
    {
      v11 = 0;
      if ( v6 >= 0 )
        v11 = v6;
      v12 = 0;
      if ( v8 >= 0 )
        v12 = v8;
      v10 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64))(*v18 + 288))(
              v18,
              _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v11), (__m128)COERCE_UNSIGNED_INT((float)v12)).m128_u64[0]);
      v4 = v10;
      if ( v10 >= 0 )
      {
        v19.x = -v5;
        v19.y = -v7;
        CVisual::SetOffset(*(CVisual **)(*((_QWORD *)this + 12) + 48LL), &v19);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
        return 0LL;
      }
      v15 = 440LL;
    }
    v14 = (unsigned int)v10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
    (const char *)v14);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
  return (unsigned int)v4;
}
