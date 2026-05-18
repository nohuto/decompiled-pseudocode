/*
 * XREFs of _anonymous_namespace_::GetMSCountSinceStartAccurate @ 0x18001D618
 * Callers:
 *     _anonymous_namespace_::GetTimeString @ 0x18001D6C8 (_anonymous_namespace_--GetTimeString.c)
 * Callees:
 *     _Init_thread_footer @ 0x18000C538 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18000C5A0 (_Init_thread_header.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180011CA0 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 */

__int64 anonymous_namespace_::GetMSCountSinceStartAccurate()
{
  __int64 v0; // rbx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  std::chrono::steady_clock::now(&v2);
  v0 = v2;
  if ( dword_1801D3DBC > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_1801D3DBC);
    if ( dword_1801D3DBC == -1 )
    {
      qword_1801D3DC0 = v0;
      Init_thread_footer(&dword_1801D3DBC);
    }
  }
  return (v0 - qword_1801D3DC0) / 1000000;
}
