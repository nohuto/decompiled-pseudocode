/*
 * XREFs of sub_1405DA3B4 @ 0x1405DA3B4
 * Callers:
 *     sub_1403CEDC4 @ 0x1403CEDC4 (sub_1403CEDC4.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_1405DA3B4(__int16 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  REGHANDLE v4; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v7; // [rsp+50h] [rbp-30h]
  int v8; // [rsp+58h] [rbp-28h]
  int v9; // [rsp+5Ch] [rbp-24h]
  __int64 *v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+6Ch] [rbp-14h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+8h] BYREF
  __int16 v14; // [rsp+90h] [rbp+10h] BYREF
  __int64 v15; // [rsp+98h] [rbp+18h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+20h] BYREF

  v3 = &retaddr;
  v16 = a3;
  v15 = a2;
  v14 = a1;
  if ( byte_140C5AE30 )
  {
    v4 = qword_140C1F580;
    LOBYTE(v3) = EtwEventEnabled(qword_140C1F580, &stru_140038A48);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      UserData.Ptr = (ULONGLONG)&v14;
      v8 = 8;
      v7 = &v15;
      v11 = 8;
      v10 = &v16;
      UserData.Size = 2;
      LOBYTE(v3) = EtwWriteEx(v4, &stru_140038A48, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  return (char)v3;
}
