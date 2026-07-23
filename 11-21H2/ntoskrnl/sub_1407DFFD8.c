/*
 * XREFs of sub_1407DFFD8 @ 0x1407DFFD8
 * Callers:
 *     sub_1406AE11C @ 0x1406AE11C (sub_1406AE11C.c)
 *     sub_1406AE59C @ 0x1406AE59C (sub_1406AE59C.c)
 *     sub_1406AEA14 @ 0x1406AEA14 (sub_1406AEA14.c)
 *     sub_1406AECC0 @ 0x1406AECC0 (sub_1406AECC0.c)
 *     sub_1407DDABC @ 0x1407DDABC (sub_1407DDABC.c)
 *     sub_1407DE074 @ 0x1407DE074 (sub_1407DE074.c)
 *     sub_1407DE480 @ 0x1407DE480 (sub_1407DE480.c)
 *     sub_1407DEE78 @ 0x1407DEE78 (sub_1407DEE78.c)
 *     sub_1407DF794 @ 0x1407DF794 (sub_1407DF794.c)
 *     sub_1407DFE00 @ 0x1407DFE00 (sub_1407DFE00.c)
 *     sub_1407DFF0C @ 0x1407DFF0C (sub_1407DFF0C.c)
 *     sub_1407E08A0 @ 0x1407E08A0 (sub_1407E08A0.c)
 *     sub_1409876B8 @ 0x1409876B8 (sub_1409876B8.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1407DFFD8(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1[3];
  if ( (v2 & 0x1000000000LL) == 0 )
  {
    v5[1] = *a1;
    v5[2] = a1[1];
    v5[3] = a1[2];
    v5[0] = a2 + 40;
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 84));
    sub_14042A5E0(v5, a2);
    v2 = a1[3];
  }
  result = v2 | 0x800000000LL;
  a1[3] = result;
  return result;
}
