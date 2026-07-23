/*
 * XREFs of sub_1403BB6AC @ 0x1403BB6AC
 * Callers:
 *     sub_140A55270 @ 0x140A55270 (sub_140A55270.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

BOOLEAN sub_1403BB6AC()
{
  REGHANDLE v0; // rbx
  BOOLEAN result; // al
  REGHANDLE v2; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF
  __int64 v4; // [rsp+50h] [rbp+17h]
  int v5; // [rsp+58h] [rbp+1Fh]
  int v6; // [rsp+5Ch] [rbp+23h]
  __int64 v7; // [rsp+60h] [rbp+27h]
  int v8; // [rsp+68h] [rbp+2Fh]
  int v9; // [rsp+6Ch] [rbp+33h]
  __int64 v10; // [rsp+70h] [rbp+37h]
  int v11; // [rsp+78h] [rbp+3Fh]
  int v12; // [rsp+7Ch] [rbp+43h]

  v0 = qword_140C4C680;
  result = EtwEventEnabled(qword_140C4C680, &stru_14000EAD0);
  if ( result )
  {
    EtwWriteEx(v0, &stru_14000EAD0, 0LL, 0, 0LL, 0LL, 0, 0LL);
    v2 = qword_140C4C680;
    result = EtwEventEnabled(qword_140C4C680, &stru_140011960);
    if ( result )
    {
      if ( byte_140C4C688 )
      {
        if ( qword_140D014D8 )
        {
          UserData.Reserved = 0;
          v6 = 0;
          v9 = 0;
          v12 = 0;
          v4 = qword_140D014D8 + 8;
          v7 = qword_140D014D8 + 16;
          v10 = qword_140D014D8 + 24;
          UserData.Ptr = qword_140D014D8;
          UserData.Size = 8;
          v5 = 8;
          v8 = 4;
          v11 = 8;
          return EtwWriteEx(v2, &stru_140011960, 0LL, 0, 0LL, 0LL, 4u, &UserData);
        }
      }
    }
  }
  return result;
}
