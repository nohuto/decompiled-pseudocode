/*
 * XREFs of sub_1406461D0 @ 0x1406461D0
 * Callers:
 *     sub_140A08E84 @ 0x140A08E84 (sub_140A08E84.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1406461D0(int a1, __int64 a2, int a3)
{
  int v4; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int64 v6; // [rsp+58h] [rbp-28h]
  int v7; // [rsp+60h] [rbp-20h]
  int v8; // [rsp+64h] [rbp-1Ch]
  const WCHAR *v9; // [rsp+68h] [rbp-18h]
  __int64 v10; // [rsp+70h] [rbp-10h]

  v4 = a1;
  UserData.Ptr = (ULONGLONG)&v4;
  v6 = a2;
  v9 = &word_1404370A0;
  v7 = a3;
  v8 = 0;
  *(_QWORD *)&UserData.Size = 4LL;
  v10 = 2LL;
  return EtwWriteEx((REGHANDLE)stru_140C0E9A8.Queue.Wcb.DeviceRoutine, &stru_1400420F0, 0LL, 0, 0LL, 0LL, 3u, &UserData);
}
