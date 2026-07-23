/*
 * XREFs of sub_140910D10 @ 0x140910D10
 * Callers:
 *     sub_140924D00 @ 0x140924D00 (sub_140924D00.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

BOOLEAN __fastcall sub_140910D10(int a1, int a2)
{
  REGHANDLE v2; // rbx
  BOOLEAN result; // al
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-30h] BYREF
  int *v6; // [rsp+50h] [rbp-20h]
  int v7; // [rsp+58h] [rbp-18h]
  int v8; // [rsp+5Ch] [rbp-14h]
  int v9; // [rsp+80h] [rbp+10h] BYREF
  int v10; // [rsp+88h] [rbp+18h] BYREF

  v10 = a2;
  v9 = a1;
  v2 = qword_140D3B010;
  EventDescriptor = (EVENT_DESCRIPTOR)xmmword_140039B00;
  result = EtwEventEnabled(qword_140D3B010, &EventDescriptor);
  if ( result )
  {
    UserData.Reserved = 0;
    v8 = 0;
    UserData.Ptr = (ULONGLONG)&v9;
    UserData.Size = 4;
    v6 = &v10;
    v7 = 4;
    return EtwWrite(v2, &EventDescriptor, 0LL, 2u, &UserData);
  }
  return result;
}
