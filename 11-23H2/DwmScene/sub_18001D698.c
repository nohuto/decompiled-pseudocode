/*
 * XREFs of sub_18001D698 @ 0x18001D698
 * Callers:
 *     sub_18001D748 @ 0x18001D748 (sub_18001D748.c)
 * Callees:
 *     sub_18000C538 @ 0x18000C538 (sub_18000C538.c)
 *     sub_18000C5A0 @ 0x18000C5A0 (sub_18000C5A0.c)
 *     sub_180011CA0 @ 0x180011CA0 (sub_180011CA0.c)
 */

__int64 sub_18001D698()
{
  __int64 v0; // rbx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  sub_180011CA0(&v2);
  v0 = v2;
  if ( dword_1801D3DBC > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C5A0(&dword_1801D3DBC);
    if ( dword_1801D3DBC == -1 )
    {
      qword_1801D3DC0 = v0;
      sub_18000C538(&dword_1801D3DBC);
    }
  }
  return (v0 - qword_1801D3DC0) / 1000000;
}
