/*
 * XREFs of ?PositionProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800CAB6C
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x18001D898 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z @ 0x1800CA554 (-CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000EC34 (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectedShadowScene::PositionProjectedShadowReceiverVisual(CProjectedShadowScene *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rdx
  int v4; // edi
  int v5; // esi
  __int64 v6; // rax
  int v7; // eax
  int v8; // edx
  int v10[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 *v12; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 7) )
  {
    v12 = 0LL;
    v1 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 5,
           (__int64 *)&v12);
    v2 = v1;
    if ( v1 < 0 )
    {
      v3 = 136LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v3,
        (int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
        (const char *)(unsigned int)v1);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
      return v2;
    }
    v4 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 95);
    v5 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 96);
    v6 = *v12;
    *(float *)v10 = (float)*((int *)CDesktopManager::s_pDesktopManagerInstance + 93);
    *(float *)&v10[1] = (float)*((int *)CDesktopManager::s_pDesktopManagerInstance + 94);
    v10[2] = 0;
    v1 = (*(__int64 (__fastcall **)(__int64 *, int *))(v6 + 168))(v12, v10);
    v2 = v1;
    if ( v1 < 0 )
    {
      v3 = 142LL;
      goto LABEL_12;
    }
    v7 = 0;
    if ( v4 >= 0 )
      v7 = v4;
    v8 = 0;
    if ( v5 >= 0 )
      v8 = v5;
    v1 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64))(*v12 + 288))(
           v12,
           _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v7), (__m128)COERCE_UNSIGNED_INT((float)v8)).m128_u64[0]);
    v2 = v1;
    if ( v1 < 0 )
    {
      v3 = 144LL;
      goto LABEL_12;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
  }
  return 0LL;
}
