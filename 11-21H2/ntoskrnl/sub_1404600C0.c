/*
 * XREFs of sub_1404600C0 @ 0x1404600C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14045FEE2 @ 0x14045FEE2 (sub_14045FEE2.c)
 */

void __fastcall sub_1404600C0(unsigned __int16 a1, ULONGLONG a2, ULONG a3)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  UserData.Reserved = 0;
  UserData.Ptr = a2;
  UserData.Size = a3;
  if ( qword_140D05008 != -4540 && (*(_DWORD *)(qword_140D05008 + 4540) & 0x10000) != 0 )
    sub_14045FEE2(&UserData, a1);
  sub_14035EDE4((__int64)&UserData, 1u, 0x10000u, a1, 0x401802u);
}
