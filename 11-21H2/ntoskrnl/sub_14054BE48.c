/*
 * XREFs of sub_14054BE48 @ 0x14054BE48
 * Callers:
 *     sub_1403DE4F0 @ 0x1403DE4F0 (sub_1403DE4F0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14054BF10 @ 0x14054BF10 (sub_14054BF10.c)
 */

__int64 __fastcall sub_14054BE48(int a1, int a2, __int64 a3)
{
  const EVENT_DESCRIPTOR *v3; // rcx
  ULONG v4; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-19h] BYREF
  int *v7; // [rsp+30h] [rbp-9h]
  __int64 v8; // [rsp+38h] [rbp-1h]
  __int64 v9; // [rsp+40h] [rbp+7h]
  __int64 v10; // [rsp+48h] [rbp+Fh]
  __int64 v11; // [rsp+50h] [rbp+17h]
  __int64 v12; // [rsp+58h] [rbp+1Fh]
  __int64 v13; // [rsp+60h] [rbp+27h]
  __int64 v14; // [rsp+68h] [rbp+2Fh]
  int v15; // [rsp+A0h] [rbp+67h] BYREF
  int v16; // [rsp+A8h] [rbp+6Fh] BYREF

  v16 = a2;
  v15 = a1;
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = (ULONGLONG)&v15;
  if ( a2 == 60 )
  {
    v8 = 8LL;
    v7 = (int *)(a3 + 8);
    v3 = &stru_14003AE18;
    v10 = 8LL;
    v9 = a3 + 16;
    v4 = 5;
    v12 = 8LL;
    v11 = a3 + 24;
    v13 = a3 + 32;
    v14 = 8LL;
  }
  else
  {
    v8 = 4LL;
    v7 = &v16;
    v3 = (const EVENT_DESCRIPTOR *)qword_14003ADE8;
    v4 = 2;
  }
  return sub_14054BF10(v3, v4, &UserData);
}
