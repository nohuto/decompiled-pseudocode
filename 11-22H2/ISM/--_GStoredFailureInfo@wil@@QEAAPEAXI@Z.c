/*
 * XREFs of ??_GStoredFailureInfo@wil@@QEAAPEAXI@Z @ 0x18006A5FC
 * Callers:
 *     ??1test_state@tip2@@QEAA@XZ @ 0x18006A40C (--1test_state@tip2@@QEAA@XZ.c)
 *     ?reserve@?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N_K@Z @ 0x18006C2F4 (-reserve@-$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N_K@Z.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x1800A8D18 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

wil::StoredFailureInfo *__fastcall wil::StoredFailureInfo::`scalar deleting destructor'(wil::StoredFailureInfo *this)
{
  wil::details::shared_buffer::reset((wil::StoredFailureInfo *)((char *)this + 152));
  return this;
}
