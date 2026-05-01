/*
 * XREFs of CrmRegistrationStart @ 0x18002E2D8
 * Callers:
 *     CrmSrvRegister @ 0x180033624 (CrmSrvRegister.c)
 *     CrmRegistrationStartWithActivity @ 0x180048A24 (CrmRegistrationStartWithActivity.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CrmGlobalsRegistrationAdd @ 0x18002E394 (CrmGlobalsRegistrationAdd.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180050222 (memcpy_0.c)
 */

__int64 __fastcall CrmRegistrationStart(__int64 a1, void *a2, int a3)
{
  signed __int64 v5; // rax
  ULONG v6; // eax
  __int64 v7; // rcx
  int v9; // [rsp+30h] [rbp-19h] BYREF
  __int64 v10; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-9h] BYREF
  UUID *v12; // [rsp+60h] [rbp+17h]
  int v13; // [rsp+68h] [rbp+1Fh]
  int v14; // [rsp+6Ch] [rbp+23h]
  __int64 *v15; // [rsp+70h] [rbp+27h]
  int v16; // [rsp+78h] [rbp+2Fh]
  int v17; // [rsp+7Ch] [rbp+33h]
  int *v18; // [rsp+80h] [rbp+37h]
  int v19; // [rsp+88h] [rbp+3Fh]
  int v20; // [rsp+8Ch] [rbp+43h]

  v5 = _InterlockedIncrement64(&qword_1800DD170);
  *(_DWORD *)(a1 + 24) = a3;
  *(_QWORD *)(a1 + 16) = v5;
  if ( a2 )
  {
    v6 = RtlLengthSid(a2);
    memcpy_0((void *)(a1 + 72), a2, v6);
  }
  CrmGlobalsRegistrationAdd(a1);
  if ( (unsigned int)dword_1800DC250 > 5 && tlgKeywordOn((__int64)&dword_1800DC250, 2LL) )
  {
    v14 = 0;
    v17 = 0;
    v9 = 0;
    v20 = 0;
    v12 = &Uuid;
    v10 = *(_QWORD *)(a1 + 16);
    v15 = &v10;
    v18 = &v9;
    v13 = 16;
    v16 = 8;
    v19 = 4;
    tlgWriteTransfer_EventWriteTransfer(v7, (unsigned __int8 *)dword_1800BDDA2, 0LL, 0LL, 5u, &v11);
  }
  return 0LL;
}
