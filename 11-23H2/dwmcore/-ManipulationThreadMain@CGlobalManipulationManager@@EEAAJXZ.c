/*
 * XREFs of ?ManipulationThreadMain@CGlobalManipulationManager@@EEAAJXZ @ 0x1800D1850
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateMMCSSTask@CGlobalManipulationManager@@UEAAJXZ @ 0x1800D1A40 (-UpdateMMCSSTask@CGlobalManipulationManager@@UEAAJXZ.c)
 *     ?SetupMessageCallThreadInfo@CManipulationManager@@IEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUMessageCallThreadInfo@1@@Z @ 0x1800D1A8C (-SetupMessageCallThreadInfo@CManipulationManager@@IEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUM.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     IsRegisterManipulationThreadPresent @ 0x180110458 (IsRegisterManipulationThreadPresent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x18026F868 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CGlobalManipulationManager::ManipulationThreadMain(CGlobalManipulationManager *this)
{
  struct IMessageSession **v2; // rbx
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  struct IMessageSession *v10; // rcx
  signed int LastError; // eax
  char *v13; // [rsp+20h] [rbp-38h]
  char v14; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
  {
    v13 = &v14;
    McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &MANIPULATION_THREAD_STARTUP);
  }
  v2 = (struct IMessageSession **)((char *)this + 24);
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = CoreUICreateEx(1LL, (char *)this + 24);
  if ( v4 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v4, retaddr);
  EnterCriticalSection(&stru_1803E6218);
  byte_1803E6214 = 0;
  LeaveCriticalSection(&stru_1803E6218);
  EnterCriticalSection(&stru_1803E61D8);
  byte_1803E61D4 = 0;
  LeaveCriticalSection(&stru_1803E61D8);
  if ( (unsigned __int8)IsRegisterManipulationThreadPresent(v5) )
  {
    if ( !(unsigned int)RegisterManipulationThread(CManipulationManager::ManipulationThreadCallback, this) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError >= 0 )
        LastError = -2003304445;
      ModuleFailFastForHRESULT((unsigned int)LastError, retaddr);
    }
    CGlobalManipulationManager::UpdateMMCSSTask(this);
    v6 = CManipulationManager::SetupMessageCallThreadInfo(
           this,
           *v2,
           (int (*)(void *, const void *, int))CManipulationManager::s_ManipulationThreadEndpointProc,
           (CGlobalManipulationManager *)((char *)this + 32));
    if ( v6 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v6, retaddr);
    v7 = (*(__int64 (__fastcall **)(struct IMessageSession *, HANDLE, __int64 (__fastcall *)(), CGlobalManipulationManager *, char *))(*(_QWORD *)*v2 + 272LL))(
           *v2,
           qword_1803E5918,
           lambda_19664e0b56b7920f045ba8c67b2f55c3_::_lambda_invoker_cdecl_,
           this,
           v13);
    if ( v7 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v7, retaddr);
    v8 = (*(__int64 (__fastcall **)(struct IMessageSession *, HANDLE, __int64 (__fastcall *)(), CGlobalManipulationManager *))(*(_QWORD *)*v2 + 272LL))(
           *v2,
           CManipulationManager::s_rghWaitEvents,
           lambda_efd5facd022cf831717386964e02a8d7_::_lambda_invoker_cdecl_,
           this);
    if ( v8 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v8, retaddr);
    v9 = (*(__int64 (__fastcall **)(struct IMessageSession *, HANDLE, __int64 (__fastcall *)(), CGlobalManipulationManager *))(*(_QWORD *)*v2 + 272LL))(
           *v2,
           hEvent,
           lambda_08f8e6791065478e4a38815f49fd4aba_::_lambda_invoker_cdecl_,
           this);
    if ( v9 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v9, retaddr);
    SetEvent(CManipulationManager::s_hManipThreadInitializedWaitEvent);
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)*v2 + 232LL))(*v2);
    v10 = *v2;
    if ( *v2 )
    {
      *v2 = 0LL;
      (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  CManipulationManager::s_dwManipulationThreadId = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &MANIPULATION_THREAD_CLEANUP);
  return 0LL;
}
