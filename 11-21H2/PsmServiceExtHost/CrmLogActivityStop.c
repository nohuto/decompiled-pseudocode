/*
 * XREFs of CrmLogActivityStop @ 0x180035CE8
 * Callers:
 *     CrmActivityCleanup @ 0x180035860 (CrmActivityCleanup.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

void __fastcall CrmLogActivityStop(__int64 a1)
{
  __int64 v1; // r9
  int v2; // r10d
  unsigned __int8 *v3; // rdx
  ULONG v4; // [rsp+20h] [rbp-69h]
  int v5; // [rsp+30h] [rbp-59h] BYREF
  int v6; // [rsp+34h] [rbp-55h] BYREF
  int v7; // [rsp+38h] [rbp-51h] BYREF
  __int64 v8; // [rsp+40h] [rbp-49h] BYREF
  __int64 v9; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+50h] [rbp-39h] BYREF
  UUID *v11; // [rsp+70h] [rbp-19h]
  __int64 v12; // [rsp+78h] [rbp-11h]
  __int64 *v13; // [rsp+80h] [rbp-9h]
  __int64 v14; // [rsp+88h] [rbp-1h]
  int *v15; // [rsp+90h] [rbp+7h]
  __int64 v16; // [rsp+98h] [rbp+Fh]
  int *v17; // [rsp+A0h] [rbp+17h]
  __int64 v18; // [rsp+A8h] [rbp+1Fh]
  int *v19; // [rsp+B0h] [rbp+27h]
  __int64 v20; // [rsp+B8h] [rbp+2Fh]
  __int64 *v21; // [rsp+C0h] [rbp+37h]
  __int64 v22; // [rsp+C8h] [rbp+3Fh]

  if ( *(_DWORD *)(a1 + 136) )
  {
    if ( (unsigned int)dword_1800DC250 > 5 && tlgKeywordOn((__int64)&dword_1800DC250, 0x400000000004LL) )
    {
      v16 = 4LL;
      v14 = 8LL;
      v11 = &Uuid;
      v3 = (unsigned __int8 *)&unk_1800BDB5B;
      v9 = *(_QWORD *)(v1 + 48);
      v13 = &v9;
      v5 = *(_DWORD *)(v1 + 60);
      v15 = &v5;
      v17 = &v6;
      v7 = *(_DWORD *)(v1 + 64);
      v19 = &v7;
      v21 = &v8;
      v4 = 8;
      v6 = v2;
      v18 = 4LL;
      v20 = 4LL;
      v8 = 0x2000000LL;
      v22 = 8LL;
LABEL_10:
      v12 = 16LL;
      tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1800DC250, v3, 0LL, 0LL, v4, &v10);
    }
  }
  else if ( (unsigned int)dword_1800DC250 > 5 && (qword_1800DC260 & 4) != 0 && (qword_1800DC268 & 4) == qword_1800DC268 )
  {
    v16 = 4LL;
    v11 = &Uuid;
    v8 = *(_QWORD *)(a1 + 48);
    v13 = &v8;
    v7 = *(_DWORD *)(a1 + 60);
    v15 = &v7;
    v17 = &v6;
    v5 = *(_DWORD *)(a1 + 64);
    v19 = &v5;
    v18 = 4LL;
    v20 = 4LL;
    v3 = (unsigned __int8 *)&dword_1800BDA97;
    v4 = 7;
    v14 = 8LL;
    v6 = 0;
    goto LABEL_10;
  }
}
