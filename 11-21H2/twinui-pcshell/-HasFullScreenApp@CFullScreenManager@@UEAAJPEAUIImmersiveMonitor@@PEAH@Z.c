/*
 * XREFs of ?HasFullScreenApp@CFullScreenManager@@UEAAJPEAUIImmersiveMonitor@@PEAH@Z @ 0x1800D5C20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CFullScreenManager::HasFullScreenApp(CFullScreenManager *this, IUnknown *a2, int *a3)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  void *v6; // rcx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *ppvOut; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0;
  ppvOut = 0LL;
  v4 = IUnknown_QueryService(
         a2,
         &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
         &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
         &ppvOut);
  v5 = v4;
  if ( v4 < 0 )
  {
    v8 = 352LL;
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)ppvOut + 72LL))(ppvOut, a3);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v5 = 0;
      goto LABEL_4;
    }
    v8 = 353LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_4:
  v6 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v5;
}
