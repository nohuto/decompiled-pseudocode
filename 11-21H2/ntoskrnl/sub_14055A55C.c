/*
 * XREFs of sub_14055A55C @ 0x14055A55C
 * Callers:
 *     NtNotifyChangeDirectoryFileEx @ 0x1406C66B0 (NtNotifyChangeDirectoryFileEx.c)
 *     sub_1407563A0 @ 0x1407563A0 (sub_1407563A0.c)
 *     NtQueryQuotaInformationFile @ 0x140939960 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     sub_14029C5B0 @ 0x14029C5B0 (sub_14029C5B0.c)
 *     sub_140584F10 @ 0x140584F10 (sub_140584F10.c)
 */

__int64 __fastcall sub_14055A55C(_DWORD *a1, char a2, __int64 a3, __int64 a4, unsigned int a5)
{
  bool v7; // zf
  char v8; // dl
  __int64 result; // rax

  v7 = a2 == 0;
  v8 = 1;
  if ( v7 )
    v8 = a2;
  sub_14029C5B0(a1, v8, 1);
  result = (unsigned int)dword_140D06994;
  if ( (dword_140D06994 & 1) != 0 )
    return sub_140584F10(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
