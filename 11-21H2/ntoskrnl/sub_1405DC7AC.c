/*
 * XREFs of sub_1405DC7AC @ 0x1405DC7AC
 * Callers:
 *     sub_1402396F0 @ 0x1402396F0 (sub_1402396F0.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14056C2C8 @ 0x14056C2C8 (sub_14056C2C8.c)
 */

__int64 sub_1405DC7AC()
{
  __int64 v0; // r8
  unsigned __int16 *v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // r9

  dword_140C0D000[0] = 2097153;
  memset(&unk_140C0D004, 0, 0x104uLL);
  dword_140C0D330 = 2097153;
  memset(&unk_140C0D334, 0, 0x104uLL);
  if ( dword_140C1CF34 )
  {
    v0 = (unsigned int)dword_140C1CF34;
    v1 = (unsigned __int16 *)(qword_140C1CF38 + 4);
    do
    {
      v2 = *v1;
      v3 = *(_QWORD *)(v1 + 14);
      if ( LOWORD(dword_140C0D000[0]) <= (unsigned __int16)v2 )
      {
        if ( HIWORD(dword_140C0D000[0]) <= (unsigned __int16)v2 )
          goto LABEL_7;
        LOWORD(dword_140C0D000[0]) = v2 + 1;
      }
      *(_QWORD *)&dword_140C0D000[2 * v2 + 2] |= v3;
LABEL_7:
      v4 = *v1;
      v5 = *(_QWORD *)(v1 + 22);
      if ( (unsigned __int16)dword_140C0D330 > (unsigned __int16)v4 )
        goto LABEL_10;
      if ( HIWORD(dword_140C0D330) > (unsigned __int16)v4 )
      {
        LOWORD(dword_140C0D330) = v4 + 1;
LABEL_10:
        qword_140C0D338[v4] |= v5;
      }
      v1 += 168;
      --v0;
    }
    while ( v0 );
  }
  return sub_14056C2C8((char *)asc_140C0B9F0, dword_140C0D000, byte_140C0D440, word_140C0D442);
}
