/*
 * XREFs of ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1800C2E84
 * Callers:
 *     ?WindowDiscoveredFromShellHook@WindowWrapperBase@@UEAAXPEAUHWND__@@@Z @ 0x1800C2E30 (-WindowDiscoveredFromShellHook@WindowWrapperBase@@UEAAXPEAUHWND__@@@Z.c)
 *     _lambda_a38aae5e6c9958ce849327ccd84fd2a2_::operator() @ 0x180139528 (_lambda_a38aae5e6c9958ce849327ccd84fd2a2_--operator().c)
 * Callees:
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1800295B4 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x18008F924 (-ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ.c)
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x180091B84 (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 *     ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@Z @ 0x1800C30D0 (--$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerI.c)
 *     ?NotifyGlobalComponentsForWindowStateChange@WindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x1800C3244 (-NotifyGlobalComponentsForWindowStateChange@WindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1.c)
 *     ?PushPointerActivationPolicyToWindow@WindowWrapperBase@@AEAAXXZ @ 0x1800C32F0 (-PushPointerActivationPolicyToWindow@WindowWrapperBase@@AEAAXXZ.c)
 *     ?PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x1800C3490 (-PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     ?PushZbidToWindow@WindowWrapperBase@@AEAAXW4ZBID@@@Z @ 0x1800C37A0 (-PushZbidToWindow@WindowWrapperBase@@AEAAXW4ZBID@@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapperBase::SetWindowId(_QWORD *a1, int a2, int a3)
{
  HWND v3; // r15
  int v5; // ebx
  _QWORD *v6; // rdi
  unsigned int v7; // esi
  int v8; // eax
  int *v9; // r12
  unsigned int PropW; // eax
  char v11; // dl
  unsigned __int64 i; // r12
  __int64 v13; // rcx
  unsigned int v14; // edi
  const WCHAR *StringRawBuffer; // rax
  char v16; // [rsp+20h] [rbp-58h]
  int v17; // [rsp+24h] [rbp-54h] BYREF
  int v18; // [rsp+28h] [rbp-50h]
  struct tagRECT Rect; // [rsp+30h] [rbp-48h] BYREF

  v18 = a3;
  v3 = (HWND)a2;
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)a1[35] + 216LL))(a1[35]);
  v5 = *((_DWORD *)a1 + 74);
  if ( (_DWORD)v3 != v5 )
  {
    *((_DWORD *)a1 + 74) = (_DWORD)v3;
    v6 = a1 + 45;
    v7 = 0;
    if ( !a1[45] || (v8 = *((_DWORD *)a1 + 92)) != 0 )
    {
      v16 = 0;
      v8 = *((_DWORD *)a1 + 92);
    }
    else
    {
      v16 = 1;
    }
    *v6 = v3;
    v9 = (int *)(a1 + 46);
    v17 = v8;
    *((_DWORD *)a1 + 92) = v8 & 0xFFFFFFF1;
    ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
      a1 + 45,
      &v17,
      a1 + 46);
    if ( (_DWORD)v3 )
    {
      PropW = (unsigned int)GetPropW(v3, L"CoreWindowResizeManager_ShouldWaitForLayoutCompletion");
      *((_BYTE *)a1 + 384) = PropW == 1;
      if ( PropW == 1 )
      {
        v17 = *v9;
        *v9 = v17 | 2;
        ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
          a1 + 45,
          &v17,
          a1 + 46);
      }
      Rect = 0LL;
      GetWindowRect(v3, &Rect);
      *((_DWORD *)a1 + 97) = Rect.right - Rect.left;
      *((_DWORD *)a1 + 98) = Rect.bottom - Rect.top;
      a1[47] = 0LL;
      WindowReadyState::_WaitForUnfreezeIfNecessary((WindowReadyState *)(a1 + 45));
    }
    if ( !*v6 || (v11 = 1, *v9) )
      v11 = 0;
    if ( v11 != v16 )
      std::_Func_class<void,bool>::operator()((__int64)(a1 + 50), v11);
    if ( (_DWORD)v3 )
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 184LL))(a1, 0LL);
      if ( v18 != 1 )
      {
        WindowWrapperBase::PushZbidToWindow(a1, *((unsigned int *)a1 + 127));
        WindowWrapperBase::PushBoundsToWindow(a1, 3LL);
        WindowWrapperBase::PushPointerActivationPolicyToWindow((WindowWrapperBase *)a1);
        for ( i = 0LL; i < a1[26]; ++i )
        {
          v13 = *(_QWORD *)(a1[25] + 8 * i);
          v14 = *(_DWORD *)(v13 + 16);
          StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v13 + 8), 0LL);
          SetPropW(v3, StringRawBuffer, (HANDLE)v14);
        }
      }
    }
    else
    {
      LODWORD(v3) = v5;
      v7 = 1;
    }
    WindowWrapperBase::NotifyGlobalComponentsForWindowStateChange(a1, (int)v3, v7);
    WindowWrapperBase::ReconcileSessionIdleTaskCompletion((WindowWrapperBase *)a1);
  }
}
