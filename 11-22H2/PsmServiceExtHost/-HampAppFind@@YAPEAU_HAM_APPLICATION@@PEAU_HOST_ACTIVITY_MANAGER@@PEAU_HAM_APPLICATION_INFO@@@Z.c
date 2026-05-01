/*
 * XREFs of ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x180035AA8
 * Callers:
 *     ?HamSrvGetApplicationInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x1800355F0 (-HamSrvGetApplicationInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 *     ?HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_APPLICATION_EXECUTION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x1800722C0 (-HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_APPLICATION_.c)
 *     ?HamSrvTerminateApplicationForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x180073BA8 (-HamSrvTerminateApplicationForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASO.c)
 *     ?HamSrvTerminateApplicationHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z @ 0x180073D5C (-HamSrvTerminateApplicationHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKW4_HAM_TERMINATE_TYPE@@W4_.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180028520 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     CempPackageFamilyNameFromPsmKey @ 0x180031A60 (CempPackageFamilyNameFromPsmKey.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180031C70 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?HampPkgFindApp@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@@Z @ 0x180035CF0 (-HampPkgFindApp@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 */

struct _HAM_APPLICATION *__fastcall HampAppFind(struct _HOST_ACTIVITY_MANAGER *a1, struct _HAM_APPLICATION_INFO *a2)
{
  int v4; // ebx
  struct _HAM_PACKAGE *v5; // rax
  struct _HAM_APPLICATION *App; // rbx
  struct _HAM_PACKAGE *v7; // rdi
  unsigned __int16 v9[66]; // [rsp+20h] [rbp-178h] BYREF
  _BYTE DestinationSid[68]; // [rsp+A4h] [rbp-F4h] BYREF
  int v11; // [rsp+E8h] [rbp-B0h]
  char v12[144]; // [rsp+F0h] [rbp-A8h] BYREF

  memset_0(v12, 0, 0x82uLL);
  CempPackageFamilyNameFromPsmKey((__int64)a2, (__int64)v12);
  v4 = *((_DWORD *)a2 + 133);
  memset_0(v9, 0, 0xCCuLL);
  StringCchCopyW((char *)v9, 65LL, v12);
  RtlCopySid(0x44u, DestinationSid, (char *)a2 + 464);
  v11 = v4;
  v5 = HampPkgFindInManager(a1, v9);
  App = 0LL;
  v7 = v5;
  if ( v5 )
  {
    App = HampPkgFindApp(v5, a2);
    CemRcObjectDereference(v7);
  }
  return App;
}
