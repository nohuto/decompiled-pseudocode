/*
 * XREFs of ?vFillGRectDIB32Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C0141670
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0160280 (memmove.c)
 */

void __fastcall vFillGRectDIB32Bitfields(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  int v2; // r13d
  struct _GRADIENTRECTDATA *v3; // r14
  __int64 v4; // r11
  int v5; // r15d
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r13
  unsigned int v12; // eax
  void *v13; // r9
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  char *v16; // r12
  __int64 v17; // rax
  char *v18; // rdi
  char *v19; // r15
  char *v20; // r13
  __int64 v21; // r14
  __int64 v22; // rdi
  int v23; // eax
  char *v24; // rdi
  int i; // r15d
  __int64 v26; // [rsp+38h] [rbp-50h]
  __int64 v27; // [rsp+38h] [rbp-50h]
  int v28; // [rsp+90h] [rbp+8h]
  __int64 v29; // [rsp+90h] [rbp+8h]
  int v31; // [rsp+A0h] [rbp+18h]
  __int64 v32; // [rsp+A0h] [rbp+18h]
  __int64 v33; // [rsp+A8h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 22);
  v3 = a2;
  v31 = v2;
  v4 = *((_QWORD *)a2 + 21);
  v5 = *((_DWORD *)a2 + 11);
  v6 = *((_QWORD *)a2 + 6);
  v7 = *((_QWORD *)a2 + 7);
  v8 = *((_QWORD *)a2 + 8);
  v33 = v4;
  v28 = v5;
  if ( *((_DWORD *)a2 + 38) )
  {
    v9 = *((int *)a2 + 45);
    v29 = *((_QWORD *)a2 + 11);
    v32 = *((_QWORD *)a2 + 12);
    if ( (int)v9 > 0 )
    {
      v6 += *((_QWORD *)a2 + 10) * v9;
      v7 += *((_QWORD *)a2 + 11) * v9;
      v8 += *((_QWORD *)a2 + 12) * v9;
    }
    v10 = *((_QWORD *)a1 + 10) + 4 * *((_DWORD *)a2 + 8) + (__int64)(v2 * *((_DWORD *)a2 + 9));
    if ( v5 )
    {
      v26 = *((int *)a1 + 22);
      v11 = *((_QWORD *)a2 + 10);
      while ( 1 )
      {
        --v5;
        v12 = XEPALOBJ::ulDispatchGFPEFunction(
                v4,
                *(unsigned int *)(*(_QWORD *)v4 + 100LL),
                BYTE6(v6) | ((BYTE6(v7) | (BYTE6(v8) << 8)) << 8));
        v13 = (void *)v10;
        v14 = (unsigned __int64)(4 * *((_DWORD *)v3 + 10)) >> 2;
        if ( v14 )
        {
          if ( (v10 & 4) == 0 )
            goto LABEL_11;
          *(_DWORD *)v10 = v12;
          if ( --v14 )
            break;
        }
LABEL_9:
        v7 += v29;
        v6 += v11;
        v8 += v32;
        v10 += v26;
        v4 = v33;
        if ( !v5 )
          return;
      }
      v13 = (void *)(v10 + 4);
LABEL_11:
      memset64(v13, v12 | ((unsigned __int64)v12 << 32), v14 >> 1);
      if ( (v14 & 1) != 0 )
        *((_DWORD *)v13 + v14 - 1) = v12;
      goto LABEL_9;
    }
  }
  else
  {
    v27 = *((_QWORD *)a2 + 16);
    v15 = *((int *)a2 + 44);
    if ( (int)v15 > 0 )
    {
      v6 += *((_QWORD *)a2 + 14) * v15;
      v7 += *((_QWORD *)a2 + 15) * v15;
      v8 += *((_QWORD *)a2 + 16) * *((int *)a2 + 44);
    }
    v16 = (char *)(*((_QWORD *)a1 + 10) + v2 * *((_DWORD *)a2 + 9) + 4LL * *((int *)a2 + 8));
    v17 = *((int *)a2 + 10);
    v18 = v16;
    if ( v16 != &v16[4 * v17] )
    {
      v19 = (char *)(*((_QWORD *)a1 + 10) + v2 * *((_DWORD *)a2 + 9) + 4LL * *((int *)a2 + 8));
      v20 = &v16[4 * v17];
      v21 = *((_QWORD *)a2 + 14);
      v22 = *((_QWORD *)a2 + 15);
      do
      {
        v23 = XEPALOBJ::ulDispatchGFPEFunction(
                v4,
                *(unsigned int *)(*(_QWORD *)v4 + 100LL),
                BYTE6(v6) | ((BYTE6(v7) | (BYTE6(v8) << 8)) << 8));
        v8 += v27;
        v6 += v21;
        v4 = v33;
        v7 += v22;
        *(_DWORD *)v19 = v23;
        v19 += 4;
      }
      while ( v19 != v20 );
      v3 = a2;
      v18 = v16;
      v5 = v28;
      v2 = v31;
    }
    v24 = &v18[v2];
    for ( i = v5 - 1; i > 0; --i )
    {
      memmove(v24, v16, 4 * *((_DWORD *)v3 + 10));
      v24 += v2;
    }
  }
}
