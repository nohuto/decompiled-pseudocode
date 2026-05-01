/*
 * XREFs of CrmSrvUnregister @ 0x180012074
 * Callers:
 *     CrmRpcSrvUnregister @ 0x180012050 (CrmRpcSrvUnregister.c)
 *     CRM_REGISTRATION_CONTEXT_HANDLE_TYPE_rundown @ 0x1800A1580 (CRM_REGISTRATION_CONTEXT_HANDLE_TYPE_rundown.c)
 * Callees:
 *     CrmRegistrationCleanup @ 0x180012170 (CrmRegistrationCleanup.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

BOOLEAN __fastcall CrmSrvUnregister(char *P)
{
  int v2; // eax
  __int128 v3; // xmm1
  int v4; // edi
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  BOOLEAN result; // al
  int v8; // [rsp+38h] [rbp-69h] BYREF
  _OWORD v9[4]; // [rsp+48h] [rbp-59h] BYREF
  int v10; // [rsp+88h] [rbp-19h]
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+98h] [rbp-9h] BYREF
  UUID *v12; // [rsp+B8h] [rbp+17h]
  int v13; // [rsp+C0h] [rbp+1Fh]
  int v14; // [rsp+C4h] [rbp+23h]
  int *v15; // [rsp+C8h] [rbp+27h]
  int v16; // [rsp+D0h] [rbp+2Fh]
  int v17; // [rsp+D4h] [rbp+33h]
  _OWORD *v18; // [rsp+D8h] [rbp+37h]
  int v19; // [rsp+E0h] [rbp+3Fh]
  int v20; // [rsp+E4h] [rbp+43h]

  if ( (unsigned int)dword_1800DB250 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1800DB250, 1LL) )
  {
    v14 = 0;
    v12 = &Uuid;
    v13 = 16;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB250, (int)&dword_1800BE0B2, 0, 0, 3u, &v11);
  }
  v2 = *((_DWORD *)P + 34);
  v3 = *(_OWORD *)(P + 88);
  v4 = *((_DWORD *)P + 6);
  v9[0] = *(_OWORD *)(P + 72);
  v5 = *(_OWORD *)(P + 104);
  v10 = v2;
  v9[1] = v3;
  v6 = *(_OWORD *)(P + 120);
  v9[2] = v5;
  v9[3] = v6;
  CrmRegistrationCleanup(P, 1LL);
  result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  if ( (unsigned int)dword_1800DB250 > 5 )
  {
    result = tlgKeywordOn(&dword_1800DB250, 1LL);
    if ( result )
    {
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v15 = &v8;
      v12 = &Uuid;
      v18 = v9;
      v13 = 16;
      v8 = v4;
      v16 = 4;
      v19 = 4 * BYTE1(v9[0]) + 8;
      return tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB250, (int)&dword_1800BE281, 0, 0, 5u, &v11);
    }
  }
  return result;
}
