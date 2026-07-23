/*
 * XREFs of sub_140B2305C @ 0x140B2305C
 * Callers:
 *     sub_140B22C40 @ 0x140B22C40 (sub_140B22C40.c)
 * Callees:
 *     sub_140248914 @ 0x140248914 (sub_140248914.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14075D1B4 @ 0x14075D1B4 (sub_14075D1B4.c)
 *     sub_14084E03C @ 0x14084E03C (sub_14084E03C.c)
 */

__int64 sub_140B2305C()
{
  PSLIST_ENTRY v0; // rbx
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 *i; // rax
  char v4[8]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v5; // [rsp+38h] [rbp-31h]
  _QWORD v6[12]; // [rsp+50h] [rbp-19h] BYREF

  *(_QWORD *)&v5 = 0x11D23915E3DFF7BDLL;
  qword_140C16510 = (__int64)&qword_140C16530;
  qword_140C16538 = (__int64)&qword_140C16530;
  qword_140C16530 = (__int64)&qword_140C16530;
  qword_140C16560 = (__int64)&qword_140C16520;
  qword_140C16528 = (__int64)&qword_140C16520;
  qword_140C16520 = (__int64)&qword_140C16520;
  qword_140C16540 = (__int64)&qword_140C16550;
  qword_140C16558 = (__int64)&qword_140C16550;
  qword_140C16550 = (__int64)&qword_140C16550;
  *((_QWORD *)&v5 + 1) = 0xA298B94FC0000391uLL;
  v4[0] = 0;
  v0 = sub_140248914((_SLIST_ENTRY *)0xFFFFFFFFFFFFFFFFLL, 1342177280);
  if ( !v0 )
    return 3221225626LL;
  memset(v6, 0, 0x58uLL);
  LODWORD(v6[0]) = 88;
  LODWORD(v6[2]) = 2;
  v6[3] = 0x11D1AADBC7BF35D0LL;
  *(_OWORD *)&v6[7] = v5;
  v6[4] = 0x102906C9A0004ABFLL;
  result = sub_14075D1B4((__int64)v0, (__int64)v6, 88, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v2 = qword_140C16560;
    for ( i = *(__int64 **)qword_140C16560; i != (__int64 *)v2; i = (__int64 *)*i )
      *((_DWORD *)i + 4) |= 1u;
    result = sub_14084E03C((__int64)v0[2].Next, (__int64)L"kernelbase.dll", 1, (__int64)L"MofResourceName", v4);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
