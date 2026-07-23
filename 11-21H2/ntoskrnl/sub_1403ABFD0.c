/*
 * XREFs of sub_1403ABFD0 @ 0x1403ABFD0
 * Callers:
 *     sub_1403ABB10 @ 0x1403ABB10 (sub_1403ABB10.c)
 * Callees:
 *     sub_1403AC3AC @ 0x1403AC3AC (sub_1403AC3AC.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

struct _KPRCB *__fastcall sub_1403ABFD0(__int64 a1, __int64 a2, unsigned int a3, struct _KPRCB **a4)
{
  struct _KPRCB *result; // rax
  unsigned int v5; // r14d
  unsigned int v6; // r10d
  __int64 v9; // r13
  __int64 v10; // r12
  unsigned int *v11; // rsi
  struct _KPRCB *v12; // r8
  _DWORD *v13; // rbx
  __int64 v14; // r8
  unsigned int v15; // edi
  unsigned int v16; // ecx
  char v17; // r9
  unsigned int v18; // eax
  int v19; // r8d
  char v20; // al
  int v21; // eax
  unsigned int v22; // ebx
  int v23; // eax
  int v24; // r9d
  char v25; // al
  unsigned int v26; // eax
  struct _KPRCB *v27; // rcx
  unsigned int v28; // eax
  unsigned int v29; // eax
  __int64 Src; // [rsp+20h] [rbp-48h] BYREF

  result = KeGetCurrentPrcb();
  v5 = 0;
  v6 = a3;
  Src = 0LL;
  v9 = a3;
  v10 = *((_QWORD *)result + 4309);
  v11 = *(unsigned int **)(v10 + 8LL * a3 + 392);
  if ( v11 )
  {
    v12 = *a4;
    v13 = v11 + 6;
    if ( *v11 )
    {
      v14 = (__int64)v12 - *((_QWORD *)v11 + 1);
    }
    else
    {
      v29 = MEMORY[0xFFFFF78000000320];
      *((_QWORD *)v11 + 1) = v12;
      *((_QWORD *)v11 + 2) = v12;
      v11[1] = v29;
      *v11 = 104;
      memset(v11 + 6, 0, 0x40uLL);
      v6 = a3;
      v14 = 0LL;
    }
    v15 = *(_DWORD *)(a1 + 1232);
    v16 = 0;
    if ( v15 )
    {
      while ( *v13 != v15 )
      {
        if ( !*v13 )
        {
          v11[v16 + 6] = v15;
          *((_BYTE *)v11 + v16 + 88) = *(_BYTE *)(a1 + 563);
          break;
        }
        ++v16;
        ++v13;
        if ( v16 >= 0x10 )
          break;
      }
    }
    if ( v16 == 16
      || MEMORY[0xFFFFF78000000320] - v11[1] > 0x1F4
      || (unsigned __int64)*v11 + 8 > 0x400
      || v14 > 0x40000000
      || *(_BYTE *)(v10 + v9 + 384) )
    {
      sub_1403AC3AC(v11, v6, v14);
      v27 = *a4;
      v28 = MEMORY[0xFFFFF78000000320];
      *((_QWORD *)v11 + 1) = *a4;
      *((_QWORD *)v11 + 2) = v27;
      v11[1] = v28;
      *v11 = 104;
      memset(v11 + 6, 0, 0x40uLL);
      *(_BYTE *)(v10 + v9 + 384) = 0;
      v14 = 0LL;
      v11[6] = v15;
      v16 = 0;
    }
    if ( v15 )
    {
      if ( *(_DWORD *)(a2 + 1232) )
        v5 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a2 + 436);
      v17 = *(_BYTE *)(a1 + 195);
      v18 = v17 - *((char *)v11 + v16 + 88);
      if ( v5 > 1 || v18 > 7 || v14 >= 0x20000 )
      {
        LODWORD(Src) = (4 * v14) | 3;
        v23 = 0x1FFFF;
        if ( v5 < 0x1FFFF )
          v23 = v5;
        v24 = (32 * v23) | v17 & 0x1F;
        v25 = *(_BYTE *)(a1 + 388);
        HIDWORD(Src) = (WORD2(Src) ^ ((unsigned __int8)v16 ^ BYTE4(Src)) & 0xF) & 0x3FF | (v24 << 10);
        if ( v25 == 5 )
          v26 = (WORD2(Src) ^ (unsigned __int16)(16 * *(unsigned __int8 *)(a1 + 643))) & 0x3F0 ^ HIDWORD(Src);
        else
          v26 = (16 * *(unsigned __int8 *)(a1 + 388) - 353) & 0x3F0 | HIDWORD(Src) & 0xFFFFFC0F;
        HIDWORD(Src) = v26;
        v22 = 8;
      }
      else
      {
        v19 = v18 & 7 | ((_DWORD)v14 << 9);
        v20 = *(_BYTE *)(a1 + 388);
        LODWORD(Src) = (4 * (v16 & 0xF | (16 * v19))) | 2;
        if ( v20 == 5 )
          v21 = ((unsigned __int16)Src ^ (unsigned __int16)(*(unsigned __int8 *)(a1 + 643) << 9)) & 0x7E00 ^ Src;
        else
          v21 = ((*(unsigned __int8 *)(a1 + 388) << 9) - 11265) & 0x7E00 | Src & 0xFFFF81FF;
        LODWORD(Src) = v21;
        v22 = 4;
      }
    }
    else if ( v14 >= 0x4000 )
    {
      v22 = 4;
      LODWORD(Src) = (4 * v14) | 1;
    }
    else
    {
      v22 = 2;
      LOWORD(Src) = 4 * v14;
    }
    memmove((char *)v11 + *v11, &Src, v22);
    *v11 += v22;
    result = *a4;
    *((_QWORD *)v11 + 1) = *a4;
  }
  return result;
}
