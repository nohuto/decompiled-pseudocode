/*
 * XREFs of sub_140994308 @ 0x140994308
 * Callers:
 *     sub_140369100 @ 0x140369100 (sub_140369100.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_140994308(int a1)
{
  REGHANDLE v1; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF
  int v3; // [rsp+60h] [rbp+8h] BYREF

  v3 = a1;
  if ( byte_140C5AE14 )
  {
    v1 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_140038B30) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v3;
      UserData.Size = 4;
      EtwWrite(v1, &stru_140038B30, 0LL, 1u, &UserData);
    }
  }
}
