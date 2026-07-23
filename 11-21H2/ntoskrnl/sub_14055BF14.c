/*
 * XREFs of sub_14055BF14 @ 0x14055BF14
 * Callers:
 *     sub_140A659E0 @ 0x140A659E0 (sub_140A659E0.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14055A67C @ 0x14055A67C (sub_14055A67C.c)
 */

char __fastcall sub_14055BF14(__int64 a1, __int64 a2, int a3)
{
  char result; // al
  ULONG v4; // edx
  ULONGLONG v5; // rcx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  int *v7; // [rsp+50h] [rbp-28h]
  __int64 v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+90h] [rbp+18h] BYREF

  v9 = a3;
  result = sub_14055A67C();
  if ( result )
  {
    UserData.Ptr = v5;
    v7 = &v9;
    UserData.Size = v4;
    UserData.Reserved = 0;
    v8 = 4LL;
    return EtwWriteEx(qword_140D00A98, &stru_140039A20, 0LL, 0, 0LL, 0LL, 2u, &UserData);
  }
  return result;
}
