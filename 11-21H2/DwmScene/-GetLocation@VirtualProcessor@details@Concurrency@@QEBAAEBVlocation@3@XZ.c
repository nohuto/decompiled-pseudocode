/*
 * XREFs of ?GetLocation@VirtualProcessor@details@Concurrency@@QEBAAEBVlocation@3@XZ @ 0x1800A3FC8
 * Callers:
 *     sub_1800790F0 @ 0x1800790F0 (sub_1800790F0.c)
 * Callees:
 *     <none>
 */

const struct Concurrency::location *__fastcall Concurrency::details::VirtualProcessor::GetLocation(
        Concurrency::details::VirtualProcessor *this)
{
  return (Concurrency::details::VirtualProcessor *)((char *)this + 216);
}
