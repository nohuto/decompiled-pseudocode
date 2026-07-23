/*
 * XREFs of sub_140369AC4 @ 0x140369AC4
 * Callers:
 *     sub_1407EE90C @ 0x1407EE90C (sub_1407EE90C.c)
 *     sub_140994BB0 @ 0x140994BB0 (sub_140994BB0.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_140369AC4(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rax
  const EVENT_DESCRIPTOR *v2; // rbx
  REGHANDLE v3; // rdi
  int v4; // eax
  __int64 v6; // [rsp+40h] [rbp+7h] BYREF
  int v7; // [rsp+48h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+17h] BYREF
  __int64 *v9; // [rsp+60h] [rbp+27h]
  int v10; // [rsp+68h] [rbp+2Fh]
  int v11; // [rsp+6Ch] [rbp+33h]
  char *v12; // [rsp+70h] [rbp+37h]
  int v13; // [rsp+78h] [rbp+3Fh]
  int v14; // [rsp+7Ch] [rbp+43h]

  v1 = &stru_140037290;
  v2 = (const EVENT_DESCRIPTOR *)qword_1400110C8;
  if ( a1 )
    v2 = &stru_140037290;
  if ( byte_140C5AE17 )
  {
    v3 = qword_140C21D58;
    LOBYTE(v1) = EtwEventEnabled(qword_140C21D58, v2);
    if ( (_BYTE)v1 )
    {
      if ( dword_140C229B4 )
      {
        v6 = xmmword_140C229E0;
        v4 = 1;
      }
      else
      {
        v6 = 0LL;
        v4 = 0;
      }
      UserData.Reserved = 0;
      v11 = 0;
      v14 = 0;
      v7 = v4;
      UserData.Size = 4;
      UserData.Ptr = (ULONGLONG)&v7;
      v9 = &v6;
      v12 = (char *)&v6 + 4;
      v10 = 4;
      v13 = 4;
      LOBYTE(v1) = EtwWriteEx(v3, v2, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  return (char)v1;
}
