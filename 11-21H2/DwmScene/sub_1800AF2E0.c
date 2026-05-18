/*
 * XREFs of sub_1800AF2E0 @ 0x1800AF2E0
 * Callers:
 *     sub_18003DAC0 @ 0x18003DAC0 (sub_18003DAC0.c)
 *     sub_18003DC08 @ 0x18003DC08 (sub_18003DC08.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_1800AF2E0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2[1];
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = a2[1];
  }
  v5[0] = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = *a2;
  v3 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v2;
  v5[1] = v3;
  return sub_180010910((__int64)v5);
}
