/*
 * XREFs of sub_14084F290 @ 0x14084F290
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403B4C50 @ 0x1403B4C50 (sub_1403B4C50.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14084F290(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4, __int64 *a5)
{
  unsigned int v5; // r14d
  unsigned int v6; // ebx
  unsigned int v9; // esi
  unsigned int v10; // r13d
  unsigned int v11; // ebp
  char *v12; // rbp
  unsigned int v13; // ecx
  unsigned __int16 v14; // dx
  char v15; // r12
  int v16; // r14d
  char *v17; // r9
  unsigned int v18; // ecx
  unsigned int v19; // eax
  int v20; // r8d
  _BYTE *v21; // r8
  unsigned int *v22; // r9
  __int64 v23; // r14
  unsigned int v24; // edx
  unsigned int v25; // r11d
  __int64 v26; // r15
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned int v30; // eax
  __int64 Pool2; // rax
  _OWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  _DWORD *v37; // r10
  __int64 v38; // rsi
  __int64 v39; // [rsp+20h] [rbp-48h]
  __int16 v40; // [rsp+78h] [rbp+10h]

  v5 = *(_DWORD *)(a2 + 8);
  v6 = 0;
  v9 = 0;
  v10 = 0;
  if ( v5 + 0x100000 <= 0xFFFFE )
    goto LABEL_28;
  v11 = *(_DWORD *)(a2 + 12);
  if ( v11 + 0x100000 <= 0xFFFFE )
    return 3221225473LL;
  if ( sub_1403B4C50(0, v5) && sub_1403B4C50(0, v11) )
  {
LABEL_28:
    Pool2 = ExAllocatePool2(256LL, 32LL, 1768710472LL);
    *a5 = Pool2;
    if ( Pool2 )
    {
      *a4 = 1;
      v32 = (_OWORD *)*a5;
      *v32 = *(_OWORD *)a2;
      v32[1] = *(_OWORD *)(a2 + 16);
      return 0LL;
    }
    return 3221225626LL;
  }
  v39 = 32 * (v11 - v5 + 3);
  v12 = (char *)ExAllocatePool2(256LL, v39, 1768710472LL);
  if ( !v12 )
    return 3221225626LL;
  v13 = *(_DWORD *)(a2 + 8);
  if ( v13 > 2 || (v30 = *(_DWORD *)(a2 + 12), v30 < 2) )
  {
    v9 = 1;
    *(_OWORD *)v12 = *(_OWORD *)a2;
    *((_OWORD *)v12 + 1) = *(_OWORD *)(a2 + 16);
  }
  else
  {
    if ( v13 < 2 )
    {
      v9 = 1;
      *(_OWORD *)v12 = *(_OWORD *)a2;
      *((_OWORD *)v12 + 1) = *(_OWORD *)(a2 + 16);
      *((_DWORD *)v12 + 2) = *(_DWORD *)(a2 + 8);
      *((_DWORD *)v12 + 3) = 1;
      v30 = *(_DWORD *)(a2 + 12);
    }
    if ( v30 > 2 )
    {
      v33 = 32LL * v9++;
      *(_OWORD *)&v12[v33] = *(_OWORD *)a2;
      *(_OWORD *)&v12[v33 + 16] = *(_OWORD *)(a2 + 16);
      *(_DWORD *)&v12[v33 + 12] = *(_DWORD *)(a2 + 12);
      *(_DWORD *)&v12[v33 + 8] = 3;
    }
    if ( *(_DWORD *)(a2 + 8) > 9u || *(_DWORD *)(a2 + 12) < 9u )
    {
      v34 = 32LL * v9++;
      *(_OWORD *)&v12[v34] = *(_OWORD *)a2;
      *(_OWORD *)&v12[v34 + 16] = *(_OWORD *)(a2 + 16);
      *(_DWORD *)&v12[v34 + 8] = 9;
      *(_DWORD *)&v12[v34 + 12] = 9;
    }
  }
  v14 = word_140C4C04E;
  v15 = 0;
  v40 = word_140C4C04E;
  v16 = 0;
  if ( v9 )
  {
    while ( 1 )
    {
      v17 = &v12[32 * v16];
      v18 = *((_DWORD *)v17 + 3);
      if ( v18 >= 0x10 )
        break;
      v19 = *((_DWORD *)v17 + 2);
      if ( v19 >= 0x10 )
        break;
      v20 = v14;
      if ( v18 >= v14 && v19 <= v14 )
      {
        if ( v15 )
        {
          v6 = -1073741595;
          goto LABEL_23;
        }
        v15 = 1;
        if ( v19 < v14 )
        {
          v35 = 32LL * v9++;
          *(_DWORD *)&v12[v35 + 8] = v19;
          *(_DWORD *)&v12[v35 + 12] = v14 - 1;
          v18 = *((_DWORD *)v17 + 3);
        }
        if ( v18 > v14 )
        {
          v36 = 32LL * v9++;
          *(_DWORD *)&v12[v36 + 8] = v20 + 1;
          *(_DWORD *)&v12[v36 + 12] = *((_DWORD *)v17 + 3);
        }
        memmove(&v12[32 * v16], v17 + 32, 32LL * (v9 - v16));
        v14 = v40;
        --v9;
      }
      if ( ++v16 >= v9 )
        goto LABEL_12;
    }
    v6 = -1073741823;
  }
  else
  {
LABEL_12:
    v21 = (_BYTE *)ExAllocatePool2(256LL, v39, 1768710472LL);
    if ( v21 )
    {
      if ( v9 )
      {
        v22 = (unsigned int *)(v12 + 12);
        v23 = v9;
        do
        {
          v24 = *(v22 - 1);
          v25 = *v22;
          do
          {
            v26 = v24;
            if ( v24 < v25 )
            {
              v37 = (_DWORD *)qword_140025E10 + v24;
              do
              {
                v38 = v24 + 1;
                if ( *v37 + 1 != *((_DWORD *)qword_140025E10 + v38) )
                  break;
                ++v37;
                ++v24;
              }
              while ( (unsigned int)v38 < v25 );
            }
            v27 = 32LL * v10;
            *(_OWORD *)&v21[v27] = *(_OWORD *)a2;
            *(_OWORD *)&v21[v27 + 16] = *(_OWORD *)(a2 + 16);
            if ( v10 )
              v21[v27] = 8;
            ++v10;
            *(_DWORD *)&v21[v27 + 8] = *((_DWORD *)qword_140025E10 + v26);
            v28 = v24++;
            *(_DWORD *)&v21[v27 + 12] = *((_DWORD *)qword_140025E10 + v28);
          }
          while ( v24 <= v25 );
          v22 += 8;
          --v23;
        }
        while ( v23 );
      }
      *a4 = v10;
      if ( v10 )
        *a5 = (__int64)v21;
      else
        ExFreePoolWithTag(v21, 0);
    }
    else
    {
      v6 = -1073741670;
    }
  }
LABEL_23:
  ExFreePoolWithTag(v12, 0);
  return v6;
}
