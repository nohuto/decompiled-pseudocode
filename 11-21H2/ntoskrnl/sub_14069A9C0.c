/*
 * XREFs of sub_14069A9C0 @ 0x14069A9C0
 * Callers:
 *     sub_140726700 @ 0x140726700 (sub_140726700.c)
 *     sub_1407CE760 @ 0x1407CE760 (sub_1407CE760.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14069A9C0(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        char **a7,
        _DWORD *a8)
{
  unsigned __int8 *v8; // r13
  unsigned int v9; // r14d
  unsigned int v11; // r10d
  char *PoolWithTag; // rdi
  unsigned int v16; // edx
  unsigned __int8 *v17; // rcx
  unsigned int j; // ebx
  unsigned int v19; // ebx
  unsigned int v20; // r15d
  char *v21; // rbp
  _WORD *v22; // rbx
  unsigned int v23; // ecx
  __int64 v24; // rax
  __int64 result; // rax
  unsigned __int8 *v26; // rcx
  unsigned int n; // r8d
  _WORD *v28; // rsi
  unsigned int nn; // r13d
  __int64 v30; // rax
  unsigned __int8 *v31; // rbx
  unsigned int i; // r15d
  unsigned __int8 *v33; // rcx
  unsigned int k; // ebx
  unsigned __int8 *v35; // rcx
  unsigned int m; // ebx
  unsigned __int8 *v37; // rcx
  unsigned int ii; // r8d
  _WORD *v39; // rbx
  unsigned int kk; // esi
  __int64 v41; // rax
  _WORD *v42; // rsi
  unsigned int mm; // r13d
  __int64 v44; // rax
  _WORD *v45; // rbx
  __int64 v46; // rax
  unsigned __int16 *v47; // rbx
  unsigned int v48; // ecx
  char *v49; // r13
  __int64 v50; // rax
  char *v51; // [rsp+28h] [rbp-40h]
  int v52; // [rsp+70h] [rbp+8h]
  unsigned int jj; // [rsp+70h] [rbp+8h]
  unsigned int v54; // [rsp+70h] [rbp+8h]

  v8 = a5;
  v9 = 0;
  v11 = 2;
  v52 = 2;
  PoolWithTag = 0LL;
  if ( __PAIR128__((unsigned __int64)a1, (unsigned __int64)a2) != 0 || a3 || a4 || a5 || a6 )
  {
    v16 = 8;
    if ( a1 )
    {
      v31 = a1 + 8;
      for ( i = 0; i < *((unsigned __int16 *)a1 + 2); v31 += *((unsigned __int16 *)v31 + 1) )
      {
        switch ( *v31 )
        {
          case 2u:
          case 3u:
          case 7u:
          case 8u:
          case 0xDu:
          case 0xEu:
          case 0xFu:
          case 0x10u:
            if ( v16 + *((unsigned __int16 *)v31 + 1) < v16 )
              goto LABEL_120;
            v16 += *((unsigned __int16 *)v31 + 1);
            if ( a8 )
              *a8 |= 8u;
            if ( *a1 > v11 )
            {
              v11 = *a1;
              v52 = v11;
            }
            break;
          default:
            break;
        }
        ++i;
      }
    }
    if ( a2 )
    {
      v17 = a2 + 8;
      for ( j = 0; j < *((unsigned __int16 *)a2 + 2); v17 += *((unsigned __int16 *)v17 + 1) )
      {
        if ( *v17 == 17 )
        {
          if ( v16 + *((unsigned __int16 *)v17 + 1) < v16 )
            goto LABEL_120;
          v16 += *((unsigned __int16 *)v17 + 1);
          if ( a8 )
            *a8 |= 0x10u;
          if ( *a2 > v11 )
          {
            v11 = *a2;
            v52 = v11;
          }
        }
        ++j;
      }
    }
    if ( a5 )
    {
      v33 = a5 + 8;
      for ( k = 0; k < *((unsigned __int16 *)a5 + 2); v33 += *((unsigned __int16 *)v33 + 1) )
      {
        if ( *v33 == 20 )
        {
          if ( v16 + *((unsigned __int16 *)v33 + 1) < v16 )
            goto LABEL_120;
          v16 += *((unsigned __int16 *)v33 + 1);
          if ( a8 )
            *a8 |= 0x80u;
          if ( *a5 > v11 )
          {
            v11 = *a5;
            v52 = v11;
          }
        }
        ++k;
      }
    }
    if ( a6 )
    {
      v35 = a6 + 8;
      for ( m = 0; m < *((unsigned __int16 *)a6 + 2); v35 += *((unsigned __int16 *)v35 + 1) )
      {
        if ( *v35 == 21 )
        {
          if ( v16 + *((unsigned __int16 *)v35 + 1) < v16 )
            goto LABEL_120;
          v16 += *((unsigned __int16 *)v35 + 1);
          if ( a8 )
            *a8 |= 0x100u;
          if ( *a6 > v11 )
            v11 = *a6;
          v52 = v11;
        }
        ++m;
      }
    }
    if ( a3 )
    {
      v26 = a3 + 8;
      for ( n = 0; n < *((unsigned __int16 *)a3 + 2); v26 += *((unsigned __int16 *)v26 + 1) )
      {
        if ( *v26 == 18 )
        {
          if ( v16 + *((unsigned __int16 *)v26 + 1) < v16 )
            goto LABEL_120;
          v16 += *((unsigned __int16 *)v26 + 1);
          if ( a8 )
            *a8 |= 0x20u;
          if ( *a3 > v11 )
          {
            v11 = *a3;
            v52 = v11;
          }
        }
        ++n;
      }
    }
    if ( a4 )
    {
      v37 = a4 + 8;
      for ( ii = 0; ii < *((unsigned __int16 *)a4 + 2); v37 += *((unsigned __int16 *)v37 + 1) )
      {
        if ( *v37 == 19 )
        {
          if ( v16 + *((unsigned __int16 *)v37 + 1) < v16 )
            goto LABEL_120;
          v16 += *((unsigned __int16 *)v37 + 1);
          if ( a8 )
            *a8 |= 0x40u;
          if ( *a4 > v11 )
            v11 = *a4;
          v52 = v11;
        }
        ++ii;
      }
    }
    if ( v16 + 3 < v16 )
    {
LABEL_120:
      v20 = -1073741675;
    }
    else
    {
      v19 = (v16 + 3) & 0xFFFFFFFC;
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v19, 0x64536553u);
      if ( PoolWithTag )
      {
        if ( v19 < 8 )
        {
          v20 = -1073741789;
        }
        else
        {
          if ( (unsigned int)(v52 - 2) <= 2 && v19 <= 0xFFFC )
          {
            memset(PoolWithTag, 0, v19);
            *PoolWithTag = v52;
            v20 = 0;
            *((_WORD *)PoolWithTag + 1) = v19;
            PoolWithTag[1] = 0;
            *((_DWORD *)PoolWithTag + 1) = 0;
            v51 = 0LL;
            if ( PoolWithTag + 8 <= &PoolWithTag[(unsigned __int16)v19] )
              v51 = PoolWithTag + 8;
            if ( a1 )
            {
              v47 = (unsigned __int16 *)(a1 + 8);
              v48 = 0;
              v54 = 0;
              if ( *((_WORD *)a1 + 2) )
              {
                v49 = v51;
                do
                {
                  switch ( *(_BYTE *)v47 )
                  {
                    case 2:
                    case 3:
                    case 7:
                    case 8:
                    case 0xD:
                    case 0xE:
                    case 0xF:
                    case 0x10:
                      memmove(v49, v47, v47[1]);
                      ++*((_WORD *)PoolWithTag + 2);
                      v50 = v47[1];
                      v48 = v54;
                      v49 += v50;
                      break;
                    case 4:
                    case 5:
                    case 6:
                    case 9:
                    case 0xA:
                    case 0xB:
                    case 0xC:
                      v48 = v54;
                      goto LABEL_82;
                    default:
LABEL_82:
                      LOWORD(v50) = v47[1];
                      break;
                  }
                  ++v48;
                  v47 = (unsigned __int16 *)((char *)v47 + (unsigned __int16)v50);
                  v54 = v48;
                }
                while ( v48 < *((unsigned __int16 *)a1 + 2) );
                v51 = v49;
                v20 = 0;
                v8 = a5;
              }
            }
            v21 = v51;
            if ( a2 )
            {
              v22 = a2 + 8;
              v23 = 0;
              for ( jj = 0; v23 < *((unsigned __int16 *)a2 + 2); jj = v23 )
              {
                LOWORD(v24) = v22[1];
                if ( *(_BYTE *)v22 == 17 )
                {
                  memmove(v21, v22, (unsigned __int16)v22[1]);
                  ++*((_WORD *)PoolWithTag + 2);
                  v24 = (unsigned __int16)v22[1];
                  v23 = jj;
                  v21 += v24;
                }
                ++v23;
                v22 = (_WORD *)((char *)v22 + (unsigned __int16)v24);
              }
            }
            if ( v8 )
            {
              v39 = v8 + 8;
              for ( kk = 0; kk < *((unsigned __int16 *)v8 + 2); v39 = (_WORD *)((char *)v39 + (unsigned __int16)v41) )
              {
                LOWORD(v41) = v39[1];
                if ( *(_BYTE *)v39 == 20 )
                {
                  memmove(v21, v39, (unsigned __int16)v39[1]);
                  ++*((_WORD *)PoolWithTag + 2);
                  v41 = (unsigned __int16)v39[1];
                  v21 += v41;
                }
                ++kk;
              }
            }
            if ( a6 )
            {
              v42 = a6 + 8;
              for ( mm = 0; mm < *((unsigned __int16 *)a6 + 2); v42 = (_WORD *)((char *)v42 + (unsigned __int16)v44) )
              {
                LOWORD(v44) = v42[1];
                if ( *(_BYTE *)v42 == 21 )
                {
                  memmove(v21, v42, (unsigned __int16)v42[1]);
                  ++*((_WORD *)PoolWithTag + 2);
                  v44 = (unsigned __int16)v42[1];
                  v21 += v44;
                }
                ++mm;
              }
            }
            if ( a3 )
            {
              v28 = a3 + 8;
              for ( nn = 0; nn < *((unsigned __int16 *)a3 + 2); v28 = (_WORD *)((char *)v28 + (unsigned __int16)v30) )
              {
                LOWORD(v30) = v28[1];
                if ( *(_BYTE *)v28 == 18 )
                {
                  memmove(v21, v28, (unsigned __int16)v28[1]);
                  ++*((_WORD *)PoolWithTag + 2);
                  v30 = (unsigned __int16)v28[1];
                  v21 += v30;
                }
                ++nn;
              }
            }
            if ( a4 )
            {
              v45 = a4 + 8;
              if ( *((_WORD *)a4 + 2) )
              {
                do
                {
                  LOWORD(v46) = v45[1];
                  if ( *(_BYTE *)v45 == 19 )
                  {
                    memmove(v21, v45, (unsigned __int16)v45[1]);
                    ++*((_WORD *)PoolWithTag + 2);
                    v46 = (unsigned __int16)v45[1];
                    v21 += v46;
                  }
                  ++v9;
                  v45 = (_WORD *)((char *)v45 + (unsigned __int16)v46);
                }
                while ( v9 < *((unsigned __int16 *)a4 + 2) );
              }
            }
            goto LABEL_33;
          }
          v20 = -1073741811;
        }
        ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = 0LL;
      }
      else
      {
        v20 = -1073741801;
      }
    }
LABEL_33:
    result = v20;
    *a7 = PoolWithTag;
    return result;
  }
  *a7 = 0LL;
  return 0LL;
}
