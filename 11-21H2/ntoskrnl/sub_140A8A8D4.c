/*
 * XREFs of sub_140A8A8D4 @ 0x140A8A8D4
 * Callers:
 *     sub_1402D5CA8 @ 0x1402D5CA8 (sub_1402D5CA8.c)
 *     sub_140658DCC @ 0x140658DCC (sub_140658DCC.c)
 *     sub_1406C7B5C @ 0x1406C7B5C (sub_1406C7B5C.c)
 *     NtUnlockFile @ 0x14071CD90 (NtUnlockFile.c)
 *     NtLockFile @ 0x14071D220 (NtLockFile.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 *     sub_14072A9B0 @ 0x14072A9B0 (sub_14072A9B0.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     sub_14072E9E0 @ 0x14072E9E0 (sub_14072E9E0.c)
 *     sub_1407308F0 @ 0x1407308F0 (sub_1407308F0.c)
 *     sub_14073A450 @ 0x14073A450 (sub_14073A450.c)
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     sub_1402ABBD0 @ 0x1402ABBD0 (sub_1402ABBD0.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

PSLIST_ENTRY __fastcall sub_140A8A8D4(unsigned __int8 *a1, ULONG_PTR a2, __int64 a3)
{
  if ( (dword_140C29FC0 & 0x10) != 0 && !sub_1402ABBD0() )
    sub_140A8C924(0xC4u, 0xC3uLL, a2, 0LL, 0LL);
  if ( (dword_140C29FC0 & 0x10) != 0 && *a1 != KeGetCurrentIrql() )
    sub_140A8C924(0xC9u, 0x11uLL, a2, *a1, KeGetCurrentIrql());
  if ( (dword_140C29FC0 & 0x10) != 0 && *((_DWORD *)a1 + 1) != *((_DWORD *)KeGetCurrentThread() + 121) )
    sub_140A8C924(0xC4u, 0xC6uLL, a2, *((unsigned int *)KeGetCurrentThread() + 121), *((unsigned int *)a1 + 1));
  return sub_140203D88((__int64)&unk_140D59140, (_SLIST_ENTRY *)a1, a3);
}
