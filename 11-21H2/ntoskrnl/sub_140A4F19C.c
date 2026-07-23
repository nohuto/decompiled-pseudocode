/*
 * XREFs of sub_140A4F19C @ 0x140A4F19C
 * Callers:
 *     sub_140A4B9E0 @ 0x140A4B9E0 (sub_140A4B9E0.c)
 * Callees:
 *     sub_1402DA4B0 @ 0x1402DA4B0 (sub_1402DA4B0.c)
 *     sub_14038D4F0 @ 0x14038D4F0 (sub_14038D4F0.c)
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 *     MmIsAddressValid @ 0x14038DE50 (MmIsAddressValid.c)
 *     sub_1403992E8 @ 0x1403992E8 (sub_1403992E8.c)
 *     sub_14039936C @ 0x14039936C (sub_14039936C.c)
 *     FirstEntrySList @ 0x140429870 (FirstEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405FDEEC @ 0x1405FDEEC (sub_1405FDEEC.c)
 *     sub_140A4E794 @ 0x140A4E794 (sub_140A4E794.c)
 *     sub_140A4E854 @ 0x140A4E854 (sub_140A4E854.c)
 *     sub_140A4ED84 @ 0x140A4ED84 (sub_140A4ED84.c)
 *     sub_140A4EEAC @ 0x140A4EEAC (sub_140A4EEAC.c)
 *     sub_140A4F3AC @ 0x140A4F3AC (sub_140A4F3AC.c)
 *     sub_140A4FE40 @ 0x140A4FE40 (sub_140A4FE40.c)
 */

void __fastcall sub_140A4F19C(unsigned int *Address)
{
  PVOID *i; // rbx
  __int64 v3; // rdx
  PSLIST_ENTRY j; // rbx
  unsigned int k; // ebx
  _QWORD *v6; // rbx
  PVOID *m; // rbx
  __int64 v8; // rdx

  if ( !byte_140C22C01 )
  {
    PoSetHiberRange(0LL, 0x10000u, sub_140A4B9E0, 0LL, 0x6E72654Bu);
    PoSetHiberRange(0LL, 0x10000u, HalAllocateCrashDumpRegisters, 0LL, 0x6348616Cu);
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      PoSetHiberRange(0LL, 0x10000u, i, 0xA0uLL, 0x6E72654Bu);
      if ( MmIsAddressValid(i[12]) )
        PoSetHiberRange(0LL, 0x10000u, i[12], *((unsigned __int16 *)i + 45), 0x6E72654Bu);
      if ( MmIsAddressValid(i[10]) )
        PoSetHiberRange(0LL, 0x10000u, i[10], *((unsigned __int16 *)i + 37), 0x6E72654Bu);
    }
    for ( j = FirstEntrySList(&stru_140C54840); j; j = j->Next )
      sub_140A4F3AC(j[-1].Next);
    sub_14042A5E0(0LL, v3);
    sub_140A4ED84(Address);
    sub_140A4E854();
    if ( (unsigned int)sub_1402DA4B0() )
    {
      if ( qword_140D57620 )
        PoSetHiberRange(0LL, 0x10000u, qword_140D57620, 56LL * (unsigned int)dword_140D4E028, 0x72696656u);
      if ( (unsigned int)sub_1405FDEEC() == 1 && qword_140D575D0 )
        PoSetHiberRange(0LL, 0x10000u, qword_140D575D0, 0LL, 0x72696656u);
    }
    sub_14039936C();
    sub_140A4E794(0LL);
    sub_14038D4F0();
    sub_1403992E8();
    sub_140A4EEAC();
    for ( k = 0; k < dword_140C47500; ++k )
      PoSetHiberRange(
        0LL,
        0x10000u,
        (PVOID)qword_140C47520[2 * k],
        _mm_srli_si128(*(__m128i *)&qword_140C47520[2 * k], 8).m128i_u64[0] - qword_140C47520[2 * k],
        0x42706D44u);
    v6 = qword_140CE2070;
    if ( qword_140CE2070 )
    {
      PoSetHiberRange(0LL, 0x10000u, qword_140CE2070, 0x18uLL, 0x6E72654Bu);
      sub_14042A5E0(v6[2], v8);
    }
    for ( m = (PVOID *)qword_140C23140; m != &qword_140C23140; m = (PVOID *)*m )
      PoSetHiberRange(0LL, 0x10000u, m, 0x420uLL, 0x6D726854u);
    if ( (dword_140C2227C & 0x100) == 0 )
      sub_140A4FE40(Address + 8);
    *((_BYTE *)Address + 3) = 1;
  }
  *((_BYTE *)Address + 28) = 1;
}
