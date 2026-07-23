/*
 * XREFs of sub_140213AC0 @ 0x140213AC0
 * Callers:
 *     sub_140213A40 @ 0x140213A40 (sub_140213A40.c)
 *     sub_140214F98 @ 0x140214F98 (sub_140214F98.c)
 *     sub_1403B8198 @ 0x1403B8198 (sub_1403B8198.c)
 *     sub_1403BED70 @ 0x1403BED70 (sub_1403BED70.c)
 * Callees:
 *     sub_140213BD4 @ 0x140213BD4 (sub_140213BD4.c)
 *     sub_140213C5C @ 0x140213C5C (sub_140213C5C.c)
 *     sub_140214F98 @ 0x140214F98 (sub_140214F98.c)
 *     MmUnmapVideoDisplay @ 0x140215660 (MmUnmapVideoDisplay.c)
 *     sub_1403BEF40 @ 0x1403BEF40 (sub_1403BEF40.c)
 *     sub_1403BEFA8 @ 0x1403BEFA8 (sub_1403BEFA8.c)
 *     sub_1403BF310 @ 0x1403BF310 (sub_1403BF310.c)
 */

void *__fastcall sub_140213AC0(__int64 a1, unsigned int a2, char *a3, char *a4)
{
  void *Buf2; // rax
  void *v9; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-18h] BYREF
  __int64 v14; // [rsp+38h] [rbp-10h] BYREF

  v14 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  Buf2 = (void *)sub_140213BD4(a2, a3, a4);
  v9 = Buf2;
  if ( !Buf2 || (unsigned __int8)sub_140213C5C(a1, a2, (int)a3, (int)a4, Buf2) )
  {
    v11 = sub_140214F98(a1, a2, a3, a4, (__int64)&NumberOfBytes, (__int64)&v14);
    v9 = (void *)v11;
    if ( v11 )
    {
      v12 = sub_1403BEFA8(a1, v11, v14);
      if ( a1 )
        sub_1403BF310(
          v9,
          (((unsigned __int16)v9 & 0xFFF) + (unsigned __int64)(unsigned int)NumberOfBytes + 4095) >> 12,
          0LL);
      else
        MmUnmapVideoDisplay(v9, (unsigned int)NumberOfBytes);
      if ( v12 )
      {
        sub_1403BEF40(a1, v12);
        return (void *)v12;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return v9;
}
