/*
 * XREFs of sub_140989DD4 @ 0x140989DD4
 * Callers:
 *     sub_1407EFD2C @ 0x1407EFD2C (sub_1407EFD2C.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_14036AF00 @ 0x14036AF00 (sub_14036AF00.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140753094 @ 0x140753094 (sub_140753094.c)
 *     sub_1407F01CC @ 0x1407F01CC (sub_1407F01CC.c)
 */

void sub_140989DD4()
{
  PVOID *v0; // rbx
  int v1; // edi
  _BYTE *v2; // rsi
  int v3; // eax
  _DWORD Src[20]; // [rsp+20h] [rbp-58h] BYREF

  sub_140753094(1);
  v0 = (PVOID *)qword_140C242A0;
  byte_140C24524 = 1;
  while ( v0 != &qword_140C242A0 )
  {
    if ( *((_DWORD *)v0 + 26) )
    {
      sub_1407F01CC(*((unsigned int *)v0 + 9));
      v1 = 0;
      v2 = (char *)v0 + 153;
      do
      {
        if ( *v2 )
        {
          memset(Src, 0, 0x48uLL);
          v3 = *((_DWORD *)v0 + 9);
          Src[0] = 16;
          Src[2] = v3;
          Src[3] = v1;
          LOBYTE(Src[4]) = 1;
          sub_14036AF00(Src, 0x48uLL, 0);
        }
        ++v1;
        ++v2;
      }
      while ( v1 < 6 );
    }
    v0 = (PVOID *)*v0;
  }
  sub_1402935D0((ULONG_PTR)&qword_140C24280);
}
