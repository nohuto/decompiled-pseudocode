/*
 * XREFs of sub_18001EBA0 @ 0x18001EBA0
 * Callers:
 *     sub_18001EC78 @ 0x18001EC78 (sub_18001EC78.c)
 * Callees:
 *     sub_18000C548 @ 0x18000C548 (sub_18000C548.c)
 *     sub_18000C5B0 @ 0x18000C5B0 (sub_18000C5B0.c)
 */

__int64 sub_18001EBA0()
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v2; // rbx

  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v2 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  if ( dword_1801F7EC4 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C5B0(&dword_1801F7EC4);
    if ( dword_1801F7EC4 == -1 )
    {
      qword_1801F7EC8 = v2;
      sub_18000C548(&dword_1801F7EC4);
    }
  }
  return (v2 - qword_1801F7EC8) / 1000000;
}
