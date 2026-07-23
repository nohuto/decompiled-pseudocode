/*
 * XREFs of sub_14062D1C8 @ 0x14062D1C8
 * Callers:
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     sub_1403AB658 @ 0x1403AB658 (sub_1403AB658.c)
 *     sub_1403ABB10 @ 0x1403ABB10 (sub_1403ABB10.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_14062D1C8(__int16 a1, unsigned __int16 *a2, __int16 a3, int a4)
{
  ULONG v4; // r9d
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF
  int *v7; // [rsp+50h] [rbp+17h]
  __int64 v8; // [rsp+58h] [rbp+1Fh]
  __int64 v9; // [rsp+60h] [rbp+27h]
  int v10; // [rsp+68h] [rbp+2Fh]
  int v11; // [rsp+6Ch] [rbp+33h]
  __int64 *v12; // [rsp+70h] [rbp+37h]
  __int64 v13; // [rsp+78h] [rbp+3Fh]
  __int16 v14; // [rsp+A0h] [rbp+67h] BYREF
  int v15; // [rsp+B8h] [rbp+7Fh] BYREF

  v15 = a4;
  v14 = a1;
  *(_QWORD *)&UserData.Size = 2LL;
  v11 = 0;
  UserData.Ptr = (ULONGLONG)&v14;
  v13 = 2LL;
  v7 = &v15;
  v9 = *((_QWORD *)a2 + 1);
  v10 = *a2;
  v4 = (a3 & 0x200 | 0x80u) >> 7;
  v12 = &qword_14000EF90;
  v8 = 4LL;
  if ( (a3 & 0x600) != 0 )
    v4 |= 8u;
  return EtwWriteEx(qword_140C15FA8, &stru_1400149F8, 0LL, v4, 0LL, 0LL, 4u, &UserData);
}
