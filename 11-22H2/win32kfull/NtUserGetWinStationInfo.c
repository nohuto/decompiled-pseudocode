/*
 * XREFs of NtUserGetWinStationInfo @ 0x1C01D44F0
 * Callers:
 *     <none>
 * Callees:
 *     _GetWinStationInfo @ 0x1C0203738 (_GetWinStationInfo.c)
 */

__int64 __fastcall NtUserGetWinStationInfo(__int64 a1)
{
  __int64 WinStationInfo; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  EnterCrit(0LL, 0LL);
  WinStationInfo = (int)GetWinStationInfo(a1);
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return WinStationInfo;
}
