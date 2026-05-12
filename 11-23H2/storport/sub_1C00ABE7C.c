/*
 * XREFs of sub_1C00ABE7C @ 0x1C00ABE7C
 * Callers:
 *     sub_1C00A982C @ 0x1C00A982C (sub_1C00A982C.c)
 * Callees:
 *     sub_1C006C9B0 @ 0x1C006C9B0 (sub_1C006C9B0.c)
 *     sub_1C00AC1F8 @ 0x1C00AC1F8 (sub_1C00AC1F8.c)
 */

char sub_1C00ABE7C()
{
  int v0; // eax

  if ( dword_1C0093400 )
    sub_1C006C9B0();
  if ( (int)sub_1C00AC1F8(&dword_1C00930C8) >= 0 )
    byte_1C0094162 = 1;
  if ( (int)sub_1C00AC1F8(&dword_1C0093000) >= 0 )
    byte_1C0094161 = 1;
  v0 = sub_1C00AC1F8(&dword_1C0093038);
  if ( v0 >= 0 )
    byte_1C0094160 = 1;
  if ( byte_1C0094162 )
  {
    KeInitializeTimer(&stru_1C00936A0);
    KeInitializeDpc(&stru_1C00935E0, (PKDEFERRED_ROUTINE)sub_1C00221E0, 0LL);
    KeSetCoalescableTimer(&stru_1C00936A0, (LARGE_INTEGER)-6000000000LL, 0, 0xEA60u, &stru_1C00935E0);
    KeInitializeTimer(&stru_1C00935A0);
    KeInitializeDpc(&stru_1C00936E0, (PKDEFERRED_ROUTINE)sub_1C00221E0, 0LL);
    KeSetCoalescableTimer(&stru_1C00935A0, (LARGE_INTEGER)-138000000000LL, 0, 0x493E0u, &stru_1C00936E0);
    if ( dword_1C0093400 || dword_1C0093408 )
    {
      KeInitializeTimer(&Timer);
      KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)sub_1C00221E0, 0LL);
      KeSetCoalescableTimer(&Timer, (LARGE_INTEGER)-6000000000LL, 0, 0xEA60u, &Dpc);
    }
    if ( dword_1C0093428 )
    {
      KeInitializeTimer(&stru_1C0093760);
      KeInitializeDpc(&stru_1C00937A0, (PKDEFERRED_ROUTINE)sub_1C00221E0, 0LL);
      KeSetCoalescableTimer(&stru_1C0093760, (LARGE_INTEGER)-6000000000LL, 0, 0xEA60u, &stru_1C00937A0);
    }
    KeInitializeTimer(&stru_1C0093660);
    KeInitializeDpc(&stru_1C0093720, (PKDEFERRED_ROUTINE)sub_1C00221E0, 0LL);
    LOBYTE(v0) = KeSetCoalescableTimer(&stru_1C0093660, (LARGE_INTEGER)-6000000000LL, 0, 0xEA60u, &stru_1C0093720);
  }
  return v0;
}
