/*
 * XREFs of ?ShouldClearRenderTargets@CWindowList@@QEBA_NXZ @ 0x18010CEF0
 * Callers:
 *     ?UpdateEnableClearForRenderTargets@CDesktopManager@@QEAAXXZ @ 0x1800B5B4C (-UpdateEnableClearForRenderTargets@CDesktopManager@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CWindowList::ShouldClearRenderTargets(CWindowList *this)
{
  char v1; // bl
  struct _RTL_GENERIC_TABLE *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rax
  _QWORD *v5; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v2 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
  RestartKey = 0LL;
  while ( 1 )
  {
    v5 = RtlEnumerateGenericTableWithoutSplaying(v2, &RestartKey);
    if ( !v5 )
      break;
    v3 = v5[2];
    if ( v3 )
    {
      v4 = *(_QWORD *)(v3 + 48);
      if ( v4 )
      {
        if ( *(double *)(v4 + 24) > 1.01 )
          return 1;
      }
    }
  }
  return v1;
}
