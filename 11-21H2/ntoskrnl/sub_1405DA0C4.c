/*
 * XREFs of sub_1405DA0C4 @ 0x1405DA0C4
 * Callers:
 *     sub_1402396F0 @ 0x1402396F0 (sub_1402396F0.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

BOOLEAN __fastcall sub_1405DA0C4(__int64 a1, int a2)
{
  BOOLEAN result; // al
  REGHANDLE v3; // rbx
  int v4; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  int *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]
  int v9; // [rsp+88h] [rbp+10h] BYREF

  v9 = a2;
  result = dword_140D01530;
  v4 = dword_140D01530;
  if ( byte_140C5AE30 )
  {
    v3 = qword_140C1F580;
    result = EtwEventEnabled(qword_140C1F580, &stru_140039060);
    if ( result )
    {
      UserData.Reserved = 0;
      v8 = 0;
      UserData.Ptr = (ULONGLONG)&v4;
      UserData.Size = 4;
      v6 = &v9;
      v7 = 4;
      return EtwWriteEx(v3, &stru_140039060, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
  return result;
}
