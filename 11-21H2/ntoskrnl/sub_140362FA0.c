/*
 * XREFs of sub_140362FA0 @ 0x140362FA0
 * Callers:
 *     sub_140362C48 @ 0x140362C48 (sub_140362C48.c)
 * Callees:
 *     sub_1403631E0 @ 0x1403631E0 (sub_1403631E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140362FA0(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  int v8; // r10d
  unsigned int v9; // edi
  int v10; // r13d
  unsigned int v11; // r15d
  unsigned int v12; // ebp
  unsigned int v13; // eax
  __int64 v14; // rcx
  _WORD *v15; // rcx
  _WORD *v16; // rax
  _WORD *v17; // rdi
  unsigned __int64 v18; // rcx
  signed __int64 *v19; // rdi
  unsigned int v20; // r8d
  __int16 v21; // di
  __int64 result; // rax
  int v23; // [rsp+58h] [rbp+10h]

  *(_OWORD *)a1 = 0LL;
  LOWORD(v23) = a4;
  v8 = a2 / a3;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  v9 = (8 * (a2 - 2 * (a2 / a3)) - 384) / (8 * a4 + 2);
  v10 = (2 * (a2 / a3 + 4 * (((unsigned __int64)(2 * v9) + 63) >> 6)) + 63) & 0xFFFFFFF0;
  v11 = (a2 - v10) / a4;
  if ( v9 < v11 )
    v11 = (8 * (a2 - 2 * (a2 / a3)) - 384) / (8 * a4 + 2);
  v12 = (unsigned int)a1 >> 12;
  HIWORD(v23) = (2 * (a2 / a3 + 4 * (((unsigned __int64)(2 * v9) + 63) >> 6)) + 63) & 0xFFF0;
  *(_DWORD *)(a1 + 40) = v23 ^ qword_140C5A5C8 ^ ((unsigned int)a1 >> 12);
  _BitScanForward(&v13, a3);
  *(_BYTE *)(a1 + 45) = v8;
  *(_BYTE *)(a1 + 44) = v13;
  *(_WORD *)(a1 + 32) = v11;
  v14 = (unsigned __int16)(8 * ((((unsigned __int64)(2 * v11) + 63) >> 6) + 6));
  *(_WORD *)(a1 + 46) = v14;
  v15 = (_WORD *)(a1 + v14);
  *(_WORD *)(a1 + 34) = v11;
  *(_BYTE *)(a1 + 38) = 2;
  v16 = &v15[(unsigned __int8)v8];
  v17 = v15 + 1;
  *v15 = 1;
  v18 = (2 * (unsigned __int64)(unsigned __int8)v8 - 2 + 1) >> 1;
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
  v19 = (signed __int64 *)(a1 + 48);
  memset((void *)(a1 + 48), 0, ((unsigned __int64)(2 * v11) + 7) >> 3);
  if ( ((2 * (_BYTE)v11) & 0x3F) != 0 )
    v19[(unsigned __int64)(2 * v11) >> 6] |= ~((1LL << ((2 * v11) & 0x3F)) - 1);
  if ( a2 > 0x1000 && (*(_BYTE *)(a5 + 62) & 1) != 0 )
  {
    if ( ((a4 - 1) & a4) != 0 )
    {
      v20 = 4096;
      do
      {
        if ( (v20 - v10) % a4 )
        {
          _bittestandset64(v19, 2 * ((v20 - v10) / a4));
          --*(_WORD *)(a1 + 32);
          --*(_WORD *)(a1 + 34);
          ++*(_BYTE *)(a1 + 39);
        }
        v20 += 4096;
      }
      while ( v20 < a2 );
    }
    else
    {
      if ( (unsigned __int16)v10 - ((a4 - 1) & ((unsigned __int16)v10 + a4 - 1)) + a4 - 1 + a4 * v11 != a2 )
        __int2c();
      HIWORD(v23) = v10 - ((a4 - 1) & (v10 + a4 - 1)) + a4 - 1;
      *(_DWORD *)(a1 + 40) = v23 ^ qword_140C5A5C8 ^ v12;
    }
  }
  v21 = *((_WORD *)KeGetCurrentThread() + 827);
  result = sub_1403631E0() & 0x7F7F7F7F7F7F7F7FLL;
  *(_QWORD *)&byte_140C1BAE0[8 * ((unsigned __int8)v21 >> 3)] = result;
  return result;
}
