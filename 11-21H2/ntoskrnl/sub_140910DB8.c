/*
 * XREFs of sub_140910DB8 @ 0x140910DB8
 * Callers:
 *     sub_14090C34C @ 0x14090C34C (sub_14090C34C.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_140742C78 @ 0x140742C78 (sub_140742C78.c)
 */

void __fastcall sub_140910DB8(void *a1, int a2)
{
  unsigned int v3; // r9d
  __int64 v4; // rax
  unsigned int v5; // r9d
  __int64 v6; // rax
  REGHANDLE v7; // rcx
  __int16 v8; // [rsp+38h] [rbp-9h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[3]; // [rsp+60h] [rbp+1Fh] BYREF
  int v12; // [rsp+B0h] [rbp+6Fh] BYREF

  v12 = a2;
  EventDescriptor = (EVENT_DESCRIPTOR)xmmword_1400390E0;
  UnicodeString = 0LL;
  if ( EtwEventEnabled(qword_140D3B010, &EventDescriptor) )
  {
    v3 = 0;
    if ( a1 )
    {
      if ( sub_140742C78(a1, &UnicodeString) < 0 )
        return;
      v3 = 1;
      UserData[0].Ptr = (ULONGLONG)UnicodeString.Buffer;
      UserData[0].Size = UnicodeString.Length;
      UserData[0].Reserved = 0;
    }
    v4 = v3;
    v8 = 0;
    v5 = v3 + 1;
    UserData[v4].Ptr = (ULONGLONG)&v8;
    *(_QWORD *)&UserData[v4].Size = 2LL;
    v6 = v5;
    UserData[v6].Ptr = (ULONGLONG)&v12;
    v7 = qword_140D3B010;
    *(_QWORD *)&UserData[v6].Size = 4LL;
    EtwWrite(v7, &EventDescriptor, 0LL, v5 + 1, UserData);
    if ( a1 )
      RtlFreeUnicodeString(&UnicodeString);
  }
}
