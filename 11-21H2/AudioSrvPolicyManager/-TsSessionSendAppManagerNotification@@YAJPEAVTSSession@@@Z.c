/*
 * XREFs of ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x1800309A0
 * Callers:
 *     ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18002E110 (-TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18002F6C0 (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_1f55666334b8184c6ae1399bb7301650__void_::_Do_call @ 0x180030EC0 (std--_Func_impl_no_alloc__lambda_1f55666334b8184c6ae1399bb7301650__void_--_Do_call.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GenerateMediaManagerNotification@@YAJAEAV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@AEAV?$unique_ptr@UMEDIAMANAGER_NOTIFICATION_BLOCK@@U?$default_delete@UMEDIAMANAGER_NOTIFICATION_BLOCK@@@std@@@2@@Z @ 0x18002C224 (-GenerateMediaManagerNotification@@YAJAEAV-$vector@PEAVCApplication@@V-$allocator@PEAVCApplicati.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TsSessionSendAppManagerNotification(struct TSSession *a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int MediaManagerNotification; // eax
  unsigned int v4; // ebx
  _QWORD *v6; // rbx
  void *v7; // rdi
  __int64 v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v10; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+38h] [rbp+10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v11 = v2;
  if ( *((_QWORD *)a1 + 5) )
  {
    v10 = 0LL;
    MediaManagerNotification = GenerateMediaManagerNotification((__int64)a1 + 48, (unsigned __int64 *)&v10);
    v4 = MediaManagerNotification;
    if ( MediaManagerNotification < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4FD,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)MediaManagerNotification);
      if ( v10 )
        operator delete(v10);
      if ( v2 )
        LeaveCriticalSection(v2);
      return v4;
    }
    v6 = (_QWORD *)*((_QWORD *)a1 + 5);
    v7 = v10;
    while ( v6 )
    {
      v8 = v6[1];
      if ( !*(_DWORD *)(v8 + 416) )
        GenerateMediaEvent(v7, *(unsigned int *)(v8 + 160));
      v6 = (_QWORD *)*v6;
    }
    if ( v7 )
      operator delete(v7);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
