/*
 * XREFs of sub_1402A1054 @ 0x1402A1054
 * Callers:
 *     sub_140711614 @ 0x140711614 (sub_140711614.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     sub_140986424 @ 0x140986424 (sub_140986424.c)
 *     sub_1409EA6C0 @ 0x1409EA6C0 (sub_1409EA6C0.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 *     sub_140B2CF90 @ 0x140B2CF90 (sub_140B2CF90.c)
 * Callees:
 *     sub_1402A1080 @ 0x1402A1080 (sub_1402A1080.c)
 */

__int64 __fastcall sub_1402A1054(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFE )
    return sub_1402A1080(a1, a2, 0LL, a3);
  result = 3221225485LL;
  if ( a2 )
    *a1 = 0;
  return result;
}
