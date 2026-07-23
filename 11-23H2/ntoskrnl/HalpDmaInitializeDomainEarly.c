/*
 * XREFs of HalpDmaInitializeDomainEarly @ 0x140B604F8
 * Callers:
 *     HalpDmaInitEarly @ 0x140B604AC (HalpDmaInitEarly.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 HalpDmaInitializeDomainEarly()
{
  __int64 result; // rax

  HalpDmaDomainListLock = 0LL;
  qword_140C61E18 = (__int64)&HalpDmaDomainList;
  HalpDmaDomainList = (__int64)&HalpDmaDomainList;
  result = ((__int64 (__fastcall *)(__int64, _QWORD, void *))off_140C01E60[0])(3LL, 0LL, &HalpDmaIommuInterface);
  if ( (int)result >= 0 )
    HalpDmaIommuInterfaceFcnTable = (__int64)&unk_140C61D30;
  return result;
}
