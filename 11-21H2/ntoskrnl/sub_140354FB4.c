/*
 * XREFs of sub_140354FB4 @ 0x140354FB4
 * Callers:
 *     sub_140354CBC @ 0x140354CBC (sub_140354CBC.c)
 *     sub_1403B5F40 @ 0x1403B5F40 (sub_1403B5F40.c)
 *     sub_1403B6570 @ 0x1403B6570 (sub_1403B6570.c)
 *     sub_1403D93F4 @ 0x1403D93F4 (sub_1403D93F4.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_140355058 @ 0x140355058 (sub_140355058.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

BOOLEAN __fastcall sub_140354FB4(__int64 a1, char a2, unsigned __int8 a3)
{
  int v3; // esi
  const EVENT_DESCRIPTOR *v4; // rbx
  __int64 v5; // r8
  BOOLEAN result; // al
  REGHANDLE v7; // rdi
  int v8; // [rsp+40h] [rbp-48h] BYREF
  __int64 v9; // [rsp+48h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-38h] BYREF
  int *v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]

  v3 = a3;
  v9 = a1;
  if ( a2 == 1 )
  {
    v4 = &stru_140010E58;
    v5 = 4LL;
  }
  else
  {
    v4 = (const EVENT_DESCRIPTOR *)qword_14000E468;
    v5 = 5LL;
  }
  result = sub_140355058(a1, 0LL, v5);
  if ( byte_140C5AE14 )
  {
    v7 = RegHandle;
    result = EtwEventEnabled(RegHandle, v4);
    if ( result )
    {
      UserData.Reserved = 0;
      v13 = 0;
      UserData.Ptr = (ULONGLONG)&v9;
      v8 = v3;
      v11 = &v8;
      UserData.Size = 8;
      v12 = 4;
      return EtwWriteEx(v7, v4, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
    }
  }
  return result;
}
