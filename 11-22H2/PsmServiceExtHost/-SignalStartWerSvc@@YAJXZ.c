/*
 * XREFs of ?SignalStartWerSvc@@YAJXZ @ 0x18008F900
 * Callers:
 *     ?WersvcSendMessage@@YAJPEB_WPEAU_WERSVC_MSG@@1K@Z @ 0x180052EFC (-WersvcSendMessage@@YAJPEB_WPEAU_WERSVC_MSG@@1K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

__int64 SignalStartWerSvc(void)
{
  unsigned int v0; // ebx
  int v1; // edi
  int v3; // [rsp+40h] [rbp-28h] BYREF
  __int128 v4; // [rsp+48h] [rbp-20h] BYREF

  v0 = 0;
  v1 = 0;
  if ( (int)ZwQueryWnfStateNameInformation(&WNF_WER_SERVICE_START, 1LL, 0LL, &v3, 4) >= 0 && v3 )
    v1 = (int)ZwUpdateWnfStateData(&WNF_WER_SERVICE_START, 0LL, 0LL, 0LL, 0LL, 0, 0) >= 0;
  v4 = 0LL;
  if ( !(unsigned int)EtwEventWriteNoRegistration(&`SignalStartWerSvc'::`2'::WerSvcTriggerGuid, &v4, 0LL, 0LL) )
    ++v1;
  if ( !v1 )
    return (unsigned int)-1073741696;
  return v0;
}
