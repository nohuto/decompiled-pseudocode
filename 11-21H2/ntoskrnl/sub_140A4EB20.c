/*
 * XREFs of sub_140A4EB20 @ 0x140A4EB20
 * Callers:
 *     <none>
 * Callees:
 *     sub_14038D480 @ 0x14038D480 (sub_14038D480.c)
 *     sub_14038D4BC @ 0x14038D4BC (sub_14038D4BC.c)
 *     sub_14038D91C @ 0x14038D91C (sub_14038D91C.c)
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 *     sub_14038DF04 @ 0x14038DF04 (sub_14038DF04.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A4E6D4 @ 0x140A4E6D4 (sub_140A4E6D4.c)
 *     sub_140A4F0DC @ 0x140A4F0DC (sub_140A4F0DC.c)
 */

void __fastcall sub_140A4EB20(PVOID MemoryMap)
{
  unsigned int i; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  void *v8; // r8

  if ( MemoryMap )
  {
    if ( dword_140C4DF38 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)((unsigned __int64)(unsigned int)qword_140C4DF40 >> 12),
        (unsigned __int64)(unsigned int)dword_140C4DF38 >> 12,
        0x6D6C6168u);
    if ( dword_140C4E0F8 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)((unsigned __int64)(unsigned int)qword_140C4E100 >> 12),
        (unsigned __int64)(unsigned int)dword_140C4E0F8 >> 12,
        0x6D6C6168u);
    if ( dword_140C4E018 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)(qword_140C4E020 >> 12),
        (unsigned __int64)(unsigned int)dword_140C4E018 >> 12,
        0x6D6C6168u);
    if ( dword_140C4E1D8 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)(qword_140C4E1E0 >> 12),
        (unsigned __int64)(unsigned int)dword_140C4E1D8 >> 12,
        0x6D6C6168u);
    sub_14038D4BC(MemoryMap);
    sub_140A4E6D4(MemoryMap);
    sub_14038DF04(MemoryMap);
    sub_14038D91C(MemoryMap);
  }
  else
  {
    sub_140A4F0DC();
    sub_14038D91C(0LL);
    sub_140A4E6D4(0LL);
    sub_14038DF04(0LL);
    PoSetHiberRange(0LL, 0x10000u, qword_140C4ACA8, 0x1000uLL, 0x746C6168u);
    PoSetHiberRange(0LL, 0x10000u, sub_140A4EB20, 0LL, 0x746C6168u);
    for ( i = 0; i < dword_140C4BF48; ++i )
    {
      v7 = qword_140C4BF40 + ((unsigned __int64)i << 6);
      v8 = *(void **)(v7 + 48);
      if ( v8 )
        PoSetHiberRange(0LL, 0x10000u, v8, *(unsigned int *)(v7 + 56), 0x456C6148u);
    }
    if ( qword_140C54988 )
      PoSetHiberRange(0LL, 0x10000u, qword_140C54988, 0x3CCuLL, 0x746C6168u);
    if ( qword_140C54978 )
      PoSetHiberRange(0LL, 0x10000u, qword_140C54978, 0x3CCuLL, 0x746C6168u);
    PshedMarkHiberPhase();
    PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(qword_140C54C18 + 8), 0LL, 0x636C6168u);
    sub_14042A5E0(v4, v3);
    PoSetHiberRange(0LL, 0x10000u, off_140C01E10, 0LL, 0x636C6168u);
    sub_14042A5E0(v6, v5);
    if ( qword_140C4ABE0 )
      PoSetHiberRange(0LL, 0x10000u, qword_140C4ABE0, 0LL, 0x636C6168u);
    if ( qword_140C4ABD8 )
      PoSetHiberRange(0LL, 0x10000u, qword_140C4ABD8, (unsigned int)Length, 0x636C6168u);
    sub_14038D480(0LL);
    byte_140C547D1 = byte_140C4C688;
    if ( byte_140C4C688 )
      byte_140C4C688 = 0;
  }
}
