/*
 * XREFs of sub_1407EE888 @ 0x1407EE888
 * Callers:
 *     sub_140752ECC @ 0x140752ECC (sub_140752ECC.c)
 *     sub_1407EE7A0 @ 0x1407EE7A0 (sub_1407EE7A0.c)
 *     sub_1408630F0 @ 0x1408630F0 (sub_1408630F0.c)
 *     sub_140989DA0 @ 0x140989DA0 (sub_140989DA0.c)
 *     sub_140989E98 @ 0x140989E98 (sub_140989E98.c)
 * Callees:
 *     sub_140369A40 @ 0x140369A40 (sub_140369A40.c)
 *     sub_140397BB4 @ 0x140397BB4 (sub_140397BB4.c)
 */

__int64 sub_1407EE888()
{
  int v0; // ecx

  v0 = 8;
  if ( dword_140D3B114 )
    v0 = 10;
  if ( dword_140D3B0A0
    && (!byte_140C24513
     || dword_140D3B1D0 && byte_140C24512
     || byte_140C24511
     || MEMORY[0xFFFFF78000000008] - qword_140C24518 < 10000000 * (unsigned __int64)(unsigned int)dword_140D3B0A0) )
  {
    return sub_140369A40(v0);
  }
  else
  {
    return sub_140397BB4(v0, 0);
  }
}
