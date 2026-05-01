/*
 * XREFs of ?AddView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18031E8A0
 * Callers:
 *     ?ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIPresentationRequestedArgs@@0@Z @ 0x18031EF50 (-ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@P.c)
 *     ?HandleRecoveryForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x18031FB40 (-HandleRecoveryForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@PEAUIApplicationView@@@?$vector@PEAUIApplicationView@@V?$allocator@PEAUIApplicationView@@@std@@@std@@QEAAPEAPEAUIApplicationView@@QEAPEAU2@$$QEAPEAU2@@Z @ 0x18031E134 (--$_Emplace_reallocate@PEAUIApplicationView@@@-$vector@PEAUIApplicationView@@V-$allocator@PEAUIA.c)
 */

__int64 __fastcall FullScreenPositioner::AddView(FullScreenPositioner *this, struct IApplicationView *a2)
{
  const void **v4; // rcx
  _BYTE *v5; // rdx
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IApplicationView *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v4 = (const void **)((char *)this + 248);
  v5 = (_BYTE *)*((_QWORD *)this + 32);
  if ( v5 == *((_BYTE **)this + 33) )
  {
    try
    {
      std::vector<IApplicationView *>::_Emplace_reallocate<IApplicationView *>(v4, v5, &v9);
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x574,
                             (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
                             v6);
    }
  }
  else
  {
    *(_QWORD *)v5 = a2;
    v4[1] = (char *)v4[1] + 8;
  }
  return 0LL;
}
