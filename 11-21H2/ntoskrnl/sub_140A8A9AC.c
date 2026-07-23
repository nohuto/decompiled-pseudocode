/*
 * XREFs of sub_140A8A9AC @ 0x140A8A9AC
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
 *     sub_1402ABBD0 @ 0x1402ABBD0 (sub_1402ABBD0.c)
 *     sub_140A8AAA4 @ 0x140A8AAA4 (sub_140A8AAA4.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

__int64 sub_140A8A9AC()
{
  if ( !dword_140D575C4 || (dword_140C29FC0 & 0x10) == 0 )
    return 0LL;
  if ( !sub_1402ABBD0() )
    sub_140A8C924(0xC9u, 0xC2uLL, 0LL, 0LL, 0LL);
  return sub_140A8AAA4();
}
