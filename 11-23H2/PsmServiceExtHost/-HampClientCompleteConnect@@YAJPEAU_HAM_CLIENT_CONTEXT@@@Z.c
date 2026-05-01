/*
 * XREFs of ?HampClientCompleteConnect@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004DC34
 * Callers:
 *     ?HamSrvCompleteConnect@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004C394 (-HamSrvCompleteConnect@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 * Callees:
 *     ?HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800173FC (-HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180017438 (-HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampActIssueInvalidatedCallback@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@K@Z @ 0x18004D69C (-HampActIssueInvalidatedCallback@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@K@Z.c)
 *     ?HampActIssueStopRequestCallback@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18004D70C (-HampActIssueStopRequestCallback@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampClientGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18004E0B4 (-HampClientGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 *     ?HampClientGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@K@Z @ 0x18004E0DC (-HampClientGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@K@Z.c)
 */

__int64 __fastcall HampClientCompleteConnect(struct _HAM_CLIENT_CONTEXT *a1)
{
  __int64 v2; // rdx
  unsigned int v3; // esi
  struct _HAM_ACTIVITY *FirstActivity; // rax
  int v5; // eax
  __int64 v6; // rbx

  HampClientAcquireLockExclusive(a1);
  if ( *((_DWORD *)a1 + 50) == 1 )
  {
    FirstActivity = HampClientGetFirstActivity(a1, v2);
    v3 = 0;
    while ( 1 )
    {
      v6 = (__int64)FirstActivity;
      if ( !FirstActivity )
      {
        *((_DWORD *)a1 + 50) = 2;
        goto LABEL_13;
      }
      v5 = *((unsigned __int8 *)FirstActivity + 562) - 1;
      if ( v5 )
      {
        if ( v5 != 2 )
          goto LABEL_10;
        if ( (*(_DWORD *)(v6 + 552) & 0x3C00) != 0 )
          HampActIssueStopRequestCallback((struct _HAM_ACTIVITY *)v6, 1);
      }
      if ( (*(_BYTE *)(v6 + 552) & 8) != 0 )
        HampActIssueInvalidatedCallback(v6, *(unsigned __int16 *)(v6 + 560), 1);
LABEL_10:
      FirstActivity = HampClientGetNextActivity((struct _HAM_ACTIVITY *)v6, v2);
    }
  }
  v3 = -1073700861;
LABEL_13:
  HampClientReleaseLockExclusive(a1, v2);
  return v3;
}
