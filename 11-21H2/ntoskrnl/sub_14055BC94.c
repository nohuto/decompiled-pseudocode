/*
 * XREFs of sub_14055BC94 @ 0x14055BC94
 * Callers:
 *     sub_14055A6E4 @ 0x14055A6E4 (sub_14055A6E4.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14055A67C @ 0x14055A67C (sub_14055A67C.c)
 */

char __fastcall sub_14055BC94(int a1)
{
  char result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v3; // [rsp+70h] [rbp+8h] BYREF

  v3 = a1;
  result = sub_14055A67C();
  if ( result )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v3;
    return EtwWriteEx(qword_140D00A98, &stru_140038010, 0LL, 0, 0LL, 0LL, 1u, &UserData);
  }
  return result;
}
