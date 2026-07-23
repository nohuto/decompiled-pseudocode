/*
 * XREFs of sub_14067D9F4 @ 0x14067D9F4
 * Callers:
 *     sub_14067CE4C @ 0x14067CE4C (sub_14067CE4C.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

BOOLEAN __fastcall sub_14067D9F4(unsigned __int16 *a1, int a2)
{
  REGHANDLE v2; // rbx
  BOOLEAN result; // al
  __int16 v5; // [rsp+30h] [rbp-50h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int16 *v8; // [rsp+58h] [rbp-28h]
  __int64 v9; // [rsp+60h] [rbp-20h]
  int *v10; // [rsp+68h] [rbp-18h]
  __int64 v11; // [rsp+70h] [rbp-10h]
  int v12; // [rsp+98h] [rbp+18h] BYREF

  v12 = a2;
  v2 = qword_140D3B010;
  EventDescriptor = (EVENT_DESCRIPTOR)xmmword_140015BB0;
  result = EtwEventEnabled(qword_140D3B010, &EventDescriptor);
  if ( result )
  {
    UserData.Ptr = *((_QWORD *)a1 + 1);
    UserData.Size = *a1;
    v8 = &v5;
    v10 = &v12;
    v5 = 0;
    UserData.Reserved = 0;
    v9 = 2LL;
    v11 = 4LL;
    return EtwWrite(v2, &EventDescriptor, 0LL, 3u, &UserData);
  }
  return result;
}
