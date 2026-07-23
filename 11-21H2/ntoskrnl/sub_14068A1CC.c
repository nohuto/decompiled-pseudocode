/*
 * XREFs of sub_14068A1CC @ 0x14068A1CC
 * Callers:
 *     sub_14068A060 @ 0x14068A060 (sub_14068A060.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

BOOLEAN __fastcall sub_14068A1CC(__int64 a1, int a2)
{
  REGHANDLE v2; // rbx
  BOOLEAN result; // al
  int v4; // [rsp+30h] [rbp-40h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-28h] BYREF
  int *v7; // [rsp+58h] [rbp-18h]
  int v8; // [rsp+60h] [rbp-10h]
  int v9; // [rsp+64h] [rbp-Ch]
  int v10; // [rsp+88h] [rbp+18h] BYREF

  v10 = a2;
  v2 = qword_140D3B010;
  v4 = 1;
  EventDescriptor = (EVENT_DESCRIPTOR)xmmword_140015BF0;
  result = EtwEventEnabled(qword_140D3B010, &EventDescriptor);
  if ( result )
  {
    UserData.Reserved = 0;
    v9 = 0;
    UserData.Ptr = (ULONGLONG)&v4;
    UserData.Size = 4;
    v7 = &v10;
    v8 = 4;
    return EtwWrite(v2, &EventDescriptor, 0LL, 2u, &UserData);
  }
  return result;
}
