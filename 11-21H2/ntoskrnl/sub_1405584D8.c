/*
 * XREFs of sub_1405584D8 @ 0x1405584D8
 * Callers:
 *     sub_14024FC04 @ 0x14024FC04 (sub_14024FC04.c)
 * Callees:
 *     sub_1402D1760 @ 0x1402D1760 (sub_1402D1760.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1405584D8(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        unsigned __int16 a4,
        __int64 a5,
        unsigned __int16 a6,
        __int64 a7)
{
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-21h] BYREF
  __int16 *v9; // [rsp+40h] [rbp-11h]
  __int64 v10; // [rsp+48h] [rbp-9h]
  __int64 v11; // [rsp+50h] [rbp-1h]
  int v12; // [rsp+58h] [rbp+7h]
  int v13; // [rsp+5Ch] [rbp+Bh]
  unsigned __int16 *v14; // [rsp+60h] [rbp+Fh]
  __int64 v15; // [rsp+68h] [rbp+17h]
  __int64 v16; // [rsp+70h] [rbp+1Fh]
  int v17; // [rsp+78h] [rbp+27h]
  int v18; // [rsp+7Ch] [rbp+2Bh]
  unsigned __int16 v19; // [rsp+B8h] [rbp+67h] BYREF

  v19 = a4;
  v10 = 2LL;
  v13 = 0;
  v9 = (__int16 *)&v19;
  v11 = a5;
  v18 = 0;
  v12 = 2 * a4;
  v15 = 2LL;
  v14 = &a6;
  v16 = a7;
  v17 = 2 * a6;
  return sub_1402D1760(qword_140C044F0, (const EVENT_DESCRIPTOR *)qword_1400385A8, a3, 5u, &v8);
}
