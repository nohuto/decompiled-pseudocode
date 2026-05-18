/*
 * XREFs of sub_1800790F0 @ 0x1800790F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180037388 @ 0x180037388 (sub_180037388.c)
 *     sub_180057E0C @ 0x180057E0C (sub_180057E0C.c)
 *     ?GetLocation@VirtualProcessor@details@Concurrency@@QEBAAEBVlocation@3@XZ @ 0x1800A3FC8 (-GetLocation@VirtualProcessor@details@Concurrency@@QEBAAEBVlocation@3@XZ.c)
 *     __RTDynamicCast @ 0x1800FEE97 (__RTDynamicCast.c)
 */

__int64 __fastcall sub_1800790F0(__int64 a1, __int64 a2, _QWORD *a3)
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
  v6 = sub_180037388(*(_QWORD *)(a1 + 8));
  sub_180057E0C(v6, (__int64)&qword_1801F56F8, a3);
  Location = Concurrency::details::VirtualProcessor::GetLocation(v5);
  return sub_180057E58(v6, (__int64)&qword_1801F56F8, Location);
}
