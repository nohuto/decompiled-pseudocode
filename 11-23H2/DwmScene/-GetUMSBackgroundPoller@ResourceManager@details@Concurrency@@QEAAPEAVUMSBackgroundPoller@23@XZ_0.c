/*
 * XREFs of ?GetUMSBackgroundPoller@ResourceManager@details@Concurrency@@QEAAPEAVUMSBackgroundPoller@23@XZ_0 @ 0x1800443B4
 * Callers:
 *     sub_180043F98 @ 0x180043F98 (sub_180043F98.c)
 * Callees:
 *     <none>
 */

struct Concurrency::details::UMSBackgroundPoller *__fastcall Concurrency::details::ResourceManager::GetUMSBackgroundPoller(
        Concurrency::details::ResourceManager *this)
{
  return (struct Concurrency::details::UMSBackgroundPoller *)*((_QWORD *)this + 19);
}
