/*
 * XREFs of sub_18006E780 @ 0x18006E780
 * Callers:
 *     <none>
 * Callees:
 *     sub_180034870 @ 0x180034870 (sub_180034870.c)
 *     sub_1800507E4 @ 0x1800507E4 (sub_1800507E4.c)
 *     ?GetLocation@VirtualProcessor@details@Concurrency@@QEBAAEBVlocation@3@XZ @ 0x180093EB0 (-GetLocation@VirtualProcessor@details@Concurrency@@QEBAAEBVlocation@3@XZ.c)
 *     __RTDynamicCast @ 0x1800E3960 (__RTDynamicCast.c)
 */

__int64 __fastcall sub_18006E780(__int64 a1, __int64 a2, _QWORD *a3)
{
  Concurrency::details::VirtualProcessor *v5; // rdi
  __int64 v6; // rbx
  const struct Concurrency::location *Location; // rax

  v5 = (Concurrency::details::VirtualProcessor *)_RTDynamicCast(
                                                   a2,
                                                   0LL,
                                                   &Spectre::Engine::ImageProcessingEffect `RTTI Type Descriptor',
                                                   &Spectre::Engine::ImageProcessingEffectPlanarReflection `RTTI Type Descriptor',
                                                   1);
  v6 = sub_180034870(*(_QWORD *)(a1 + 8));
  sub_1800507E4(v6, (__int64)&unk_1801D78E8, a3);
  Location = Concurrency::details::VirtualProcessor::GetLocation(v5);
  return sub_18005081C(v6, (__int64)&unk_1801D78E8, Location);
}
