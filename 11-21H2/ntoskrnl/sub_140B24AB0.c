/*
 * XREFs of sub_140B24AB0 @ 0x140B24AB0
 * Callers:
 *     sub_140B248EC @ 0x140B248EC (sub_140B248EC.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x1402DF2C0 (RtlInitializeGenericTableAvl.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407F1308 @ 0x1407F1308 (sub_1407F1308.c)
 *     sub_140853530 @ 0x140853530 (sub_140853530.c)
 *     sub_140853600 @ 0x140853600 (sub_140853600.c)
 */

void sub_140B24AB0()
{
  __int64 v0; // rbx
  _QWORD *v1; // rdi
  __int64 v2; // rsi
  __int64 v3; // rdx
  PCWSTR SourceString[2]; // [rsp+30h] [rbp-68h]
  _QWORD v5[8]; // [rsp+40h] [rbp-58h] BYREF

  qword_140C1CFD8 = 0LL;
  qword_140C1CFD0 = 0LL;
  HIDWORD(v5[0]) = 0;
  RtlInitializeGenericTableAvl(
    &stru_140C1CF60,
    (PRTL_AVL_COMPARE_ROUTINE)sub_1406E0600,
    (PRTL_AVL_ALLOCATE_ROUTINE)sub_1406EA0F0,
    (PRTL_AVL_FREE_ROUTINE)sub_1406EA240,
    0LL);
  if ( (int)sub_140853600(1414616912, &qword_140C1CFC8) < 0 )
    qword_140C1CFC8 = 0LL;
  memset(v5, 0, sizeof(v5));
  v0 = 0LL;
  SourceString[0] = L"Audio";
  v1 = qword_140C1CFE0;
  SourceString[1] = L"Mobile Hotspot";
  v2 = 2LL;
  do
  {
    RtlInitUnicodeString((PUNICODE_STRING)&v5[1], SourceString[v0]);
    if ( (int)sub_1407F1308((__int64)v5, v3, (__int64)v1) < 0 )
      qword_140C1CFE0[v0] = 0LL;
    ++v1;
    ++v0;
    --v2;
  }
  while ( v2 );
  qword_140C1CF50 = (__int64)sub_140811940;
  sub_140853530(qword_140C1CF40);
}
