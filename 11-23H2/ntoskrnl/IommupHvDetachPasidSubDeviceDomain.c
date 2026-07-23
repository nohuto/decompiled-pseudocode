/*
 * XREFs of IommupHvDetachPasidSubDeviceDomain @ 0x140524EDC
 * Callers:
 *     IommupDomainDetachPasidDevice @ 0x14050EA08 (IommupDomainDetachPasidDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommupHvDetachPasidSubDeviceDomain(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 16);
  qword_140C62590(0LL, *(unsigned int *)(a1 + 48), 0LL);
  return ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_140C625B8)(*(_QWORD *)(v1 + 32), *(unsigned int *)(a1 + 48));
}
