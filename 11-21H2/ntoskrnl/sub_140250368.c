/*
 * XREFs of sub_140250368 @ 0x140250368
 * Callers:
 *     sub_140205DEC @ 0x140205DEC (sub_140205DEC.c)
 * Callees:
 *     sub_1402508C8 @ 0x1402508C8 (sub_1402508C8.c)
 *     ZwAllocateVirtualMemory @ 0x14041BA60 (ZwAllocateVirtualMemory.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

NTSTATUS __fastcall sub_140250368(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // r14
  ULONG_PTR v8; // rbx
  NTSTATUS result; // eax
  char *v10; // r14
  char *v11; // rsi
  unsigned int v12; // ecx
  char *v13; // rbx
  char *v14; // rsi
  size_t v15; // r15
  unsigned int *v16; // rdx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rax
  unsigned __int16 v19; // r15
  _DWORD *v20; // rdx
  char *v21; // rcx
  unsigned __int64 i; // r8
  int v23; // eax
  ULONG_PTR v24; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+50h] [rbp-48h]
  _DWORD *v27; // [rsp+A8h] [rbp+10h] BYREF
  void *v28; // [rsp+B8h] [rbp+20h] BYREF

  v5 = a1;
  v6 = -380LL;
  if ( !a2[270] )
    v6 = -384LL;
  v7 = *a2 + v6;
  v8 = v7 + *((_QWORD *)a2 + 126);
  v27 = 0LL;
  v24 = v8;
  result = ZwAllocateVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             (PVOID *)&v27,
             *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1496LL) - 1LL,
             &v24,
             0x3000u,
             4u);
  if ( result >= 0 )
  {
    v28 = v27 + 176;
    v10 = (char *)v27 + v7;
    *v27 = v8;
    v27[1] = v8;
    v27[2] = a2[2];
    v27[3] = a2[3];
    v27[4] = a2[4];
    v27[5] = a2[6];
    v27[6] = a2[8];
    v27[7] = a2[10];
    v27[8] = a2[12];
    v27[19] = a2[34];
    v27[20] = a2[35];
    v27[21] = a2[36];
    v27[22] = a2[37];
    v27[23] = a2[38];
    v27[24] = a2[39];
    v27[25] = a2[40];
    v27[26] = a2[41];
    v27[27] = a2[42];
    v27[168] = a2[259];
    v27[175] = a2[271];
    sub_1402508C8(&v28, v27 + 9, a2 + 14);
    v27[11] = a2[18];
    sub_1402508C8(&v28, v27 + 12, a2 + 20);
    sub_1402508C8(&v28, v27 + 14, a2 + 24);
    sub_1402508C8(&v28, v27 + 16, a2 + 28);
    sub_1402508C8(&v28, v27 + 28, a2 + 44);
    sub_1402508C8(&v28, v27 + 30, a2 + 48);
    sub_1402508C8(&v28, v27 + 32, a2 + 52);
    sub_1402508C8(&v28, v27 + 169, a2 + 260);
    sub_1402508C8(&v28, v27 + 171, a2 + 264);
    if ( *((_WORD *)a2 + 112) && *((_QWORD *)a2 + 29) )
    {
      v25 = 0LL;
      v14 = (char *)v28;
      v27[35] = (_DWORD)v28;
      v15 = *((unsigned __int16 *)a2 + 112);
      v16 = (unsigned int *)*((_QWORD *)a2 + 29);
      if ( (unsigned __int16)v15 < 4u )
        v17 = 0LL;
      else
        v17 = *v16;
      v18 = v17 + 8 * v17 + 4;
      v25 = v18;
      if ( v15 >= v18 )
      {
        v19 = v15 - v18;
        memmove(v14, v16, v17 + 4);
        v20 = (_DWORD *)(v17 + *((_QWORD *)a2 + 29) + 4LL);
        v21 = &v14[v17 + 4];
        for ( i = 0LL; i < v17; ++i )
        {
          *(_DWORD *)v21 = *v20;
          v21 += 4;
          v20 += 2;
        }
        memmove(v21, v20, v19);
        *((_WORD *)v27 + 68) = 5 * v17 + 4 + v19;
      }
      else
      {
        memmove(v14, v16, v15);
        *((_WORD *)v27 + 68) = *((_WORD *)a2 + 112);
      }
      *((_WORD *)v27 + 69) = *((_WORD *)v27 + 68);
      v11 = &v14[*((unsigned __int16 *)v27 + 68)];
      v28 = v11;
      v5 = a1;
    }
    else
    {
      v11 = (char *)v28;
    }
    v12 = a2[270];
    if ( v12 )
    {
      v27[174] = v12;
      v13 = (char *)((unsigned __int64)(v11 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
      v28 = v13;
      v27[173] = (_DWORD)v13;
      memmove(v13, *((const void **)a2 + 134), 8LL * a2[270]);
      v28 = &v13[8 * a2[270]];
    }
    v27[18] = (_DWORD)v10;
    v27[164] = a2[252];
    v27[165] = a2[254];
    memmove(v10, *((const void **)a2 + 16), (unsigned int)v27[164]);
    v27[167] = a2[258];
    v23 = (int)v27;
    *(_DWORD *)(v5 + 16) = (_DWORD)v27;
    *a3 = v23;
    return 0;
  }
  return result;
}
