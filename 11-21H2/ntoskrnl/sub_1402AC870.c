/*
 * XREFs of sub_1402AC870 @ 0x1402AC870
 * Callers:
 *     NtReadFileScatter @ 0x1406C6AF0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406E3F70 (NtWriteFileGather.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 *     sub_14073A450 @ 0x14073A450 (sub_14073A450.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1402AC870(__int64 a1, int a2)
{
  _DWORD *v2; // rax

  v2 = *(_DWORD **)(a1 + 208);
  return v2 && (a2 & *v2) != 0;
}
