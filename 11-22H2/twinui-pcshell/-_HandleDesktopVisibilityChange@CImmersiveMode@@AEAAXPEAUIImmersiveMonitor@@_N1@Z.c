/*
 * XREFs of ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x1801815B0
 * Callers:
 *     ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1801811AC (-_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?_UnregisterDesktopVisibilitySource@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x1802CFEBA (-_UnregisterDesktopVisibilitySource@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 *     ?OnDesktopVisibilityChanged@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@H@Z @ 0x1803A7E20 (-OnDesktopVisibilityChanged@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@H@Z.c)
 * Callees:
 *     ?UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@Z @ 0x1800DE208 (-UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_ScheduleDesktopVisibilityNotification@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N@Z @ 0x180181770 (-_ScheduleDesktopVisibilityNotification@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N@Z.c)
 *     ?_UpdateFallbackWindow@CImmersiveMode@@AEAAXXZ @ 0x1801817C0 (-_UpdateFallbackWindow@CImmersiveMode@@AEAAXXZ.c)
 *     ?_ScheduleLegacyModeNotification@CImmersiveMode@@AEAAXW4IMM_SYSTEM_MODE@@0@Z @ 0x1801817F8 (-_ScheduleLegacyModeNotification@CImmersiveMode@@AEAAXW4IMM_SYSTEM_MODE@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_L @ 0x1803A7AC8 (WPP_SF_L.c)
 *     WPP_SF_l @ 0x1803A80B0 (WPP_SF_l.c)
 */

void __fastcall CImmersiveMode::_HandleDesktopVisibilityChange(
        CImmersiveMode *this,
        struct IUnknown *a2,
        bool a3,
        char a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // r13d
  unsigned __int64 v9; // rbp
  unsigned __int8 v10; // r14
  unsigned int v11; // r15d
  char v12; // di
  char v13; // r13
  __int64 v14; // rsi
  char v15; // si
  int v16; // edx
  unsigned int v17; // [rsp+20h] [rbp-58h]
  char v18; // [rsp+80h] [rbp+8h]
  int v19; // [rsp+88h] [rbp+10h] BYREF
  bool v20; // [rsp+90h] [rbp+18h]
  char v21; // [rsp+98h] [rbp+20h]

  v21 = a4;
  v20 = a3;
  if ( ((int (__fastcall *)(struct IUnknown *, int *))a2->lpVtbl[2].QueryInterface)(a2, &v19) >= 0 && v19 )
    (*(void (__fastcall **)(_QWORD, struct IUnknown *))(**((_QWORD **)this + 43) + 56LL))(*((_QWORD *)this + 43), a2);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v8 = *((_DWORD *)this + 98);
  v9 = 0LL;
  v10 = 0;
  v18 = 0;
  v11 = 0;
  v17 = v8;
  v12 = 1;
  if ( *((_QWORD *)this + 55) )
  {
    v13 = v20;
    do
    {
      v14 = *(_QWORD *)(*((_QWORD *)this + 54) + 8 * v9);
      if ( (unsigned int)SHIsSameObject(*(struct IUnknown **)v14, a2) && *(_BYTE *)(v14 + 12) != v13 )
      {
        v16 = *((_DWORD *)this + 84);
        *(_BYTE *)(v14 + 12) = v13;
        v18 = 1;
        CImmersiveMode::CDesktopVisibilityChangeSource::UpdateActivationFilter(v14, v16);
      }
      if ( *(_BYTE *)(v14 + 12) )
        v10 = 1;
      else
        v11 = 1;
      ++v9;
    }
    while ( v9 < *((_QWORD *)this + 55) );
    v8 = v17;
  }
  if ( v11 == v8 )
  {
    v15 = 0;
  }
  else
  {
    v15 = 1;
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_L(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_614e7a2dd5e83d66d84b98d107ce0dd2_Traceguids, v11);
    *((_DWORD *)this + 98) = v11;
    CImmersiveMode::_UpdateFallbackWindow(this);
  }
  if ( v10 == *((_BYTE *)this + 396) )
  {
    v12 = 0;
  }
  else
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_l(*((_QWORD *)WPP_GLOBAL_Control + 2), v6, v7, v10);
    *((_BYTE *)this + 396) = v10;
  }
  if ( v21 || v18 )
    CImmersiveMode::_ScheduleDesktopVisibilityNotification(this, (struct IImmersiveMonitor *)a2, v20);
  if ( v12 )
    CImmersiveMode::_ScheduleDesktopVisibilityNotification(this, 0LL, v10);
  if ( v15 )
    CImmersiveMode::_ScheduleLegacyModeNotification(this, v8, v11);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
}
