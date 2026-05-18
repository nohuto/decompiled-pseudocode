/*
 * XREFs of sub_18000C5B0 @ 0x18000C5B0
 * Callers:
 *     sub_18001E8E4 @ 0x18001E8E4 (sub_18001E8E4.c)
 *     sub_18001E99C @ 0x18001E99C (sub_18001E99C.c)
 *     sub_18001EA64 @ 0x18001EA64 (sub_18001EA64.c)
 *     sub_18001EB1C @ 0x18001EB1C (sub_18001EB1C.c)
 *     sub_18001EBA0 @ 0x18001EBA0 (sub_18001EBA0.c)
 *     sub_180088100 @ 0x180088100 (sub_180088100.c)
 *     sub_1800AB580 @ 0x1800AB580 (sub_1800AB580.c)
 *     sub_1800B8258 @ 0x1800B8258 (sub_1800B8258.c)
 *     sub_1800B83D0 @ 0x1800B83D0 (sub_1800B83D0.c)
 *     sub_1800BA85C @ 0x1800BA85C (sub_1800BA85C.c)
 *     sub_1800BA94C @ 0x1800BA94C (sub_1800BA94C.c)
 *     sub_1800BAAC4 @ 0x1800BAAC4 (sub_1800BAAC4.c)
 *     sub_1800BAB48 @ 0x1800BAB48 (sub_1800BAB48.c)
 *     sub_1800BB174 @ 0x1800BB174 (sub_1800BB174.c)
 *     sub_1800C2234 @ 0x1800C2234 (sub_1800C2234.c)
 *     sub_1800C24AC @ 0x1800C24AC (sub_1800C24AC.c)
 *     sub_1800C2530 @ 0x1800C2530 (sub_1800C2530.c)
 *     sub_1800C2848 @ 0x1800C2848 (sub_1800C2848.c)
 *     sub_1800C2990 @ 0x1800C2990 (sub_1800C2990.c)
 *     sub_1800C50FC @ 0x1800C50FC (sub_1800C50FC.c)
 *     sub_1800C530C @ 0x1800C530C (sub_1800C530C.c)
 *     sub_1800EC90C @ 0x1800EC90C (sub_1800EC90C.c)
 * Callees:
 *     sub_18000C674 @ 0x18000C674 (sub_18000C674.c)
 */

void __fastcall sub_18000C5B0(_DWORD *a1)
{
  EnterCriticalSection(&CriticalSection);
  while ( 1 )
  {
    if ( !*a1 )
    {
      *a1 = -1;
      goto LABEL_7;
    }
    if ( *a1 != -1 )
      break;
    sub_18000C674(0x64u);
  }
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex) + 16LL) = dword_1801F4B30;
LABEL_7:
  LeaveCriticalSection(&CriticalSection);
}
