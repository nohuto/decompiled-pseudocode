/*
 * XREFs of sub_1409E08A8 @ 0x1409E08A8
 * Callers:
 *     sub_1406C1524 @ 0x1406C1524 (sub_1406C1524.c)
 *     sub_1406ED114 @ 0x1406ED114 (sub_1406ED114.c)
 *     sub_1406EE2AC @ 0x1406EE2AC (sub_1406EE2AC.c)
 *     sub_140799440 @ 0x140799440 (sub_140799440.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1409E08A8(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        char a6,
        char a7)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-31h] BYREF
  __int64 *v9; // [rsp+40h] [rbp-21h]
  __int64 v10; // [rsp+48h] [rbp-19h]
  __int64 v11; // [rsp+50h] [rbp-11h]
  int v12; // [rsp+58h] [rbp-9h]
  int v13; // [rsp+5Ch] [rbp-5h]
  __int64 *v14; // [rsp+60h] [rbp-1h]
  __int64 v15; // [rsp+68h] [rbp+7h]
  char *v16; // [rsp+70h] [rbp+Fh]
  __int64 v17; // [rsp+78h] [rbp+17h]
  char *v18; // [rsp+80h] [rbp+1Fh]
  __int64 v19; // [rsp+88h] [rbp+27h]

  UserData.Ptr = *((_QWORD *)a4 + 1);
  UserData.Size = *a4;
  v11 = *((_QWORD *)a5 + 1);
  v12 = *a5;
  v16 = &a6;
  v18 = &a7;
  v9 = &qword_14000EF90;
  v14 = &qword_14000EF90;
  UserData.Reserved = 0;
  v10 = 2LL;
  v13 = 0;
  v15 = 2LL;
  v17 = 4LL;
  v19 = 4LL;
  return EtwWrite(qword_140C15FA8, a2, 0LL, 6u, &UserData);
}
