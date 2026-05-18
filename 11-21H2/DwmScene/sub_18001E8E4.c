/*
 * XREFs of sub_18001E8E4 @ 0x18001E8E4
 * Callers:
 *     sub_18001E4D4 @ 0x18001E4D4 (sub_18001E4D4.c)
 * Callees:
 *     atexit @ 0x18000B978 (atexit.c)
 *     sub_18000C548 @ 0x18000C548 (sub_18000C548.c)
 *     sub_18000C5B0 @ 0x18000C5B0 (sub_18000C5B0.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *sub_18001E8E4()
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r8
  __int64 *v4; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1801F7F30 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C5B0(&dword_1801F7F30);
    if ( dword_1801F7F30 == -1 )
    {
      v4 = (__int64 *)sub_180011088(0x48uLL);
      sub_18001DE8C(v4, (__int64 *)&v4);
      sub_18001DE8C((__int64 *)(v1 + 8), (__int64 *)&v4);
      sub_18001DE8C((__int64 *)(v2 + 16), (__int64 *)&v4);
      *(_WORD *)(v3 + 24) = 257;
      qword_1801F7F38 = v3;
      atexit(sub_18010DA20);
      sub_18000C548(&dword_1801F7F30);
    }
  }
  return &qword_1801F7F38;
}
