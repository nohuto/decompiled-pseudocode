/*
 * XREFs of PpmEventSoftParkRankListChanged @ 0x140392E74
 * Callers:
 *     PpmParkReportParkedCores @ 0x140350F60 (PpmParkReportParkedCores.c)
 *     PpmParkApplyPolicy @ 0x1403927E0 (PpmParkApplyPolicy.c)
 * Callees:
 *     EtwWrite @ 0x140257960 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
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
