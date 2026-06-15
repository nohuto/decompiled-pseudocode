/*
 * XREFs of ?SetTraceLoggingProvider@CDeviceGraphObjectCacheManager@@UEAAXPEBU_tlgProvider_t@@@Z @ 0x140026A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDeviceGraphObjectCacheManager::SetTraceLoggingProvider(
        CDeviceGraphObjectCacheManager *this,
        const struct _tlgProvider_t *a2)
{
  *((_QWORD *)this + 12) = a2;
}
