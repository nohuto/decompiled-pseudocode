/*
 * XREFs of TlgRegisterAggregateProvider @ 0x140821F8C
 * Callers:
 *     FsRtlInitSystem2 @ 0x14053CD80 (FsRtlInitSystem2.c)
 *     IopInitializePlugPlayServices @ 0x140B3E904 (IopInitializePlugPlayServices.c)
 *     EtwpInitialize @ 0x140B47A50 (EtwpInitialize.c)
 *     IoInitSystemPreDrivers @ 0x140B4B914 (IoInitSystemPreDrivers.c)
 *     CmFcInitSystem3 @ 0x140B4F04C (CmFcInitSystem3.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x140821FA8 (TlgRegisterAggregateProviderEx.c)
 */

__int64 __fastcall TlgRegisterAggregateProvider(void *a1)
{
  return TlgRegisterAggregateProviderEx(a1);
}
