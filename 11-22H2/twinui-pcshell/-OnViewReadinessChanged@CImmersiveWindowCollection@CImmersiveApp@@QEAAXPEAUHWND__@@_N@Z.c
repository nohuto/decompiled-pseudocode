/*
 * XREFs of ?OnViewReadinessChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@_N@Z @ 0x180021110
 * Callers:
 *     ?OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z @ 0x1800210C0 (-OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z.c)
 * Callees:
 *     ?QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18001EF8C (-QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x18001F234 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18001F2D4 (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z @ 0x180021218 (-_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180023798 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800237CC (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanShowPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1803C0430 (-CanShowPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x1803C40E0 (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 *     WPP_SF_Sdql @ 0x1803C63B8 (WPP_SF_Sdql.c)
 */

void __fastcall CImmersiveApp::CImmersiveWindowCollection::OnViewReadinessChanged(
        CImmersiveApp::CImmersiveWindowCollection *this,
        HWND a2,
        char a3)
{
  int v6; // edx
  int v7; // r8d
  bool v8; // bl
  unsigned __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  if ( a3 && (int)CImmersiveApp::CImmersiveWindowCollection::_FindWindow(this, a2, &v9) >= 0 )
  {
    if ( !v9 )
    {
      v8 = (*(unsigned int (__fastcall **)(_QWORD))(***((_QWORD ***)this + 21) + 216LL))(**((_QWORD **)this + 21)) == 3;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 19) + 32LL))(
        *((_QWORD *)this + 19),
        **((_QWORD **)this + 21));
      if ( v8 )
        CImmersiveApp::CImmersiveWindowCollection::QueueAyncPositionReconciliation(this);
    }
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_Sdql(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        v6,
        v7,
        *(_QWORD *)(*((_QWORD *)this + 20) + 584LL),
        *(_DWORD *)(*((_QWORD *)this + 20) + 592LL),
        (char)a2,
        a3);
    if ( *((_QWORD *)this + 17) && CImmersiveApp::CImmersiveWindowCollection::CanShowPendingApplicationWindow(this) )
    {
      CImmersiveApp::CImmersiveWindowCollection::SetApplicationWindow(this, a2);
      goto LABEL_12;
    }
    if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(this)
      && CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost(this) )
    {
      CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(this);
LABEL_12:
      CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged(this);
    }
  }
}
