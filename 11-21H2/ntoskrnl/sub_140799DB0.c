/*
 * XREFs of sub_140799DB0 @ 0x140799DB0
 * Callers:
 *     sub_1406623D0 @ 0x1406623D0 (sub_1406623D0.c)
 *     sub_140662780 @ 0x140662780 (sub_140662780.c)
 *     sub_1406647E0 @ 0x1406647E0 (sub_1406647E0.c)
 *     sub_14066B830 @ 0x14066B830 (sub_14066B830.c)
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 *     sub_14078DDF0 @ 0x14078DDF0 (sub_14078DDF0.c)
 *     sub_140799BB0 @ 0x140799BB0 (sub_140799BB0.c)
 *     sub_140799CF0 @ 0x140799CF0 (sub_140799CF0.c)
 *     sub_1409CE94C @ 0x1409CE94C (sub_1409CE94C.c)
 * Callees:
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlValidSid @ 0x1407B4660 (RtlValidSid.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140799DB0(
        char *Src,
        unsigned int a2,
        char a3,
        char *a4,
        unsigned int a5,
        int a6,
        int a7,
        PVOID *a8,
        unsigned int *a9)
{
  char *PoolWithTag; // r11
  int v12; // r12d
  unsigned int v13; // r14d
  unsigned int v14; // edi
  unsigned int i; // edx
  char *v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // eax
  char *v22; // r9
  unsigned int v23; // edx
  unsigned __int64 v24; // r8
  PVOID *v25; // r13
  char *v26; // rdi
  char *v27; // r15
  unsigned int v28; // r14d
  _QWORD *v29; // r12
  unsigned __int8 *v30; // rdx
  unsigned int v31; // edi
  char *v33; // rcx
  unsigned int v34; // esi
  _QWORD *v35; // r15
  unsigned int v36; // r14d
  void *v37; // rdi
  int v38; // [rsp+24h] [rbp-64h]
  unsigned int v39; // [rsp+28h] [rbp-60h]
  int v40; // [rsp+30h] [rbp-58h]
  char *v41; // [rsp+30h] [rbp-58h]
  unsigned int *P; // [rsp+38h] [rbp-50h]
  char v43; // [rsp+A0h] [rbp+18h]
  char *v44; // [rsp+A8h] [rbp+20h]
  int v45; // [rsp+C0h] [rbp+38h]

  v44 = a4;
  v43 = a3;
  PoolWithTag = 0LL;
  P = 0LL;
  v12 = 0;
  v45 = 0;
  if ( !a2 )
  {
    *a8 = 0LL;
    *a9 = 0;
    return 0LL;
  }
  if ( a2 > 0x1000 )
    return 3221225485LL;
  v13 = 16 * a2;
  v40 = 16 * a2 + 3;
  v14 = v40 & 0xFFFFFFFC;
  v39 = v40 & 0xFFFFFFFC;
  if ( a3 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)1025, v14, 0x61546553u);
    P = (unsigned int *)PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    if ( v13 )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = &Src[v13];
      if ( (unsigned __int64)v16 > 0x7FFFFFFF0000LL || v16 < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v17 = 0;
    v38 = 0;
    while ( v17 < a2 )
    {
      v18 = 2LL * v17;
      v19 = *(_QWORD *)&Src[16 * v17];
      v20 = v19 + 1;
      if ( v19 + 1 >= 0x7FFFFFFF0000LL )
        v20 = 0x7FFFFFFF0000LL;
      v21 = *(unsigned __int8 *)v20;
      if ( v21 > 0xF )
      {
        v12 = -1073741704;
        v45 = -1073741704;
        v14 = v39;
        break;
      }
      v22 = &PoolWithTag[8 * v18];
      *(_QWORD *)v22 = v19;
      v23 = 4 * v21 + 8;
      *((_DWORD *)v22 + 2) = v23;
      if ( (v19 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v24 = v19 + v23;
      if ( v24 > 0x7FFFFFFF0000LL || v24 < v19 )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v23 = *((_DWORD *)v22 + 2);
      }
      v14 = ((v23 + 3) & 0xFFFFFFFC) + v39;
      v39 = v14;
      v17 = ++v38;
      v12 = 0;
      v45 = 0;
    }
    if ( v12 < 0 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      return (unsigned int)v12;
    }
    a4 = v44;
    a3 = v43;
  }
  else
  {
    for ( i = 0; i < a2; ++i )
      v14 += (4 * *(unsigned __int8 *)(*(_QWORD *)&Src[16 * i] + 1LL) + 11) & 0xFFFFFFFC;
  }
  *a9 = v14;
  if ( !a4 )
  {
    v26 = (char *)ExAllocatePoolWithTag((POOL_TYPE)1025, v14, 0x61536553u);
    v25 = a8;
    *a8 = v26;
    if ( v26 )
    {
      a3 = v43;
      goto LABEL_32;
    }
    if ( v43 )
      ExFreePoolWithTag(P, 0);
    return 3221225626LL;
  }
  if ( v14 <= a5 )
  {
    v25 = a8;
    *a8 = a4;
    v26 = a4;
LABEL_32:
    if ( a3 )
    {
      memmove(v26, Src, v13);
      v33 = &v26[v40 & 0xFFFFFFFC];
      v41 = v33;
      v34 = 0;
      v35 = *v25;
      while ( v34 < a2 && !v12 )
      {
        memmove(v33, *(const void **)&P[4 * v34], P[4 * v34 + 2]);
        v35[2 * v34] = v41;
        v36 = P[4 * v34 + 2];
        v33 = &v41[(v36 + 3) & 0xFFFFFFFC];
        v41 = v33;
        if ( (v35[2 * v34 + 1] & 0x1FFFFF80) != 0 )
        {
          v12 = -1073741811;
        }
        else
        {
          v37 = (void *)v35[2 * v34];
          if ( !RtlValidSid(v37) || RtlLengthSid(v37) != v36 )
            v12 = -1073741704;
          v33 = v41;
        }
        ++v34;
      }
    }
    else
    {
      memmove(v26, Src, v13);
      v27 = &v26[v40 & 0xFFFFFFFC];
      v28 = 0;
      v29 = *v25;
      while ( v28 < a2 )
      {
        v30 = (unsigned __int8 *)v29[2 * v28];
        v31 = 4 * v30[1] + 8;
        memmove(v27, v30, v31);
        v29[2 * v28++] = v27;
        v27 += (v31 + 3) & 0xFFFFFFFC;
      }
      v12 = v45;
    }
    if ( v43 )
      ExFreePoolWithTag(P, 0);
    if ( !v44 && v12 < 0 )
    {
      ExFreePoolWithTag(*v25, 0);
      *v25 = 0LL;
    }
    return (unsigned int)v12;
  }
  if ( a3 )
    ExFreePoolWithTag(PoolWithTag, 0);
  return 3221225507LL;
}
