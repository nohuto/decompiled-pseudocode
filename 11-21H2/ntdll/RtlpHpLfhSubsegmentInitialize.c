/*
 * XREFs of RtlpHpLfhSubsegmentInitialize @ 0x18002D8DC
 * Callers:
 *     RtlpHpLfhSubsegmentCreate @ 0x18002D268 (RtlpHpLfhSubsegmentCreate.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue32 @ 0x18002DAA0 (RtlpHeapGenerateRandomValue32.c)
 *     memset @ 0x1800AAE00 (memset.c)
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
  int v10; // r13d
  unsigned int v11; // r15d
  unsigned int v12; // ebp
  unsigned int v13; // eax
  unsigned __int64 v14; // r14
  __int64 v15; // rcx
  _WORD *v16; // rcx
  _WORD *v17; // rax
  _WORD *v18; // rdi
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int64 v22; // rcx
  __int16 HeapData_high; // bx
  unsigned __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 result; // rax
  int v29; // [rsp+68h] [rbp+10h]

  v7 = a2 / a3;
  *(_OWORD *)a1 = 0LL;
  LOWORD(v29) = a4;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  v9 = (8 * (a2 - 2 * (a2 / a3)) - 384) / (8 * a4 + 2);
  v10 = (2 * (a2 / a3 + 4 * (((unsigned __int64)(2 * v9) + 63) >> 6)) + 63) & 0xFFFFFFF0;
  v11 = (a2 - v10) / a4;
  if ( v9 < v11 )
    v11 = (8 * (a2 - 2 * (a2 / a3)) - 384) / (8 * a4 + 2);
  v12 = (unsigned int)a1 >> 12;
  HIWORD(v29) = (2 * (a2 / a3 + 4 * (((unsigned __int64)(2 * v9) + 63) >> 6)) + 63) & 0xFFF0;
  *(_DWORD *)(a1 + 40) = v29 ^ qword_18017AC08 ^ ((unsigned int)a1 >> 12);
  _BitScanForward(&v13, a3);
  *(_BYTE *)(a1 + 45) = v7;
  *(_BYTE *)(a1 + 44) = v13;
  v14 = 2 * v11;
  *(_WORD *)(a1 + 32) = v11;
  v15 = (unsigned __int16)(8 * (((v14 + 63) >> 6) + 6));
  *(_WORD *)(a1 + 46) = v15;
  v16 = (_WORD *)(a1 + v15);
  *(_WORD *)(a1 + 34) = v11;
  *(_BYTE *)(a1 + 38) = 2;
  v17 = &v16[(unsigned __int8)v7];
  v18 = v16 + 1;
  *v16 = 1;
  v19 = (2 * (unsigned __int64)(unsigned __int8)v7 - 2 + 1) >> 1;
  if ( v18 > v17 )
    v19 = 0LL;
  if ( v19 )
  {
    while ( v19 )
    {
      *v18++ = -1;
      --v19;
    }
  }
  memset((void *)(a1 + 48), 0, (v14 + 7) >> 3);
  v22 = (2 * (_BYTE)v11) & 0x3F;
  if ( ((2 * (_BYTE)v11) & 0x3F) != 0 )
    *(_QWORD *)(a1 + 8 * (v14 >> 6) + 48) |= ~((1LL << v22) - 1);
  if ( a2 > 0x1000 && (*(_BYTE *)(a5 + 62) & 1) != 0 )
  {
    v20 = a4 - 1;
    if ( ((unsigned int)v20 & a4) != 0 )
    {
      LODWORD(v21) = 4096;
      do
      {
        v20 = ((int)v21 - v10) % a4;
        if ( (_DWORD)v20 )
        {
          v22 = 2 * (((int)v21 - v10) / a4);
          _bittestandset64((signed __int64 *)(a1 + 48), v22);
          --*(_WORD *)(a1 + 32);
          --*(_WORD *)(a1 + 34);
          ++*(_BYTE *)(a1 + 39);
        }
        v21 = (unsigned int)(v21 + 4096);
      }
      while ( (unsigned int)v21 < a2 );
    }
    else
    {
      v22 = (unsigned __int16)v10 - ((unsigned int)v20 & ((unsigned __int16)v10 + a4 - 1));
      if ( (_DWORD)v22 + a4 - 1 + a4 * v11 != a2 )
        __int2c();
      HIWORD(v29) = v10 - ((a4 - 1) & (v10 + a4 - 1)) + a4 - 1;
      *(_DWORD *)(a1 + 40) = v29 ^ qword_18017AC08 ^ v12;
    }
  }
  HeapData_high = HIWORD(NtCurrentTeb()->HeapData);
  v24 = (unsigned __int64)(unsigned int)RtlpHeapGenerateRandomValue32(v22, v20, v21) << 32;
  result = (v24 | (unsigned int)RtlpHeapGenerateRandomValue32(v26, v25, v27)) & 0x7F7F7F7F7F7F7F7FLL;
  *(_QWORD *)&RtlpLowFragHeapRandomData[8 * ((unsigned __int8)HeapData_high >> 3)] = result;
  return result;
}
