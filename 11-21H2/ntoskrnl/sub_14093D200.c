/*
 * XREFs of sub_14093D200 @ 0x14093D200
 * Callers:
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14055A67C @ 0x14055A67C (sub_14055A67C.c)
 */

char sub_14093D200()
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

  result = sub_14055A67C();
  if ( result )
  {
    UserData.Reserved = 0;
    UserData.Ptr = (ULONGLONG)&byte_140C0C6B8;
    UserData.Size = 4;
    result = EtwWrite(qword_140D00A98, &stru_140039920, 0LL, 1u, &UserData);
  }
  if ( (unsigned int)dword_140C064E0 > 5 )
  {
    result = sub_1402A2000((__int64)&dword_140C064E0, 0x400000000000LL);
    if ( result )
    {
      v7 = 0;
      v10 = 0;
      v5 = &v2;
      v1 = byte_140C0C6B8;
      v2 = 0x1000000LL;
      v8 = &v1;
      v6 = 8;
      v9 = 1;
      return sub_14020A9C4((__int64)&dword_140C064E0, (unsigned __int8 *)byte_14002ADB1, 0LL, 0LL, 4u, &v4);
    }
  }
  return result;
}
