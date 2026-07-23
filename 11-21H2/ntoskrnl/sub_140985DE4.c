/*
 * XREFs of sub_140985DE4 @ 0x140985DE4
 * Callers:
 *     sub_140986190 @ 0x140986190 (sub_140986190.c)
 * Callees:
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140985DE4(unsigned __int16 *Source2)
{
  unsigned int v1; // ebp
  _OWORD *v2; // rbx
  __int64 v3; // r8
  int v4; // edx
  int v5; // eax
  unsigned __int16 *v6; // r8
  char *v7; // r14
  unsigned __int16 v8; // bp
  unsigned int v9; // esi
  __int64 i; // rax
  unsigned int v11; // edi
  __int64 Pool2; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx

  v1 = 0;
  v2 = Source2;
  v3 = 32LL;
  do
  {
    v4 = Source2[1];
    v5 = *Source2;
    Source2 += 2;
    v1 += v5 ^ v4;
    --v3;
  }
  while ( v3 );
  v6 = (unsigned __int16 *)qword_140C252E0;
  v7 = (char *)qword_140C252E0 + 8;
  v8 = v1 % 0x3FFD;
  LOWORD(v9) = v8;
  for ( i = v8; ; i = (unsigned __int16)v9 )
  {
    LOWORD(v11) = v6[i + 68];
    if ( (_WORD)v11 == 0xFFFF )
      break;
    if ( RtlCompareMemory(
           (const void *)(*(_QWORD *)&v7[8 * ((unsigned __int64)v6[i + 68] >> 10)]
                        + ((unsigned __int64)(v6[i + 68] & 0x3FF) << 7)),
           v2,
           0x80uLL) == 128 )
      return (unsigned __int16)v11;
    v9 = ((unsigned int)(unsigned __int16)v9 + 1) % 0x3FFD;
    if ( (_WORD)v9 == v8 )
      return 16381LL;
    v6 = (unsigned __int16 *)qword_140C252E0;
  }
  if ( *v6 == v6[1] )
  {
    Pool2 = ExAllocatePool2(64LL, 0x20000LL, 1951556175LL);
    if ( !Pool2 )
      return 16381LL;
    v6 = (unsigned __int16 *)qword_140C252E0;
    *((_QWORD *)qword_140C252E0 + ((unsigned __int64)*((unsigned __int16 *)qword_140C252E0 + 1) >> 10) + 1) = Pool2;
    v6[1] += 1024;
  }
  v11 = *v6;
  v14 = (unsigned __int64)(*v6 & 0x3FF) << 7;
  v6[(unsigned __int16)v9 + 68] = v11;
  v15 = *(_QWORD *)&v6[4 * ((unsigned __int64)v11 >> 10) + 4];
  *(_OWORD *)(v15 + v14) = *v2;
  *(_OWORD *)(v15 + v14 + 16) = v2[1];
  *(_OWORD *)(v15 + v14 + 32) = v2[2];
  *(_OWORD *)(v15 + v14 + 48) = v2[3];
  *(_OWORD *)(v15 + v14 + 64) = v2[4];
  *(_OWORD *)(v15 + v14 + 80) = v2[5];
  *(_OWORD *)(v15 + v14 + 96) = v2[6];
  *(_OWORD *)(v15 + v14 + 112) = v2[7];
  ++*v6;
  return (unsigned __int16)v11;
}
