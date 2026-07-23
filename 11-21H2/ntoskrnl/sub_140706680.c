/*
 * XREFs of sub_140706680 @ 0x140706680
 * Callers:
 *     sub_140706ABC @ 0x140706ABC (sub_140706ABC.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_14029C764 @ 0x14029C764 (sub_14029C764.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1407E5148 @ 0x1407E5148 (sub_1407E5148.c)
 */

__int64 __fastcall sub_140706680(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8,
        int *a9,
        __int64 a10)
{
  unsigned int v12; // ebx
  __int64 v13; // r11
  unsigned __int64 v14; // r9
  unsigned int v15; // r8d
  unsigned __int64 v16; // r15
  unsigned int v17; // r14d
  unsigned int v18; // edx
  int v19; // ecx
  unsigned __int64 v20; // r10
  unsigned int v21; // esi
  unsigned __int64 v22; // r9
  unsigned int v23; // r8d
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned __int64 v26; // r15
  __int64 v27; // rdi
  unsigned int v28; // r12d
  char *v29; // rax
  char *v30; // r14
  int v31; // r13d
  unsigned int v32; // eax
  unsigned __int64 v33; // rdx
  int v34; // ecx
  unsigned int v36; // [rsp+20h] [rbp-78h]
  unsigned int v37; // [rsp+28h] [rbp-70h]
  unsigned __int64 v38; // [rsp+40h] [rbp-58h]

  v12 = 0;
  *a9 = 0;
  v13 = a10;
  *(_OWORD *)a10 = 0LL;
  *(_OWORD *)(a10 + 16) = 0LL;
  v14 = 0LL;
  v15 = 0;
  if ( *(_WORD *)(a6 + 48) == 523 )
  {
    v16 = *(_QWORD *)(a7 + 128);
    v17 = *(_DWORD *)(a7 + 136);
    v36 = v17;
    v18 = *(_DWORD *)(a7 + 144);
    v37 = v18;
    v19 = v18 & 0x4000;
    if ( (v18 & 0x4000) != 0 && a8 >= 0xB0 )
    {
      v14 = *(_QWORD *)(a7 + 160);
      v15 = *(_DWORD *)(a7 + 168);
    }
    v20 = *(_QWORD *)(a7 + 120);
  }
  else
  {
    v16 = *(unsigned int *)(a7 + 80);
    v17 = *(_DWORD *)(a7 + 84);
    v36 = v17;
    v18 = *(_DWORD *)(a7 + 88);
    v37 = v18;
    v19 = v18 & 0x4000;
    if ( (v18 & 0x4000) != 0 && a8 >= 0x70 )
    {
      v14 = *(unsigned int *)(a7 + 104);
      v15 = *(_DWORD *)(a7 + 108);
    }
    v20 = *(unsigned int *)(a7 + 76);
  }
  v38 = v20;
  if ( (v18 & 0x400) == 0 || !v16 )
  {
    v31 = 0;
    goto LABEL_46;
  }
  v21 = (v18 >> 28) + 4;
  if ( v16 < a4 || !v17 || v17 >= 0xFFFFFFFF / v21 )
  {
    v31 = -1073741819;
    dword_140C4F400 = 4;
    goto LABEL_46;
  }
  if ( v19 && v14 )
  {
    if ( v14 < a4 || !v15 || v15 >= 0xFFFFFFFF / v21 )
    {
      v31 = -1073741819;
      dword_140C4F400 = 10;
      goto LABEL_46;
    }
    v22 = v14 - a4;
    v23 = v21 * v15;
    v24 = v22 + v23;
    if ( v24 <= v22 || (v25 = a6, v24 > *(unsigned int *)(a6 + 16)) || v23 + 4 < v23 )
    {
      v31 = -1073741819;
      dword_140C4F400 = 11;
      goto LABEL_46;
    }
  }
  else
  {
    v25 = a6;
  }
  v26 = v16 - a4;
  v27 = v17 * v21;
  v28 = v17 * v21;
  if ( v27 + v26 <= v26 || v27 + v26 > *(unsigned int *)(v25 + 16) || (int)v27 + 4 < (unsigned int)v27 )
  {
    v31 = -1073741819;
    dword_140C4F400 = 5;
    goto LABEL_46;
  }
  v29 = (char *)sub_1402828F0(256, v28, 0x5443694Du);
  v30 = v29;
  if ( !v29 )
  {
    v31 = -1073741670;
    dword_140C4F400 = 6;
LABEL_59:
    v13 = a10;
    goto LABEL_46;
  }
  memmove(v29, (const void *)(v26 + a3), v28);
  v31 = 0;
  sub_1407E5148((unsigned int)v26, (unsigned int)v27, a2, a1);
  v32 = 0;
  if ( (_DWORD)v27 )
  {
    while ( 1 )
    {
      v33 = *(unsigned int *)&v30[v32];
      if ( v33 >= a5 )
        break;
      if ( v32 && (unsigned int)v33 < v12 )
      {
        dword_140C4F400 = 9;
        goto LABEL_62;
      }
      v12 = *(_DWORD *)&v30[v32];
      v32 += v21;
      if ( v32 >= (unsigned int)v27 )
        goto LABEL_28;
    }
    dword_140C4F400 = 8;
LABEL_62:
    v31 = -1073741701;
  }
LABEL_28:
  if ( v31 < 0 )
    goto LABEL_59;
  if ( !v38 )
  {
    v13 = a10;
    goto LABEL_33;
  }
  if ( v38 < a4 || v38 >= a4 + a5 )
  {
    v31 = -1073741701;
    dword_140C4F400 = 10;
    goto LABEL_59;
  }
  v13 = a10;
  *(_DWORD *)(a10 + 24) = v38 - a4;
LABEL_33:
  v34 = *a9 | 1;
  *a9 = v34;
  if ( (*(_WORD *)(a6 + 60) & 0x4000) != 0 )
  {
    v34 |= 2u;
    *a9 = v34;
  }
  if ( (v37 & 0x8000) != 0 )
  {
    v34 |= 0x10u;
    *a9 = v34;
  }
  if ( (v37 & 0x4000) != 0 )
  {
    v34 |= 8u;
    *a9 = v34;
  }
  if ( (v37 & 0x100000) != 0 )
  {
    v34 |= 0x20u;
    *a9 = v34;
  }
  if ( (v37 & 0x400000) != 0 )
  {
    v34 |= 0x40u;
    *a9 = v34;
  }
  if ( (v37 & 0x800000) != 0 )
    *a9 = v34 | 0x80;
  *(_DWORD *)v13 = v37;
  *(_QWORD *)(v13 + 8) = v30;
  *(_DWORD *)(v13 + 16) = v36;
  *(_DWORD *)(v13 + 20) = v21;
LABEL_46:
  if ( v31 < 0 )
    sub_14029C764(v13);
  return (unsigned int)v31;
}
