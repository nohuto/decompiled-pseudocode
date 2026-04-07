/*
 * XREFs of McTemplateU0j_EtwEventWriteTransfer @ 0x180003FB0
 * Callers:
 *     ?_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ @ 0x180003EEC (-_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ.c)
 *     ?_OnTimerCallback@CAnimationClock@@AEAAXXZ @ 0x18000576C (-_OnTimerCallback@CAnimationClock@@AEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180025580 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0j_EtwEventWriteTransfer(__int64 a1, int a2, __int64 a3)
{
  _BYTE v4[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]

  v7 = 0;
  v5 = a3;
  v6 = 16;
  return McGenEventWrite_EtwEventWriteTransfer(
           (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
           a2,
           a3,
           2,
           (__int64)v4);
}
