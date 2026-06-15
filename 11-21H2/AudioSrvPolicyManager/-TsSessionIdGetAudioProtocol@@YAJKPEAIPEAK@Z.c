/*
 * XREFs of ?TsSessionIdGetAudioProtocol@@YAJKPEAIPEAK@Z @ 0x18002EE4C
 * Callers:
 *     ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x180009FA0 (-HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA-AW4AccessibilityStateChange@@XZ.c)
 *     TS_SessionGetAudioProtocol @ 0x180031A40 (TS_SessionGetAudioProtocol.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TsSessionIdGetAudioProtocol(DWORD SessionId, unsigned int *a2, unsigned int *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  struct TSSession *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct TSSession *v11; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+58h] [rbp+20h]

  *a2 = 0xFFFF;
  EnterCriticalSection(&stru_18005C5D8);
  v12 = &stru_18005C5D8;
  v6 = TsSessionFromSessionId(SessionId, 0, &v11);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = v11;
    *a2 = *((_DWORD *)v11 + 1);
    *a3 = *((_DWORD *)v9 + 2);
    LeaveCriticalSection(&stru_18005C5D8);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46B,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v6);
    LeaveCriticalSection(&stru_18005C5D8);
    return v7;
  }
}
