/*
 * XREFs of sub_18002D5E4 @ 0x18002D5E4
 * Callers:
 *     sub_180031048 @ 0x180031048 (sub_180031048.c)
 * Callees:
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_18000C8C8 @ 0x18000C8C8 (sub_18000C8C8.c)
 *     sub_1800E0D60 @ 0x1800E0D60 (sub_1800E0D60.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002D5E4(__int64 a1)
{
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<Spectre::Engine::CpuProfiler>::`vftable';
  memset((void *)(a1 + 16), 0, 0x128uLL);
  sub_1800E0D60(a1 + 16);
  *(_BYTE *)(a1 + 24) = 1;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  sub_18000C8C8(a1 + 72, 24LL, 10LL);
  return a1;
}
