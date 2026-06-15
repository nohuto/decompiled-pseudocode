/*
 * XREFs of ?TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z @ 0x18002E1F8
 * Callers:
 *     PbmRegisterAppManagerNotification @ 0x180028C30 (PbmRegisterAppManagerNotification.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180032708 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TsSessionIdAddAppManagerClient(struct CProcess *a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v3; // eax
  unsigned int v4; // esi
  const char *v5; // r9
  __int64 result; // rax
  struct TSSession *v7; // rsi
  HANDLE ProcessHeap; // rax
  signed __int32 v9; // eax
  int v10; // eax
  int v11; // eax
  unsigned int v12; // edi
  _QWORD *v13; // [rsp+28h] [rbp-60h]
  __int64 (__fastcall **v14)(); // [rsp+30h] [rbp-58h] BYREF
  int v15; // [rsp+38h] [rbp-50h]
  __int64 (__fastcall ***v16)(); // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  struct TSSession *v18; // [rsp+98h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+A0h] [rbp+18h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v19 = v2;
  try
  {
    v3 = TsSessionFromSessionId(*((_DWORD *)a1 + 41), 1, &v18);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v7 = v18;
      ProcessHeap = GetProcessHeap();
      v13 = HeapAlloc(ProcessHeap, 0, 0x10uLL);
      v13[1] = a1;
      do
        v9 = *((_DWORD *)a1 + 5);
      while ( v9 != 0x7FFFFFFF && v9 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 5, v9 + 1, v9) );
      *v13 = *((_QWORD *)v7 + 5);
      *((_QWORD *)v7 + 5) = v13;
      v10 = *((_DWORD *)a1 + 41);
      v14 = off_1800489B8;
      v15 = v10;
      v16 = &v14;
      v11 = QueueGenericWorkItem(&v14);
      v12 = v11;
      if ( v11 >= 0 )
      {
        if ( v2 )
          LeaveCriticalSection(v2);
        result = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4EF,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)v11);
        if ( v2 )
          LeaveCriticalSection(v2);
        result = v12;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4E5,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v3);
      if ( v2 )
        LeaveCriticalSection(v2);
      result = v4;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4F3,
                           (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                           v5);
  }
  return result;
}
