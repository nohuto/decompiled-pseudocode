/*
 * XREFs of MmRegisterEtwProvider @ 0x140B385B0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B4F014 (IoInitSystemPreDrivers.c)
 * Callees:
 *     MiLogBadMapper @ 0x140630E68 (MiLogBadMapper.c)
 *     TlgRegisterAggregateProviderEx @ 0x140803380 (TlgRegisterAggregateProviderEx.c)
 */

__int64 MmRegisterEtwProvider()
{
  __int64 result; // rax

  result = TlgRegisterAggregateProviderEx(&unk_140C06878, (__int64)MiTracingEnabledCallback, 0LL);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)&qword_140C699E8 = &unk_140C06878;
    if ( dword_140C680B0 )
      MiLogBadMapper(0LL, -1, 0LL);
    return 0LL;
  }
  return result;
}
