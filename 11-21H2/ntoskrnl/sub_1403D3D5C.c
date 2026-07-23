/*
 * XREFs of sub_1403D3D5C @ 0x1403D3D5C
 * Callers:
 *     sub_1403D3960 @ 0x1403D3960 (sub_1403D3960.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1403D3D5C(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  _OWORD *v7; // r8
  _OWORD *v8; // rax
  __int128 v9; // xmm1
  SIZE_T v10; // rdi
  PVOID v11; // rax
  void *v12; // r14
  unsigned int *v13; // rbp
  SIZE_T v14; // rsi
  PVOID v15; // rax
  PVOID v16; // rdi

  v4 = sub_1402828F0(64, 0x138uLL, 0x20206D4Du);
  v5 = v4;
  if ( v4 )
  {
    v6 = 2LL;
    v7 = v4;
    v8 = (_OWORD *)a2;
    do
    {
      *v7 = *v8;
      v7[1] = v8[1];
      v7[2] = v8[2];
      v7[3] = v8[3];
      v7[4] = v8[4];
      v7[5] = v8[5];
      v7[6] = v8[6];
      v7 += 8;
      v9 = v8[7];
      v8 += 8;
      *(v7 - 1) = v9;
      --v6;
    }
    while ( v6 );
    *v7 = *v8;
    v7[1] = v8[1];
    v7[2] = v8[2];
    *((_QWORD *)v7 + 6) = *((_QWORD *)v8 + 6);
    v10 = 40LL * *(unsigned int *)(a2 + 156);
    v11 = sub_1402828F0(64, v10, 0x20206D4Du);
    v12 = v11;
    if ( v11 )
    {
      memmove(v11, *(const void **)(a2 + 144), v10);
      v5[18] = v12;
      v13 = *(unsigned int **)(a2 + 304);
      if ( !v13 )
      {
        v16 = 0LL;
        goto LABEL_8;
      }
      v14 = 16LL * *v13;
      v15 = sub_1402828F0(64, v14, 0x20206D4Du);
      v16 = v15;
      if ( v15 )
      {
        memmove(v15, v13, v14);
LABEL_8:
        v5[38] = v16;
        *(_QWORD *)(a1 + 22912) = v5;
        return;
      }
      ExFreePoolWithTag(v12, 0);
    }
    ExFreePoolWithTag(v5, 0);
  }
}
