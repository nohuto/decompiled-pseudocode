/*
 * XREFs of ?GetUMSBackgroundPoller@ResourceManager@details@Concurrency@@QEAAPEAVUMSBackgroundPoller@23@XZ_0 @ 0x18004977C
 * Callers:
 *     sub_1800491C8 @ 0x1800491C8 (sub_1800491C8.c)
 * Callees:
 *     <none>
 */

struct Concurrency::details::UMSBackgroundPoller *__fastcall Concurrency::details::ResourceManager::GetUMSBackgroundPoller(
        Concurrency::details::ResourceManager *this)
{
  return (struct Concurrency::details::UMSBackgroundPoller *)*((_QWORD *)this + 19);
}
