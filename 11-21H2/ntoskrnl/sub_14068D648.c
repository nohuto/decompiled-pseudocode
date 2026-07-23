/*
 * XREFs of sub_14068D648 @ 0x14068D648
 * Callers:
 *     sub_14068C238 @ 0x14068C238 (sub_14068C238.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_140742C78 @ 0x140742C78 (sub_140742C78.c)
 */

void __fastcall sub_14068D648(__int64 a1, int a2)
{
  __int16 v3; // [rsp+38h] [rbp-9h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp+1Fh] BYREF
  __int16 *v7; // [rsp+70h] [rbp+2Fh]
  __int64 v8; // [rsp+78h] [rbp+37h]
  int *v9; // [rsp+80h] [rbp+3Fh]
  __int64 v10; // [rsp+88h] [rbp+47h]
  int v11; // [rsp+B0h] [rbp+6Fh] BYREF

  v11 = a2;
  EventDescriptor = (EVENT_DESCRIPTOR)xmmword_140015C00;
  *(_DWORD *)(&UnicodeString.MaximumLength + 1) = 0;
  if ( EtwEventEnabled(qword_140D3B010, &EventDescriptor) )
  {
    UnicodeString.Buffer = 0LL;
    *(_DWORD *)&UnicodeString.Length = 0;
    if ( (int)sub_140742C78(a1, &UnicodeString) >= 0 )
    {
      UserData.Ptr = (ULONGLONG)UnicodeString.Buffer;
      UserData.Size = UnicodeString.Length;
      v7 = &v3;
      v9 = &v11;
      UserData.Reserved = 0;
      v3 = 0;
      v8 = 2LL;
      v10 = 4LL;
      EtwWrite(qword_140D3B010, &EventDescriptor, 0LL, 3u, &UserData);
      RtlFreeUnicodeString(&UnicodeString);
    }
  }
}
