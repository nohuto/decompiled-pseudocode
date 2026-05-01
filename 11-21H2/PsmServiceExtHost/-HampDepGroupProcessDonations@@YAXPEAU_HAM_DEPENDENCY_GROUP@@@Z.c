/*
 * XREFs of ?HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180075B14
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800761DC (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x18002AB3C (-RmpCommitValuesAdd@@YAJ_K0PEA_K@Z.c)
 *     ?HampDepGroupGetFirstLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800753C0 (-HampDepGroupGetFirstLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z @ 0x1800754DC (-HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z.c)
 *     ?HampActCanChangeStateTo@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x18007746C (-HampActCanChangeStateTo@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180077D24 (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 */

void __fastcall HampDepGroupProcessDonations(struct _HAM_DEPENDENCY_GROUP *a1)
{
  struct _HAM_DEPENDENCY_LINK *i; // rax
  struct _HAM_DEPENDENCY_LINK *v2; // rdx
  char *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // r10
  unsigned __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r10
  struct _HAM_DEPENDENCY_LINK *v10; // r8
  struct _HAM_DEPENDENCY_LINK *j; // rcx
  struct _HAM_DEPENDENCY_LINK *NextLink; // rax

  for ( i = HampDepGroupGetFirstLink(a1); i; i = HampDepGroupGetNextLink(i) )
  {
    v2 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)i + 10);
    v3 = 0LL;
    if ( v2 != (struct _HAM_DEPENDENCY_LINK *)((char *)i + 80) )
      v3 = (char *)v2 - 16;
    if ( v3 )
    {
      do
      {
LABEL_8:
        v4 = *((_QWORD *)v3 + 6);
        v5 = *(_QWORD *)v3;
        if ( *((_QWORD *)v3 + 8) == *(_QWORD *)(v4 + 816) )
        {
          if ( (*(_BYTE *)(v5 + 552) & 8) == 0 )
          {
            if ( (*(_DWORD *)(v5 + 112) & 0x80000) != 0 )
            {
              v7 = 976LL;
              v8 = *(_QWORD *)(*((_QWORD *)v3 + 7) + 1128LL);
              *(_OWORD *)(v3 + 72) = *(_OWORD *)(v4 + 920);
              *(_OWORD *)(v3 + 88) = *(_OWORD *)(v4 + 936);
              v6 = *(_QWORD *)(v4 + 976);
            }
            else
            {
              v6 = *(_QWORD *)(v4 + 968);
              v7 = 968LL;
              v8 = *(_QWORD *)(v5 + 456);
            }
            RmpCommitValuesAdd(v6, v8, (unsigned __int64 *)(v4 + v7));
          }
        }
        else
        {
          LOBYTE(v2) = 1;
          if ( (unsigned int)HampActCanChangeStateTo(*(_QWORD *)v3, v2) )
            HampActRequestStopEx(v9, 1LL, 11LL, 0LL, 6912, 0, 0LL);
        }
        v2 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v3 + 2);
        v10 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v3 + 1);
        v3 = 0LL;
        if ( v2 != (struct _HAM_DEPENDENCY_LINK *)((char *)v10 + 80) )
          v3 = (char *)v2 - 16;
      }
      while ( v3 );
      for ( j = v10; ; j = NextLink )
      {
        NextLink = HampDepGroupGetNextLink(j);
        if ( !NextLink )
          break;
        v2 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)NextLink + 10);
        v3 = 0LL;
        if ( v2 != (struct _HAM_DEPENDENCY_LINK *)((char *)NextLink + 80) )
          v3 = (char *)v2 - 16;
        if ( v3 )
          goto LABEL_8;
      }
      return;
    }
  }
}
