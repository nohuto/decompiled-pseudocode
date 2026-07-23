/*
 * XREFs of sub_1403B7358 @ 0x1403B7358
 * Callers:
 *     sub_14081D450 @ 0x14081D450 (sub_14081D450.c)
 * Callees:
 *     InitializeSListHead @ 0x1402A05A0 (InitializeSListHead.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14081DB30 @ 0x14081DB30 (sub_14081DB30.c)
 */

__int64 __fastcall sub_1403B7358(__int64 a1)
{
  __int64 v1; // r13
  unsigned int v2; // ebx
  __int64 v3; // r8
  __int64 v4; // rdi
  unsigned int v5; // edx
  _DWORD *v6; // r8
  unsigned __int64 v7; // rcx
  _QWORD *v8; // rsi
  char *v9; // rbp
  _QWORD *v10; // r14
  char *v11; // r13
  _QWORD *v12; // r12
  _QWORD *v13; // rbx
  __int64 v14; // rdi
  unsigned int v15; // esi
  int *v16; // r14
  _SLIST_HEADER *v17; // rbp
  int v18; // ecx
  _DWORD *v19; // rsi
  __int64 v20; // r14
  _SLIST_HEADER *v21; // rbp
  unsigned int v22; // ebp
  __int64 v23; // rsi
  __int64 result; // rax
  __int64 v25; // [rsp+20h] [rbp-58h]
  unsigned int v27; // [rsp+88h] [rbp+10h]
  __int64 v28; // [rsp+90h] [rbp+18h]
  __int64 v29; // [rsp+98h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  v27 = 0;
  v3 = a1;
  v29 = v1;
  if ( word_140D05000 )
  {
    v4 = v1 + 24400;
    v25 = v1 + 24400;
    do
    {
      *(_QWORD *)(v4 - 1784) = v3;
      *(_DWORD *)(v4 - 1684) = v2;
      *(_BYTE *)(v4 - 21152) = 8;
      *(_BYTE *)(v4 - 21150) = 8;
      *(_QWORD *)(v4 - 1600) = 0LL;
      *(_DWORD *)(v4 - 1552) = 0;
      *(_DWORD *)(v4 - 1688) = v2 << byte_140C506CC;
      sub_14081DB30(v3, v2);
      v5 = 0;
      v6 = (_DWORD *)(v4 - 1936);
      do
      {
        v7 = v5 << 8;
        *v6 = dword_140C50738 + 1;
        ++v5;
        v6 += 4;
        *((_QWORD *)v6 - 1) = v1 + 4 * (v7 >> 5) + 22496;
      }
      while ( v5 < 2 );
      v8 = (_QWORD *)(v4 - 21120);
      v28 = 8LL;
      v9 = (char *)(v4 - 18320);
      v10 = (_QWORD *)(v4 - 21144);
      do
      {
        v11 = v9;
        v12 = v8;
        v13 = v10;
        v14 = 4LL;
        do
        {
          *v13 = 0LL;
          *(v12 - 1) = 0x3FFFFFFFFFLL;
          *v12 = 0x3FFFFFFFFFLL;
          memset(v11, -1, 0x200uLL);
          v11 += 4096;
          v13 += 88;
          v12 += 88;
          --v14;
        }
        while ( v14 );
        v10 += 11;
        v9 += 512;
        v8 += 11;
        --v28;
      }
      while ( v28 );
      v15 = 0;
      v16 = (int *)(v25 - 1408);
      v17 = (_SLIST_HEADER *)(v25 - 1424);
      do
      {
        InitializeSListHead(v17);
        v18 = -(v15++ != 0);
        v17 += 2;
        *v16 = ~(_BYTE)v18 & 5;
        v16 += 8;
      }
      while ( v15 < 3 );
      v19 = (_DWORD *)(v25 - 1312);
      v20 = 3LL;
      v21 = (_SLIST_HEADER *)(v25 - 1328);
      do
      {
        InitializeSListHead(v21);
        v21 += 2;
        *v19 = 5;
        v19 += 8;
        --v20;
      }
      while ( v20 );
      v22 = 0;
      v23 = v25 - 1152;
      do
      {
        memset((void *)(v23 - 80), 0, 0xA8uLL);
        *(_DWORD *)(v23 - 32) = v22++;
        *(_DWORD *)(v23 - 28) = v27;
        *(_DWORD *)(v23 - 8) = 2;
        *(_QWORD *)v23 = 0x3FFFFFFFFFLL;
        *(_QWORD *)(v23 + 8) = 0x3FFFFFFFFFLL;
        *(_DWORD *)(v23 + 16) = 0;
        v23 += 168LL;
      }
      while ( v22 < 7 );
      result = (unsigned __int16)word_140D05000;
      v3 = a1;
      v1 = v29 + 24512;
      *(_QWORD *)(v25 - 16) = 0LL;
      v2 = v27 + 1;
      *(_DWORD *)(v25 - 8) = 5;
      *(_QWORD *)v25 = 0x3FFFFFFFFFLL;
      *(_QWORD *)(v25 + 8) = 0x3FFFFFFFFFLL;
      *(_DWORD *)(v25 + 16) = 0;
      v4 = v25 + 24512;
      v27 = v2;
      v29 += 24512LL;
      v25 += 24512LL;
    }
    while ( v2 < (unsigned int)result );
  }
  return result;
}
