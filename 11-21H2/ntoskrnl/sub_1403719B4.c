/*
 * XREFs of sub_1403719B4 @ 0x1403719B4
 * Callers:
 *     sub_140371654 @ 0x140371654 (sub_140371654.c)
 * Callees:
 *     sub_140371B80 @ 0x140371B80 (sub_140371B80.c)
 *     sub_140371BFC @ 0x140371BFC (sub_140371BFC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall sub_1403719B4(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbp
  signed __int64 v5; // r8
  _QWORD *v6; // rax
  __int64 v7; // r9
  unsigned int v8; // r13d
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r8
  char v11; // dl
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  size_t v14; // r12
  unsigned int v15; // r14d
  _QWORD *v16; // rdi
  char *v17; // r12
  __int64 v18; // r15
  void *v19; // rbx
  __int64 v21; // [rsp+20h] [rbp-48h]
  signed __int64 v22; // [rsp+70h] [rbp+8h]
  unsigned __int64 v23; // [rsp+70h] [rbp+8h]
  unsigned __int64 v24; // [rsp+80h] [rbp+18h]
  unsigned __int64 v25; // [rsp+88h] [rbp+20h]

  v4 = a2;
  v21 = a2;
  v5 = *(_QWORD *)(a1 + 8LL * a2 + 128);
  LOBYTE(v6) = v5 & 3;
  if ( (v5 & 3) == 1 )
  {
    v22 = *(_QWORD *)(a1 + 8LL * a2 + 128);
    LOWORD(v22) = v5 | 2;
    v6 = (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8LL * a2 + 128), v22, v5);
    if ( v6 == (_QWORD *)v5 )
    {
      v7 = *(unsigned __int8 *)(a1 + 56);
      v8 = 1;
      v9 = (unsigned __int64)(((unsigned int)dword_140C1BBE0 >> 10) & 1) << 6;
      v23 = v9 + v7 - (((_BYTE)v7 - 1) & 7) + 135;
      v10 = v23 + 8 * v7;
      v11 = v10 - 1;
      v12 = v10 + 63;
      v13 = v11 & 0x3F;
      v24 = v12 + v9 - v13;
      if ( (dword_140C1BBE0 & 0x200) != 0 )
        v8 = v7;
      v14 = v12 + ((unsigned __int64)(((unsigned int)dword_140C1BBE0 >> 10) & 1) << 6) - v13 + (v9 + 64) * v8;
      v6 = (_QWORD *)sub_14042A5E0(*(_QWORD *)a1, v14);
      v15 = 0;
      v16 = v6;
      if ( v6 )
      {
        memset(v6, 0, v14);
        sub_140371B80(v16, a2, a1);
        LOBYTE(v6) = (_BYTE)v16 + v23;
        v16[11] = (char *)v16 + v9 + 128;
        v17 = (char *)v16 + v24;
        v16[12] = (char *)v16 + v23;
        if ( v8 )
        {
          v25 = v9 + 64;
          v18 = 0LL;
          do
          {
            *(_QWORD *)(v16[12] + 8 * v18) = v17;
            v19 = *(void **)(v16[12] + 8 * v18);
            memset(v19, 0, 0x40uLL);
            sub_140371BFC(v19, *((unsigned __int8 *)v16 + 1), v15, a1);
            ++*((_BYTE *)v16 + 2);
            v17 += v25;
            v6 = (_QWORD *)v16[11];
            *((_BYTE *)v6 + v18++) = v15++;
          }
          while ( v15 < v8 );
          v4 = v21;
        }
        *(_QWORD *)(a1 + 8 * v4 + 128) = v16;
      }
    }
  }
  return (char)v6;
}
