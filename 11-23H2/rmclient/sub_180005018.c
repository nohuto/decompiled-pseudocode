/*
 * XREFs of sub_180005018 @ 0x180005018
 * Callers:
 *     sub_180004DB0 @ 0x180004DB0 (sub_180004DB0.c)
 *     sub_180005140 @ 0x180005140 (sub_180005140.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180005018(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)a1 = &off_180020750;
  *(_DWORD *)(a1 + 8) = 1;
  *(_OWORD *)(a1 + 40) = 0LL;
  *(_OWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_OWORD *)(a1 + 96) = 0LL;
  RtlInitializeSRWLock(a1 + 96);
  *(_DWORD *)(a1 + 104) = 0;
  return a1;
}
