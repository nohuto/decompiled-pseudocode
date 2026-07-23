/*
 * XREFs of sub_140361700 @ 0x140361700
 * Callers:
 *     sub_1407E4280 @ 0x1407E4280 (sub_1407E4280.c)
 * Callees:
 *     sub_140361AB0 @ 0x140361AB0 (sub_140361AB0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_140361700(__int64 a1, void *a2, char *a3, unsigned int a4, __int64 a5, unsigned int a6, _BYTE *a7)
{
  unsigned int v8; // r13d
  int v9; // r12d
  __int64 v10; // r15
  unsigned int v11; // ebx
  unsigned int v12; // ebp
  unsigned int v13; // r14d
  unsigned int v14; // ebx
  unsigned int v15; // ebp
  unsigned int v16; // r14d
  __int64 v17; // rbx
  unsigned int v18; // ebp
  __int64 v19; // r14
  __int64 v20; // rbp
  int *v21; // rax
  int v22; // r14d
  void *v23; // rdx
  int v24; // r15d
  __int64 v25; // rbx
  unsigned int v26; // r14d
  unsigned int v27; // r15d
  unsigned int v28; // ebp
  unsigned int v29; // r14d
  unsigned int v30; // r15d
  unsigned int v31; // ebp
  __int64 v32; // r14
  unsigned int v33; // r15d
  __int64 v34; // rbp
  unsigned int v35; // eax
  int *v36; // rax
  bool v37; // zf
  unsigned int Size; // [rsp+20h] [rbp-58h]
  size_t Sizea; // [rsp+20h] [rbp-58h]
  __int64 v40; // [rsp+28h] [rbp-50h] BYREF
  int *v41; // [rsp+30h] [rbp-48h] BYREF
  __int64 v42; // [rsp+38h] [rbp-40h]
  void *Src; // [rsp+88h] [rbp+10h]
  void *Srca; // [rsp+88h] [rbp+10h]
  char *v45; // [rsp+90h] [rbp+18h]

  if ( a4 )
  {
    v45 = a3;
    Src = a2;
    v8 = a6;
    v9 = ~a6;
    v10 = 0LL;
    v40 = 0LL;
    Size = a4 & 7;
    if ( (a4 & 7) != 0 )
    {
      v11 = v9 ^ sub_140361AB0(a1, 9LL, a5, a6);
      v12 = a6 ^ sub_140361AB0(a1, 8LL, a5, v11);
      v13 = v11 ^ sub_140361AB0(a1, 7LL, a5, v12);
      v14 = v12 ^ sub_140361AB0(a1, 6LL, a5, v13);
      v15 = v13 ^ sub_140361AB0(a1, 5LL, a5, v14);
      v16 = v14 ^ sub_140361AB0(a1, 4LL, a5, v15);
      v17 = v15 ^ (unsigned int)sub_140361AB0(a1, 3LL, a5, v16);
      v18 = v16 ^ sub_140361AB0(a1, 2LL, a5, v17);
      v19 = (unsigned int)v17 ^ (unsigned int)sub_140361AB0(a1, 1LL, a5, v18);
      v41 = 0LL;
      LODWORD(v17) = v18 ^ sub_140361AB0(a1, 0LL, a5, v19);
      v20 = Size;
      v10 = Size;
      memmove(&v41, Src, Size);
      LODWORD(v40) = (unsigned int)v41 ^ v19;
      Sizea = (size_t)v41;
      HIDWORD(v40) = v17 ^ HIDWORD(v41);
      memset((char *)&v40 + v20, 0, (unsigned int)(8 - v20));
      memmove(v45, &v40, (unsigned int)v20);
      a2 = Src;
      a3 = v45;
      v8 = HIDWORD(Sizea);
      v9 = Sizea;
    }
    v21 = (int *)&a3[v10];
    v41 = (int *)&a3[v10];
    if ( a4 >> 3 )
    {
      v22 = HIDWORD(v40);
      v23 = (void *)((_BYTE *)a2 - a3);
      v24 = v40;
      Srca = v23;
      v42 = a4 >> 3;
      while ( 1 )
      {
        v25 = *(_QWORD *)((char *)v21 + (_QWORD)v23);
        v26 = HIDWORD(v25) ^ v22;
        v27 = v25 ^ sub_140361AB0(a1, 9LL, a5, v26) ^ v24;
        v28 = v26 ^ sub_140361AB0(a1, 8LL, a5, v27);
        v29 = v27 ^ sub_140361AB0(a1, 7LL, a5, v28);
        v30 = v28 ^ sub_140361AB0(a1, 6LL, a5, v29);
        v31 = v29 ^ sub_140361AB0(a1, 5LL, a5, v30);
        v32 = v30 ^ (unsigned int)sub_140361AB0(a1, 4LL, a5, v31);
        v33 = v31 ^ sub_140361AB0(a1, 3LL, a5, v32);
        v34 = (unsigned int)v32 ^ (unsigned int)sub_140361AB0(a1, 2LL, a5, v33);
        v35 = v33 ^ sub_140361AB0(a1, 1LL, a5, v34);
        v24 = v9 ^ v35;
        LODWORD(v32) = sub_140361AB0(a1, 0LL, a5, v35);
        v36 = v41;
        v22 = v8 ^ v34 ^ v32;
        *v41 = v24;
        v36[1] = v22;
        v21 = v36 + 2;
        v37 = v42-- == 1;
        v41 = v21;
        if ( v37 )
          break;
        v8 = HIDWORD(v25);
        v9 = v25;
        v23 = Srca;
      }
      a3 = v45;
    }
    *a7 = a3[a4 - 1];
  }
}
