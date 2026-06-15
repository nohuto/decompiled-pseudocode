/*
 * XREFs of ?UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z @ 0x18002A020
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStreamClassPolicyManager::UpdateDuckingGainForId(
        CStreamClassPolicyManager *this,
        DWORD a2,
        const unsigned __int16 *a3,
        float a4,
        bool *a5)
{
  bool *v7; // rsi
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  unsigned int v9; // ebx
  int v10; // eax
  _QWORD *i; // rbx
  _QWORD *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct TSSession *v15; // [rsp+60h] [rbp+18h] BYREF

  v7 = a5;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( a3 )
  {
    v10 = TsSessionFromSessionId(a2, 1, &v15);
    v9 = v10;
    if ( v10 >= 0 )
    {
      for ( i = (_QWORD *)*((_QWORD *)v15 + 133); i; i = (_QWORD *)*i )
      {
        v12 = (_QWORD *)i[1];
        if ( v12[3] >= 8uLL )
          v12 = (_QWORD *)*v12;
        if ( !(unsigned int)_o__wcsicmp(v12, a3) )
        {
          if ( *(float *)(*(_QWORD *)(i[1] + 32LL) + 8LL) == a4 )
          {
            *v7 = 0;
          }
          else
          {
            *v7 = 1;
            *(float *)(*(_QWORD *)(i[1] + 32LL) + 8LL) = a4;
          }
          if ( v8 )
            LeaveCriticalSection(v8);
          return 0;
        }
      }
      v9 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7EE,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)0x80070057LL);
      if ( !v8 )
        return v9;
      goto LABEL_20;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7E9,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v10);
    if ( v8 )
LABEL_20:
      LeaveCriticalSection(v8);
  }
  else
  {
    v9 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7E6,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)0x80070057LL);
    if ( v8 )
      goto LABEL_20;
  }
  return v9;
}
