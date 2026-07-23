/*
 * XREFs of sub_1407CDA20 @ 0x1407CDA20
 * Callers:
 *     RtlUnicodeToMultiByteN @ 0x1406A04A0 (RtlUnicodeToMultiByteN.c)
 *     RtlUpperString @ 0x1406A56F0 (RtlUpperString.c)
 *     RtlGenerate8dot3Name @ 0x1406A9EA0 (RtlGenerate8dot3Name.c)
 *     RtlUpperChar @ 0x1406B00C0 (RtlUpperChar.c)
 *     RtlIsNameLegalDOS8Dot3 @ 0x1407594E0 (RtlIsNameLegalDOS8Dot3.c)
 *     sub_140759798 @ 0x140759798 (sub_140759798.c)
 *     RtlUpcaseUnicodeToOemN @ 0x1407598D0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x140759990 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlUnicodeStringToAnsiString @ 0x140759C40 (RtlUnicodeStringToAnsiString.c)
 *     RtlUnicodeToMultiByteSize @ 0x140759DB0 (RtlUnicodeToMultiByteSize.c)
 *     sub_14075A7E4 @ 0x14075A7E4 (sub_14075A7E4.c)
 *     RtlMultiByteToUnicodeSize @ 0x14075A850 (RtlMultiByteToUnicodeSize.c)
 *     RtlAnsiCharToUnicodeChar @ 0x1407CD880 (RtlAnsiCharToUnicodeChar.c)
 *     sub_1409B7678 @ 0x1409B7678 (sub_1409B7678.c)
 *     sub_1409B7820 @ 0x1409B7820 (sub_1409B7820.c)
 *     RtlIsValidOemCharacter @ 0x1409BBB30 (RtlIsValidOemCharacter.c)
 * Callees:
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 */

bool sub_1407CDA20()
{
  _WORD *v0; // rax
  char v1; // dl
  __int64 v2; // rax
  bool result; // al
  signed __int32 v4[8]; // [rsp+0h] [rbp-38h] BYREF
  bool v5; // [rsp+20h] [rbp-18h]

  v0 = sub_140347DB0();
  _InterlockedOr(v4, 0);
  if ( v0[532] == 0xFDE9 || v0[564] == 0xFDE9 )
    return 1;
  v5 = 0;
  v2 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1360LL);
  if ( !v2 )
    return v5;
  if ( v1 )
    result = *(_WORD *)(v2 + 846) == 0xFDE9;
  else
    result = *(_WORD *)(v2 + 844) == 0xFDE9;
  v5 = result;
  return result;
}
