/*
 * XREFs of sub_14081369C @ 0x14081369C
 * Callers:
 *     sub_1408009E0 @ 0x1408009E0 (sub_1408009E0.c)
 *     sub_140800A38 @ 0x140800A38 (sub_140800A38.c)
 *     sub_14080271C @ 0x14080271C (sub_14080271C.c)
 *     sub_140803250 @ 0x140803250 (sub_140803250.c)
 *     sub_1408072C0 @ 0x1408072C0 (sub_1408072C0.c)
 *     sub_1408124A0 @ 0x1408124A0 (sub_1408124A0.c)
 *     sub_1408125C4 @ 0x1408125C4 (sub_1408125C4.c)
 *     sub_140812B74 @ 0x140812B74 (sub_140812B74.c)
 *     sub_140812D00 @ 0x140812D00 (sub_140812D00.c)
 *     sub_140812D44 @ 0x140812D44 (sub_140812D44.c)
 *     sub_1409CDCC8 @ 0x1409CDCC8 (sub_1409CDCC8.c)
 *     sub_140A1CAC4 @ 0x140A1CAC4 (sub_140A1CAC4.c)
 *     sub_140A1CB84 @ 0x140A1CB84 (sub_140A1CB84.c)
 *     sub_140A1CC1C @ 0x140A1CC1C (sub_140A1CC1C.c)
 *     sub_140A1CC78 @ 0x140A1CC78 (sub_140A1CC78.c)
 * Callees:
 *     ZwWaitForSingleObject @ 0x14041B7E0 (ZwWaitForSingleObject.c)
 *     sub_1408136FC @ 0x1408136FC (sub_1408136FC.c)
 */

NTSTATUS __fastcall sub_14081369C(char a1)
{
  NTSTATUS result; // eax
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  if ( a1 )
    return 0;
  result = sub_1408136FC(&v2);
  if ( result < 0 )
    return result;
  if ( v2 == -1 )
    return 0;
  Timeout.QuadPart = -600000000LL;
  result = ZwWaitForSingleObject(qword_140C0E120, 0, &Timeout);
  if ( result == 258 )
    return -1073741823;
  return result;
}
