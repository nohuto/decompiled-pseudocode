/*
 * XREFs of sub_14025E7A8 @ 0x14025E7A8
 * Callers:
 *     sub_140347E10 @ 0x140347E10 (sub_140347E10.c)
 *     sub_140417AE0 @ 0x140417AE0 (sub_140417AE0.c)
 *     sub_1404186A0 @ 0x1404186A0 (sub_1404186A0.c)
 *     ntoskrnl_32 @ 0x14055A160 (ntoskrnl_32.c)
 *     NtCopyFileChunk @ 0x1406588A0 (NtCopyFileChunk.c)
 *     NtReadFileScatter @ 0x1406C6AF0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406E3F70 (NtWriteFileGather.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 *     sub_14073A450 @ 0x14073A450 (sub_14073A450.c)
 *     sub_140938314 @ 0x140938314 (sub_140938314.c)
 *     sub_1409386B8 @ 0x1409386B8 (sub_1409386B8.c)
 *     sub_14093895C @ 0x14093895C (sub_14093895C.c)
 *     ntoskrnl_30 @ 0x140938B40 (ntoskrnl_30.c)
 *     ntoskrnl_31 @ 0x140939090 (ntoskrnl_31.c)
 *     ntoskrnl_37 @ 0x140939130 (ntoskrnl_37.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14025E7A8(int **a1, int *a2)
{
  int v2; // r8d
  int v3; // eax

  v2 = **a1;
  *a2 = v2;
  if ( v2 == -1073741818 )
  {
    if ( (unsigned int)(*a1)[6] < 3 )
      return 1LL;
    v2 = (*a1)[12];
    *a2 = v2;
  }
  v3 = *a2;
  if ( v2 == -2147483646 )
    v3 = -1073741115;
  *a2 = v3;
  return 1LL;
}
