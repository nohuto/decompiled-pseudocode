/*
 * XREFs of sub_18000C538 @ 0x18000C538
 * Callers:
 *     sub_18001D464 @ 0x18001D464 (sub_18001D464.c)
 *     sub_18001D4F0 @ 0x18001D4F0 (sub_18001D4F0.c)
 *     sub_18001D59C @ 0x18001D59C (sub_18001D59C.c)
 *     sub_18001D614 @ 0x18001D614 (sub_18001D614.c)
 *     sub_18001D698 @ 0x18001D698 (sub_18001D698.c)
 *     sub_18007C218 @ 0x18007C218 (sub_18007C218.c)
 *     sub_18009A6B0 @ 0x18009A6B0 (sub_18009A6B0.c)
 *     sub_1800A57FC @ 0x1800A57FC (sub_1800A57FC.c)
 *     sub_1800A58E8 @ 0x1800A58E8 (sub_1800A58E8.c)
 *     sub_1800A76AC @ 0x1800A76AC (sub_1800A76AC.c)
 *     sub_1800A7754 @ 0x1800A7754 (sub_1800A7754.c)
 *     sub_1800A7840 @ 0x1800A7840 (sub_1800A7840.c)
 *     sub_1800A78BC @ 0x1800A78BC (sub_1800A78BC.c)
 *     sub_1800A7DC0 @ 0x1800A7DC0 (sub_1800A7DC0.c)
 *     sub_1800AF488 @ 0x1800AF488 (sub_1800AF488.c)
 *     sub_1800AF6A0 @ 0x1800AF6A0 (sub_1800AF6A0.c)
 *     sub_1800AF71C @ 0x1800AF71C (sub_1800AF71C.c)
 *     sub_1800AF9D4 @ 0x1800AF9D4 (sub_1800AF9D4.c)
 *     sub_1800AFAA8 @ 0x1800AFAA8 (sub_1800AFAA8.c)
 *     sub_1800B1A0C @ 0x1800B1A0C (sub_1800B1A0C.c)
 *     sub_1800B1B34 @ 0x1800B1B34 (sub_1800B1B34.c)
 *     sub_1800D4D2C @ 0x1800D4D2C (sub_1800D4D2C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000C538(_DWORD *a1)
{
  __int64 v2; // rdx

  EnterCriticalSection(&CriticalSection);
  v2 = (unsigned int)TlsIndex;
  *a1 = ++dword_1801D2B50;
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v2) + 16LL) = dword_1801D2B50;
  LeaveCriticalSection(&CriticalSection);
  return sub_18000C610();
}
