/*
 * XREFs of sub_1405DB010 @ 0x1405DB010
 * Callers:
 *     sub_140864680 @ 0x140864680 (sub_140864680.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_1405DB010()
{
  REGHANDLE v0; // rbx
  int v1; // [rsp+40h] [rbp-38h] BYREF
  int v2; // [rsp+44h] [rbp-34h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  int *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]

  if ( byte_140C5AE30 )
  {
    v0 = qword_140C1F580;
    if ( EtwEventEnabled(qword_140C1F580, &stru_1400378B8) )
    {
      UserData.Reserved = 0;
      v6 = 0;
      v1 = dword_140D01530;
      v2 = dword_140D048E0;
      UserData.Ptr = (ULONGLONG)&v1;
      v4 = &v2;
      UserData.Size = 4;
      v5 = 4;
      EtwWriteEx(v0, &stru_1400378B8, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
}
