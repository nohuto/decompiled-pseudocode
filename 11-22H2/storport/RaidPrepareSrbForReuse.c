/*
 * XREFs of RaidPrepareSrbForReuse @ 0x1C00A0450
 * Callers:
 *     RaidBusEnumeratorAllocateReportLunsResources @ 0x1C001634C (RaidBusEnumeratorAllocateReportLunsResources.c)
 *     RaidBusEnumeratorAllocateUnitResources @ 0x1C0016A94 (RaidBusEnumeratorAllocateUnitResources.c)
 * Callees:
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 */

__int64 __fastcall RaidPrepareSrbForReuse(unsigned int *a1)
{
  __int64 v1; // rdi
  char v2; // r9
  int v3; // ebx
  unsigned int v4; // ebp
  unsigned int v6; // r12d
  __int64 v7; // r8
  __int64 v8; // r13
  size_t v9; // r15
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // ecx
  __int64 result; // rax
  int v16; // ebx
  int v17; // ebx
  __int64 v18; // rbx
  __int64 v19; // rdi

  v1 = 0LL;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  if ( *((_BYTE *)a1 + 2) != 40 )
  {
    v18 = *((_QWORD *)a1 + 4);
    v19 = *((_QWORD *)a1 + 7);
    result = (__int64)memset_0(a1, 0, 0x58uLL);
    *((_QWORD *)a1 + 4) = v18;
    *((_QWORD *)a1 + 7) = v19;
    return result;
  }
  v6 = a1[14];
  v7 = 0LL;
  v8 = *((_QWORD *)a1 + 13);
  v9 = a1[4];
  v10 = a1[30];
  if ( !v6 )
    goto LABEL_12;
  while ( 1 )
  {
    v11 = a1[v7 + 30];
    if ( (unsigned int)v11 >= 0x80 && (unsigned int)v11 <= (unsigned int)v9 )
      break;
LABEL_16:
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= v6 )
      goto LABEL_12;
  }
  v12 = (unsigned int)v11;
  v13 = *(unsigned int *)((char *)a1 + v11) - 64;
  if ( !v13 )
  {
    if ( v12 + 40 <= v9 )
    {
      v1 = *(_QWORD *)((char *)a1 + v12 + 16);
      v3 = 64;
      goto LABEL_8;
    }
    goto LABEL_11;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( v12 + 56 <= v9 )
    {
      v1 = *(_QWORD *)((char *)a1 + v12 + 16);
      v3 = 65;
      v4 = *(unsigned int *)((char *)a1 + v12 + 4);
      v2 = 1;
    }
LABEL_11:
    if ( v2 )
      goto LABEL_12;
    goto LABEL_16;
  }
  if ( v14 != 1 || v12 + 40 > v9 )
    goto LABEL_11;
  v1 = *(_QWORD *)((char *)a1 + v12 + 24);
  v3 = 66;
LABEL_8:
  v4 = *(unsigned int *)((char *)a1 + v12 + 4);
LABEL_12:
  memset_0(a1, 0, v9);
  *((_BYTE *)a1 + 2) = 40;
  result = 8LL;
  *(_WORD *)a1 = 8;
  a1[4] = v9;
  *((_QWORD *)a1 + 13) = v8;
  a1[14] = v6;
  a1[30] = v10;
  v16 = v3 - 64;
  if ( !v16 )
  {
    *(unsigned int *)((char *)a1 + v10) = 64;
    goto LABEL_14;
  }
  v17 = v16 - 1;
  if ( v17 )
  {
    if ( v17 == 1 )
    {
      *(unsigned int *)((char *)a1 + v10) = 66;
      *(unsigned int *)((char *)a1 + v10 + 4) = v4;
      *(_QWORD *)((char *)a1 + v10 + 24) = v1;
    }
  }
  else
  {
    *(unsigned int *)((char *)a1 + v10) = 65;
LABEL_14:
    *(unsigned int *)((char *)a1 + v10 + 4) = v4;
    *(_QWORD *)((char *)a1 + v10 + 16) = v1;
  }
  return result;
}
