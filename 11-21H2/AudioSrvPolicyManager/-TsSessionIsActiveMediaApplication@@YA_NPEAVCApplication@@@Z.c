/*
 * XREFs of ?TsSessionIsActiveMediaApplication@@YA_NPEAVCApplication@@@Z @ 0x18002FC64
 * Callers:
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x180020A38 (-OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180021714 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall TsSessionIsActiveMediaApplication(struct CApplication *a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  struct CApplication **i; // rcx
  char v4; // di
  struct TSSession *v6; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+38h] [rbp+10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v7 = v2;
  if ( (int)TsSessionFromSessionId(*((_DWORD *)a1 + 53), 0, &v6) < 0 )
  {
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0;
  }
  else
  {
    for ( i = (struct CApplication **)*((_QWORD *)v6 + 6); ; ++i )
    {
      if ( i == *((struct CApplication ***)v6 + 7) )
      {
        v4 = 0;
        goto LABEL_7;
      }
      if ( *i == a1 )
        break;
    }
    v4 = 1;
LABEL_7:
    if ( v2 )
      LeaveCriticalSection(v2);
    return v4;
  }
}
