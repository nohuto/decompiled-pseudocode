/*
 * XREFs of sub_140B2FF24 @ 0x140B2FF24
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_140B2FF24()
{
  REGHANDLE v0; // rbx
  int v1; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  if ( byte_140C5AE15 )
  {
    v0 = qword_140C21FB8;
    if ( EtwEventEnabled(qword_140C21FB8, &stru_140013428) )
    {
      UserData.Reserved = 0;
      v1 = (unsigned __int8)byte_140C5AC3C;
      UserData.Size = 4;
      UserData.Ptr = (ULONGLONG)&v1;
      EtwWriteEx(v0, &stru_140013428, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}
