/*
 * XREFs of RtlpHpLfhSubsegmentInitialize @ 0x180041704
 * Callers:
 *     RtlpHpLfhSubsegmentCreate @ 0x180041414 (RtlpHpLfhSubsegmentCreate.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue32 @ 0x180041C90 (RtlpHeapGenerateRandomValue32.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentInitialize(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  int v7; // r10d
  unsigned int v9; // edi
  unsigned int v10; // r15d
  unsigned int v11; // ebp
  unsigned int v12; // eax
  unsigned __int64 v13; // r14
  __int64 v14; // rcx
  _WORD *v15; // rcx
  _WORD *v16; // rax
  _WORD *v17; // rdi
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // rcx
  __int16 HeapData_high; // bx
  unsigned __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 result; // rax
  unsigned int v28; // edi
  int v29; // [rsp+68h] [rbp+10h]
  unsigned int v30; // [rsp+70h] [rbp+18h]

  v7 = a2 / a3;
  *(_OWORD *)a1 = 0LL;
  LOWORD(v29) = a4;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  v9 = (8 * (a2 - 2 * (a2 / a3)) - 384) / (8 * a4 + 2);
  v30 = (2 * (a2 / a3 + 4 * (((unsigned __int64)(2 * v9) + 63) >> 6)) + 63) & 0xFFFFFFF0;
  v10 = (a2 - v30) / a4;
  if ( v9 < v10 )
    v10 = (8 * (a2 - 2 * (a2 / a3)) - 384) / (8 * a4 + 2);
  v11 = (unsigned int)a1 >> 12;
  HIWORD(v29) = (2 * (a2 / a3 + 4 * (((unsigned __int64)(2 * v9) + 63) >> 6)) + 63) & 0xFFF0;
  *(_DWORD *)(a1 + 40) = v29 ^ qword_180187F48 ^ ((unsigned int)a1 >> 12);
  _BitScanForward(&v12, a3);
  *(_BYTE *)(a1 + 45) = v7;
  *(_BYTE *)(a1 + 44) = v12;
  v13 = 2 * v10;
  *(_WORD *)(a1 + 32) = v10;
  v14 = (unsigned __int16)(8 * (((v13 + 63) >> 6) + 6));
  *(_WORD *)(a1 + 46) = v14;
  v15 = (_WORD *)(a1 + v14);
  *(_WORD *)(a1 + 34) = v10;
  *(_BYTE *)(a1 + 38) = 2;
  v16 = &v15[(unsigned __int8)v7];
  *v15 = 1;
  v17 = v15 + 1;
  v18 = (2 * (unsigned __int64)(unsigned __int8)v7 - 2 + 1) >> 1;
  if ( v17 > v16 )
    v18 = 0LL;
  if ( v18 )
  {
    while ( v18 )
    {
      *v17++ = -1;
      --v18;
    }
  }
  memset_thunk_772440563353939046((void *)(a1 + 48), 0, (v13 + 7) >> 3);
  v21 = (2 * (_BYTE)v10) & 0x3F;
  if ( ((2 * (_BYTE)v10) & 0x3F) != 0 )
    *(_QWORD *)(a1 + 8 * (v13 >> 6) + 48) |= ~((1LL << v21) - 1);
  if ( a2 > 0x1000 && (*(_BYTE *)(a5 + 62) & 1) != 0 )
  {
    v20 = v30;
    v19 = a4 - 1;
    if ( ((unsigned int)v19 & a4) != 0 )
    {
      v28 = 4096;
      do
      {
        v21 = v28 - v30;
        v19 = (v28 - v30) % a4;
        if ( (_DWORD)v19 )
        {
          v19 = (unsigned int)v21 % a4;
          v21 = 2 * ((unsigned int)v21 / a4);
          _bittestandset64((signed __int64 *)(a1 + 48), v21);
          --*(_WORD *)(a1 + 32);
          --*(_WORD *)(a1 + 34);
          ++*(_BYTE *)(a1 + 39);
        }
        v28 += 4096;
      }
      while ( v28 < a2 );
    }
    else
    {
      v21 = (unsigned __int16)v30 - ((unsigned int)v19 & ((unsigned __int16)v30 + a4 - 1));
      if ( (_DWORD)v21 + a4 - 1 + a4 * v10 != a2 )
        __int2c();
      HIWORD(v29) = v30 - ((a4 - 1) & (v30 + a4 - 1)) + a4 - 1;
      *(_DWORD *)(a1 + 40) = v29 ^ qword_180187F48 ^ v11;
    }
  }
  HeapData_high = HIWORD(NtCurrentTeb()->HeapData);
  v23 = (unsigned __int64)(unsigned int)RtlpHeapGenerateRandomValue32(v21, v19, v20) << 32;
  result = (v23 | (unsigned int)RtlpHeapGenerateRandomValue32(v25, v24, v26)) & 0x7F7F7F7F7F7F7F7FLL;
  *(_QWORD *)&RtlpLowFragHeapRandomData[8 * ((unsigned __int8)HeapData_high >> 3)] = result;
  return result;
}
