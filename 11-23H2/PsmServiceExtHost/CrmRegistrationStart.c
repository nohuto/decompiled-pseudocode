/*
 * XREFs of CrmRegistrationStart @ 0x180005054
 * Callers:
 *     CrmSrvRegister @ 0x180004F60 (CrmSrvRegister.c)
 *     CrmRegistrationStartWithActivity @ 0x180043820 (CrmRegistrationStartWithActivity.c)
 * Callees:
 *     CrmGlobalsRegistrationAdd @ 0x180005104 (CrmGlobalsRegistrationAdd.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800534A2 (memcpy_0.c)
 */

__int64 __fastcall CrmRegistrationStart(__int64 a1, void *a2, int a3)
{
  signed __int64 v5; // rax
  ULONG v6; // eax
  int v8; // [rsp+30h] [rbp-19h] BYREF
  __int64 v9; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+40h] [rbp-9h] BYREF
  UUID *v11; // [rsp+60h] [rbp+17h]
  int v12; // [rsp+68h] [rbp+1Fh]
  int v13; // [rsp+6Ch] [rbp+23h]
  __int64 *v14; // [rsp+70h] [rbp+27h]
  int v15; // [rsp+78h] [rbp+2Fh]
  int v16; // [rsp+7Ch] [rbp+33h]
  int *v17; // [rsp+80h] [rbp+37h]
  int v18; // [rsp+88h] [rbp+3Fh]
  int v19; // [rsp+8Ch] [rbp+43h]

  v5 = _InterlockedIncrement64(&qword_1800DC1A0);
  *(_DWORD *)(a1 + 24) = a3;
  *(_QWORD *)(a1 + 16) = v5;
  if ( a2 )
  {
    v6 = RtlLengthSid(a2);
    memcpy_0((void *)(a1 + 72), a2, v6);
  }
  CrmGlobalsRegistrationAdd(a1);
  if ( (unsigned int)dword_1800DB250 > 5 && (qword_1800DB260 & 2) != 0 && (qword_1800DB268 & 2) == qword_1800DB268 )
  {
    v13 = 0;
    v16 = 0;
    v8 = 0;
    v19 = 0;
    v11 = &Uuid;
    v9 = *(_QWORD *)(a1 + 16);
    v14 = &v9;
    v17 = &v8;
    v12 = 16;
    v15 = 8;
    v18 = 4;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB250, (int)&dword_1800BECB6, 0, 0, 5u, &v10);
  }
  return 0LL;
}
