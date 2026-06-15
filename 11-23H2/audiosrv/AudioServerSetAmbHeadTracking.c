/*
 * XREFs of AudioServerSetAmbHeadTracking @ 0x180124DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18001298C (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ?SetStreamAmbHeadTracking@CVADServer@@UEAAJ_KH@Z @ 0x18011FE70 (-SetStreamAmbHeadTracking@CVADServer@@UEAAJ_KH@Z.c)
 */

__int64 __fastcall AudioServerSetAmbHeadTracking(CVADServer *this, __int64 a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  _BYTE v9[16]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v10[16]; // [rsp+30h] [rbp-38h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v9, (char *)this);
  v6 = CVADServer::SetStreamAmbHeadTracking(this, a2, a3);
  v7 = v6;
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerSetAmbHeadTracking", 4517, v6);
  EtwEventActivityIdControl(4LL, v10);
  return v7;
}
