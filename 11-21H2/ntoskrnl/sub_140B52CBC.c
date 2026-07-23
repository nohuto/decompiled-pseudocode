/*
 * XREFs of sub_140B52CBC @ 0x140B52CBC
 * Callers:
 *     sub_140AF3434 @ 0x140AF3434 (sub_140AF3434.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_140B52CBC(int a1, char a2)
{
  REGHANDLE v3; // rbx
  BOOL v4; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  BOOL *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]
  int v9; // [rsp+80h] [rbp+8h] BYREF

  v9 = a1;
  if ( byte_140C5AE14 )
  {
    v3 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_140039478) )
    {
      UserData.Size = 4;
      v7 = 4;
      UserData.Reserved = 0;
      v8 = 0;
      v4 = a2 != 0;
      UserData.Ptr = (ULONGLONG)&v9;
      v6 = &v4;
      EtwWriteEx(v3, &stru_140039478, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
}
