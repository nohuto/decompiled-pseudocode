/*
 * XREFs of ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18002F6C0
 * Callers:
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x180015950 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x180019180 (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x180020A38 (-OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x180024F20 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x1800309A0 (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 *     memmove_0 @ 0x18004444F (memmove_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TsSessionIdRemoveActiveMediaApp(DWORD SessionId, struct CApplication *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  struct TSSession *v8; // rbx
  struct CApplication **v9; // r8
  struct CApplication **i; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct TSSession *v12; // [rsp+40h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+48h] [rbp+20h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v13 = v4;
  v5 = TsSessionFromSessionId(SessionId, 0, &v12);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = v12;
    v9 = (struct CApplication **)*((_QWORD *)v12 + 7);
    for ( i = (struct CApplication **)*((_QWORD *)v12 + 6); i != v9; ++i )
    {
      if ( *i == a2 )
      {
        memmove_0(i, i + 1, (char *)v9 - (char *)(i + 1));
        *((_QWORD *)v8 + 7) -= 8LL;
        TsSessionSendAppManagerNotification(v8);
        break;
      }
    }
    if ( v4 )
      LeaveCriticalSection(v4);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x52A,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v5);
    if ( v4 )
      LeaveCriticalSection(v4);
    return v6;
  }
}
