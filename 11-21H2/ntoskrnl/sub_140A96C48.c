/*
 * XREFs of sub_140A96C48 @ 0x140A96C48
 * Callers:
 *     sub_140A90660 @ 0x140A90660 (sub_140A90660.c)
 *     sub_140A96B0C @ 0x140A96B0C (sub_140A96B0C.c)
 *     sub_140AA0000 @ 0x140AA0000 (sub_140AA0000.c)
 *     sub_140AA00D0 @ 0x140AA00D0 (sub_140AA00D0.c)
 * Callees:
 *     <none>
 */

__int64 sub_140A96C48()
{
  if ( dword_140D57604 )
    return 1LL;
  if ( (MEMORY[0xFFFFF78000000014] - stru_140D06BB8.QuadPart) / 0x2710uLL <= qword_140D57760 )
    ++dword_140D57824;
  else
    dword_140D57604 = 1;
  return (unsigned int)dword_140D57604;
}
