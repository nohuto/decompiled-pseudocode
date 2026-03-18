/*
 * XREFs of ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C0059F80
 * Callers:
 *     DwmNotifyChildrenAddRemove @ 0x1C0059F3C (DwmNotifyChildrenAddRemove.c)
 * Callees:
 *     DwmAsyncChildLink @ 0x1C005A26C (DwmAsyncChildLink.c)
 *     DwmAsyncChildUnlink @ 0x1C005A888 (DwmAsyncChildUnlink.c)
 *     DwmAsyncOwnerChange @ 0x1C00CCF70 (DwmAsyncOwnerChange.c)
 *     BuildHwndList @ 0x1C00D2540 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00D2E50 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall DwmNotifyChildrenLinkUnlink(const struct tagDESKTOP *a1, int a2)
{
  unsigned int v3; // ebp
  int v4; // r12d
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r13
  _QWORD *i; // r14
  int v9; // esi
  void *v10; // rax
  __int64 v11; // rcx
  void *v12; // rax
  ShellWindowManagement *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r15
  _QWORD *j; // r14
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // r13d
  void *v21; // rax
  __int64 v22; // rcx
  void *v23; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  void *v27; // rax
  __int64 v28; // rcx
  void *v29; // rax
  void *v30; // rax
  void *v31; // rax
  void *v32; // rax
  int v33; // [rsp+70h] [rbp+8h]

  v3 = 1;
  v4 = a2;
  v5 = BuildHwndList(*(ShellWindowManagement **)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL) + 112LL));
  v7 = v5;
  if ( !v5 )
    return 0;
  for ( i = (_QWORD *)(v5 + 32); *i != 1LL; ++i )
  {
    LOBYTE(v6) = 1;
    v25 = HMValidateHandleNoSecure(*i, v6);
    if ( v25 )
    {
      if ( v4 )
      {
        v33 = *(_DWORD *)(*(_QWORD *)(v25 + 40) + 236LL);
        v27 = (void *)ReferenceDwmApiPort(v26);
        DwmAsyncChildLink(v27, v33);
        v29 = (void *)ReferenceDwmApiPort(v28);
        DwmAsyncOwnerChange(v29);
        v4 = a2;
      }
      else
      {
        v32 = (void *)ReferenceDwmApiPort(v26);
        DwmAsyncChildUnlink(v32);
      }
    }
  }
  FreeHwndList(v7);
  if ( v4 )
  {
    v9 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL) + 236LL);
    v10 = (void *)ReferenceDwmApiPort(*(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL));
    DwmAsyncChildLink(v10, v9);
    v12 = (void *)ReferenceDwmApiPort(v11);
    DwmAsyncOwnerChange(v12);
  }
  else
  {
    v31 = (void *)ReferenceDwmApiPort(*(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL));
    DwmAsyncChildUnlink(v31);
  }
  v13 = *(ShellWindowManagement **)(*((_QWORD *)a1 + 13) + 112LL);
  if ( v13 )
  {
    v14 = BuildHwndList(v13);
    v16 = v14;
    if ( v14 )
    {
      for ( j = (_QWORD *)(v14 + 32); *j != 1LL; ++j )
      {
        LOBYTE(v15) = 1;
        v18 = HMValidateHandleNoSecure(*j, v15);
        if ( v18 )
        {
          if ( v4 )
          {
            v20 = *(_DWORD *)(*(_QWORD *)(v18 + 40) + 236LL);
            v21 = (void *)ReferenceDwmApiPort(v19);
            DwmAsyncChildLink(v21, v20);
            v23 = (void *)ReferenceDwmApiPort(v22);
            DwmAsyncOwnerChange(v23);
            v4 = a2;
          }
          else
          {
            v30 = (void *)ReferenceDwmApiPort(v19);
            DwmAsyncChildUnlink(v30);
          }
        }
      }
      FreeHwndList(v16);
      return v3;
    }
    return 0;
  }
  return v3;
}
