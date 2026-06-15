/*
 * XREFs of ?TsSessionIdGetAccessibilityAudioMonoMixState@@YA_NK@Z @ 0x18002ECF0
 * Callers:
 *     ?GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ @ 0x1800098D0 (-GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ.c)
 *     ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x180009FA0 (-HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA-AW4AccessibilityStateChange@@XZ.c)
 *     ?RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z @ 0x18000C880 (-RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 */

bool __fastcall TsSessionIdGetAccessibilityAudioMonoMixState(DWORD SessionId)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  bool v3; // bl
  struct TSSession *v5; // [rsp+38h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+40h] [rbp+18h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v6 = v2;
  if ( (int)TsSessionFromSessionId(SessionId, 1, &v5) >= 0 && *((_DWORD *)v5 + 268) )
  {
    v3 = *((_DWORD *)v5 + 269) != 0;
    if ( v2 )
      LeaveCriticalSection(v2);
    return v3;
  }
  else
  {
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0;
  }
}
