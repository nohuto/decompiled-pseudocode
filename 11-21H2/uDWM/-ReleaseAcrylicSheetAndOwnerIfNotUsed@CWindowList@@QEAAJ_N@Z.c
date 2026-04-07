/*
 * XREFs of ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x180105C50
 * Callers:
 *     ?OnWindowDataDestroyed@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18001C528 (-OnWindowDataDestroyed@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180022660 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnAnimationComplete@CAcrylicSheet@@UEAAJI@Z @ 0x18009A7A0 (-OnAnimationComplete@CAcrylicSheet@@UEAAJI@Z.c)
 *     std::_Func_impl_no_alloc__lambda_02cc1c50b8ad83b5853f3b1d8986beec__void_::_Do_call @ 0x18009BBA0 (std--_Func_impl_no_alloc__lambda_02cc1c50b8ad83b5853f3b1d8986beec__void_--_Do_call.c)
 *     ?ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ @ 0x18010204C (-ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ.c)
 *     ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1801045C0 (-IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?OnWindowArrangementEnd@CWindowList@@AEAAJXZ @ 0x180104EDC (-OnWindowArrangementEnd@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?reset@?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18009BD40 (-reset@-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CWindowList::ReleaseAcrylicSheetAndOwnerIfNotUsed(CWindowList *this, char a2)
{
  CBaseObject **v3; // rdi
  struct CVisual *v4; // rdx
  int v5; // eax
  unsigned int v6; // esi
  CBaseObject **v8; // rcx
  __int64 v9; // rax
  CBaseObject **v10; // rsi
  __int64 v11; // rdx
  char v12; // al
  int v13; // eax
  unsigned int v14; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v3 = (CBaseObject **)((char *)this + 560);
    v4 = (struct CVisual *)*((_QWORD *)this + 70);
    if ( v4 )
    {
      v5 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v4 + 3) + 32LL), v4);
      v6 = v5;
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBE9,
          (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
          (const char *)(unsigned int)v5);
        return v6;
      }
    }
    v8 = v3;
  }
  else
  {
    v9 = *((_QWORD *)this + 88);
    if ( !v9 )
      return 0LL;
    v10 = (CBaseObject **)((char *)this + 560);
    v11 = *((_QWORD *)this + 70);
    if ( !v11 )
      return 0LL;
    v12 = *(_BYTE *)(v9 + 669);
    if ( (v12 & 0x40) != 0
      || (v12 & 0x10) != 0
      || (v12 & 0x20) != 0
      || *(_DWORD *)(v11 + 488) != -1
      || *(_QWORD *)(v11 + 584)
      || *(_QWORD *)(v11 + 568) )
    {
      return 0LL;
    }
    v13 = VisualCollection::Remove((VisualCollection *)(*(_QWORD *)(v11 + 24) + 32LL), (struct CVisual *)v11);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBF9,
        (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v13);
      return v14;
    }
    v8 = v10;
  }
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::reset(v8);
  *((_QWORD *)this + 88) = 0LL;
  return 0LL;
}
