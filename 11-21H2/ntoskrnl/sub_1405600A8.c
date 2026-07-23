/*
 * XREFs of sub_1405600A8 @ 0x1405600A8
 * Callers:
 *     sub_1409455A8 @ 0x1409455A8 (sub_1409455A8.c)
 * Callees:
 *     sub_1402D1760 @ 0x1402D1760 (sub_1402D1760.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1405600A8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        unsigned __int16 a8,
        __int64 a9)
{
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+30h] [rbp-51h] BYREF
  __int16 *v11; // [rsp+40h] [rbp-41h]
  __int64 v12; // [rsp+48h] [rbp-39h]
  __int64 v13; // [rsp+50h] [rbp-31h]
  int v14; // [rsp+58h] [rbp-29h]
  int v15; // [rsp+5Ch] [rbp-25h]
  char *v16; // [rsp+60h] [rbp-21h]
  __int64 v17; // [rsp+68h] [rbp-19h]
  char *v18; // [rsp+70h] [rbp-11h]
  __int64 v19; // [rsp+78h] [rbp-9h]
  unsigned __int16 *v20; // [rsp+80h] [rbp-1h]
  __int64 v21; // [rsp+88h] [rbp+7h]
  __int64 v22; // [rsp+90h] [rbp+Fh]
  int v23; // [rsp+98h] [rbp+17h]
  int v24; // [rsp+9Ch] [rbp+1Bh]
  unsigned __int16 v25; // [rsp+D8h] [rbp+57h] BYREF

  v25 = a4;
  v12 = 2LL;
  v15 = 0;
  v11 = (__int16 *)&v25;
  v13 = a5;
  v17 = 4LL;
  v14 = 2 * a4;
  v16 = &a6;
  v18 = &a7;
  v20 = &a8;
  v22 = a9;
  v19 = 4LL;
  v23 = 2 * a8;
  v21 = 2LL;
  v24 = 0;
  return sub_1402D1760(qword_140C03910, (const EVENT_DESCRIPTOR *)qword_14003B090, 0LL, 7u, &v10);
}
