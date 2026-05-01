/*
 * XREFs of ?HampActCompareForMaxCommit@@YAJPEAU_HAM_ACTIVITY@@0K@Z @ 0x180013A04
 * Callers:
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180025260 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 * Callees:
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18000709C (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 */

__int64 __fastcall HampActCompareForMaxCommit(struct _HAM_ACTIVITY *a1, struct _HAM_ACTIVITY *a2, char a3)
{
  __int64 v3; // rbx
  int v4; // r9d
  struct _HAM_ACTIVITY *v5; // r10
  struct _HAM_ACTIVITY *v6; // r11
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  struct _HAM_ACTIVITY *v10; // rax
  unsigned __int8 v11; // dl
  __int64 v12; // r10
  BOOL IsStartedOrReachedPendState; // eax
  int v14; // r8d

  v3 = *((_QWORD *)a1 + 10);
  v4 = 0;
  v5 = a2;
  v6 = a1;
  if ( (a3 & 1) == 0 )
  {
    HampActIsStartedOrReachedPendState((__int64)a1, 5u);
    IsStartedOrReachedPendState = HampActIsStartedOrReachedPendState(v12, v11);
    if ( v14 )
    {
      if ( !IsStartedOrReachedPendState )
        return 1LL;
    }
    else if ( IsStartedOrReachedPendState )
    {
      return 0xFFFFFFFFLL;
    }
  }
  if ( (*((_DWORD *)v6 + 28) & 0x10000) == 0 )
  {
    if ( (*((_DWORD *)v5 + 28) & 0x10000) == 0 )
      goto LABEL_5;
    return 0xFFFFFFFFLL;
  }
  if ( (*((_DWORD *)v5 + 28) & 0x10000) == 0 )
    return 1LL;
LABEL_5:
  v8 = *((_QWORD *)v6 + 57);
  if ( v8 > *((_QWORD *)v5 + 57) )
    return 1LL;
  if ( v8 < *((_QWORD *)v5 + 57) )
    return 0xFFFFFFFFLL;
  v9 = *((_QWORD *)v6 + 58);
  if ( v9 > *((_QWORD *)v5 + 58) )
    return 1LL;
  if ( v9 < *((_QWORD *)v5 + 58) )
    return 0xFFFFFFFFLL;
  v10 = *(struct _HAM_ACTIVITY **)(v3 + 1016);
  if ( v6 == v10 )
    return 1LL;
  LOBYTE(v4) = v5 != v10;
  return (unsigned int)(v4 - 1);
}
