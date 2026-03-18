/*
 * XREFs of HsaDetachDeviceDomain @ 0x14052F5E0
 * Callers:
 *     <none>
 * Callees:
 *     HsaAttachDeviceDomainInternal @ 0x14052F098 (HsaAttachDeviceDomainInternal.c)
 */

__int64 __fastcall HsaDetachDeviceDomain(__int64 a1, __int64 a2)
{
  return HsaAttachDeviceDomainInternal(a1, a2, 0LL);
}
