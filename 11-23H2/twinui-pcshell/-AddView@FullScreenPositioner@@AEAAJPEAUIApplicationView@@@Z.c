/*
 * XREFs of ?AddView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803EC840
 * Callers:
 *     ?ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1803ECD70 (-ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@P.c)
 *     ?HandleRecoveryForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1803ED580 (-HandleRecoveryForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@PEAUIApplicationView@@@?$vector@PEAUIApplicationView@@V?$allocator@PEAUIApplicationView@@@std@@@std@@QEAAPEAPEAUIApplicationView@@QEAPEAU2@$$QEAPEAU2@@Z @ 0x1803EC1E4 (--$_Emplace_reallocate@PEAUIApplicationView@@@-$vector@PEAUIApplicationView@@V-$allocator@PEAUIA.c)
 */

__int64 __fastcall FullScreenPositioner::AddView(FullScreenPositioner *this, struct IApplicationView *a2)
{
  _BYTE *v3; // rdx
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IApplicationView *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v3 = (_BYTE *)*((_QWORD *)this + 30);
  if ( v3 == *((_BYTE **)this + 31) )
  {
    try
    {
      std::vector<IApplicationView *>::_Emplace_reallocate<IApplicationView *>((const void **)this + 29, v3, &v7);
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x4C9,
                             (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
                             v4);
    }
  }
  else
  {
    *(_QWORD *)v3 = a2;
    *((_QWORD *)this + 30) += 8LL;
  }
  return 0LL;
}
