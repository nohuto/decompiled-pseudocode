/*
 * XREFs of AcpiIoctlArgumentToPackageObjV1 @ 0x1C002C0FC
 * Callers:
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C001BAFC (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x1C001C780 (ACPIIoctlEvalPreProcessingV1.c)
 *     AcpiIoctlArgumentToPackageObjV1 @ 0x1C002C0FC (AcpiIoctlArgumentToPackageObjV1.c)
 * Callees:
 *     AcpiIoctlArgumentToPackageObjV1 @ 0x1C002C0FC (AcpiIoctlArgumentToPackageObjV1.c)
 */

__int64 __fastcall AcpiIoctlArgumentToPackageObjV1(_WORD *a1, __int64 a2, char a3, unsigned int *a4, PVOID *a5)
{
  __int64 v7; // rbx
  __int64 v8; // r10
  unsigned int v9; // r14d
  _WORD *v10; // rsi
  unsigned __int64 v11; // r9
  _WORD *v12; // rcx
  unsigned int v13; // eax
  unsigned int *Pool2; // rax
  int v15; // r8d
  unsigned int v16; // ebp
  unsigned int v17; // ebx
  unsigned __int16 v19; // dx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 i; // rdi
  char *v23; // rdx
  __int16 v24; // ax
  unsigned __int16 v25; // ax
  __int64 v26; // rax
  int v27; // eax
  int v28; // [rsp+68h] [rbp+10h]

  v28 = a2;
  *a4 = 0;
  v7 = a2;
  *a5 = 0LL;
  if ( !a1 || (v8 = (unsigned __int16)a1[1], (unsigned __int16)(v8 - 1) <= 6u) || *a1 != 4 )
  {
    v17 = -1073741811;
LABEL_37:
    if ( *a5 )
    {
      ExFreePoolWithTag(*a5, 0x41706341u);
      *a4 = 0;
      *a5 = 0LL;
    }
    return v17;
  }
  v9 = 0;
  v10 = a1 + 2;
  v11 = (unsigned __int64)a1 + v8 + 4;
  v12 = v10;
  if ( (unsigned __int64)v10 >= v11 )
  {
LABEL_5:
    v13 = 40 * v9 + 8;
    *a4 = v13;
    Pool2 = (unsigned int *)ExAllocatePool2(v7, v13, 1097884481LL);
    v15 = 0;
    *a5 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = v9;
      v16 = 0;
      if ( !v9 )
        return 0;
      for ( i = 0LL; ; i += 40LL )
      {
        v23 = (char *)*a5;
        if ( *v10 == 4 )
          v24 = 4;
        else
          v24 = *v10 + 1;
        *(_WORD *)&v23[i + 10] = v24;
        v25 = *v10;
        if ( *v10 )
        {
          if ( v25 > 2u )
          {
            if ( v25 == 4 )
            {
              LOBYTE(v15) = a3;
              v27 = AcpiIoctlArgumentToPackageObjV1((_DWORD)v10, v7, v15, (int)i + (int)v23 + 32, (__int64)&v23[i + 40]);
              v15 = 0;
              v17 = v27;
              if ( v27 < 0 )
                goto LABEL_37;
              LODWORD(v7) = v28;
              goto LABEL_23;
            }
            *(_WORD *)&v23[i + 10] = 3;
          }
          *(_DWORD *)&v23[i + 32] = (unsigned __int16)v10[1];
          *(_QWORD *)&v23[i + 40] = v10 + 2;
        }
        else
        {
          *(_DWORD *)&v23[i + 32] = a3 != 0 ? 8 : 4;
          *(_QWORD *)&v23[i + 24] = *((unsigned int *)v10 + 1);
        }
LABEL_23:
        v26 = (unsigned __int16)v10[1];
        if ( (unsigned __int16)v26 < 4u )
          v26 = 4LL;
        ++v16;
        v10 = (_WORD *)((char *)v10 + v26 + 4);
        if ( v16 >= v9 )
          return 0;
      }
    }
    v17 = -1073741670;
    goto LABEL_37;
  }
  while ( *v12 <= 4u )
  {
    v19 = v12[1];
    if ( v19 > (unsigned __int16)v8 )
      break;
    v20 = 4LL;
    if ( v19 >= 4u )
      v20 = (unsigned __int16)v12[1];
    v21 = (unsigned __int16)v12[1];
    if ( (unsigned __int64)v12 + v20 + 4 > v11 )
      break;
    ++v9;
    if ( v19 < 4u )
      v21 = 4LL;
    v12 = (_WORD *)((char *)v12 + v21 + 4);
    if ( (unsigned __int64)v12 >= v11 )
      goto LABEL_5;
  }
  return (unsigned int)-1073741788;
}
