/*
 * XREFs of sub_1406491E0 @ 0x1406491E0
 * Callers:
 *     sub_1407E4280 @ 0x1407E4280 (sub_1407E4280.c)
 * Callees:
 *     sub_140361AB0 @ 0x140361AB0 (sub_140361AB0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_1406491E0(__int64 a1, _BYTE *a2, char *a3, unsigned int a4, __int64 a5, unsigned int a6, _BYTE *a7)
{
  int v7; // r13d
  __int64 v10; // rbp
  int v11; // r15d
  int v12; // esi
  __int64 v13; // rax
  unsigned int v14; // ebx
  unsigned int v15; // esi
  unsigned int v16; // ebp
  unsigned int v17; // ebx
  unsigned int v18; // esi
  unsigned int v19; // ebp
  unsigned int v20; // ebx
  unsigned int v21; // esi
  unsigned int v22; // ebp
  int v23; // ebx
  int *v24; // rax
  unsigned int v25; // r14d
  char *v26; // r12
  __int64 v27; // rbx
  unsigned int v28; // r15d
  unsigned int v29; // r13d
  unsigned int v30; // ebp
  unsigned int v31; // r14d
  unsigned int v32; // r15d
  unsigned int v33; // ebp
  unsigned int v34; // r14d
  unsigned int v35; // r15d
  unsigned int v36; // ebp
  unsigned int v37; // r13d
  int v38; // r15d
  int *v39; // rax
  bool v40; // zf
  int *Src; // [rsp+20h] [rbp-58h] BYREF
  __int64 v42; // [rsp+28h] [rbp-50h] BYREF
  __int64 v43; // [rsp+30h] [rbp-48h]
  char *v45; // [rsp+90h] [rbp+18h]
  unsigned int Size; // [rsp+98h] [rbp+20h]

  if ( a4 )
  {
    v45 = a3;
    v7 = a6;
    v10 = a1;
    v11 = ~a6;
    *a7 = a2[a4 - 1];
    Size = a4 & 7;
    if ( (a4 & 7) != 0 )
    {
      v14 = v11 ^ sub_140361AB0(a1, 9u, a5, a6);
      v15 = a6 ^ sub_140361AB0(a1, 8u, a5, v14);
      v16 = v14 ^ sub_140361AB0(a1, 7u, a5, v15);
      v17 = v15 ^ sub_140361AB0(a1, 6u, a5, v16);
      v18 = v16 ^ sub_140361AB0(a1, 5u, a5, v17);
      v19 = v17 ^ sub_140361AB0(a1, 4u, a5, v18);
      v20 = v18 ^ sub_140361AB0(a1, 3u, a5, v19);
      v21 = v19 ^ sub_140361AB0(a1, 2u, a5, v20);
      v22 = v20 ^ sub_140361AB0(a1, 1u, a5, v21);
      v42 = 0LL;
      v43 = Size;
      v23 = v21 ^ sub_140361AB0(a1, 0, a5, v22);
      memmove(&v42, a2, Size);
      v12 = v42;
      LODWORD(Src) = v42 ^ v22;
      HIDWORD(Src) = v23 ^ HIDWORD(v42);
      memset((char *)&Src + Size, 0, 8 - Size);
      memmove(v45, &Src, Size);
      a3 = v45;
      v13 = v43;
      v7 = HIDWORD(Src);
      v11 = (int)Src;
      v10 = a1;
    }
    else
    {
      v12 = 0;
      v42 = 0LL;
      v13 = 0LL;
    }
    v24 = (int *)&a3[v13];
    v25 = a4 >> 3;
    Src = v24;
    if ( v25 )
    {
      v26 = (char *)(a2 - a3);
      v43 = v25;
      do
      {
        v27 = *(_QWORD *)((char *)v24 + (_QWORD)v26);
        v28 = v27 ^ v11;
        v29 = HIDWORD(v27) ^ sub_140361AB0(v10, 0, a5, v28) ^ v7;
        v30 = v28 ^ sub_140361AB0(v10, 1u, a5, v29);
        v31 = v29 ^ sub_140361AB0(a1, 2u, a5, v30);
        v32 = v30 ^ sub_140361AB0(a1, 3u, a5, v31);
        v33 = v31 ^ sub_140361AB0(a1, 4u, a5, v32);
        v34 = v32 ^ sub_140361AB0(a1, 5u, a5, v33);
        v35 = v33 ^ sub_140361AB0(a1, 6u, a5, v34);
        v36 = v34 ^ sub_140361AB0(a1, 7u, a5, v35);
        v37 = v35 ^ sub_140361AB0(a1, 8u, a5, v36);
        v38 = sub_140361AB0(a1, 9u, a5, v37);
        v39 = Src;
        v11 = v12 ^ v36 ^ v38;
        v12 = v27;
        v7 = HIDWORD(v42) ^ v37;
        v42 = v27;
        *Src = v11;
        v10 = a1;
        v39[1] = v7;
        v24 = v39 + 2;
        v40 = v43-- == 1;
        Src = v24;
      }
      while ( !v40 );
    }
  }
}
