/*
 * XREFs of ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x1800296C0
 * Callers:
 *     ?HamSrvStopActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18001452C (-HamSrvStopActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HamSrvUpdateActivityProperties@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x18001506C (-HamSrvUpdateActivityProperties@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERT.c)
 *     HamRpcSrvStartActivityAsync @ 0x180027DB0 (HamRpcSrvStartActivityAsync.c)
 *     HamRpcSrvCloseActivity @ 0x18002AE20 (HamRpcSrvCloseActivity.c)
 *     ?HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180039294 (-HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180039400 (-HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_AC.c)
 *     ?HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK@Z @ 0x18003FF1C (-HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMIN.c)
 *     ?HamSrvQueryActivityPendDiagnostics@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_PEND_DIAGNOSTICS@@@Z @ 0x180072C50 (-HamSrvQueryActivityPendDiagnostics@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_PEND_DIAGNOSTICS@@@Z.c)
 *     ?HamSrvResetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KE@Z @ 0x1800735C4 (-HamSrvResetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KE@Z.c)
 *     ?HamSrvSetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x1800738D8 (-HamSrvSetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_RM_RESOURCE_REQUEST_EXTER.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     ?HampActCompareByHandle@@YAJPEAX0@Z @ 0x1800102F0 (-HampActCompareByHandle@@YAJPEAX0@Z.c)
 */

struct _HAM_ACTIVITY *__fastcall HampActFindForClient(struct _HAM_CLIENT_CONTEXT *a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rsi
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  int v7; // edi
  int v8; // eax
  __int64 v9; // rax
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((unsigned __int8 *)a1 + 164);
  v4 = *((_QWORD *)a1 + 4);
  v11 = a2;
  v5 = (v4 & 0xFFFFFFFFFFFFFFFCuLL) - 48 * v2 + 424;
  RtlAcquireSRWLockShared(v5 + 16);
  v6 = *(_QWORD *)v5;
  v7 = *(_BYTE *)(v5 + 8) & 1;
  if ( (*(_BYTE *)(v5 + 8) & 1) != 0 )
  {
    if ( !v6 )
      goto LABEL_14;
    v6 ^= v5;
  }
  while ( v6 )
  {
    v8 = HampActCompareByHandle(&v11, (_QWORD *)v6);
    if ( v8 >= 0 )
    {
      if ( v8 <= 0 )
        break;
      v9 = *(_QWORD *)(v6 + 8);
    }
    else
    {
      v9 = *(_QWORD *)v6;
    }
    if ( v7 && v9 )
      v6 ^= v9;
    else
      v6 = v9;
  }
LABEL_14:
  if ( v6 )
  {
    if ( !*(_QWORD *)(v6 + 24) )
    {
      RtlReleaseSRWLockShared(v5 + 16);
      return 0LL;
    }
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v6 + 24)) <= 1 )
      __fastfail(0xEu);
  }
  RtlReleaseSRWLockShared(v5 + 16);
  if ( v6 )
  {
    if ( *(struct _HAM_CLIENT_CONTEXT **)(v6 + 64) == a1 )
      return (struct _HAM_ACTIVITY *)v6;
    CemRcObjectDereference((_QWORD *)v6);
  }
  return 0LL;
}
