/*
 * XREFs of sub_14093B898 @ 0x14093B898
 * Callers:
 *     sub_14093B1CC @ 0x14093B1CC (sub_14093B1CC.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_14093BDD4 @ 0x14093BDD4 (sub_14093BDD4.c)
 *     sub_14093C268 @ 0x14093C268 (sub_14093C268.c)
 *     sub_14093C544 @ 0x14093C544 (sub_14093C544.c)
 *     sub_14093CF20 @ 0x14093CF20 (sub_14093CF20.c)
 *     sub_14093D300 @ 0x14093D300 (sub_14093D300.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

_UNKNOWN **__fastcall sub_14093B898(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  _UNKNOWN **result; // rax
  int v5; // r15d
  __int64 v7; // rbx
  unsigned int v8; // edi
  unsigned __int64 v9; // r13
  _QWORD *v10; // r14
  unsigned __int64 v11; // rsi
  int v12; // edx
  unsigned __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rax
  unsigned int v16; // r10d
  unsigned int v17; // r15d
  unsigned int v18; // eax
  unsigned __int64 v19; // r12
  __int64 Pool2; // rax
  __int64 v21; // r10
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rax
  bool v25; // zf
  char *v26; // rax
  unsigned __int64 v27; // r10
  __int64 i; // r11
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  __int64 v34; // rsi
  unsigned __int64 v35; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v36; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v37; // [rsp+40h] [rbp-40h] BYREF
  char *v38; // [rsp+48h] [rbp-38h] BYREF
  _UNKNOWN **v39; // [rsp+50h] [rbp-30h] BYREF
  __int64 v40; // [rsp+58h] [rbp-28h]
  __int64 v41; // [rsp+60h] [rbp-20h] BYREF
  _QWORD *v42; // [rsp+68h] [rbp-18h]
  unsigned __int64 v43; // [rsp+70h] [rbp-10h]
  __int64 v44; // [rsp+78h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+38h] BYREF

  result = &retaddr;
  v5 = a2;
  v42 = 0LL;
  v7 = 0LL;
  v37 = 0LL;
  v8 = 0;
  v39 = 0LL;
  v9 = 0LL;
  LODWORD(v35) = 0;
  v36 = 0;
  v38 = 0LL;
  v41 = 0LL;
  v40 = 0LL;
  v10 = (_QWORD *)(a1 + 680);
  if ( a1 != -680 )
  {
    v44 = *a4;
    v11 = (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFD8uLL) + 160;
    v43 = v11;
    if ( (int)sub_14093CF20(a2, 0LL, &v37) >= 0 )
    {
      LODWORD(v13) = v37;
      if ( !v37 )
        goto LABEL_32;
      if ( (a3 * (unsigned __int64)(unsigned int)dword_140C0CBEC + 0x3FFFF) >> 18 < v37 )
        v13 = (a3 * (unsigned __int64)(unsigned int)dword_140C0CBEC + 0x3FFFF) >> 18;
      v14 = sub_14093BDD4(v5, v12, v13, (unsigned int)&v39, (__int64)&v35, (__int64)&v38);
      v8 = v35;
      if ( v14 >= 0 )
      {
        v9 = (unsigned __int64)v38;
        if ( v38 )
        {
          v15 = 0LL;
          LODWORD(v37) = 0;
          if ( (_DWORD)v35 )
          {
            while ( 2 )
            {
              if ( (int)sub_14093D300(v39[v15], &v41, &v36) >= 0 )
              {
                v17 = v36;
                while ( v17 )
                {
                  v18 = v17;
                  if ( v17 > v16 )
                    v18 = v16;
                  v17 -= v18;
                  v19 = v18;
                  v36 = v17;
                  LODWORD(v35) = 8 * v18 + 48;
                  Pool2 = ExAllocatePool2(64LL, (unsigned int)v35, 1886217292LL);
                  v21 = Pool2;
                  if ( !Pool2 )
                    goto LABEL_33;
                  *(_QWORD *)Pool2 = 0LL;
                  *(_WORD *)(Pool2 + 8) = v35;
                  *(_WORD *)(Pool2 + 10) = 2050;
                  *(_DWORD *)(Pool2 + 40) = (_DWORD)v19 << 12;
                  v22 = 0LL;
                  if ( v19 )
                  {
                    v23 = v41;
                    v24 = 0LL;
                    do
                    {
                      *(_QWORD *)(v21 + 8 * v22 + 48) = v24 + v23;
                      v22 = (unsigned int)(v22 + 1);
                      v24 = (unsigned int)v22;
                    }
                    while ( (unsigned int)v22 < v19 );
                    v11 = v43;
                  }
                  if ( !v7 )
                    v7 = v21;
                  if ( v42 )
                    *v42 = v21;
                  v25 = (*(_BYTE *)(v21 + 10) & 5) == 0;
                  v42 = (_QWORD *)v21;
                  v26 = v25
                      ? (char *)MmMapLockedPagesSpecifyCache((PMDL)v21, 0, MmCached, 0LL, 0, 0x40000020u)
                      : *(char **)(v21 + 24);
                  v38 = v26;
                  if ( !v26 )
                    goto LABEL_33;
                  v27 = 0LL;
                  v35 = 0LL;
                  for ( i = (unsigned int)dword_140C0CBEC; v27 < v19 / (unsigned int)dword_140C0CBEC; v35 = v27 )
                  {
                    v29 = v10[9];
                    v30 = (unsigned int)dword_140C0CBE8;
                    ++v40;
                    v31 = *a4;
                    *(_QWORD *)(v29 + 8 * v31) = &v38[v27 * (unsigned int)dword_140C0CBE8];
                    ++v10[8];
                    *v10 += i;
                    *(_QWORD *)(v10[10] + 8 * v27) = 0LL;
                    sub_14093C268(a1, *(_QWORD *)(v10[9] + 8 * v31), v30);
                    v32 = v40;
                    ++*a4;
                    if ( v32 == a3 )
                      goto LABEL_32;
                    v27 = v35 + 1;
                    i = (unsigned int)dword_140C0CBEC;
                  }
                  v16 = 786432;
                }
                v15 = (unsigned int)(v37 + 1);
                LODWORD(v37) = v15;
                if ( (unsigned int)v15 < v8 )
                  continue;
                goto LABEL_32;
              }
              break;
            }
LABEL_33:
            if ( v7 )
            {
              do
              {
                v34 = *(_QWORD *)v7;
                if ( (*(_BYTE *)(v7 + 10) & 1) != 0 )
                  MmUnmapLockedPages(*(PVOID *)(v7 + 24), (PMDL)v7);
                ExFreePoolWithTag((PVOID)v7, 0x706D644Cu);
                v7 = v34;
              }
              while ( v34 );
            }
            return (_UNKNOWN **)sub_14093C544(&v39, v8);
          }
        }
LABEL_32:
        v33 = (unsigned int)dword_140C0CBEC;
        *(_QWORD *)((char *)v10 + v11) = v44;
        *(_QWORD *)((char *)v10 + v11 + 16) = v7;
        *(_QWORD *)((char *)v10 + v11 + 8) = v9 / v33;
        result = v39;
        *(_QWORD *)((char *)v10 + v11 + 24) = v39;
        *(_DWORD *)((char *)v10 + v11 + 32) = v8;
        return result;
      }
    }
    return (_UNKNOWN **)sub_14093C544(&v39, v8);
  }
  return result;
}
