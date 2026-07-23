/*
 * XREFs of sub_140B098F0 @ 0x140B098F0
 * Callers:
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 * Callees:
 *     sub_140235AAC @ 0x140235AAC (sub_140235AAC.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_140B09B18 @ 0x140B09B18 (sub_140B09B18.c)
 */

unsigned __int64 sub_140B098F0()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 v3; // rax
  ULONG_PTR v4; // rdi
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  ULONG_PTR v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 result; // rax

  sub_140B09B18();
  v0 = sub_1402CCC50(32LL);
  *(_QWORD *)(v1 + 16) = v0;
  qword_140C53290 = 0xAAAAAAAAAAAAAAABuLL * ((v1 + 0x220000000000LL) >> 4);
  sub_140235AAC(qword_140C53290, qword_140C53290, 0LL);
  qword_140C53270 = sub_140B09B18();
  *(_QWORD *)(qword_140C53270 + 16) = v0;
  qword_140C53278 = 0xAAAAAAAAAAAAAAABuLL * ((qword_140C53270 + 0x220000000000LL) >> 4);
  sub_140235AAC(0xAAAAAAAAAAAAAAABuLL * ((qword_140C53270 + 0x220000000000LL) >> 4), v2, 0xFFFFFFFFFFFFFFFFuLL);
  v3 = sub_140B09B18();
  *(_QWORD *)(v3 + 16) = v0;
  v4 = 0xAAAAAAAAAAAAAAABuLL * ((v3 + 0x220000000000LL) >> 4);
  qword_140C532F8 = v4;
  v5 = sub_1402CBD10((((unsigned __int64)qword_140D069A8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, qword_140C53290, 1);
  sub_140235AAC(v4, v6, v5);
  qword_140C53300 = ((qword_140C532F8 & 0xFFFFFFFFFFLL) << 12) | sub_1402CBD10(
                                                                   (((unsigned __int64)qword_140D069A8 >> 9) & 0x7FFFFFFFF8LL)
                                                                 - 0x98000000000LL,
                                                                   qword_140C53290,
                                                                   134217729) & 0xFFF0000000000FFFuLL;
  v7 = sub_140B09B18();
  *(_QWORD *)(v7 + 16) = v0;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((v7 + 0x220000000000LL) >> 4);
  qword_140C53308 = v8;
  v9 = sub_1402CBD10((((unsigned __int64)qword_140D069A8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, qword_140C53278, 1);
  sub_140235AAC(v8, v10, v9);
  result = ((qword_140C53308 & 0xFFFFFFFFFFLL) << 12) | sub_1402CBD10(
                                                          (((unsigned __int64)qword_140D069A8 >> 9) & 0x7FFFFFFFF8LL)
                                                        - 0x98000000000LL,
                                                          qword_140C53278,
                                                          134217729) & 0xFFF0000000000FFFuLL;
  qword_140C53310 = result;
  return result;
}
