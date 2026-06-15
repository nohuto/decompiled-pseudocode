/*
 * XREFs of ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18002E110
 * Callers:
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x180024F20 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEAPEAVCApplication@@@?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@QEAAPEAPEAVCApplication@@QEAPEAV2@AEAPEAV2@@Z @ 0x18002A8E0 (--$_Emplace_reallocate@AEAPEAVCApplication@@@-$vector@PEAVCApplication@@V-$allocator@PEAVCApplic.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x1800309A0 (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TsSessionIdAddActiveMediaApp(DWORD SessionId, struct CApplication *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  const char *v7; // r9
  __int64 result; // rax
  struct TSSession *v9; // rdi
  char *v10; // rcx
  struct CApplication **v11; // rdx
  struct CApplication **i; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CApplication *v14; // [rsp+48h] [rbp+10h] BYREF
  struct TSSession *v15; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+58h] [rbp+20h]

  v14 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v16 = v4;
  try
  {
    v5 = TsSessionFromSessionId(SessionId, 0, &v15);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v9 = v15;
      v10 = (char *)v15 + 48;
      v11 = (struct CApplication **)*((_QWORD *)v15 + 7);
      for ( i = (struct CApplication **)*((_QWORD *)v15 + 6); i != v11; ++i )
      {
        if ( *i == a2 )
          goto LABEL_13;
      }
      if ( v11 == *((struct CApplication ***)v15 + 8) )
      {
        std::vector<CApplication *>::_Emplace_reallocate<CApplication * &>((__int64)v10, v11, &v14);
      }
      else
      {
        *v11 = a2;
        *((_QWORD *)v10 + 1) += 8LL;
      }
LABEL_13:
      TsSessionSendAppManagerNotification(v9);
      if ( v4 )
        LeaveCriticalSection(v4);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x513,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v5);
      if ( v4 )
        LeaveCriticalSection(v4);
      result = v6;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x521,
                           (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                           v7);
  }
  return result;
}
