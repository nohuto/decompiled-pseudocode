/*
 * XREFs of ?TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z @ 0x18002F0DC
 * Callers:
 *     ?InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z @ 0x18000A100 (-InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z.c)
 *     ?RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z @ 0x18000C880 (-RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TsSessionIdInitAccessibilityAudioSettings(DWORD SessionId, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  struct TSSession *v5; // rax
  struct TSSession *v6; // [rsp+40h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+48h] [rbp+20h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v7 = v4;
  if ( (int)TsSessionFromSessionId(SessionId, 1, &v6) >= 0 )
  {
    v5 = v6;
    *((_DWORD *)v6 + 269) = a2;
    *((_DWORD *)v5 + 268) = 1;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
}
