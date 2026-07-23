/*
 * XREFs of sub_1402AAB50 @ 0x1402AAB50
 * Callers:
 *     sub_1404186A0 @ 0x1404186A0 (sub_1404186A0.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406C66B0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x1406C6AF0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406E3F70 (NtWriteFileGather.c)
 *     NtLockFile @ 0x14071D220 (NtLockFile.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 *     sub_1407308F0 @ 0x1407308F0 (sub_1407308F0.c)
 *     sub_14073A450 @ 0x14073A450 (sub_14073A450.c)
 *     sub_1407563A0 @ 0x1407563A0 (sub_1407563A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402AAB50(unsigned int **a1, __int64 *a2, char a3)
{
  unsigned int *v4; // rcx
  __int64 result; // rax
  __int16 v6; // r11
  unsigned int *v7; // rcx
  __int64 v8; // r10

  v4 = *a1;
  result = *((_QWORD *)KeGetCurrentThread() + 23);
  if ( *(_QWORD *)(result + 1408) )
  {
    v6 = *(_WORD *)(result + 2412);
    result = 332LL;
    if ( v6 == 332 || (result = 452LL, v6 == 452) )
    {
      if ( !a3 )
      {
        v7 = (unsigned int *)*v4;
        v8 = *a2 | 1;
        result = *v7;
        *v7 = result;
        *a1 = v7;
        *a2 = v8;
      }
    }
  }
  return result;
}
