/*
 * XREFs of sub_1409426FC @ 0x1409426FC
 * Callers:
 *     sub_140765370 @ 0x140765370 (sub_140765370.c)
 *     sub_140767CF8 @ 0x140767CF8 (sub_140767CF8.c)
 *     sub_1407682A8 @ 0x1407682A8 (sub_1407682A8.c)
 *     sub_14076ACA8 @ 0x14076ACA8 (sub_14076ACA8.c)
 *     sub_1408442B0 @ 0x1408442B0 (sub_1408442B0.c)
 * Callees:
 *     sub_14055F84C @ 0x14055F84C (sub_14055F84C.c)
 */

__int64 __fastcall sub_1409426FC(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v2; // r8
  _QWORD *v3; // r10

  result = sub_14055F84C(a1, 1);
  *v3 = *(_QWORD *)(*(_QWORD *)(result + 40) + 48LL);
  if ( v2 )
  {
    result = *(unsigned int *)(result + 48);
    *v2 = result;
  }
  return result;
}
