/*
 * XREFs of sub_140973630 @ 0x140973630
 * Callers:
 *     sub_140974020 @ 0x140974020 (sub_140974020.c)
 *     sub_1409743A4 @ 0x1409743A4 (sub_1409743A4.c)
 *     sub_140977B70 @ 0x140977B70 (sub_140977B70.c)
 *     sub_140977CBC @ 0x140977CBC (sub_140977CBC.c)
 * Callees:
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1407B6B90 @ 0x1407B6B90 (sub_1407B6B90.c)
 *     sub_1409736EC @ 0x1409736EC (sub_1409736EC.c)
 */

__int64 __fastcall sub_140973630(unsigned int a1, unsigned int a2)
{
  _QWORD *i; // rcx
  int v5; // eax
  __int64 *v6; // rax
  __int64 v7; // r9
  ULONG_PTR v8; // rbx
  _OWORD v10[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v10, 0, sizeof(v10));
  for ( i = 0LL; ; i = (_QWORD *)v8 )
  {
    v6 = sub_1407B6B90(i);
    v8 = (ULONG_PTR)v6;
    if ( !v6 )
      break;
    v5 = *((_DWORD *)v6 + 543);
    if ( (v5 & 0x1000) == 0 && v8 != qword_140D06A30 && (v5 & 1) == 0 && !*(_QWORD *)(v8 + 2240) )
    {
      sub_14030D5C0(v8, 0LL, (__int64)v10, v7);
      sub_1409736EC(v8, a1, a2);
      sub_1402D0930((__int64)v10, 0LL);
    }
  }
  return 0LL;
}
