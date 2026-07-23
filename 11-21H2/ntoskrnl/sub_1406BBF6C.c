/*
 * XREFs of sub_1406BBF6C @ 0x1406BBF6C
 * Callers:
 *     sub_1406BBE6C @ 0x1406BBE6C (sub_1406BBE6C.c)
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1406BBF6C(__int64 a1, unsigned int a2)
{
  return !a2 || (*(_DWORD *)(*(_QWORD *)(a1 + 152) + 16LL * a2 + 8) & 8) != 0;
}
