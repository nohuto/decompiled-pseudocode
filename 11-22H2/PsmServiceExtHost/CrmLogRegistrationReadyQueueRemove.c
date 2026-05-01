/*
 * XREFs of CrmLogRegistrationReadyQueueRemove @ 0x18002D5C4
 * Callers:
 *     CrmRegistrationReadyQueueRemove @ 0x1800138C0 (CrmRegistrationReadyQueueRemove.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

int __fastcall CrmLogRegistrationReadyQueueRemove(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+40h] [rbp-58h] BYREF
  UUID *v5; // [rsp+60h] [rbp-38h]
  int v6; // [rsp+68h] [rbp-30h]
  int v7; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v8; // [rsp+70h] [rbp-28h]
  int v9; // [rsp+78h] [rbp-20h]
  int v10; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_1800DB250 > 5 && (qword_1800DB260 & 1) != 0 )
  {
    v1 = qword_1800DB268 & 1;
    if ( v1 == qword_1800DB268 )
    {
      v7 = 0;
      v10 = 0;
      v5 = &Uuid;
      v3 = a1;
      v8 = &v3;
      v6 = 16;
      v9 = 8;
      LODWORD(v1) = tlgWriteTransfer_EventWriteTransfer(
                      (__int64)&dword_1800DB250,
                      (unsigned __int8 *)dword_1800BE548,
                      0LL,
                      0LL,
                      4u,
                      &v4);
    }
  }
  return v1;
}
