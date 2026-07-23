/*
 * XREFs of sub_1407F6600 @ 0x1407F6600
 * Callers:
 *     sub_140374F38 @ 0x140374F38 (sub_140374F38.c)
 * Callees:
 *     KeQuerySystemTimePrecise @ 0x1402F08A0 (KeQuerySystemTimePrecise.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1407F6600(int a1)
{
  NTSTATUS result; // eax
  __int64 v2; // [rsp+30h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-28h] BYREF
  int *v4; // [rsp+48h] [rbp-18h]
  int v5; // [rsp+50h] [rbp-10h]
  int v6; // [rsp+54h] [rbp-Ch]
  int v7; // [rsp+70h] [rbp+10h] BYREF

  v7 = a1;
  v2 = 0LL;
  if ( qword_140C15FC0 )
  {
    KeQuerySystemTimePrecise(&v2);
    UserData.Reserved = 0;
    v6 = 0;
    UserData.Ptr = (ULONGLONG)&v2;
    UserData.Size = 8;
    v4 = &v7;
    v5 = 4;
    return EtwWrite(qword_140C15FC0, &stru_14000EDA8, 0LL, 2u, &UserData);
  }
  return result;
}
