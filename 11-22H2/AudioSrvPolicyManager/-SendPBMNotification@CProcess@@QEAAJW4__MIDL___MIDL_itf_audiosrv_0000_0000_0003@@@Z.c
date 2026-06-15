/*
 * XREFs of ?SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18002A000
 * Callers:
 *     ?SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x180009BE0 (-SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     ?RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@@Z @ 0x1800287A8 (-RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@.c)
 *     ?SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18002A07C (-SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180016790 (__security_check_cookie.c)
 */

__int64 __fastcall CProcess::SendPBMNotification(__int64 a1, int a2)
{
  DWORD CurrentProcessId; // eax
  __int64 v5; // rdx
  _DWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+28h] [rbp-30h]
  int v9; // [rsp+38h] [rbp-20h]

  v7[0] = 32;
  v7[1] = 0x4000;
  CurrentProcessId = GetCurrentProcessId();
  v5 = *(unsigned int *)(a1 + 160);
  v8 = CurrentProcessId;
  v9 = a2;
  return GenerateMediaEvent(v7, v5);
}
