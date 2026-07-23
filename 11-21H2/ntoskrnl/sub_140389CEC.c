/*
 * XREFs of sub_140389CEC @ 0x140389CEC
 * Callers:
 *     sub_140224980 @ 0x140224980 (sub_140224980.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_140389CEC(__int64 a1)
{
  REGHANDLE v1; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  __int64 v3; // [rsp+70h] [rbp+8h] BYREF

  v3 = a1;
  if ( byte_140C5AE30 )
  {
    v1 = qword_140C1F580;
    if ( EtwEventEnabled(qword_140C1F580, &stru_14000EE18) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v3;
      UserData.Size = 8;
      EtwWriteEx(v1, &stru_14000EE18, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}
