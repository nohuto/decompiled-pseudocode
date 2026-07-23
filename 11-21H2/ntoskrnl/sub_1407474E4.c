/*
 * XREFs of sub_1407474E4 @ 0x1407474E4
 * Callers:
 *     sub_1407449E0 @ 0x1407449E0 (sub_1407449E0.c)
 *     sub_1407455A8 @ 0x1407455A8 (sub_1407455A8.c)
 *     sub_140746270 @ 0x140746270 (sub_140746270.c)
 *     sub_1407474E4 @ 0x1407474E4 (sub_1407474E4.c)
 *     sub_140747740 @ 0x140747740 (sub_140747740.c)
 *     sub_14094AA64 @ 0x14094AA64 (sub_14094AA64.c)
 *     sub_14094CFE8 @ 0x14094CFE8 (sub_14094CFE8.c)
 *     sub_14094ED84 @ 0x14094ED84 (sub_14094ED84.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_1407474E4 @ 0x1407474E4 (sub_1407474E4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1407474E4(char *P)
{
  _QWORD **v2; // rdi
  _QWORD *v3; // rcx
  _QWORD **v4; // rdi
  _QWORD *v5; // rcx
  _QWORD **v6; // rdi
  _QWORD *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax

  v2 = (_QWORD **)(P + 224);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v12 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
LABEL_25:
      __fastfail(3u);
    *v2 = v12;
    v12[1] = v2;
    sub_1407474E4(v3);
  }
  v4 = (_QWORD **)(P + 208);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v5[1] != v4 )
      goto LABEL_25;
    v13 = (_QWORD *)*v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5 )
      goto LABEL_25;
    *v4 = v13;
    v13[1] = v4;
    sub_1407474E4(v5);
  }
  v6 = (_QWORD **)(P + 368);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == v6 )
      break;
    if ( (_QWORD **)v7[1] != v6 )
      goto LABEL_25;
    v14 = (_QWORD *)*v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 )
      goto LABEL_25;
    *v6 = v14;
    v14[1] = v6;
    sub_1407474E4(v7);
  }
  v8 = (void *)*((_QWORD *)P + 18);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  v9 = (void *)*((_QWORD *)P + 2);
  if ( v9 )
    ZwClose(v9);
  v10 = (void *)*((_QWORD *)P + 3);
  if ( v10 )
    ZwClose(v10);
  v11 = (void *)*((_QWORD *)P + 4);
  if ( v11 )
    ZwClose(v11);
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 56));
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 40));
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 72));
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 88));
  RtlFreeUnicodeString((PUNICODE_STRING)P + 8);
  RtlFreeUnicodeString((PUNICODE_STRING)P + 10);
  RtlFreeUnicodeString((PUNICODE_STRING)P + 16);
  RtlFreeUnicodeString((PUNICODE_STRING)P + 17);
  RtlFreeUnicodeString((PUNICODE_STRING)P + 18);
  RtlFreeUnicodeString((PUNICODE_STRING)P + 19);
  RtlFreeUnicodeString((PUNICODE_STRING)P + 20);
  RtlFreeUnicodeString((PUNICODE_STRING)P + 21);
  RtlFreeUnicodeString((PUNICODE_STRING)P + 22);
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 392));
  ExFreePoolWithTag(P, 0);
}
