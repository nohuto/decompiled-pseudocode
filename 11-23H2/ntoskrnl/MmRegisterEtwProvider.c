/*
 * XREFs of MmRegisterEtwProvider @ 0x140B4D698
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B4B914 (IoInitSystemPreDrivers.c)
 * Callees:
 *     MiLogBadMapper @ 0x140631348 (MiLogBadMapper.c)
 *     TlgRegisterAggregateProviderEx @ 0x140821FA8 (TlgRegisterAggregateProviderEx.c)
 */

__int64 MmRegisterEtwProvider()
{
  __int64 result; // rax

  result = TlgRegisterAggregateProviderEx(&unk_140C06878, (__int64)MiTracingEnabledCallback, 0LL);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)&qword_140C698E8 = &unk_140C06878;
    if ( dword_140C67FB0 )
      MiLogBadMapper(0LL, -1, 0LL);
    return 0LL;
  }
  return result;
}
