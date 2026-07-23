/*
 * XREFs of sub_14055AFE8 @ 0x14055AFE8
 * Callers:
 *     sub_140A65D84 @ 0x140A65D84 (sub_140A65D84.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14055A67C @ 0x14055A67C (sub_14055A67C.c)
 */

char sub_14055AFE8()
{
  char result; // al
  __int64 v1; // rcx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-29h] BYREF
  __int64 v3; // [rsp+50h] [rbp-19h]
  __int64 v4; // [rsp+58h] [rbp-11h]
  __int64 v5; // [rsp+60h] [rbp-9h]
  __int64 v6; // [rsp+68h] [rbp-1h]
  __int64 v7; // [rsp+70h] [rbp+7h]
  __int64 v8; // [rsp+78h] [rbp+Fh]
  __int64 v9; // [rsp+80h] [rbp+17h]
  __int64 v10; // [rsp+88h] [rbp+1Fh]
  __int64 v11; // [rsp+90h] [rbp+27h]
  __int64 v12; // [rsp+98h] [rbp+2Fh]
  __int64 v13; // [rsp+A0h] [rbp+37h]
  __int64 v14; // [rsp+A8h] [rbp+3Fh]

  result = sub_14055A67C();
  if ( result )
  {
    *(_QWORD *)&UserData.Size = 8LL;
    UserData.Ptr = v1 + 480;
    v4 = 8LL;
    v3 = v1 + 488;
    v6 = 8LL;
    v5 = v1 + 496;
    v7 = v1 + 512;
    v9 = v1 + 520;
    v11 = v1 + 528;
    v13 = v1 + 536;
    v8 = 8LL;
    v10 = 8LL;
    v12 = 8LL;
    v14 = 8LL;
    return EtwWriteEx(qword_140D00A98, &stru_140039B98, 0LL, 0, 0LL, 0LL, 7u, &UserData);
  }
  return result;
}
