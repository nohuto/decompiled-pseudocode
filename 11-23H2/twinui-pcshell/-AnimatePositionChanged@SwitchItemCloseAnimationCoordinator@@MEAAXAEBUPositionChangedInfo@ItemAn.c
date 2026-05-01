/*
 * XREFs of ?AnimatePositionChanged@SwitchItemCloseAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@ItemAnimationCoordinatorBase@@@Z @ 0x18058AC70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIAnimatableScrollViewer@@@?$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAnimatableScrollViewer@@@WRL@Microsoft@@@Details@12@@Z @ 0x18058A738 (--$As@UIAnimatableScrollViewer@@@-$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@@Q.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SwitchItemCloseAnimationCoordinator::AnimatePositionChanged(
        SwitchItemCloseAnimationCoordinator *this,
        const struct ItemAnimationCoordinatorBase::PositionChangedInfo *a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  if ( *((_DWORD *)a2 + 2) == 1 )
  {
    (*(void (__fastcall **)(_QWORD, char *, _QWORD, _QWORD))(**(_QWORD **)a2 + 512LL))(
      *(_QWORD *)a2,
      (char *)a2 + 12,
      0LL,
      0LL);
    (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)a2 + 512LL))(*(_QWORD *)a2, (char *)a2 + 28, 19LL);
  }
  else
  {
    v5 = 0LL;
    v3 = Microsoft::WRL::ComPtr<IAnimatableMultitaskingViewElement>::As<IAnimatableScrollViewer>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2,
           &v5);
    if ( v3 >= 0 )
    {
      if ( *((_DWORD *)a2 + 2) == 3 )
      {
        (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v5 + 112LL))(v5, (char *)a2 + 28, 19LL);
      }
      else if ( *((_DWORD *)a2 + 2) == 4 )
      {
        (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v5 + 120LL))(v5, (char *)a2 + 28, 19LL);
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x31,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcloseanimationcoordinator.cpp",
        (const char *)(unsigned int)v3);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
  }
}
