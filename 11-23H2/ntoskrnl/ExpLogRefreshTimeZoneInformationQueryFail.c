/*
 * XREFs of ExpLogRefreshTimeZoneInformationQueryFail @ 0x1409F80DC
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x14083EE98 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

int ExpLogRefreshTimeZoneInformationQueryFail()
{
  _QWORD *CurrentServerSiloGlobals; // rax
  char v1; // dl
  int v2; // r9d
  _DWORD *v3; // r8
  char v5; // [rsp+30h] [rbp-59h] BYREF
  char v6; // [rsp+31h] [rbp-58h] BYREF
  int v7; // [rsp+34h] [rbp-55h] BYREF
  int v8; // [rsp+38h] [rbp-51h] BYREF
  int v9; // [rsp+3Ch] [rbp-4Dh] BYREF
  int v10; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+50h] [rbp-39h] BYREF
  int *v12; // [rsp+70h] [rbp-19h]
  __int64 v13; // [rsp+78h] [rbp-11h]
  int *v14; // [rsp+80h] [rbp-9h]
  __int64 v15; // [rsp+88h] [rbp-1h]
  int *v16; // [rsp+90h] [rbp+7h]
  __int64 v17; // [rsp+98h] [rbp+Fh]
  int *v18; // [rsp+A0h] [rbp+17h]
  __int64 v19; // [rsp+A8h] [rbp+1Fh]
  char *v20; // [rsp+B0h] [rbp+27h]
  __int64 v21; // [rsp+B8h] [rbp+2Fh]
  char *v22; // [rsp+C0h] [rbp+37h]
  __int64 v23; // [rsp+C8h] [rbp+3Fh]

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v3 = (_DWORD *)CurrentServerSiloGlobals[157];
  if ( (unsigned int)dword_140C06790 > 5 )
  {
    v7 = v2;
    v12 = &v7;
    v8 = v3[250];
    v14 = &v8;
    v9 = v3[109];
    v16 = &v9;
    v10 = v3[108];
    v18 = &v10;
    v5 = ExpRealTimeIsUniversal;
    v20 = &v5;
    v22 = &v6;
    v6 = v1;
    v13 = 4LL;
    v15 = 4LL;
    v17 = 4LL;
    v19 = 4LL;
    v21 = 1LL;
    v23 = 1LL;
    LODWORD(CurrentServerSiloGlobals) = tlgWriteTransfer_EtwWriteTransfer(
                                          (__int64)&dword_140C06790,
                                          (unsigned __int8 *)byte_140035FF9,
                                          0LL,
                                          0LL,
                                          8u,
                                          &v11);
  }
  return (int)CurrentServerSiloGlobals;
}
