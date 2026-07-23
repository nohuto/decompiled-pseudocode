/*
 * XREFs of RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800EB568
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x180033520 (RtlQueryInformationActivationContext.c)
 * Callees:
 *     DbgPrintEx @ 0x1800538D0 (DbgPrintEx.c)
 *     RtlpLocateActivationContextSectionForQuery @ 0x18007B25C (RtlpLocateActivationContextSectionForQuery.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall RtlpQueryAssemblyInformationActivationContextDetailedInformation(
        _DWORD *a1,
        unsigned int a2,
        char *a3,
        size_t a4,
        size_t *a5)
{
  size_t *v5; // r14
  unsigned int v6; // ebx
  __int64 v10; // rax
  __int64 v11; // r9
  unsigned int v12; // ecx
  char *v13; // r9
  unsigned __int64 v14; // rbp
  char *v15; // rsi
  char *v16; // rdi
  char *v17; // rdi
  char *v18; // rdi
  char *v19; // rdi
  __int64 v21; // [rsp+38h] [rbp-50h]
  unsigned int v22; // [rsp+90h] [rbp+8h] BYREF
  int v23; // [rsp+98h] [rbp+10h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+18h] BYREF

  v5 = a5;
  v6 = 0;
  v22 = -1073741595;
  v23 = 0;
  if ( a5 )
    *a5 = 0LL;
  v10 = (unsigned int)a1[6];
  v11 = *(unsigned int *)((char *)a1 + v10 + 12);
  v12 = *(_DWORD *)((char *)a1 + v10 + 8);
  v13 = (char *)a1 + v11;
  if ( a2 < v12 )
  {
    _mm_lfence();
    v14 = 104LL;
    v15 = (char *)a1 + *(unsigned int *)&v13[24 * a2 + 16];
    RtlpLocateActivationContextSectionForQuery(&v23, (int *)&v22, a3, a4, v5, 0x68uLL, a1, v21, 1u, &v24, &a5);
    if ( v23 == 2 )
    {
      return v22;
    }
    else
    {
      if ( *((_DWORD *)v15 + 2) )
        v14 = *((unsigned int *)v15 + 2) + 106LL;
      if ( *((_DWORD *)v15 + 5) )
        v14 += *((unsigned int *)v15 + 5) + 2LL;
      if ( *((_DWORD *)v15 + 10) )
        v14 += *((unsigned int *)v15 + 10) + 2LL;
      if ( *((_DWORD *)v15 + 20) )
        v14 += *((unsigned int *)v15 + 20) + 2LL;
      if ( v14 <= a4 )
      {
        v16 = a3 + 104;
        *(_DWORD *)a3 = *((_DWORD *)v15 + 1);
        *((_DWORD *)a3 + 1) = *((_DWORD *)v15 + 2);
        *((_DWORD *)a3 + 2) = *((_DWORD *)v15 + 4);
        *((_DWORD *)a3 + 3) = *((_DWORD *)v15 + 5);
        *((_QWORD *)a3 + 2) = *(_QWORD *)(v15 + 28);
        *((_DWORD *)a3 + 6) = *((_DWORD *)v15 + 9);
        *((_DWORD *)a3 + 7) = *((_DWORD *)v15 + 10);
        *((_QWORD *)a3 + 4) = *((_QWORD *)v15 + 6);
        *((_DWORD *)a3 + 10) = *((_DWORD *)v15 + 14);
        *((_DWORD *)a3 + 11) = *((_DWORD *)v15 + 16);
        *((_DWORD *)a3 + 12) = *((_DWORD *)v15 + 17);
        *((_DWORD *)a3 + 13) = *((_DWORD *)v15 + 18);
        *((_DWORD *)a3 + 14) = *((_DWORD *)v15 + 19);
        *((_DWORD *)a3 + 15) = *((_DWORD *)v15 + 20);
        *((_QWORD *)a3 + 8) = 0LL;
        *((_QWORD *)a3 + 9) = 0LL;
        *((_QWORD *)a3 + 10) = 0LL;
        *((_QWORD *)a3 + 11) = 0LL;
        *((_DWORD *)a3 + 24) = *((_DWORD *)v15 + 22);
        if ( *((_DWORD *)v15 + 2) )
        {
          memmove(a3 + 104, (const void *)(v24 + *((unsigned int *)v15 + 3)), *((unsigned int *)v15 + 2));
          *((_QWORD *)a3 + 8) = v16;
          v17 = &v16[*((unsigned int *)v15 + 2)];
          *(_WORD *)v17 = 0;
          v16 = v17 + 2;
        }
        if ( *((_DWORD *)v15 + 5) )
        {
          memmove(v16, (const void *)(v24 + *((unsigned int *)v15 + 6)), *((unsigned int *)v15 + 5));
          *((_QWORD *)a3 + 9) = v16;
          v18 = &v16[*((unsigned int *)v15 + 5)];
          *(_WORD *)v18 = 0;
          v16 = v18 + 2;
        }
        if ( *((_DWORD *)v15 + 10) )
        {
          memmove(v16, (const void *)(v24 + *((unsigned int *)v15 + 11)), *((unsigned int *)v15 + 10));
          *((_QWORD *)a3 + 10) = v16;
          v19 = &v16[*((unsigned int *)v15 + 10)];
          *(_WORD *)v19 = 0;
          v16 = v19 + 2;
        }
        if ( *((_DWORD *)v15 + 20) )
        {
          memmove(v16, (const void *)(v24 + *((unsigned int *)v15 + 21)), *((unsigned int *)v15 + 20));
          *((_QWORD *)a3 + 11) = v16;
          *(_WORD *)&v16[*((unsigned int *)v15 + 20)] = 0;
        }
        if ( v5 )
          *v5 = v14;
      }
      else
      {
        if ( v5 )
          *v5 = v14;
        return (unsigned int)-1073741789;
      }
    }
  }
  else
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() received invalid sub-instance index %lu out of %lu Assemblies in the Acitvation Context\n",
      "RtlpQueryAssemblyInformationActivationContextDetailedInformation",
      a2,
      v12);
    return (unsigned int)-1073741811;
  }
  return v6;
}
