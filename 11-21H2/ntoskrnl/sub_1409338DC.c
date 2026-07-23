/*
 * XREFs of sub_1409338DC @ 0x1409338DC
 * Callers:
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140554630 @ 0x140554630 (sub_140554630.c)
 */

char sub_1409338DC()
{
  char result; // al
  char v1; // [rsp+30h] [rbp-19h] BYREF
  __int64 v2; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+50h] [rbp+7h] BYREF
  __int64 *v5; // [rsp+70h] [rbp+27h]
  int v6; // [rsp+78h] [rbp+2Fh]
  int v7; // [rsp+7Ch] [rbp+33h]
  char *v8; // [rsp+80h] [rbp+37h]
  int v9; // [rsp+88h] [rbp+3Fh]
  int v10; // [rsp+8Ch] [rbp+43h]

  result = sub_140554630();
  if ( result )
  {
    UserData.Reserved = 0;
    UserData.Ptr = (ULONGLONG)&byte_140C0C6B9;
    UserData.Size = 4;
    result = EtwWrite(qword_140D00A78, &stru_140037E78, 0LL, 1u, &UserData);
  }
  if ( (unsigned int)dword_140C064A8 > 5 )
  {
    result = sub_1402A2000((__int64)&dword_140C064A8, 0x400000000000LL);
    if ( result )
    {
      v7 = 0;
      v10 = 0;
      v5 = &v2;
      v1 = byte_140C0C6B9;
      v2 = 0x1000000LL;
      v8 = &v1;
      v6 = 8;
      v9 = 1;
      return sub_14020A9C4((__int64)&dword_140C064A8, (unsigned __int8 *)&dword_14002ABDC, 0LL, 0LL, 4u, &v4);
    }
  }
  return result;
}
