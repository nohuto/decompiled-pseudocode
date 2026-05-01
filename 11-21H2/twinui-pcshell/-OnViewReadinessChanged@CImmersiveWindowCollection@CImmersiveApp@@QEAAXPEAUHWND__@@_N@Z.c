/*
 * XREFs of ?OnViewReadinessChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@_N@Z @ 0x180020F60
 * Callers:
 *     ?OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z @ 0x180020F10 (-OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z.c)
 * Callees:
 *     ?_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z @ 0x18002107C (-_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180070364 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180070510 (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x1800708C8 (-QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18007518C (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanShowPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180303EA0 (-CanShowPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x180307B90 (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 *     WPP_SF_Sdql @ 0x180309E60 (WPP_SF_Sdql.c)
 */

void __fastcall CImmersiveApp::CImmersiveWindowCollection::OnViewReadinessChanged(
        CImmersiveApp::CImmersiveWindowCollection *this,
        HWND a2,
        char a3)
{
  int v6; // edx
  int v7; // r8d
  bool v8; // bl
  bool v9; // dl
  unsigned __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  if ( a3 && (int)CImmersiveApp::CImmersiveWindowCollection::_FindWindow(this, a2, &v10) >= 0 )
  {
    if ( !v10 )
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
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 56LL))(*((_QWORD *)this + 19))
      && CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost(this) )
    {
      CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(this, v9);
LABEL_12:
      CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged(this);
    }
  }
}
