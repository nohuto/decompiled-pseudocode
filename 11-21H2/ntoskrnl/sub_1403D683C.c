/*
 * XREFs of sub_1403D683C @ 0x1403D683C
 * Callers:
 *     sub_140852F10 @ 0x140852F10 (sub_140852F10.c)
 *     sub_1409B1D40 @ 0x1409B1D40 (sub_1409B1D40.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140882F8A @ 0x140882F8A (sub_140882F8A.c)
 *     sub_1409E2E78 @ 0x1409E2E78 (sub_1409E2E78.c)
 */

BOOLEAN __fastcall sub_1403D683C(int a1, __int64 a2, unsigned __int16 *a3, int a4)
{
  __int64 *v7; // rbx
  REGHANDLE v8; // rsi
  BOOLEAN result; // al
  unsigned int v10; // edx
  ULONGLONG v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // edx
  __int64 v14; // rax
  int v15; // [rsp+48h] [rbp-39h] BYREF
  __int128 v16; // [rsp+50h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-19h] BYREF
  int *v18; // [rsp+78h] [rbp-9h]
  int v19; // [rsp+80h] [rbp-1h]
  int v20; // [rsp+84h] [rbp+3h]
  int *v21; // [rsp+88h] [rbp+7h]
  int v22; // [rsp+90h] [rbp+Fh]
  int v23; // [rsp+94h] [rbp+13h]
  int v24; // [rsp+100h] [rbp+7Fh] BYREF

  v24 = a4;
  v15 = 0;
  v16 = 0LL;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v7 = (__int64 *)&stru_140012E00;
    }
    else if ( a1 == 2 )
    {
      v7 = qword_1400397F0;
    }
    else
    {
      v7 = qword_140038450;
    }
  }
  else
  {
    v7 = qword_140012DF0;
  }
  v8 = qword_140C15FF8;
  result = EtwEventEnabled(qword_140C15FF8, (PCEVENT_DESCRIPTOR)v7);
  if ( result )
  {
    sub_140882F8A(&v16, a2);
    UserData.Reserved = 0;
    UserData.Ptr = (ULONGLONG)&v16;
    UserData.Size = 16;
    sub_1409E2E78(&v15);
    v20 = 0;
    v18 = &v15;
    v19 = 4;
    v10 = 2;
    if ( a1 == 1 )
    {
      v23 = 0;
      v21 = &v24;
      v10 = 3;
      v22 = 4;
    }
    v11 = *((_QWORD *)a3 + 1);
    v12 = v10;
    v13 = v10 + 1;
    v12 *= 2LL;
    *(&UserData.Reserved + 2 * v12) = 0;
    *(&UserData.Ptr + v12) = v11;
    *(&UserData.Size + 2 * v12) = *a3;
    v14 = 2LL * v13;
    *(&UserData.Reserved + 2 * v14) = 0;
    *(&UserData.Ptr + v14) = (ULONGLONG)&qword_14000EF90;
    *(&UserData.Size + 2 * v14) = 2;
    return EtwWriteEx(v8, (PCEVENT_DESCRIPTOR)v7, 0LL, 0, 0LL, 0LL, v13 + 1, &UserData);
  }
  return result;
}
