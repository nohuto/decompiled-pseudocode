/*
 * XREFs of ?ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x1800B5814
 * Callers:
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x180056258 (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180038C6C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x18003C70C (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z @ 0x18003DA7C (-SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopManager::ReleaseMonitorRenderTargets(CDesktopManager *this)
{
  int AllDisplaysNoRef; // eax
  unsigned int v3; // ebx
  CDWMDisplay **v4; // rbx
  __int64 v5; // rdi
  int v6; // eax
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+40h] [rbp-18h]
  int v10; // [rsp+44h] [rbp-14h]
  unsigned int v11; // [rsp+48h] [rbp-10h]

  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(*((_QWORD *)this + 18), (__int64)&v8);
  v3 = AllDisplaysNoRef;
  if ( AllDisplaysNoRef >= 0 )
  {
    if ( v11 )
    {
      v4 = (CDWMDisplay **)v8;
      v5 = v11;
      do
      {
        CDWMDisplay::SetDcompTarget(*v4++, 0LL);
        --v5;
      }
      while ( v5 );
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 6) + 32LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 6) + 32LL));
    v3 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x5F9u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, AllDisplaysNoRef, 0x5F2u);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(&v8);
  return v3;
}
