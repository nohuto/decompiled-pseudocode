/*
 * XREFs of sub_140A1A6D0 @ 0x140A1A6D0
 * Callers:
 *     sub_140A1A928 @ 0x140A1A928 (sub_140A1A928.c)
 * Callees:
 *     sub_140248A04 @ 0x140248A04 (sub_140248A04.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_140A1A6D0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, _QWORD *a5)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdi
  unsigned __int16 v9; // ax
  __int64 v10; // rdx
  unsigned __int64 v11; // r10
  __int64 *v12; // r15
  __int64 *v13; // r14
  unsigned __int64 v14; // r13
  _WORD *v15; // r10
  unsigned int v16; // r12d
  size_t v17; // r8
  _WORD *v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // r10
  __int64 v22; // r14
  __int64 v23; // r11
  unsigned __int64 v24; // r12
  unsigned int v25; // r15d
  unsigned __int64 v26; // r9
  _WORD *v27; // rbp
  __int64 v28; // rcx
  __int64 *v29; // r11
  __int64 v30; // rdx
  unsigned __int64 v31; // r10
  __int64 v32; // r14
  __int64 v33; // r11
  unsigned __int64 v34; // r12
  unsigned int v35; // r15d
  unsigned __int64 v36; // r9
  _WORD *v37; // rbp
  __int64 *v38; // r11
  __int64 v39; // r8
  unsigned __int64 v40; // r10
  _QWORD *v41; // r11
  _QWORD *v42; // rdx
  unsigned int v43; // r9d
  __int64 v44; // rcx

  v5 = 0;
  v6 = a3 + a4;
  if ( a3 + a4 < a3 )
    return (unsigned int)-2147483643;
  *a5 = 0LL;
  v9 = *(_WORD *)(a1 + 48);
  if ( !v9 )
    return (unsigned int)-1073741811;
  if ( v9 > 2u )
  {
    switch ( v9 )
    {
      case 3u:
        v30 = 8LL * *(unsigned int *)(a1 + 60);
        v31 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v31 + v30 <= v6 )
        {
          *(_QWORD *)(a2 + 24) = v31;
          v32 = a1 + 72;
          v33 = *(_QWORD *)(a1 + 72);
          v34 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          v15 = (_WORD *)(v30 + v31);
          v35 = 0;
          while ( v33 != v32 )
          {
            v36 = *(unsigned __int16 *)(v33 + 40);
            v37 = (_WORD *)((char *)v15 + v36 + 2);
            if ( (unsigned __int64)v37 > v6 )
              return (unsigned int)-2147483643;
            *(_QWORD *)(v34 + 8LL * v35) = v15;
            sub_140248A04(v15, v36 + 2, *(_QWORD *)(v33 + 48), v36);
            v33 = *v38;
            v15 = v37;
            ++v35;
          }
          goto LABEL_33;
        }
        return (unsigned int)-2147483643;
      case 4u:
        v20 = 16LL * *(unsigned int *)(a1 + 60);
        v21 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v21 + v20 <= v6 )
        {
          *(_QWORD *)(a2 + 24) = v21;
          v22 = a1 + 72;
          v23 = *(_QWORD *)(a1 + 72);
          v24 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          v15 = (_WORD *)(v20 + v21);
          v25 = 0;
          while ( v23 != v22 )
          {
            v26 = *(unsigned __int16 *)(v23 + 48);
            v27 = (_WORD *)((char *)v15 + v26 + 2);
            if ( (unsigned __int64)v27 > v6 )
              return (unsigned int)-2147483643;
            v28 = 2LL * v25;
            *(_QWORD *)(v24 + 8 * v28) = *(_QWORD *)(v23 + 40);
            *(_QWORD *)(v24 + 8 * v28 + 8) = v15;
            sub_140248A04(v15, v26 + 2, *(_QWORD *)(v23 + 56), v26);
            v23 = *v29;
            v15 = v27;
            ++v25;
          }
          goto LABEL_33;
        }
        return (unsigned int)-2147483643;
      case 5u:
        goto LABEL_10;
    }
    if ( v9 != 6 )
    {
      if ( v9 == 16 )
      {
LABEL_10:
        v10 = 16LL * *(unsigned int *)(a1 + 60);
        v11 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v11 + v10 <= v6 )
        {
          *(_QWORD *)(a2 + 24) = v11;
          v12 = (__int64 *)(a1 + 72);
          v13 = *(__int64 **)(a1 + 72);
          v14 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          v15 = (_WORD *)(v10 + v11);
          v16 = 0;
          while ( v13 != v12 )
          {
            v17 = *((unsigned int *)v13 + 12);
            v18 = (_WORD *)((char *)v15 + v17);
            if ( (unsigned __int64)v15 + v17 > v6 )
              return (unsigned int)-2147483643;
            v19 = 2LL * v16;
            *(_QWORD *)(v14 + 8 * v19) = v15;
            *(_DWORD *)(v14 + 8 * v19 + 8) = v17;
            memmove(v15, (const void *)v13[5], v17);
            v13 = (__int64 *)*v13;
            v15 = v18;
            ++v16;
          }
          goto LABEL_33;
        }
        return (unsigned int)-2147483643;
      }
      return (unsigned int)-1073741811;
    }
  }
  v39 = 8LL * *(unsigned int *)(a1 + 60);
  v40 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v40 + v39 <= v6 )
  {
    v41 = (_QWORD *)(a1 + 72);
    *(_QWORD *)(a2 + 24) = v40;
    v42 = *(_QWORD **)(a1 + 72);
    v43 = 0;
    while ( v42 != v41 )
    {
      v44 = v43++;
      *(_QWORD *)(v40 + 8 * v44) = v42[5];
      v42 = (_QWORD *)*v42;
    }
    v15 = (_WORD *)(v39 + v40);
LABEL_33:
    *a5 = (char *)v15 - a3;
    return v5;
  }
  return (unsigned int)-2147483643;
}
