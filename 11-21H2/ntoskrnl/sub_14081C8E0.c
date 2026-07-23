/*
 * XREFs of sub_14081C8E0 @ 0x14081C8E0
 * Callers:
 *     sub_1407EF190 @ 0x1407EF190 (sub_1407EF190.c)
 * Callees:
 *     sub_1407EF430 @ 0x1407EF430 (sub_1407EF430.c)
 */

__int64 __fastcall sub_14081C8E0(unsigned int a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  char v4; // r10
  unsigned int v5; // edx

  *a4 = 256;
  v4 = 0;
  *(_DWORD *)a3 = 0;
  if ( (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                          * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                        - *(_QWORD *)(a2 + 8))
     / 0x3E8 >= (unsigned int)dword_140C1F370
    && dword_140C1F370
    || !*(_DWORD *)(a2 + 32) )
  {
    *(_DWORD *)(a3 + 4) = 0;
    v5 = 2;
    v4 = 1;
  }
  else
  {
    v5 = 0;
    *(_DWORD *)(a3 + 4) = dword_140C1F370;
  }
  *(_BYTE *)(a3 + 8) = v4;
  return sub_1407EF430(a1, v5);
}
