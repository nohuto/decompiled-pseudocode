/*
 * XREFs of sub_140882EB0 @ 0x140882EB0
 * Callers:
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 *     sub_1406B75F0 @ 0x1406B75F0 (sub_1406B75F0.c)
 *     sub_1406D2394 @ 0x1406D2394 (sub_1406D2394.c)
 *     sub_14079028C @ 0x14079028C (sub_14079028C.c)
 *     sub_140796040 @ 0x140796040 (sub_140796040.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140882EB0(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        __int16 a4,
        unsigned __int16 *a5,
        ULONGLONG a6)
{
  ULONG v6; // r8d
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v9; // [rsp+40h] [rbp-30h]
  __int64 v10; // [rsp+48h] [rbp-28h]
  __int64 *v11; // [rsp+50h] [rbp-20h]
  __int64 v12; // [rsp+58h] [rbp-18h]

  v6 = 2;
  if ( a4 == 2 )
  {
    UserData.Ptr = a6;
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    v10 = *a5;
    v12 = 2LL;
    v6 = 3;
    v11 = &qword_14000EF90;
LABEL_7:
    *(_QWORD *)&UserData.Size = 16LL;
    return EtwWrite(qword_140C15FA8, a2, 0LL, v6, &UserData);
  }
  if ( a5 )
  {
    UserData.Ptr = *((_QWORD *)a5 + 1);
    UserData.Size = *a5;
    v9 = &qword_14000EF90;
    UserData.Reserved = 0;
    v10 = 2LL;
  }
  else
  {
    v6 = 0;
    if ( a6 )
    {
      UserData.Ptr = a6;
      v6 = 1;
      goto LABEL_7;
    }
  }
  return EtwWrite(qword_140C15FA8, a2, 0LL, v6, &UserData);
}
