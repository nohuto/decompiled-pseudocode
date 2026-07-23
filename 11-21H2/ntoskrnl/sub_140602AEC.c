/*
 * XREFs of sub_140602AEC @ 0x140602AEC
 * Callers:
 *     sub_1406053C0 @ 0x1406053C0 (sub_1406053C0.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1402A2094 @ 0x1402A2094 (sub_1402A2094.c)
 *     sub_1403699D0 @ 0x1403699D0 (sub_1403699D0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140603294 @ 0x140603294 (sub_140603294.c)
 */

void __fastcall sub_140602AEC(int *a1, int a2, int a3)
{
  char CurrentIrql; // di
  const CHAR *v5; // rdx
  int v6; // r10d
  int v7; // [rsp+40h] [rbp-49h] BYREF
  int v8; // [rsp+44h] [rbp-45h] BYREF
  int v9; // [rsp+48h] [rbp-41h] BYREF
  int v10; // [rsp+4Ch] [rbp-3Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+50h] [rbp-39h] BYREF
  int *v12; // [rsp+70h] [rbp-19h]
  __int64 v13; // [rsp+78h] [rbp-11h]
  int *v14; // [rsp+80h] [rbp-9h]
  __int64 v15; // [rsp+88h] [rbp-1h]
  _BYTE v16[16]; // [rsp+90h] [rbp+7h] BYREF
  int *v17; // [rsp+A0h] [rbp+17h]
  __int64 v18; // [rsp+A8h] [rbp+1Fh]
  _BYTE v19[16]; // [rsp+B0h] [rbp+27h] BYREF
  int *v20; // [rsp+C0h] [rbp+37h]
  __int64 v21; // [rsp+C8h] [rbp+3Fh]

  if ( a1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (unsigned int)dword_140C090C0 > 5 && sub_1402A2000((__int64)&dword_140C090C0, 0x800000000000LL) )
    {
      v5 = (const CHAR *)*((_QWORD *)a1 + 139);
      v7 = *a1;
      v12 = &v7;
      v8 = a1[280];
      v14 = &v8;
      v13 = 4LL;
      v15 = 4LL;
      sub_1403699D0((__int64)v16, v5);
      v9 = a1[21];
      v17 = &v9;
      v18 = 4LL;
      sub_1402A2094((__int64)v19, (const WCHAR *)a1 + 2);
      v6 = a1[17];
      v20 = &v10;
      v10 = v6;
      v21 = 4LL;
      sub_14020A9C4((__int64)&dword_140C090C0, (unsigned __int8 *)&word_1400344EE, 0LL, 0LL, 8u, &v11);
    }
    if ( (byte_140C1A8F0 & 4) != 0 )
      sub_140603294(
        (_DWORD)a1,
        a2,
        a3,
        a1[280],
        (__int64)"This event is sent whenever CAR attempts to write a live kernel dump.",
        (__int64)L"CAR_LIVE_DUMP_EVENT",
        CurrentIrql);
  }
}
