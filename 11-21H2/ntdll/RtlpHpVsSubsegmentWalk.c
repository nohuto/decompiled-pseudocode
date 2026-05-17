/*
 * XREFs of RtlpHpVsSubsegmentWalk @ 0x180057878
 * Callers:
 *     RtlpHpSegWalk @ 0x1800575A8 (RtlpHpSegWalk.c)
 * Callees:
 *     RtlpHpVsChunkSize @ 0x180024460 (RtlpHpVsChunkSize.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentWalk(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, _DWORD *a5, int *a6)
{
  __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // ecx
  unsigned __int64 v15; // rdx
  unsigned __int64 i; // rax

  if ( a3 == a2 )
  {
    v15 = a1 + 32;
    for ( i = *(_QWORD *)v15 ^ v15; i != v15; i ^= *(_QWORD *)i )
    {
      if ( i == a2 )
        goto LABEL_15;
    }
    if ( i == a2 )
    {
LABEL_15:
      v9 = a2 + 48;
      goto LABEL_4;
    }
    return 0LL;
  }
  v8 = a3 - 16;
  if ( (*(_BYTE *)(a1 + 176) & 1) != 0 && (a3 & 0xFFF) == 0 )
    v8 = a3 - 32;
  v9 = 16 * (WORD1(RtlpHpHeapGlobals) ^ *(unsigned __int16 *)(v8 + 2) ^ ((unsigned __int64)(unsigned int)v8 >> 16)) + v8;
LABEL_4:
  v10 = a2 + 16 * (*(unsigned __int16 *)(a2 + 32) + 3LL);
  if ( v9 >= v10 )
    return 0LL;
  while ( ((HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(v9) ^ HIDWORD(*(_QWORD *)v9)) & 0xFF0000) == 0
       || (*(_DWORD *)(v9 + 8) & 0x200) != 0 )
  {
    v9 += 16 * (WORD1(RtlpHpHeapGlobals) ^ *(unsigned __int16 *)(v9 + 2) ^ ((unsigned __int64)(unsigned int)v9 >> 16));
    if ( v9 >= v10 )
      return 0LL;
  }
  v11 = v9 + 16;
  if ( (*(_BYTE *)(a1 + 176) & 1) != 0 && ((v9 + 32) & 0xFFF) == 0 )
    v11 = v9 + 32;
  v12 = RtlpHpVsChunkSize(a1, v11, HIDWORD(RtlpHpHeapGlobals), a6);
  v13 = *(unsigned __int16 *)(v9 + 2);
  *a4 = v12;
  *a5 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v9) ^ v13) - *(_DWORD *)a4 - 16;
  return v11;
}
