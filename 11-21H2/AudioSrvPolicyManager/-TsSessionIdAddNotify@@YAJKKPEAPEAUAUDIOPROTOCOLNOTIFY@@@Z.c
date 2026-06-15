/*
 * XREFs of ?TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18002E36C
 * Callers:
 *     TS_RegisterAudioProtocolNotification @ 0x180031990 (TS_RegisterAudioProtocolNotification.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002B0C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TsSessionIdAddNotify(DWORD SessionId, int a2, struct AUDIOPROTOCOLNOTIFY **a3)
{
  struct AUDIOPROTOCOLNOTIFY *v6; // rax
  struct AUDIOPROTOCOLNOTIFY *v7; // rdi
  __int64 result; // rax
  struct _RTL_CRITICAL_SECTION *v9; // rsi
  int v10; // eax
  unsigned int v11; // ebx
  const char *v12; // r9
  struct TSSession *v13; // rbx
  HANDLE ProcessHeap; // rax
  _QWORD *v15; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct TSSession *v17; // [rsp+68h] [rbp+20h] BYREF

  v6 = (struct AUDIOPROTOCOLNOTIFY *)operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v17 = v6;
  if ( v6 )
  {
    *(_DWORD *)v6 = a2;
    *((_DWORD *)v6 + 1) = SessionId;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v9 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
    try
    {
      v10 = TsSessionFromSessionId(SessionId, 1, &v17);
      v11 = v10;
      if ( v10 >= 0 )
      {
        v13 = v17;
        ProcessHeap = GetProcessHeap();
        v15 = HeapAlloc(ProcessHeap, 0, 0x10uLL);
        v15[1] = v7;
        *v15 = *((_QWORD *)v13 + 2);
        *((_QWORD *)v13 + 2) = v15;
        *a3 = v7;
        if ( v9 )
          LeaveCriticalSection(v9);
        result = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4B7,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)v10);
        if ( v9 )
          LeaveCriticalSection(v9);
        operator delete(v7);
        result = v11;
      }
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x4C4,
                             (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                             v12);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B1,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  return result;
}
