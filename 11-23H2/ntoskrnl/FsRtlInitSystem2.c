/*
 * XREFs of FsRtlInitSystem2 @ 0x14053CD80
 * Callers:
 *     Phase1InitializationIoReady @ 0x140B4DC38 (Phase1InitializationIoReady.c)
 * Callees:
 *     TlgRegisterAggregateProvider @ 0x140821F8C (TlgRegisterAggregateProvider.c)
 */

__int64 FsRtlInitSystem2()
{
  return TlgRegisterAggregateProvider(&dword_140C03768);
}
