/*
 * XREFs of sub_14055BE90 @ 0x14055BE90
 * Callers:
 *     sub_140A666B0 @ 0x140A666B0 (sub_140A666B0.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14055A67C @ 0x14055A67C (sub_14055A67C.c)
 */

char __fastcall sub_14055BE90(int a1)
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
    return EtwWriteEx(qword_140D00A98, &stru_1400382B8, 0LL, 0, 0LL, 0LL, 1u, &UserData);
  }
  return result;
}
