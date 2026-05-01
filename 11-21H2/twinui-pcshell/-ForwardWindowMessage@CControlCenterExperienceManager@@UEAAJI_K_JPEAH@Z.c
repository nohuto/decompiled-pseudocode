/*
 * XREFs of ?ForwardWindowMessage@CControlCenterExperienceManager@@UEAAJI_K_JPEAH@Z @ 0x1803538E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180073E70 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800C912C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019033C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$InputSwitch_PostForwardedInputMessage@_NAEAIAEA_KAEA_J@ControlCenterTelemetry@ControlCenterUITelemetry@@SAX$$QEA_NAEAIAEA_KAEA_J@Z @ 0x180352368 (--$InputSwitch_PostForwardedInputMessage@_NAEAIAEA_KAEA_J@ControlCenterTelemetry@ControlCenterUI.c)
 */

__int64 __fastcall CControlCenterExperienceManager::ForwardWindowMessage(
        CControlCenterExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        WPARAM a3,
        LPARAM a4,
        int *a5)
{
  ExperienceManagerUtils *v6; // rcx
  UINT v9; // edi
  __int64 v10; // rax
  HWND v11; // r12
  const char *v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  int v15; // esi
  float v16; // xmm6_4
  LANGID ThreadUILanguage; // ax
  int v18; // eax
  float v19; // xmm1_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  int v22; // ecx
  LPARAM v23; // rbx
  char v25[8]; // [rsp+20h] [rbp-E0h] BYREF
  UINT v26; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 v27; // [rsp+30h] [rbp-D0h] BYREF
  WPARAM v28; // [rsp+38h] [rbp-C8h] BYREF
  BYTE KeyState; // [rsp+40h] [rbp-C0h] BYREF
  char v30; // [rsp+41h] [rbp-BFh]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v6 = (ExperienceManagerUtils *)*((_QWORD *)this + 9);
  v26 = (unsigned int)a2;
  v28 = a3;
  v9 = (unsigned int)a2;
  v27 = a4;
  if ( !v6 )
  {
    v25[0] = 0;
    ControlCenterUITelemetry::ControlCenterTelemetry::InputSwitch_PostForwardedInputMessage<bool,unsigned int &,unsigned __int64 &,__int64 &>(
      v25,
      (int *)&v26,
      (int *)&v28,
      (int *)&v27);
    return 0LL;
  }
  v10 = ExperienceManagerUtils::WindowFromViewWrapper(v6, a2);
  *a5 = 1;
  v11 = (HWND)v10;
  if ( v9 < 0xA0 )
  {
LABEL_6:
    v25[0] = 1;
    ControlCenterUITelemetry::ControlCenterTelemetry::InputSwitch_PostForwardedInputMessage<bool,unsigned int &,unsigned __int64 &,__int64 &>(
      v25,
      (int *)&v26,
      (int *)&v28,
      (int *)&v27);
    if ( !PostMessageW(v11, v9, a3, a4) )
    {
      v13 = 1645LL;
LABEL_8:
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)v13,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        v12);
      return 0LL;
    }
    return 0LL;
  }
  if ( v9 <= 0xA9 )
  {
    v9 += 352;
    v26 = v9;
  }
  else if ( v9 <= 0x1FF || v9 > 0x209 )
  {
    goto LABEL_6;
  }
  v14 = (__int16)a4;
  v15 = SWORD1(a4);
  v27 = __PAIR64__(v15, v14);
  v16 = (float)v14;
  ThreadUILanguage = GetThreadUILanguage();
  v18 = IsBiDiLocale(ThreadUILanguage);
  v19 = *((float *)this + 134);
  if ( v18 )
  {
    if ( v16 >= v19 )
    {
      v20 = (float)(v19 + *((float *)this + 136)) - (float)*((int *)this + 159);
LABEL_13:
      if ( v20 >= v16 )
      {
        v21 = *((float *)this + 135);
        if ( (float)v15 >= v21 && (float)(v21 + *((float *)this + 137)) >= (float)v15 )
          goto LABEL_18;
      }
    }
  }
  else if ( v16 >= (float)((float)*((int *)this + 159) + v19) )
  {
    v20 = v19 + *((float *)this + 136);
    goto LABEL_13;
  }
  if ( v9 - 512 > 8 || (v22 = 293, !_bittest(&v22, v9 - 512)) )
  {
    *a5 = 0;
    return 0LL;
  }
LABEL_18:
  if ( v9 == 513 && GetKeyboardState(&KeyState) )
  {
    v30 |= 0x80u;
    SetKeyboardState(&KeyState);
  }
  v25[0] = 1;
  v27 = (unsigned __int16)v27 | (unsigned __int64)(WORD2(v27) << 16);
  v23 = v27;
  ControlCenterUITelemetry::ControlCenterTelemetry::InputSwitch_PostForwardedInputMessage<bool,unsigned int &,unsigned __int64 &,__int64 &>(
    v25,
    (int *)&v26,
    (int *)&v28,
    (int *)&v27);
  if ( !PostMessageW(v11, v9, a3, v23) )
  {
    v13 = 1639LL;
    goto LABEL_8;
  }
  return 0LL;
}
