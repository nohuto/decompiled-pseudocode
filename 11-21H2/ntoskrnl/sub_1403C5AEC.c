/*
 * XREFs of sub_1403C5AEC @ 0x1403C5AEC
 * Callers:
 *     sub_140B1236C @ 0x140B1236C (sub_140B1236C.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1403C5AEC(__int64 a1, int a2, int a3, int a4)
{
  REGHANDLE v4; // rdi
  unsigned int v5; // ebx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  int *v8; // [rsp+50h] [rbp-30h]
  __int64 v9; // [rsp+58h] [rbp-28h]
  int *v10; // [rsp+60h] [rbp-20h]
  __int64 v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+A8h] [rbp+28h] BYREF
  int v13; // [rsp+B0h] [rbp+30h] BYREF
  int v14; // [rsp+B8h] [rbp+38h] BYREF

  v14 = a4;
  v13 = a3;
  v12 = a2;
  v4 = qword_140C54EA8;
  v5 = 0;
  if ( qword_140C54EA8 && EtwEventEnabled(qword_140C54EA8, &stru_140011FC8) )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v12;
    v9 = 4LL;
    v8 = &v13;
    v11 = 4LL;
    v10 = &v14;
    return (unsigned int)EtwWriteEx(v4, &stru_140011FC8, 0LL, 0, 0LL, 0LL, 3u, &UserData);
  }
  return v5;
}
