/*
 * XREFs of ProcLibTracePepPerfDomain @ 0x1C00215A0
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C0020C40 (ProcLibTraceControlCallback.c)
 *     PepQueryPerfDomainInfo @ 0x1C0039FAC (PepQueryPerfDomainInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002C70 (__security_check_cookie.c)
 */

BOOLEAN __fastcall ProcLibTracePepPerfDomain(unsigned __int8 *a1, char a2)
{
  const EVENT_DESCRIPTOR *v3; // rbx
  BOOLEAN result; // al
  int v5; // eax
  int v6; // [rsp+30h] [rbp-39h] BYREF
  int v7; // [rsp+34h] [rbp-35h] BYREF
  int v8; // [rsp+38h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-29h] BYREF
  unsigned __int8 *v10; // [rsp+50h] [rbp-19h]
  int v11; // [rsp+58h] [rbp-11h]
  int v12; // [rsp+5Ch] [rbp-Dh]
  int *v13; // [rsp+60h] [rbp-9h]
  int v14; // [rsp+68h] [rbp-1h]
  int v15; // [rsp+6Ch] [rbp+3h]
  int *v16; // [rsp+70h] [rbp+7h]
  int v17; // [rsp+78h] [rbp+Fh]
  int v18; // [rsp+7Ch] [rbp+13h]
  unsigned __int8 *v19; // [rsp+80h] [rbp+17h]
  int v20; // [rsp+88h] [rbp+1Fh]
  int v21; // [rsp+8Ch] [rbp+23h]
  unsigned __int8 *v22; // [rsp+90h] [rbp+27h]
  int v23; // [rsp+98h] [rbp+2Fh]
  int v24; // [rsp+9Ch] [rbp+33h]
  int *v25; // [rsp+A0h] [rbp+37h]
  int v26; // [rsp+A8h] [rbp+3Fh]
  int v27; // [rsp+ACh] [rbp+43h]

  v3 = (const EVENT_DESCRIPTOR *)&PPM_ETW_PEP_PERF_DOMAIN_INFO;
  if ( a2 )
    v3 = &PPM_ETW_PEP_PERF_DOMAIN_INFO_RUNDOWN;
  result = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v3);
  if ( result )
  {
    v5 = a1[57];
    UserData.Reserved = 0;
    v12 = 0;
    v15 = 0;
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v6 = v5;
    v7 = a1[58];
    v8 = a1[59];
    UserData.Ptr = (unsigned __int64)(a1 + 36);
    v10 = a1 + 56;
    v13 = &v6;
    v16 = &v7;
    v19 = a1 + 60;
    v22 = a1 + 64;
    v25 = &v8;
    UserData.Size = 4;
    v14 = 4;
    v17 = 4;
    v20 = 4;
    v23 = 4;
    v26 = 4;
    v11 = 1;
    return EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v3, 0LL, (ULONG)7, &UserData);
  }
  return result;
}
