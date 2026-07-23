/*
 * XREFs of sub_14054BAFC @ 0x14054BAFC
 * Callers:
 *     sub_1403DE4F0 @ 0x1403DE4F0 (sub_1403DE4F0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14054BF10 @ 0x14054BF10 (sub_14054BF10.c)
 */

__int64 sub_14054BAFC()
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-28h] BYREF

  UserData.Reserved = 0;
  UserData.Ptr = (ULONGLONG)&dword_140D06AD4;
  UserData.Size = 4;
  return sub_14054BF10(&stru_14003AEB8, 1u, &UserData);
}
