/*
 * XREFs of sub_1800C2848 @ 0x1800C2848
 * Callers:
 *     sub_1800C2990 @ 0x1800C2990 (sub_1800C2990.c)
 * Callees:
 *     atexit @ 0x18000B978 (atexit.c)
 *     sub_18000C548 @ 0x18000C548 (sub_18000C548.c)
 *     sub_18000C5B0 @ 0x18000C5B0 (sub_18000C5B0.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *sub_1800C2848()
{
  if ( dword_1801FB10C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C5B0(&dword_1801FB10C);
    if ( dword_1801FB10C == -1 )
    {
      sub_180012190(qword_1801F6A80, "DepthOnly", 9uLL);
      qword_1801F6AB0 = 0LL;
      qword_1801F6AB8 = 15LL;
      byte_1801F6AA0 = 0;
      sub_180012190((__int64 *)&byte_1801F6AA0, "Diagnostics", 0xBuLL);
      qword_1801F6AD0 = 0LL;
      qword_1801F6AD8 = 15LL;
      byte_1801F6AC0 = 0;
      sub_180012190((__int64 *)&byte_1801F6AC0, "AlphaMask", 9uLL);
      qword_1801F6AF0 = 0LL;
      qword_1801F6AF8 = 15LL;
      byte_1801F6AE0 = 0;
      sub_180012190((__int64 *)&byte_1801F6AE0, "AlphaBlend", 0xAuLL);
      qword_1801F6B10 = 0LL;
      qword_1801F6B18 = 15LL;
      byte_1801F6B00 = 0;
      sub_180012190((__int64 *)&byte_1801F6B00, "Skinning", 8uLL);
      atexit(sub_18011BA50);
      sub_18000C548(&dword_1801FB10C);
    }
  }
  return qword_1801F6A80;
}
