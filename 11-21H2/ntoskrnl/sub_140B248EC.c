/*
 * XREFs of sub_140B248EC @ 0x140B248EC
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x1402DF2C0 (RtlInitializeGenericTableAvl.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407F0F98 @ 0x1407F0F98 (sub_1407F0F98.c)
 *     ObCreateObjectType @ 0x140824B10 (ObCreateObjectType.c)
 *     sub_140829740 @ 0x140829740 (sub_140829740.c)
 *     sub_1408534E0 @ 0x1408534E0 (sub_1408534E0.c)
 *     sub_140B24AB0 @ 0x140B24AB0 (sub_140B24AB0.c)
 */

__int64 sub_140B248EC()
{
  __int64 result; // rax
  __int64 v1; // r8
  char *v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v6[16]; // [rsp+40h] [rbp-29h] BYREF

  DestinationString = 0LL;
  memset(v6, 0, 0x78uLL);
  RtlInitUnicodeString(&DestinationString, L"PowerRequest");
  BYTE2(v6[0]) |= 0x14u;
  v6[8] = sub_1407EF730;
  LOWORD(v6[0]) = 120;
  v6[9] = sub_1407EF930;
  HIDWORD(v6[4]) = 512;
  HIDWORD(v6[5]) = 168;
  LODWORD(v6[1]) = 402;
  *(_OWORD *)((char *)&v6[1] + 4) = xmmword_140025B40;
  HIDWORD(v6[3]) = 2031616;
  result = ObCreateObjectType(&DestinationString, (__int64)v6, 0LL, (__int64)&qword_140D053C8);
  if ( (int)result >= 0 )
  {
    qword_140C24288 = 0LL;
    qword_140C24280 = 0LL;
    qword_140C24278 = 0LL;
    sub_140829740((__int64)&unk_140C24440, (__int64)sub_14036A8F0, (__int64)&qword_140C24470);
    qword_140C24478 = v1;
    qword_140C242A8 = (__int64)&qword_140C242A0;
    qword_140C242A0 = &qword_140C242A0;
    qword_140C24470 = v1;
    RtlInitializeGenericTableAvl(
      &stru_140C244A0,
      (PRTL_AVL_COMPARE_ROUTINE)sub_1406E10B0,
      (PRTL_AVL_ALLOCATE_ROUTINE)sub_1406EA0F0,
      (PRTL_AVL_FREE_ROUTINE)sub_1406EA240,
      0LL);
    v2 = (char *)&unk_140C03699;
    v3 = 6LL;
    do
    {
      *(_WORD *)(v2 - 1) = 0;
      v4 = v2 + 7;
      *(_QWORD *)(v2 + 15) = v2 + 7;
      v2[1] = 6;
      *(_DWORD *)(v2 + 3) = 1;
      v2 += 48;
      *v4 = v4;
      --v3;
    }
    while ( v3 );
    unk_140C24510 = 0LL;
    sub_1408534E0((__int64)&unk_140C242C0, (__int64)sub_1405C6B80, 0LL, (__int64)sub_140989DA0, 0LL);
    sub_1408534E0((__int64)&unk_140C24380, (__int64)sub_1405C6B50, 0LL, (__int64)sub_140989CF0, 0LL);
    sub_140B24AB0();
    if ( sub_1407F0F98() )
      dword_140C24480 = 1;
    return 0LL;
  }
  return result;
}
