/*
 * XREFs of sub_1800C50FC @ 0x1800C50FC
 * Callers:
 *     sub_1800C530C @ 0x1800C530C (sub_1800C530C.c)
 * Callees:
 *     atexit @ 0x18000B978 (atexit.c)
 *     sub_18000C548 @ 0x18000C548 (sub_18000C548.c)
 *     sub_18000C5B0 @ 0x18000C5B0 (sub_18000C5B0.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 */

// Hidden C++ exception states: #wind=8
__int64 *sub_1800C50FC()
{
  if ( dword_1801FB1B0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C5B0(&dword_1801FB1B0);
    if ( dword_1801FB1B0 == -1 )
    {
      sub_180012190(qword_1801F6B20, "DepthOnly", 9uLL);
      qword_1801F6B50 = 0LL;
      qword_1801F6B58 = 15LL;
      byte_1801F6B40 = 0;
      sub_180012190((__int64 *)&byte_1801F6B40, "Diagnostics", 0xBuLL);
      qword_1801F6B70 = 0LL;
      qword_1801F6B78 = 15LL;
      byte_1801F6B60 = 0;
      sub_180012190((__int64 *)&byte_1801F6B60, "Background", 0xAuLL);
      qword_1801F6B90 = 0LL;
      qword_1801F6B98 = 15LL;
      byte_1801F6B80 = 0;
      sub_180012190((__int64 *)&byte_1801F6B80, "AlphaMask", 9uLL);
      qword_1801F6BB0 = 0LL;
      qword_1801F6BB8 = 15LL;
      byte_1801F6BA0 = 0;
      sub_180012190((__int64 *)&byte_1801F6BA0, "AlphaBlend", 0xAuLL);
      qword_1801F6BD0 = 0LL;
      qword_1801F6BD8 = 15LL;
      byte_1801F6BC0 = 0;
      sub_180012190((__int64 *)&byte_1801F6BC0, "Skinning", 8uLL);
      qword_1801F6BF0 = 0LL;
      qword_1801F6BF8 = 15LL;
      byte_1801F6BE0 = 0;
      sub_180012190((__int64 *)&byte_1801F6BE0, "DepthToColor", 0xCuLL);
      qword_1801F6C10 = 0LL;
      qword_1801F6C18 = 15LL;
      byte_1801F6C00 = 0;
      sub_180012190((__int64 *)&byte_1801F6C00, "StochasticTransparency", 0x16uLL);
      qword_1801F6C30 = 0LL;
      qword_1801F6C38 = 15LL;
      byte_1801F6C20 = 0;
      sub_180012190((__int64 *)&byte_1801F6C20, "GLTFMaterial", 0xCuLL);
      atexit(sub_18011BA80);
      sub_18000C548(&dword_1801FB1B0);
    }
  }
  return qword_1801F6B20;
}
