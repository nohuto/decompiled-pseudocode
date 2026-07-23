/*
 * XREFs of sub_14033C5F0 @ 0x14033C5F0
 * Callers:
 *     sub_14031FD60 @ 0x14031FD60 (sub_14031FD60.c)
 * Callees:
 *     sub_140228660 @ 0x140228660 (sub_140228660.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140232E08 @ 0x140232E08 (sub_140232E08.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140323D70 @ 0x140323D70 (sub_140323D70.c)
 *     sub_14033C880 @ 0x14033C880 (sub_14033C880.c)
 *     sub_14033D7D0 @ 0x14033D7D0 (sub_14033D7D0.c)
 *     sub_14033D80C @ 0x14033D80C (sub_14033D80C.c)
 *     sub_1405AD468 @ 0x1405AD468 (sub_1405AD468.c)
 *     sub_1405C37D0 @ 0x1405C37D0 (sub_1405C37D0.c)
 */

__int64 __fastcall sub_14033C5F0(__int64 a1, unsigned __int64 *a2)
{
  _DWORD *v2; // rdi
  __int64 v4; // r15
  unsigned __int64 v6; // rsi
  _DWORD *v7; // r8
  unsigned int v8; // ebx
  unsigned int v9; // eax
  __int64 v10; // r10
  __int64 v11; // r13
  __int128 v12; // rax
  unsigned __int64 v13; // rsi
  unsigned int v14; // r12d
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r15
  unsigned int v18; // ebx
  unsigned __int64 v19; // rbx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r8
  int v24; // r9d
  __int64 v25; // rax
  bool v26; // zf
  unsigned int v27; // eax
  int v28; // [rsp+20h] [rbp-68h]
  _QWORD *v29; // [rsp+40h] [rbp-48h]
  char v30; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 *v31; // [rsp+98h] [rbp+10h]
  int v32; // [rsp+A0h] [rbp+18h]
  __int64 v33; // [rsp+A8h] [rbp+20h]

  v31 = a2;
  v2 = *(_DWORD **)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 64);
  v6 = *(_QWORD *)(a1 + 16);
  v7 = v2;
  v8 = (*v2 >> 5) & 0x1F;
  if ( v4 )
  {
    v21 = *(unsigned int *)(v4 + 48);
    if ( (v21 & 0x200000) == 0 && qword_1400161D0[(v21 >> 19) & 3] == 16 )
    {
      v23 = *a2;
      v24 = *(_DWORD *)(a1 + 32);
      v28 = *(_DWORD *)(a1 + 36);
      v30 = 0;
      v25 = sub_1405C37D0(v4, v6, v23, v24, v28, (__int64)&v30);
      v11 = v25;
      if ( v25 )
      {
        if ( (*(_QWORD *)(v25 + 24) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFFLL )
        {
          v26 = v30 == 0;
          *a2 = 1LL;
          if ( !v26 )
            *(_DWORD *)a1 |= 4u;
        }
        else
        {
          *a2 = 16LL;
          v27 = (unsigned int)v6 >> 12;
          v6 &= 0xFFFFFFFFFFFF0000uLL;
          *(_QWORD *)(a1 + 16) = v6;
          v2 -= 2 * (v27 & 0xF);
        }
        v29 = *(_QWORD **)(a1 + 56);
LABEL_22:
        v12 = *(unsigned int *)(v4 + 52);
        LODWORD(v12) = v12 & 0x7FFFFFFF;
        v22 = v12 | ((unsigned __int64)*(unsigned __int8 *)(v4 + 34) << 31);
        v32 = 0;
        if ( v22 == 0x7FFFFFFFELL )
        {
          DWORD2(v12) = 64;
          v32 = 64;
        }
        goto LABEL_4;
      }
      v7 = *(_DWORD **)(a1 + 24);
      *a2 = 1LL;
    }
  }
  sub_14033D80C(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL), v6, v7);
  v9 = sub_14033D7D0(v8);
  v11 = sub_140323D70(v10, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL), v6, *(_DWORD *)(a1 + 48), v9, 258, -1LL, a2);
  if ( !v11 )
    return 3221225495LL;
  DWORD2(v12) = 0;
  v29 = *(_QWORD **)(a1 + 56);
  v32 = 0;
  if ( v4 )
    goto LABEL_22;
LABEL_4:
  v13 = v6 & 0xFFFFFFFFFFFFF000uLL;
  v14 = 0;
  while ( v14 < *v31 )
  {
    v15 = *(_QWORD *)(v11 + 24) & 0xFFFFFFFFFFLL;
    v16 = v11;
    v33 = v11;
    if ( v15 == 0x3FFFFFFFFFLL )
      v11 = 0LL;
    else
      v11 = 48 * v15 - 0x220000000000LL;
    v17 = 0xAAAAAAAAAAAAAAABuLL * ((v16 + 0x220000000000LL) >> 4);
    if ( (dword_140D06880 & 0x80u) != 0 && (++dword_140C52AE0 & dword_140D05040) == 0 )
    {
      sub_1405AD468(0xAAAAAAAAAAAAAAABuLL * ((v16 + 0x220000000000LL) >> 4));
      DWORD2(v12) = v32;
      v16 = v33;
    }
    v18 = (*v2 >> 5) & 0x1F;
    if ( v18 == 24 )
      v18 = 1;
    LODWORD(v12) = *(_DWORD *)a1;
    DWORD2(v12) |= 0x112u;
    v32 = DWORD2(v12);
    if ( (v12 & 4) != 0 || ((v18 - 4) & 0xFFFFFFFD) != 0 )
    {
      DWORD2(v12) |= 0x20u;
      v32 = DWORD2(v12);
    }
    sub_14033C880(v16, v2, v18, DWORD2(v12));
    v19 = sub_1402CBD10((unsigned __int64)v2, v17, v18 | 0x20000000);
    if ( sub_140317A80((unsigned __int64)v2) )
    {
      if ( (unsigned int)sub_140229550() )
      {
        if ( !HIBYTE(word_140C51864) && (v19 & 1) != 0 )
          v19 |= 0x8000000000000000uLL;
        *(_QWORD *)v2 = v19;
        sub_1402294F0((__int64)v2, v19);
        goto LABEL_14;
      }
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v19 & 1) != 0 )
        v19 |= 0x8000000000000000uLL;
    }
    *(_QWORD *)v2 = v19;
LABEL_14:
    if ( (*(_DWORD *)a1 & 4) != 0 )
    {
      sub_140228660(v33, 0);
      if ( v29 )
      {
        if ( (*(_DWORD *)a1 & 8) == 0 && v13 == *(_QWORD *)(v29[1] + 16LL * v29[3]) + (v29[4] << 12) )
          sub_140232E08(v29);
      }
    }
    ++v14;
    DWORD2(v12) = v32;
    v13 += 4096LL;
    v2 += 2;
  }
  return 273LL;
}
