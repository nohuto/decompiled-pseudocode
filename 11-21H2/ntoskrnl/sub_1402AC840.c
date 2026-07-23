/*
 * XREFs of sub_1402AC840 @ 0x1402AC840
 * Callers:
 *     sub_1402AC790 @ 0x1402AC790 (sub_1402AC790.c)
 *     NtCopyFileChunk @ 0x1406588A0 (NtCopyFileChunk.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 *     NtReadFile @ 0x14073A320 (NtReadFile.c)
 * Callees:
 *     sub_1406C9928 @ 0x1406C9928 (sub_1406C9928.c)
 */

bool __fastcall sub_1402AC840(__int64 a1)
{
  _DWORD *v1; // rax

  v1 = *(_DWORD **)(a1 + 208);
  return v1 && (*v1 & 4) != 0 && (unsigned __int8)sub_1406C9928(*((_QWORD *)KeGetCurrentThread() + 23));
}
