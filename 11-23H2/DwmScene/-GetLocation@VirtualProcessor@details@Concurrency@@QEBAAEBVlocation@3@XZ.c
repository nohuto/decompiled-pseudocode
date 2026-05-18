/*
 * XREFs of ?GetLocation@VirtualProcessor@details@Concurrency@@QEBAAEBVlocation@3@XZ @ 0x180093EB0
 * Callers:
 *     sub_18006E780 @ 0x18006E780 (sub_18006E780.c)
 * Callees:
 *     <none>
 */

const struct Concurrency::location *__fastcall Concurrency::details::VirtualProcessor::GetLocation(
        Concurrency::details::VirtualProcessor *this)
{
  return (Concurrency::details::VirtualProcessor *)((char *)this + 216);
}
