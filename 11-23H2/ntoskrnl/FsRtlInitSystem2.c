/*
 * XREFs of FsRtlInitSystem2 @ 0x14053C830
 * Callers:
 *     Phase1InitializationIoReady @ 0x140B4DC38 (Phase1InitializationIoReady.c)
 * Callees:
 *     TlgRegisterAggregateProvider @ 0x140821C8C (TlgRegisterAggregateProvider.c)
 */

__int64 FsRtlInitSystem2()
{
  return TlgRegisterAggregateProvider(&dword_140C03768);
}
