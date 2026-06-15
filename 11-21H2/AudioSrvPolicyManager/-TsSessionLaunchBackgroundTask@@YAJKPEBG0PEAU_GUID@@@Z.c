/*
 * XREFs of ?TsSessionLaunchBackgroundTask@@YAJKPEBG0PEAU_GUID@@@Z @ 0x18002FD10
 * Callers:
 *     PbmLaunchBackgroundTask @ 0x180028A30 (PbmLaunchBackgroundTask.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000958C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z @ 0x18002BD5C (-DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TsSessionLaunchBackgroundTask(
        int a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        struct _GUID *a4)
{
  const unsigned __int16 *v5; // r15
  int v6; // ebp
  struct _RTL_CRITICAL_SECTION *v7; // rdi
  CApplicationManager *v8; // rbx
  struct _RTL_CRITICAL_SECTION *v9; // r12
  __int64 v10; // rsi
  _QWORD *v11; // r14
  __int64 v12; // r15
  BOOL v13; // ebx
  _QWORD *i; // rdx
  __int64 v15; // rax
  unsigned int v16; // ebx
  int v18; // eax
  struct _GUID v19; // xmm6
  _QWORD *v20; // rcx
  __int64 v21; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v5 = a3;
  v6 = a1;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v8 = g_ApplicationManager;
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v10 = 0LL;
  v11 = (_QWORD *)*((_QWORD *)v8 + 9);
  if ( v11 )
  {
    while ( 1 )
    {
      v12 = v11[2];
      v11 = (_QWORD *)*v11;
      EnterCriticalSection((LPCRITICAL_SECTION)(v12 + 32));
      v13 = 0;
      for ( i = *(_QWORD **)(v12 + 72); i; v13 = a1 == *(_DWORD *)(v15 + 160) )
      {
        if ( v13 )
          break;
        v15 = i[2];
        i = (_QWORD *)*i;
      }
      if ( v12 != -32 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(v12 + 32));
      if ( v13 )
        break;
      if ( !v11 )
        goto LABEL_11;
    }
    v10 = v12;
LABEL_11:
    v5 = a3;
    v6 = a1;
  }
  if ( v9 )
    LeaveCriticalSection(v9);
  if ( !v10 )
  {
    v16 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x572,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)0x8000FFFFLL);
    if ( !v7 )
      return v16;
LABEL_16:
    LeaveCriticalSection(v7);
    return v16;
  }
  v18 = DoLaunchBackgroundTask((struct CApplication *)v10, a2, v5, a4);
  v16 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x575,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v18);
    if ( !v7 )
      return v16;
    goto LABEL_16;
  }
  v19 = *a4;
  EnterCriticalSection((LPCRITICAL_SECTION)(v10 + 32));
  v20 = *(_QWORD **)(v10 + 72);
  while ( v20 )
  {
    v21 = v20[2];
    v20 = (_QWORD *)*v20;
    if ( *(_DWORD *)(v21 + 160) == v6 && !*(_DWORD *)(v21 + 416) )
    {
      *(struct _GUID *)(v21 + 520) = v19;
      break;
    }
  }
  if ( v10 != -32 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(v10 + 32));
  if ( v7 )
    LeaveCriticalSection(v7);
  return 0LL;
}
