/*
 * XREFs of RtlpHpVsSubsegmentWalk @ 0x18008CA34
 * Callers:
 *     RtlpHpSegWalk @ 0x180063BB0 (RtlpHpSegWalk.c)
 * Callees:
 *     RtlpHpVsChunkSize @ 0x1800632A4 (RtlpHpVsChunkSize.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentWalk(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, _DWORD *a5, int *a6)
{
  unsigned __int64 v8; // rdx
  unsigned __int64 i; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // ecx

  if ( a3 == a2 )
  {
    v8 = a1 + 32;
    for ( i = *(_QWORD *)v8 ^ v8; i != v8; i ^= *(_QWORD *)i )
    {
      if ( i == a2 )
        goto LABEL_5;
    }
    if ( i == a2 )
    {
LABEL_5:
      v10 = a2 + 48;
      goto LABEL_6;
    }
    return 0LL;
  }
  v14 = a3 - 16;
  if ( (*(_BYTE *)(a1 + 176) & 1) != 0 && (a3 & 0xFFF) == 0 )
    v14 = a3 - 32;
  v10 = 16 * (WORD1(RtlpHpHeapGlobals) ^ *(unsigned __int16 *)(v14 + 2) ^ ((unsigned __int64)(unsigned int)v14 >> 16))
      + v14;
LABEL_6:
  v11 = a2 + 16 * (*(unsigned __int16 *)(a2 + 32) + 3LL);
  if ( v10 >= v11 )
    return 0LL;
  while ( ((HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(v10) ^ HIDWORD(*(_QWORD *)v10)) & 0xFF0000) == 0
       || (*(_DWORD *)(v10 + 8) & 0x200) != 0 )
  {
    v10 += 16
         * (WORD1(RtlpHpHeapGlobals) ^ *(unsigned __int16 *)(v10 + 2) ^ ((unsigned __int64)(unsigned int)v10 >> 16));
    if ( v10 >= v11 )
      return 0LL;
  }
  v12 = v10 + 16;
  if ( (*(_BYTE *)(a1 + 176) & 1) != 0 && ((v10 + 32) & 0xFFF) == 0 )
    v12 = v10 + 32;
  v15 = RtlpHpVsChunkSize(a1, v12, HIDWORD(RtlpHpHeapGlobals), a6);
  v16 = *(unsigned __int16 *)(v10 + 2);
  *a4 = v15;
  *a5 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v10) ^ v16) - *(_DWORD *)a4 - 16;
  return v12;
}
