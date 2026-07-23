/*
 * XREFs of sub_1409E2110 @ 0x1409E2110
 * Callers:
 *     sub_140257280 @ 0x140257280 (sub_140257280.c)
 *     sub_1406C03F0 @ 0x1406C03F0 (sub_1406C03F0.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1409E2110(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v3; // rdx
  int v4; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-30h] BYREF
  __int64 v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+50h] [rbp-18h]
  int v8; // [rsp+54h] [rbp-14h]

  v4 = *(_DWORD *)(a1 + 1088);
  v5.Ptr = (ULONGLONG)&v4;
  v5.Reserved = 0;
  v5.Size = 4;
  v6 = a1 + 1128;
  v8 = 0;
  v7 = 8;
  if ( qword_140D05008 != -4540 && (*(_DWORD *)(qword_140D05008 + 4548) & 2) != 0 )
  {
    v3 = (const EVENT_DESCRIPTOR *)qword_140039278;
    if ( !a2 )
      v3 = &stru_1400396C0;
    EtwWrite(qword_140C15FF8, v3, 0LL, 2u, &v5);
  }
  sub_14035EDE4((__int64)&v5, 1u, 0x40000002u, 805 - (a2 != 0), 0x501902u);
}
