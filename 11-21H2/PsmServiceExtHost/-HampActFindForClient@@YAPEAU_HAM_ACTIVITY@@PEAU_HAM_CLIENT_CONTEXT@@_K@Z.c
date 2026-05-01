/*
 * XREFs of ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18002C900
 * Callers:
 *     ?HamSrvUpdateActivityProperties@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x18002C698 (-HamSrvUpdateActivityProperties@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERT.c)
 *     ?HamSrvStopActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18002E5F0 (-HamSrvStopActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK@Z @ 0x1800443CC (-HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMIN.c)
 *     ?HamSrvQueryActivityPendDiagnostics@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_PEND_DIAGNOSTICS@@@Z @ 0x180070A24 (-HamSrvQueryActivityPendDiagnostics@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_PEND_DIAGNOSTICS@@@Z.c)
 *     ?HamSrvResetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KE@Z @ 0x18007143C (-HamSrvResetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KE@Z.c)
 *     ?HamSrvSetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x18007173C (-HamSrvSetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_RM_RESOURCE_REQUEST_EXTER.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     ?HampActCompareByHandle@@YAJPEAX0@Z @ 0x18003A3F0 (-HampActCompareByHandle@@YAJPEAX0@Z.c)
 */

struct _HAM_ACTIVITY *__fastcall HampActFindForClient(struct _HAM_CLIENT_CONTEXT *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // r15
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  int v7; // ebp
  int v8; // eax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)a1 + 216LL;
  v12 = a2;
  v4 = v3 + 16;
  RtlAcquireSRWLockShared(v3 + 16);
  v5 = 0LL;
  v6 = *(_QWORD *)v3;
  v7 = *(_BYTE *)(v3 + 8) & 1;
  if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
  {
    if ( v6 )
    {
      v6 ^= v3;
      goto LABEL_5;
    }
    goto LABEL_20;
  }
LABEL_5:
  while ( v6 )
  {
    v8 = HampActCompareByHandle(&v12, (void *)v6);
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
  v10 = v6;
  if ( v6 )
  {
    if ( !*(_QWORD *)(v6 + 24) )
    {
LABEL_20:
      v10 = 0LL;
      goto LABEL_16;
    }
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v6 + 24)) <= 1 )
      __fastfail(0xEu);
  }
LABEL_16:
  RtlReleaseSRWLockShared(v4);
  if ( v10 )
  {
    if ( *(struct _HAM_CLIENT_CONTEXT **)(v10 + 64) == a1 )
      return (struct _HAM_ACTIVITY *)v10;
    else
      CemRcObjectDereference(v10);
  }
  return (struct _HAM_ACTIVITY *)v5;
}
