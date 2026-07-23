/*
 * XREFs of sub_140224DF0 @ 0x140224DF0
 * Callers:
 *     sub_140224C34 @ 0x140224C34 (sub_140224C34.c)
 *     sub_14081CBF0 @ 0x14081CBF0 (sub_14081CBF0.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_140224DF0(char a1, int a2)
{
  REGHANDLE v3; // rbx
  const EVENT_DESCRIPTOR *v4; // rdx
  const EVENT_DESCRIPTOR *v5; // rdx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+78h] [rbp+10h] BYREF

  v7 = a2;
  if ( byte_140C5AE14 )
  {
    v3 = RegHandle;
    v4 = &stru_14000E940;
    if ( a1 )
      v4 = (const EVENT_DESCRIPTOR *)qword_140039648;
    if ( EtwEventEnabled(RegHandle, v4) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v7;
      UserData.Size = 4;
      v5 = (const EVENT_DESCRIPTOR *)qword_140039648;
      if ( !a1 )
        v5 = &stru_14000E940;
      EtwWriteEx(v3, v5, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}
