/*
 * XREFs of AudioServerGetAmbHeadTracking @ 0x1800F1120
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x1800ED894 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 */

__int64 __fastcall AudioServerGetAmbHeadTracking(char *a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  _BYTE v9[16]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v10[16]; // [rsp+30h] [rbp-38h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v9, a1);
  v6 = (*(__int64 (__fastcall **)(char *, __int64, __int64))(*(_QWORD *)a1 + 144LL))(a1, a2, a3);
  v7 = v6;
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerGetAmbHeadTracking", 4620, v6);
  EtwEventActivityIdControl(4LL, v10);
  return v7;
}
