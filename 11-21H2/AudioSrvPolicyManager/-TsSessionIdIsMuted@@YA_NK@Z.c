/*
 * XREFs of ?TsSessionIdIsMuted@@YA_NK@Z @ 0x18002F448
 * Callers:
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x180020078 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProc.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180021DB0 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 */

char __fastcall TsSessionIdIsMuted(DWORD SessionId)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  bool v3; // bl
  struct TSSession *v5; // [rsp+38h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+40h] [rbp+18h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v6 = v2;
  if ( (int)TsSessionFromSessionId(SessionId, 1, &v5) < 0 )
  {
    if ( v2 )
      LeaveCriticalSection(v2);
    return 1;
  }
  else
  {
    v3 = *((_DWORD *)v5 + 9) != 0;
    if ( v2 )
      LeaveCriticalSection(v2);
    return v3;
  }
}
