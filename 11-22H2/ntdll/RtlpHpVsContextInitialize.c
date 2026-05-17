/*
 * XREFs of RtlpHpVsContextInitialize @ 0x180066AA8
 * Callers:
 *     RtlpHpHeapCreate @ 0x180066018 (RtlpHpHeapCreate.c)
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

void __fastcall RtlpHpVsContextInitialize(unsigned __int64 a1, __int64 a2, __int128 *a3, int a4, int a5, _DWORD *a6)
{
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 i; // rcx
  __int64 v13; // rax

  memset_thunk_772440563353939046((void *)a1, 0, 0xC0uLL);
  v10 = *a3;
  *(_DWORD *)(a1 + 8) = a4;
  v11 = a3[1];
  *(_OWORD *)(a1 + 136) = v10;
  *(_QWORD *)(a1 + 128) = a2 ^ a1;
  *(_QWORD *)&v10 = *((_QWORD *)a3 + 4);
  *(_OWORD *)(a1 + 152) = v11;
  *(_QWORD *)(a1 + 168) = v10;
  *(_DWORD *)(a1 + 176) = *a6;
  for ( i = 0LL; i < 4; ++i )
    *(_QWORD *)(a1 + 8 * i + 136) ^= RtlpHpHeapGlobals ^ a1;
  v13 = *(_QWORD *)(a1 + 168);
  if ( v13 )
    *(_QWORD *)(a1 + 168) = a1 ^ RtlpHpHeapGlobals ^ v13;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_OWORD *)(a1 + 64) = 0LL;
  RtlInitializeSListHead((PSLIST_HEADER)(a1 + 64));
}
