/*
 * XREFs of sub_14077E5C0 @ 0x14077E5C0
 * Callers:
 *     sub_140692514 @ 0x140692514 (sub_140692514.c)
 *     sub_1407806B0 @ 0x1407806B0 (sub_1407806B0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_14077EBE0 @ 0x14077EBE0 (sub_14077EBE0.c)
 */

__int64 __fastcall sub_14077E5C0(__int64 a1)
{
  unsigned __int16 v2; // bx
  UNICODE_STRING v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  v4 = 0LL;
  v2 = 0;
  RtlInitUnicodeString(&v4, 0LL);
  while ( 1 )
  {
    sub_14077EBE0(a1, &v5, &v4);
    if ( !v4.Length )
      break;
    ++v2;
  }
  return v2;
}
