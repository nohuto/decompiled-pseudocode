/*
 * XREFs of sub_1407070B0 @ 0x1407070B0
 * Callers:
 *     sub_1407074F0 @ 0x1407074F0 (sub_1407074F0.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

_OWORD *__fastcall sub_1407070B0(__int64 a1, int a2)
{
  __int64 v2; // r14
  char v3; // r12
  char v5; // bl
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rcx
  _WORD *v10; // r10
  __int16 v11; // r11
  unsigned int v12; // r8d
  unsigned __int16 v13; // r9
  unsigned int v14; // esi
  __int16 v15; // dx
  unsigned __int16 v16; // ax
  __int16 v17; // ax
  __int64 v18; // rax
  unsigned int v19; // ecx
  unsigned int v20; // eax
  _OWORD *v21; // rax
  _OWORD *v22; // r12
  _DWORD *v23; // r8
  _QWORD *v24; // rsi
  unsigned int v25; // ebp
  unsigned __int64 v26; // r14
  unsigned __int64 v27; // r14
  __int64 v28; // rdi
  __int64 v29; // r13
  __int64 v30; // r15
  unsigned __int64 v31; // rax
  bool v33; // cf
  bool v34; // zf
  __int64 v35; // rcx
  _WORD *v36; // r8
  __int16 v37; // ax
  __int16 v38; // bx
  unsigned int v39; // r11d
  unsigned int v40; // r9d
  __int16 v41; // cx
  unsigned __int16 v42; // dx
  int v44; // [rsp+80h] [rbp+18h]
  _OWORD *v45; // [rsp+88h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  v5 = 0;
  v7 = 0LL;
  v8 = 0LL;
  do
  {
    v9 = *(unsigned int *)(v2 + 4);
    v10 = (_WORD *)(v2 + 8);
    v8 += v9;
    a2 -= v9;
    v2 += v9;
    v11 = 4;
    v12 = (unsigned int)(v9 - 8) >> 1;
    v13 = 0;
    v14 = 0;
    if ( v12 )
    {
      do
      {
        v15 = *v10 >> 12;
        if ( v15 )
        {
          if ( v5 != (_BYTE)v15 )
          {
            if ( v3 )
              return (_OWORD *)a1;
            v5 = v15;
            v3 = 1;
          }
          v16 = *v10 & 0xFFF;
          if ( v16 <= v13 && v13 )
            return (_OWORD *)a1;
          v17 = v16 - v13;
          if ( v17 == v11 )
          {
            v18 = v7 + 2;
            v19 = v14 + 1;
            if ( v14 != 254 )
              v18 = v7;
            v7 = v18;
            v20 = v14;
            v14 = 0;
            if ( v20 != 254 )
              v14 = v19;
          }
          else
          {
            if ( v14 )
            {
              v33 = v14 < 4;
              v34 = v14 == 4;
              v14 = 0;
              v7 += (!v33 && !v34) + 1LL;
            }
            v11 = v17;
            if ( (unsigned __int16)v17 >= 0xEBu )
              v7 += 2LL;
            else
              ++v7;
          }
          v13 = *v10 & 0xFFF;
        }
        --v12;
        ++v10;
      }
      while ( v12 );
      if ( v14 )
      {
        if ( v14 <= 4 )
          ++v7;
        else
          v7 += 2LL;
      }
    }
    v7 += (v7 & 1) + 2;
  }
  while ( a2 );
  if ( !v3 )
    return (_OWORD *)a1;
  v21 = sub_1402828F0(256, v7 + 8 * (*(unsigned int *)(a1 + 56) + 12LL), 0x65526D4Du);
  v45 = v21;
  v22 = v21;
  if ( !v21 )
    return (_OWORD *)a1;
  v23 = (_DWORD *)a1;
  v24 = v21 + 6;
  v25 = 0;
  v26 = *(_QWORD *)(a1 + 32) - *(_QWORD *)a1;
  *v21 = *(_OWORD *)a1;
  v27 = v26 >> 3;
  v44 = v27;
  v21[1] = *(_OWORD *)(a1 + 16);
  v21[2] = *(_OWORD *)(a1 + 32);
  v21[3] = *(_OWORD *)(a1 + 48);
  v21[4] = *(_OWORD *)(a1 + 64);
  v21[5] = *(_OWORD *)(a1 + 80);
  *((_BYTE *)v21 + 64) = v5;
  *(_QWORD *)v21 = v21 + 6;
  v28 = (__int64)v21 + 8 * *(unsigned int *)(a1 + 56) + 96;
  *((_QWORD *)v21 + 4) = v28;
  v29 = *(_QWORD *)(a1 + 32);
  if ( (_DWORD)v27 )
  {
    v30 = a1 - (_QWORD)v21;
    do
    {
      if ( v25 < v23[14] )
      {
        v31 = *(_QWORD *)((char *)v24 + v30);
        if ( v31 > 1 )
        {
          *v24 = v28;
          if ( (*((_BYTE *)v24 + v30) & 1) != 0 )
            *v24 = v28 | 1;
          v35 = *(unsigned int *)(v29 + 4);
          v36 = (_WORD *)(v29 + 8);
          v29 += v35;
          v37 = 0;
          v38 = 4;
          v39 = 0;
          v40 = (unsigned int)(v35 - 8) >> 1;
          if ( v40 )
          {
            do
            {
              if ( *v36 >= 0x1000u )
              {
                v41 = *v36 & 0xFFF;
                v42 = v41 - v37;
                if ( v41 - v37 == v38 )
                {
                  if ( ++v39 == 255 )
                  {
                    *(_WORD *)v28 = -17;
                    v39 = 0;
                    v28 += 2LL;
                  }
                }
                else
                {
                  if ( v39 )
                  {
                    if ( v39 > 4 )
                    {
                      *(_BYTE *)v28 = -17;
                      *(_BYTE *)(v28 + 1) = v39;
                      v28 += 2LL;
                    }
                    else
                    {
                      *(_BYTE *)v28++ = -17 - v39;
                    }
                    v39 = 0;
                  }
                  v38 = v41 - v37;
                  if ( v42 >= 0xEBu )
                  {
                    *(_BYTE *)v28 = v42 | 0xF0;
                    *(_BYTE *)(v28 + 1) = v42 >> 4;
                    v28 += 2LL;
                  }
                  else
                  {
                    *(_BYTE *)v28++ = v42;
                  }
                }
                v37 = v41;
              }
              ++v36;
              --v40;
            }
            while ( v40 );
            LODWORD(v27) = v44;
            if ( v39 )
            {
              if ( v39 <= 4 )
              {
                *(_BYTE *)v28++ = -17 - v39;
              }
              else
              {
                *(_BYTE *)v28 = -17;
                *(_BYTE *)(v28 + 1) = v39;
                v28 += 2LL;
              }
            }
          }
          v23 = (_DWORD *)a1;
          *(_WORD *)v28 = 240;
          v28 += 2LL;
          if ( (v28 & 1) != 0 )
            ++v28;
        }
        else
        {
          *v24 = v31;
        }
      }
      ++v25;
      ++v24;
    }
    while ( v25 < (unsigned int)v27 );
    v22 = v45;
  }
  ExFreePoolWithTag(v23, 0);
  return v22;
}
