/*
 * XREFs of PpmEventSoftParkRankListChanged @ 0x140392C94
 * Callers:
 *     PpmParkReportParkedCores @ 0x140350DC0 (PpmParkReportParkedCores.c)
 *     PpmParkApplyPolicy @ 0x140392600 (PpmParkApplyPolicy.c)
 * Callees:
 *     EtwWrite @ 0x1402578A0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140258420 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 */

void PpmEventSoftParkRankListChanged()
{
  REGHANDLE v0; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  void *v2; // [rsp+40h] [rbp-28h]
  int v3; // [rsp+48h] [rbp-20h]
  int v4; // [rsp+4Ch] [rbp-1Ch]

  if ( PpmEtwRegistered )
  {
    v0 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_SOFT_PARKING_RANK_LIST_CHANGED) )
    {
      UserData.Reserved = 0;
      v4 = 0;
      UserData.Ptr = (ULONGLONG)&KeMaximumProcessors;
      v2 = PpmParkNewSoftParkRankList;
      v3 = 4 * KeMaximumProcessors;
      UserData.Size = 4;
      EtwWrite(v0, &PPM_ETW_SOFT_PARKING_RANK_LIST_CHANGED, 0LL, 2u, &UserData);
    }
  }
}
