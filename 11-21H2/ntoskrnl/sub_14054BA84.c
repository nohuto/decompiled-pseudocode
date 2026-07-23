/*
 * XREFs of sub_14054BA84 @ 0x14054BA84
 * Callers:
 *     sub_1403DE4F0 @ 0x1403DE4F0 (sub_1403DE4F0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14054BF10 @ 0x14054BF10 (sub_14054BF10.c)
 */

__int64 __fastcall sub_14054BA84(__int64 *a1)
{
  __int64 result; // rax
  struct _EVENT_DATA_DESCRIPTOR *p_UserData; // r8
  const EVENT_DESCRIPTOR *v3; // rcx
  ULONG v4; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-58h] BYREF

  result = *a1;
  if ( *a1 == 35 )
  {
    UserData.Reserved = 0;
    UserData.Ptr = (ULONGLONG)(a1 + 1);
    p_UserData = &UserData;
    UserData.Size = 4;
    v3 = &stru_14003AE48;
    v4 = 1;
  }
  else
  {
    if ( result != 38 )
      return result;
    p_UserData = 0LL;
    v3 = (const EVENT_DESCRIPTOR *)qword_14003ADC8;
    v4 = 0;
  }
  return sub_14054BF10(v3, v4, p_UserData);
}
