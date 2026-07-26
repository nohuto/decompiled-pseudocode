/*
 * XREFs of ndisLoadNotifyRegister @ 0x1C016357C
 * Callers:
 *     ?ndisReadRegistry@@YAXXZ @ 0x1C0163360 (-ndisReadRegistry@@YAXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00331FC (WPP_RECORDER_SF_d_ea_1C00331FC.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 */

__int64 ndisLoadNotifyRegister()
{
  __int64 result; // rax
  char v1[4]; // [rsp+28h] [rbp-11h]
  _QWORD v2[2]; // [rsp+30h] [rbp-9h] BYREF
  __int64 v3; // [rsp+40h] [rbp+7h] BYREF
  _OWORD v4[3]; // [rsp+48h] [rbp+Fh] BYREF
  int v5; // [rsp+78h] [rbp+3Fh]
  wchar_t v6; // [rsp+7Ch] [rbp+43h]

  v3 = 0LL;
  v5 = *(_DWORD *)L"re";
  v4[0] = *(_OWORD *)L"\\Registry\\Machine\\Software";
  v6 = aRegistryMachin_6[26];
  v2[0] = 3538996LL;
  v4[1] = *(_OWORD *)L"y\\Machine\\Software";
  v2[1] = v4;
  v4[2] = *(_OWORD *)L"e\\Software";
  result = CmRegisterMachineHiveLoadedNotification(ndisHiveLoadCallback, 0LL, v2, &v3);
  if ( (_DWORD)result )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v1 = result;
      return WPP_RECORDER_SF_d(
               *((_QWORD *)WPP_GLOBAL_Control + 8),
               3u,
               0x16u,
               0xAu,
               (struct _GUID *)&WPP_c74afd9d563c345f462daa8dd9b7a4ff_Traceguids,
               *(_DWORD *)v1);
    }
  }
  return result;
}
