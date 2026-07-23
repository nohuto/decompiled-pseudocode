/*
 * XREFs of sub_14055A8B4 @ 0x14055A8B4
 * Callers:
 *     sub_14093BBD8 @ 0x14093BBD8 (sub_14093BBD8.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14055A67C @ 0x14055A67C (sub_14055A67C.c)
 */

char sub_14055A8B4()
{
  char result; // al
  int v1; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  v1 = -1073741801;
  result = sub_14055A67C();
  if ( result )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v1;
    return EtwWriteEx(qword_140D00A98, &stru_140038170, 0LL, 0, 0LL, 0LL, 1u, &UserData);
  }
  return result;
}
