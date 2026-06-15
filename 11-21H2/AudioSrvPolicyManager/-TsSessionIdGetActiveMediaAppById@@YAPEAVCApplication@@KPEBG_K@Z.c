/*
 * XREFs of ?TsSessionIdGetActiveMediaAppById@@YAPEAVCApplication@@KPEBG_K@Z @ 0x18002ED8C
 * Callers:
 *     ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x1800205A4 (-HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
struct CApplication *__fastcall TsSessionIdGetActiveMediaAppById(DWORD SessionId, struct TSSession *a2, __int64 a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  __int64 *i; // rcx
  __int64 v8; // rbx
  struct TSSession *v9; // [rsp+38h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+48h] [rbp+20h]

  v9 = a2;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v10 = v5;
  if ( (int)TsSessionFromSessionId(SessionId, 0, &v9) >= 0 )
  {
    for ( i = (__int64 *)*((_QWORD *)v9 + 6); ; ++i )
    {
      if ( i == *((__int64 **)v9 + 7) )
      {
        v8 = 0LL;
        goto LABEL_10;
      }
      if ( *(_QWORD *)(*i + 696) == a3 )
        break;
    }
    v8 = *i;
LABEL_10:
    if ( v5 )
      LeaveCriticalSection(v5);
    return (struct CApplication *)v8;
  }
  else
  {
    if ( v5 )
      LeaveCriticalSection(v5);
    return 0LL;
  }
}
