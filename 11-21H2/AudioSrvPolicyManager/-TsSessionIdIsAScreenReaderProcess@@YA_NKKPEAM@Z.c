/*
 * XREFs of ?TsSessionIdIsAScreenReaderProcess@@YA_NKKPEAM@Z @ 0x18002F164
 * Callers:
 *     ?CanBeRemoved@CProcess@@QEAAHXZ @ 0x180015CB0 (-CanBeRemoved@CProcess@@QEAAHXZ.c)
 *     ?GetScreenReaderPolicyVolume@CProcess@@UEAAMXZ @ 0x180017820 (-GetScreenReaderPolicyVolume@CProcess@@UEAAMXZ.c)
 *     ?IsScreenReaderProcess@CProcess@@UEAA_NXZ @ 0x180018740 (-IsScreenReaderProcess@CProcess@@UEAA_NXZ.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180021714 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall TsSessionIdIsAScreenReaderProcess(DWORD SessionId, int a2, float *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  _DWORD *v7; // rcx
  _DWORD *i; // rdx
  bool v9; // bl
  struct TSSession *v11; // [rsp+58h] [rbp+20h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( (int)TsSessionFromSessionId(SessionId, 1, &v11) < 0 )
  {
    if ( v6 )
      LeaveCriticalSection(v6);
    return 0;
  }
  else
  {
    v7 = (_DWORD *)*((_QWORD *)v11 + 124);
    for ( i = (_DWORD *)*((_QWORD *)v11 + 123); i != v7 && *i != a2; ++i )
      ;
    if ( a3 )
      *a3 = *((float *)v11 + 252);
    v9 = i != v7;
    if ( v6 )
      LeaveCriticalSection(v6);
    return v9;
  }
}
