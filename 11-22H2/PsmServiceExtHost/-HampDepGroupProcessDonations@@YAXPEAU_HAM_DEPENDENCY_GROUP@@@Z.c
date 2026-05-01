/*
 * XREFs of ?HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003C0EC
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B818 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampDepGroupGetFirstLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003C24C (-HampDepGroupGetFirstLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z @ 0x18003C59C (-HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z.c)
 *     ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x18003C5E0 (-RmpCommitValuesAdd@@YAJ_K0PEA_K@Z.c)
 *     ?HampActCanChangeStateTo@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x18007B31C (-HampActCanChangeStateTo@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18007BAC4 (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 */

void __fastcall HampDepGroupProcessDonations(struct _HAM_DEPENDENCY_GROUP *a1)
{
  struct _HAM_DEPENDENCY_LINK *i; // rax
  struct _HAM_DEPENDENCY_LINK *v2; // rdx
  struct _HAM_DEPENDENCY_LINK *v3; // rbx
  char *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r10
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  struct _HAM_DEPENDENCY_LINK *v10; // r8
  struct _HAM_DEPENDENCY_LINK *j; // rcx
  struct _HAM_DEPENDENCY_LINK *NextLink; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r10
  struct _HAM_DEPENDENCY_LINK *v16; // rbx

  for ( i = HampDepGroupGetFirstLink(a1); i; i = HampDepGroupGetNextLink(i) )
  {
    v3 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)i + 10);
    if ( v3 != (struct _HAM_DEPENDENCY_LINK *)((char *)i + 80) )
    {
      v4 = (char *)v3 - 16;
      if ( v4 )
      {
        do
        {
LABEL_5:
          v5 = *((_QWORD *)v4 + 6);
          v6 = *(_QWORD *)v4;
          if ( *((_QWORD *)v4 + 8) == *(_QWORD *)(v5 + 816) )
          {
            if ( (*(_BYTE *)(v6 + 552) & 8) == 0 )
            {
              if ( (*(_DWORD *)(v6 + 112) & 0x80000) != 0 )
              {
                v13 = *((_QWORD *)v4 + 7);
                v14 = 1200LL;
                if ( v13 )
                  v14 = v13 + 1136;
                v8 = 976LL;
                v9 = *(_QWORD *)v14;
                *(_OWORD *)(v4 + 72) = *(_OWORD *)(v5 + 920);
                *(_OWORD *)(v4 + 88) = *(_OWORD *)(v5 + 936);
                v7 = *(_QWORD *)(v5 + 976);
              }
              else
              {
                v7 = *(_QWORD *)(v5 + 968);
                v8 = 968LL;
                v9 = *(_QWORD *)(v6 + 456);
              }
              RmpCommitValuesAdd(v7, v9, (unsigned __int64 *)(v8 + v5));
            }
          }
          else
          {
            LOBYTE(v2) = 1;
            if ( (unsigned int)HampActCanChangeStateTo(*(_QWORD *)v4, v2) )
              HampActRequestStopEx(v15, 1LL, 11LL, 0LL, 6912, 0, 0LL);
          }
          v2 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v4 + 2);
          v10 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v4 + 1);
          v4 = 0LL;
          if ( v2 != (struct _HAM_DEPENDENCY_LINK *)((char *)v10 + 80) )
            v4 = (char *)v2 - 16;
        }
        while ( v4 );
        for ( j = v10; ; j = NextLink )
        {
          NextLink = HampDepGroupGetNextLink(j);
          if ( !NextLink )
            break;
          v16 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)NextLink + 10);
          if ( v16 != (struct _HAM_DEPENDENCY_LINK *)((char *)NextLink + 80) )
          {
            v4 = (char *)v16 - 16;
            if ( v4 )
              goto LABEL_5;
          }
        }
        return;
      }
    }
  }
}
