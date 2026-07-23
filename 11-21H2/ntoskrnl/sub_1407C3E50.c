/*
 * XREFs of sub_1407C3E50 @ 0x1407C3E50
 * Callers:
 *     sub_1407C3850 @ 0x1407C3850 (sub_1407C3850.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 * Callees:
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1403477B0 @ 0x1403477B0 (sub_1403477B0.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406E717C @ 0x1406E717C (sub_1406E717C.c)
 *     sub_140718B68 @ 0x140718B68 (sub_140718B68.c)
 */

unsigned __int16 *__fastcall sub_1407C3E50(__m128i *a1, unsigned int *a2)
{
  bool v2; // bp
  unsigned int v4; // ebx
  int v5; // r8d
  __int64 v6; // rdi
  unsigned __int16 v7; // r14
  unsigned int v8; // r10d
  unsigned __int16 v9; // dx
  unsigned __int16 v10; // r11
  unsigned __int16 v11; // dx
  __int64 v12; // r9
  __int64 v13; // r15
  __int64 v14; // r13
  unsigned __int16 *v15; // r12
  unsigned int v16; // ebp
  unsigned int v17; // r14d
  unsigned __int16 *v18; // rax
  int v19; // eax
  _BYTE *v20; // r10
  __int64 v21; // r11
  unsigned __int16 v22; // dx
  char *v23; // rcx
  int v24; // eax
  _QWORD *v26; // rax
  unsigned __int16 v27; // dx
  _QWORD *v28; // rax
  unsigned __int16 v29; // dx
  int v30; // ecx
  unsigned __int16 *v31; // r15
  unsigned __int16 *v32; // r14
  unsigned __int16 v33; // bp
  unsigned __int16 v34; // r11
  unsigned __int16 v35; // dx
  int v36; // r10d
  int v37; // ecx
  _QWORD *v38; // rax
  unsigned __int16 v39; // dx
  int v40; // r10d
  unsigned int v41; // edx
  unsigned int v42; // ecx
  _QWORD *v43; // rax
  unsigned __int16 v44; // dx
  unsigned int v45; // ebp
  __int64 v46; // r10
  unsigned __int16 v47; // dx
  _QWORD *v48; // rax
  unsigned __int16 v49; // dx
  unsigned __int16 v50; // [rsp+70h] [rbp+8h]
  char v51; // [rsp+80h] [rbp+18h]
  __int64 v52; // [rsp+88h] [rbp+20h]

  v2 = 0;
  if ( a2 )
    v4 = *a2;
  else
    v4 = sub_140718B68(a1);
  v5 = a1->m128i_u16[0];
  v6 = 0LL;
  v51 = 1;
  v7 = (unsigned __int16)v5 >> 1;
  v8 = 0;
  v50 = (unsigned __int16)v5 >> 1;
  if ( (v5 & 0xFFFFFFFE) != 0 )
  {
    do
    {
      v9 = *(_WORD *)(a1->m128i_i64[1] + 2LL * v8);
      if ( v9 >= 0x61u )
      {
        if ( v9 > 0x7Au )
        {
          v26 = sub_140347DB0();
          v11 = sub_1403477B0(v26[154], v27);
        }
        else
        {
          v10 = v5;
          v11 = v9 - 32;
        }
        if ( v11 > 0xFFu )
        {
          v7 = v10;
          v51 = 0;
        }
      }
      else
      {
        v10 = v5;
      }
      ++v8;
      LOWORD(v5) = v10;
    }
    while ( v8 < v10 >> 1 );
    v50 = v7;
  }
  v52 = 16LL
      * (((unsigned __int16)(-30045 * (v4 ^ (v4 >> 9))) ^ (unsigned __int16)((unsigned __int64)(101027 * (v4 ^ (v4 >> 9))) >> 9)) & 0x7FF);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)qword_140C493B8 + v52, 0LL);
  v13 = v52;
  v14 = *(_QWORD *)((char *)qword_140C493B8 + v52 + 8);
  if ( v14 )
  {
    v12 = 65504LL;
    while ( 1 )
    {
      v15 = (unsigned __int16 *)(v14 - 8);
      if ( v4 == *(_DWORD *)v14 )
      {
        v30 = v15[12];
        if ( v7 == (_WORD)v30 )
        {
          v31 = v15 + 13;
          v32 = (unsigned __int16 *)a1->m128i_i64[1];
          v2 = 1;
          if ( (*(_DWORD *)v15 & 1) != 0 )
          {
            v33 = (unsigned __int16)a1->m128i_i16[0] >> 1;
            v34 = v50;
            if ( v33 )
            {
              while ( v34 )
              {
                v35 = *v32++;
                v36 = *(unsigned __int8 *)v31;
                v31 = (unsigned __int16 *)((char *)v31 + 1);
                if ( v35 != (_WORD)v36 )
                {
                  if ( v35 >= 0x61u )
                  {
                    if ( v35 > 0x7Au )
                    {
                      v38 = sub_140347DB0();
                      v35 = sub_1403477B0(v38[154], v39);
                      v12 = 65504LL;
                    }
                    else
                    {
                      v35 -= 32;
                    }
                  }
                  v37 = v35 - v36;
                  if ( v35 != v36 )
                    goto LABEL_37;
                }
                --v34;
                if ( !--v33 )
                  break;
              }
            }
            v37 = v33 - v34;
LABEL_37:
            v2 = v37 == 0;
            if ( !v37 )
            {
LABEL_38:
              if ( (*(_DWORD *)v15 & 0xFFFFFFFE) == 0xFFFFFFFE )
                v15 = 0LL;
              else
                *(_DWORD *)v15 += 2;
LABEL_16:
              if ( !v2 )
              {
                v13 = v52;
                v7 = v50;
                break;
              }
LABEL_25:
              ExReleasePushLockEx((ULONG_PTR)qword_140C493B8 + v52, 0LL);
              return v15;
            }
          }
          else
          {
            v40 = 0;
            if ( (v30 & 0xFFFFFFFE) == 0 )
              goto LABEL_38;
            while ( 1 )
            {
              v41 = *v32;
              if ( v41 >= 0x61 )
              {
                if ( v41 <= 0x7A )
                {
                  v42 = v41 - 32;
                }
                else
                {
                  v43 = sub_140347DB0();
                  v42 = sub_1403477B0(v43[154], v44);
                }
              }
              else
              {
                v42 = *v32;
              }
              if ( v42 != *v31 )
                break;
              ++v32;
              ++v31;
              if ( ++v40 >= (unsigned int)(v15[12] >> 1) )
                goto LABEL_38;
            }
            v2 = 0;
            v12 = 65504LL;
          }
          v7 = v50;
        }
      }
      v14 = *(_QWORD *)(v14 + 8);
      if ( !v14 )
        goto LABEL_16;
    }
  }
  v16 = v7;
  v17 = v7 + 26;
  v18 = (unsigned __int16 *)Allocate(PagedPool, v17, 0x624E4D43u, (PLOOKASIDE_LIST_EX)v12);
  v15 = v18;
  if ( v18 )
  {
    memset(v18, 0, v17);
    v19 = *(_DWORD *)v15;
    if ( v51 )
    {
      *(_DWORD *)v15 = v19 | 1;
      if ( v16 )
      {
        v20 = v15 + 13;
        v21 = v16;
        do
        {
          v22 = *(_WORD *)(v6 * 2 + a1->m128i_i64[1]);
          if ( v22 >= 0x61u )
          {
            if ( v22 > 0x7Au )
            {
              v28 = sub_140347DB0();
              LOBYTE(v22) = sub_1403477B0(v28[154], v29);
            }
            else
            {
              LOBYTE(v22) = v22 - 32;
            }
          }
          *v20 = v22;
          ++v6;
          ++v20;
          --v21;
        }
        while ( v21 );
      }
    }
    else
    {
      v45 = v16 >> 1;
      *(_DWORD *)v15 = v19 & 0xFFFFFFFE;
      if ( v45 )
      {
        v46 = v45;
        do
        {
          v47 = *(_WORD *)(v6 * 2 + a1->m128i_i64[1]);
          if ( v47 >= 0x61u )
          {
            if ( v47 <= 0x7Au )
            {
              v47 -= 32;
            }
            else
            {
              v48 = sub_140347DB0();
              v47 = sub_1403477B0(v48[154], v49);
            }
          }
          v15[v6 + 13] = v47;
          ++v6;
          --v46;
        }
        while ( v46 );
      }
    }
    v23 = (char *)qword_140C493B8;
    v24 = *(_DWORD *)v15 & 1 | 2;
    *((_DWORD *)v15 + 2) = v4;
    *(_DWORD *)v15 = v24;
    v15[12] = v50;
    *((_QWORD *)v15 + 2) = *(_QWORD *)&v23[v13 + 8];
    *(_QWORD *)&v23[v13 + 8] = v15 + 4;
    goto LABEL_25;
  }
  sub_1406E717C(v4);
  return 0LL;
}
