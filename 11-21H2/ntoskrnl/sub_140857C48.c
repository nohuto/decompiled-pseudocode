/*
 * XREFs of sub_140857C48 @ 0x140857C48
 * Callers:
 *     sub_1407DD6F0 @ 0x1407DD6F0 (sub_1407DD6F0.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140857C48(__int64 a1)
{
  char *Pool2; // rax
  unsigned int v3; // r9d
  unsigned int v4; // edx
  unsigned int v5; // r10d
  __int64 v6; // r11
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  __int64 v10; // r14
  _QWORD *v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // [rsp+48h] [rbp+10h]

  Pool2 = (char *)ExAllocatePool2(64LL, 4096LL, 1716544323LL);
  v3 = 0;
  if ( Pool2 )
  {
    if ( (Pool2 + 256 >= Pool2 ? 0x20 : 0) != 0 )
      memset64(Pool2, a1 | 1, Pool2 + 256 >= Pool2 ? 0x20 : 0);
    v4 = *(_DWORD *)(a1 + 4);
    v5 = 0;
    v6 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
    if ( (v4 & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v10 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          v11 = *(_QWORD **)(v10 + 8LL * v5);
          if ( ((unsigned __int8)v11 & 1) != 0 )
            break;
          *(_QWORD *)(v10 + 8LL * v5) = *v11;
          v13 = v6 & v11[1];
          v12 = (HIBYTE(v13)
               + 13 * (_BYTE)v13
               + 3 * (3 * BYTE1(v13) - BYTE4(v13))
               + 5 * (BYTE6(v13) - 3 * BYTE3(v13) + 3)
               - 7 * BYTE5(v13)
               - 11 * BYTE2(v13)) & 0x1F;
          *v11 = *(_QWORD *)&Pool2[8 * v12];
          *(_QWORD *)&Pool2[8 * v12] = v11;
        }
        v4 = *(_DWORD *)(a1 + 4);
        ++v5;
      }
      while ( v5 < v4 >> 5 );
    }
    *(_QWORD *)(a1 + 8) = Pool2;
    v7 = (_QWORD *)((unsigned __int64)(Pool2 + 263) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_DWORD *)(a1 + 4) = v4 & 0x1F | 0x400;
    v8 = &v7[15 * ((unsigned int)((_DWORD)Pool2 - (_DWORD)v7 + 4096) / 0x78uLL)];
    while ( v7 < v8 )
    {
      *v7 = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = v7;
      v7 += 15;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
