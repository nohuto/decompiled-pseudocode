/*
 * XREFs of ACPIGetConvertToCompatibleIDWide @ 0x1C001DFB4
 * Callers:
 *     ACPIGetWorkerForString @ 0x1C0019740 (ACPIGetWorkerForString.c)
 *     ACPIGetConvertToCompatibleID @ 0x1C001DF4C (ACPIGetConvertToCompatibleID.c)
 * Callees:
 *     ACPIGetConvertToPnpIDWide @ 0x1C001C5D8 (ACPIGetConvertToPnpIDWide.c)
 *     ACPIAnsiStringToWideHelper @ 0x1C001D258 (ACPIAnsiStringToWideHelper.c)
 *     RtlStringCchPrintfA @ 0x1C001D284 (RtlStringCchPrintfA.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x1C001DD7C (ACPIGetConvertToStringWideWithPrepend.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 */

__int64 __fastcall ACPIGetConvertToCompatibleIDWide(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        _QWORD *a5,
        unsigned int *a6)
{
  unsigned int v9; // r12d
  __int64 v10; // rax
  unsigned __int16 v11; // ax
  __int64 v12; // rdi
  char **Pool2; // r14
  int *v14; // rax
  unsigned int *v15; // r15
  int v16; // eax
  unsigned int v17; // ebx
  unsigned int v18; // r12d
  __int64 v19; // rax
  char *v20; // r13
  unsigned int *v21; // rsi
  const void **v22; // rbp
  unsigned __int64 v23; // rax
  bool v24; // zf
  PVOID *v25; // rsi
  const char *v27; // rdi
  __int64 v28; // rbx
  unsigned int v29; // ebx
  char *v30; // rax
  char *v31; // rsi
  unsigned int v32; // ebp
  __int64 v33; // r8
  int v34; // eax
  int v35; // eax
  unsigned int *v36; // [rsp+30h] [rbp-38h]
  __int64 v37; // [rsp+30h] [rbp-38h]
  unsigned int *v38; // [rsp+30h] [rbp-38h]
  __int64 v39; // [rsp+38h] [rbp-30h]
  int *v40; // [rsp+38h] [rbp-30h]

  v36 = 0LL;
  v9 = 0;
  if ( (a4 & 0x4000000) != 0 || (v10 = *(_QWORD *)(a1 + 8), (v10 & 0x1000000000LL) == 0) )
  {
    if ( a2 < 0 )
      return (unsigned int)a2;
    v11 = *(_WORD *)(a3 + 2);
    if ( v11 )
    {
      if ( v11 <= 2u )
      {
        v12 = 1LL;
        goto LABEL_7;
      }
      if ( v11 == 4 )
      {
        v36 = *(unsigned int **)(a3 + 32);
        v12 = *v36;
        if ( *(unsigned int *)(a3 + 24) >= (unsigned __int64)(40 * v12 + 8) )
        {
LABEL_7:
          Pool2 = (char **)ExAllocatePool2(64LL, 8 * v12, 1299211073LL);
          if ( Pool2 )
          {
            v14 = (int *)ExAllocatePool2(64LL, 4 * v12, 1299211073LL);
            v15 = (unsigned int *)v14;
            if ( v14 )
            {
              if ( *(_WORD *)(a3 + 2) == 1 )
              {
                v16 = ACPIGetConvertToPnpIDWide(a1, a2, a3, a4, Pool2, v14);
              }
              else
              {
                if ( *(_WORD *)(a3 + 2) != 2 )
                {
                  if ( *(_WORD *)(a3 + 2) == 4 )
                  {
                    v32 = 0;
                    if ( (_DWORD)v12 )
                    {
                      v33 = (__int64)(v36 + 2);
                      v40 = v14;
                      v38 = v36 + 2;
                      while ( 1 )
                      {
                        if ( *(_WORD *)(v33 + 2) == 1 )
                        {
                          v34 = ACPIGetConvertToPnpIDWide(a1, a2, v33, a4, &Pool2[v32], (int *)&v15[v32]);
                        }
                        else
                        {
                          if ( *(_WORD *)(v33 + 2) != 2 )
                            KeBugCheckEx(0xA3u, 1uLL, 0x60396uLL, 0LL, 0LL);
                          v34 = ACPIGetConvertToStringWideWithPrepend(
                                  (__int64)&v15[v32],
                                  a2,
                                  v33,
                                  a4,
                                  &Pool2[v32],
                                  &v15[v32]);
                        }
                        v17 = v34;
                        if ( v34 < 0 )
                          break;
                        v35 = *v40;
                        if ( *v40 == 1 )
                        {
                          v35 = 0;
                          *v40 = 0;
                        }
                        v33 = (__int64)(v38 + 10);
                        ++v40;
                        v9 += v35;
                        v38 += 10;
                        if ( ++v32 >= (unsigned int)v12 )
                          goto LABEL_13;
                      }
                      v12 = v32;
                      goto LABEL_22;
                    }
                  }
                  goto LABEL_58;
                }
                v16 = ACPIGetConvertToStringWideWithPrepend(
                        (unsigned int)*(unsigned __int16 *)(a3 + 2) - 2,
                        a2,
                        a3,
                        a4,
                        Pool2,
                        v14);
              }
              v17 = v16;
              v9 = *v15;
              if ( v16 < 0 )
              {
LABEL_22:
                if ( (_DWORD)v12 )
                {
                  v25 = (PVOID *)Pool2;
                  do
                  {
                    if ( *v25 )
                      ExFreePoolWithTag(*v25, 0);
                    ++v25;
                    --v12;
                  }
                  while ( v12 );
                }
                ExFreePoolWithTag(v15, 0);
                ExFreePoolWithTag(Pool2, 0);
                return v17;
              }
LABEL_13:
              if ( v9 > 2 )
              {
                v18 = v9 + 2;
                v19 = ExAllocatePool2(
                        (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                        v18,
                        1399874369LL);
                v37 = v19;
                if ( v19 )
                {
                  v20 = (char *)v19;
                  if ( (_DWORD)v12 )
                  {
                    v21 = v15;
                    v39 = (unsigned int)v12;
                    v22 = (const void **)Pool2;
                    do
                    {
                      if ( *v22 )
                        memmove(v20, *v22, *v21);
                      ++v22;
                      v23 = (unsigned __int64)*v21++ >> 1;
                      v24 = v39-- == 1;
                      v20 += 2 * v23;
                    }
                    while ( !v24 );
                  }
                  *a5 = v37;
                  if ( a6 )
                    *a6 = v18;
                }
                else
                {
                  v17 = -1073741670;
                }
                goto LABEL_22;
              }
LABEL_58:
              v17 = -1072431089;
              goto LABEL_22;
            }
            ExFreePoolWithTag(Pool2, 0);
          }
          return 3221225626LL;
        }
      }
    }
    return 3222536207LL;
  }
  if ( v10 >= 0 )
    v27 = (const char *)&AcpiProcessorCompatId;
  else
    v27 = *(const char **)(a1 + 184);
  v28 = -1LL;
  do
    ++v28;
  while ( v27[v28] );
  v29 = v28 + 2;
  v30 = (char *)ExAllocatePool2(
                  (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                  2 * v29,
                  1399874369LL);
  v31 = v30;
  if ( !v30 )
    return 3221225626LL;
  RtlStringCchPrintfA(v30, v29, "%s", v27);
  ACPIAnsiStringToWideHelper(v31, 2 * v29);
  *a5 = v31;
  if ( a6 )
    *a6 = 2 * v29;
  return 0LL;
}
