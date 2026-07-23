/*
 * XREFs of sub_140A9D00C @ 0x140A9D00C
 * Callers:
 *     sub_140A9B2E4 @ 0x140A9B2E4 (sub_140A9B2E4.c)
 * Callees:
 *     sub_140250C50 @ 0x140250C50 (sub_140250C50.c)
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 *     sub_140A9D0D0 @ 0x140A9D0D0 (sub_140A9D0D0.c)
 */

__int64 sub_140A9D00C()
{
  __int64 result; // rax

  if ( !dword_140C1ACBC )
  {
    result = (unsigned int)dword_140D575EC;
    if ( !dword_140D575EC )
    {
      qword_140D57750 = 0LL;
      qword_140D576F8 = (__int64)&qword_140D576F0;
      qword_140D576F0 = (__int64)&qword_140D576F0;
      sub_140250C50(
        (__int64)&unk_140D58FC0,
        0LL,
        (void (__stdcall *)(PVOID, ULONG))sub_1405FDFF0,
        512,
        32,
        1683449430,
        16,
        dword_140C1AD3C);
      KeInitializeTimerEx(&stru_140D58D80, NotificationTimer);
      KeInitializeDpc(&stru_140D58D40, sub_140A9D3E0, 0LL);
      sub_140A9D0D0((unsigned int)dword_140D57614);
      return (unsigned int)_InterlockedExchange(&dword_140D575EC, 1);
    }
  }
  return result;
}
