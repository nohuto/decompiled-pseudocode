/*
 * XREFs of ?ArActDereference@@YAXPEAU_AR_ACTIVITY@@@Z @ 0x18000370C
 * Callers:
 *     ?ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@KK@Z @ 0x180002E48 (-ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     ?ArActCreate@@YAJPEAU_AR_ACTIVITY_HOST@@PEAU_AR_ACTIVITY_PROPERTIES@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@PEAXPEAPEAU_AR_ACTIVITY@@@Z @ 0x18000331C (-ArActCreate@@YAJPEAU_AR_ACTIVITY_HOST@@PEAU_AR_ACTIVITY_PROPERTIES@@PEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     ?ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z @ 0x1800037C0 (-ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z.c)
 *     ?ArSrvCloseActivity@@YAJ_K0@Z @ 0x18006C9A8 (-ArSrvCloseActivity@@YAJ_K0@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 */

void __fastcall ArActDereference(volatile signed __int64 *P)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax

  v2 = _InterlockedExchangeAdd64(P, 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    CemRcObjectDereference(*((_QWORD *)P + 2));
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)P);
  }
}
