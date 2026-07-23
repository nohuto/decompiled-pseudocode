/*
 * XREFs of sub_140231E7C @ 0x140231E7C
 * Callers:
 *     sub_140231BF8 @ 0x140231BF8 (sub_140231BF8.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_140231E7C(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, _QWORD *a5)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdi
  unsigned __int16 v9; // ax
  __int64 v10; // r8
  unsigned __int64 v11; // r9
  _QWORD *v12; // r11
  _QWORD *v13; // rdx
  unsigned int v14; // r10d
  __int64 v15; // rcx
  char *v16; // r9
  __int64 v18; // rdx
  unsigned __int64 v19; // r9
  __int64 *v20; // r15
  __int64 *v21; // r14
  unsigned __int64 v22; // r12
  unsigned int v23; // r13d
  size_t v24; // r8
  char *v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // r9
  __int64 *v29; // r15
  __int64 *v30; // r14
  unsigned __int64 v31; // r13
  unsigned int v32; // r12d
  size_t v33; // r8
  char *v34; // rbp
  __int64 v35; // rax
  unsigned __int64 v36; // r9
  __int64 v37; // rdx
  __int64 *v38; // r15
  __int64 *v39; // r14
  unsigned __int64 v40; // r12
  unsigned int v41; // r13d
  size_t v42; // r8
  char *v43; // rbp
  __int64 v44; // rcx

  v5 = 0;
  v6 = a3 + a4;
  if ( a3 + a4 < a3 )
    return (unsigned int)-2147483643;
  *a5 = 0LL;
  v9 = *(_WORD *)(a1 + 48);
  if ( !v9 )
    return (unsigned int)-1073741811;
  if ( v9 <= 2u )
    goto LABEL_4;
  switch ( v9 )
  {
    case 3u:
      v18 = 16LL * *(unsigned int *)(a1 + 60);
      v19 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v19 + v18 <= v6 )
      {
        *(_QWORD *)(a2 + 32) = v19;
        v20 = (__int64 *)(a1 + 72);
        v21 = *(__int64 **)(a1 + 72);
        v22 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        v16 = (char *)(v18 + v19);
        v23 = 0;
        while ( v21 != v20 )
        {
          v24 = *((unsigned __int16 *)v21 + 20);
          v25 = &v16[v24];
          if ( (unsigned __int64)&v16[v24] > v6 )
            return (unsigned int)-2147483643;
          v26 = 2LL * v23;
          *(_WORD *)(v22 + 8 * v26) = v24;
          *(_WORD *)(v22 + 8 * v26 + 2) = v24;
          *(_QWORD *)(v22 + 8 * v26 + 8) = v16;
          memmove(v16, (const void *)v21[6], v24);
          v21 = (__int64 *)*v21;
          v16 = v25;
          ++v23;
        }
        goto LABEL_9;
      }
      return (unsigned int)-2147483643;
    case 4u:
      v36 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      v37 = 24LL * *(unsigned int *)(a1 + 60);
      if ( v36 + v37 <= v6 )
      {
        *(_QWORD *)(a2 + 32) = v36;
        v38 = (__int64 *)(a1 + 72);
        v39 = *(__int64 **)(a1 + 72);
        v40 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        v16 = (char *)(v37 + v36);
        v41 = 0;
        while ( v39 != v38 )
        {
          v42 = *((unsigned __int16 *)v39 + 24);
          v43 = &v16[v42];
          if ( (unsigned __int64)&v16[v42] > v6 )
            return (unsigned int)-2147483643;
          v44 = 3LL * v41;
          *(_QWORD *)(v40 + 8 * v44) = v39[5];
          *(_WORD *)(v40 + 8 * v44 + 8) = v42;
          *(_WORD *)(v40 + 8 * v44 + 10) = v42;
          *(_QWORD *)(v40 + 8 * v44 + 16) = v16;
          memmove(v16, (const void *)v39[7], v42);
          v39 = (__int64 *)*v39;
          v16 = v43;
          ++v41;
        }
        goto LABEL_9;
      }
      return (unsigned int)-2147483643;
    case 5u:
LABEL_22:
      v27 = 16LL * *(unsigned int *)(a1 + 60);
      v28 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v28 + v27 <= v6 )
      {
        *(_QWORD *)(a2 + 32) = v28;
        v29 = (__int64 *)(a1 + 72);
        v30 = *(__int64 **)(a1 + 72);
        v31 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        v16 = (char *)(v27 + v28);
        v32 = 0;
        while ( v30 != v29 )
        {
          v33 = *((unsigned int *)v30 + 12);
          v34 = &v16[v33];
          if ( (unsigned __int64)&v16[v33] > v6 )
            return (unsigned int)-2147483643;
          v35 = 2LL * v32;
          *(_QWORD *)(v31 + 8 * v35) = v16;
          *(_DWORD *)(v31 + 8 * v35 + 8) = v33;
          memmove(v16, (const void *)v30[5], v33);
          v30 = (__int64 *)*v30;
          v16 = v34;
          ++v32;
        }
        goto LABEL_9;
      }
      return (unsigned int)-2147483643;
  }
  if ( v9 != 6 )
  {
    if ( v9 == 16 )
      goto LABEL_22;
    return (unsigned int)-1073741811;
  }
LABEL_4:
  v10 = 8LL * *(unsigned int *)(a1 + 60);
  v11 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v11 + v10 > v6 )
    return (unsigned int)-2147483643;
  v12 = (_QWORD *)(a1 + 72);
  *(_QWORD *)(a2 + 32) = v11;
  v13 = *(_QWORD **)(a1 + 72);
  v14 = 0;
  while ( v13 != v12 )
  {
    v15 = v14++;
    *(_QWORD *)(v11 + 8 * v15) = v13[5];
    v13 = (_QWORD *)*v13;
  }
  v16 = (char *)(v10 + v11);
LABEL_9:
  *a5 = &v16[-a3];
  return v5;
}
