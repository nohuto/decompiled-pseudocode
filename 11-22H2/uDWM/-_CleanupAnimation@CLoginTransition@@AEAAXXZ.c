/*
 * XREFs of ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x18004334C
 * Callers:
 *     ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x180041888 (-StopAnimation@CLoginTransition@@QEAAJXZ.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x180042620 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180025580 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x1800412B8 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800434D8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x1800436BC (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180043790 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x1800438B4 (-UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180044114 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180050730 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 */

void __fastcall CLoginTransition::_CleanupAnimation(CLoginTransition *this)
{
  CAnimationEngine *v2; // rax
  CAnimationEngine *v3; // rdi
  __int64 v4; // r8
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  _BYTE v11[16]; // [rsp+30h] [rbp-28h] BYREF

  v2 = CDesktopManager::AcquireAnimationEngine();
  v3 = v2;
  if ( v2 )
  {
    CAnimationEngine::UnregisterForAnimationCompleteNotification(v2, this);
    CAnimationEngine::ScheduleStopAnimation(v3, *((_DWORD *)this + 16));
    CAnimationEngine::Release(v3);
  }
  if ( *((_QWORD *)this + 1) )
    CVisual::SetOffset(*((CVisual **)this + 4), &stru_18011DEA8);
  if ( *((_QWORD *)this + 2) )
    CVisual::SetOffset(*((CVisual **)this + 5), &stru_18011DEA8);
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
  {
    VisualCollection::Remove(
      (VisualCollection *)(v4 + 32),
      (struct CVisual *)((*((_QWORD *)this + 1) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 1) >> 64)));
    VisualCollection::Remove(
      (VisualCollection *)(*((_QWORD *)this + 6) + 32LL),
      (struct CVisual *)((*((_QWORD *)this + 2) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 2) >> 64)));
    RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(
                                         *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                                         *((_QWORD *)this + 10));
    VisualCollection::Remove(
      (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
      *((struct CVisual **)this + 6));
  }
  v6 = *((_QWORD *)this + 1);
  if ( v6 )
  {
    CBaseObject::Release((CBaseObject *)(v6 + 8));
    *((_QWORD *)this + 1) = 0LL;
  }
  v7 = *((_QWORD *)this + 2);
  if ( v7 )
  {
    CBaseObject::Release((CBaseObject *)(v7 + 8));
    *((_QWORD *)this + 2) = 0LL;
  }
  v8 = (CBaseObject *)*((_QWORD *)this + 4);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 4) = 0LL;
  }
  v9 = (CBaseObject *)*((_QWORD *)this + 5);
  if ( v9 )
  {
    CBaseObject::Release(v9);
    *((_QWORD *)this + 5) = 0LL;
  }
  v10 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v10 )
  {
    CBaseObject::Release(v10);
    *((_QWORD *)this + 6) = 0LL;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (__int64)&UdwmLoginTransition_Stop,
      v4,
      1LL,
      (__int64)v11);
}
