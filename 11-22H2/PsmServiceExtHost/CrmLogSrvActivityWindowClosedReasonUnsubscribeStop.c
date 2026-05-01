/*
 * XREFs of CrmLogSrvActivityWindowClosedReasonUnsubscribeStop @ 0x18006D214
 * Callers:
 *     CrmSrvActivityWindowClosedReasonUnsubscribe @ 0x18006D4DC (CrmSrvActivityWindowClosedReasonUnsubscribe.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

void CrmLogSrvActivityWindowClosedReasonUnsubscribeStop()
{
  __int64 v0; // rcx
  __int64 v1; // r8
  int v2; // r9d
  __int64 v3; // r10
  int v4; // r11d
  int v5; // eax
  int v6; // [rsp+30h] [rbp-59h] BYREF
  int v7; // [rsp+34h] [rbp-55h] BYREF
  int v8; // [rsp+38h] [rbp-51h] BYREF
  __int64 v9; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+50h] [rbp-39h] BYREF
  UUID *v11; // [rsp+70h] [rbp-19h]
  int v12; // [rsp+78h] [rbp-11h]
  int v13; // [rsp+7Ch] [rbp-Dh]
  int *v14; // [rsp+80h] [rbp-9h]
  int v15; // [rsp+88h] [rbp-1h]
  int v16; // [rsp+8Ch] [rbp+3h]
  __int64 v17; // [rsp+90h] [rbp+7h]
  int v18; // [rsp+98h] [rbp+Fh]
  int v19; // [rsp+9Ch] [rbp+13h]
  int *v20; // [rsp+A0h] [rbp+17h]
  int v21; // [rsp+A8h] [rbp+1Fh]
  int v22; // [rsp+ACh] [rbp+23h]
  __int64 *v23; // [rsp+B0h] [rbp+27h]
  int v24; // [rsp+B8h] [rbp+2Fh]
  int v25; // [rsp+BCh] [rbp+33h]
  int *v26; // [rsp+C0h] [rbp+37h]
  int v27; // [rsp+C8h] [rbp+3Fh]
  int v28; // [rsp+CCh] [rbp+43h]

  if ( (unsigned int)dword_1800DB250 > 5 && tlgKeywordOn((__int64)&dword_1800DB250, 1LL) )
  {
    v13 = 0;
    v16 = 0;
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v11 = &Uuid;
    v6 = *(_DWORD *)(v3 + 24);
    v14 = &v6;
    v17 = v3 + 72;
    v5 = *(unsigned __int8 *)(v3 + 73);
    v9 = v1;
    v24 = 8;
    v8 = v2;
    v12 = 16;
    v18 = 4 * v5 + 8;
    v20 = &v7;
    v23 = &v9;
    v26 = &v8;
    v15 = 4;
    v7 = v4;
    v21 = 4;
    v27 = 4;
    tlgWriteTransfer_EventWriteTransfer(v0, (unsigned __int8 *)dword_1800BE4D1, 0LL, 0LL, 8u, &v10);
  }
}
