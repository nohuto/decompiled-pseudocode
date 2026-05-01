/*
 * XREFs of ?HampDepGroupPopulateIndependentHostList@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x18003C3BC
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B818 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampHostCheckSetStaticDonation@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003C510 (-HampHostCheckSetStaticDonation@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepHostStackCompareHosts@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18003D630 (-HampDepHostStackCompareHosts@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

void __fastcall HampDepGroupPopulateIndependentHostList(
        struct _HAM_DEPENDENCY_WORKER_CONTEXT **a1,
        unsigned __int64 a2)
{
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *i; // rsi
  char *v5; // r13
  __int64 v6; // r8
  unsigned int v7; // ecx
  unsigned __int64 v8; // rbx
  void *v9; // r14
  int v10; // ebp
  unsigned __int64 v11; // rax

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  for ( i = *a1; i != (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)a1; i = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)i )
  {
    v5 = (char *)i - 744;
    *((_QWORD *)i + 29) = 0LL;
    HampHostCheckSetStaticDonation((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)i - 744));
    v6 = *((_QWORD *)i - 10);
    v7 = (4 * ((v6 & 0x300000000LL) != 0)) | *((_DWORD *)i + 10) & 0xFFFFFFF3;
    *((_DWORD *)i + 10) = v7;
    if ( (v6 & 0x1000000000LL) != 0 )
    {
      v8 = *(_QWORD *)a2;
      v9 = (void *)(((unsigned __int64)v7 >> 2) & 3);
      if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
      {
        if ( v8 )
          v8 ^= a2;
      }
      LOBYTE(v6) = 0;
      v10 = *(_BYTE *)(a2 + 8) & 1;
      if ( v8 )
      {
        while ( 1 )
        {
          if ( (int)HampDepHostStackCompareHosts(v9, (struct _RTL_BALANCED_NODE *)v8) < 0 )
          {
            v11 = *(_QWORD *)v8;
            if ( v10 )
            {
              if ( !v11 )
                goto LABEL_17;
              v11 ^= v8;
            }
            if ( !v11 )
            {
LABEL_17:
              LOBYTE(v6) = 0;
              break;
            }
          }
          else
          {
            v11 = *(_QWORD *)(v8 + 8);
            if ( v10 )
            {
              if ( !v11 )
                goto LABEL_18;
              v11 ^= v8;
            }
            if ( !v11 )
            {
LABEL_18:
              LOBYTE(v6) = 1;
              break;
            }
          }
          v8 = v11;
        }
      }
      RtlRbInsertNodeEx(a2, v8, v6, v5 + 760);
      *((_DWORD *)v5 + 196) |= 2u;
    }
  }
}
