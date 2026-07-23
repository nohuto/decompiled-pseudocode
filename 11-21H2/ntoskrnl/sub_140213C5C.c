/*
 * XREFs of sub_140213C5C @ 0x140213C5C
 * Callers:
 *     sub_140213AC0 @ 0x140213AC0 (sub_140213AC0.c)
 * Callees:
 *     sub_140214F98 @ 0x140214F98 (sub_140214F98.c)
 *     MmUnmapVideoDisplay @ 0x140215660 (MmUnmapVideoDisplay.c)
 *     sub_1403BF310 @ 0x1403BF310 (sub_1403BF310.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 */

char __fastcall sub_140213C5C(__int64 a1, int a2, char *a3, char *a4, void *Buf2)
{
  bool v6; // bl
  unsigned int *v8; // rax
  unsigned int *v9; // rdi
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h] BYREF

  v11 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  if ( a2 != 1128877139 )
    return 0;
  v8 = (unsigned int *)sub_140214F98(a1, 1128877139, a3, a4, (__int64)&NumberOfBytes, (__int64)&v11);
  v9 = v8;
  if ( !v8 )
    return 1;
  v6 = memcmp(v8, Buf2, v8[1]) != 0;
  if ( a1 )
    sub_1403BF310(
      v9,
      (((unsigned __int16)v9 & 0xFFF) + (unsigned __int64)(unsigned int)NumberOfBytes + 4095) >> 12,
      0LL);
  else
    MmUnmapVideoDisplay(v9, (unsigned int)NumberOfBytes);
  return v6;
}
