/*
 * XREFs of ?RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180002AA8
 * Callers:
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x18000225C (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z @ 0x180070178 (-HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z.c)
 * Callees:
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800045C4 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800398D0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     memcmp_0 @ 0x180050216 (memcmp_0.c)
 */

__int64 __fastcall RmHamFindHostWithFullInfo(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int Host; // eax
  __int64 v7; // rbx
  unsigned int v8; // edi
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0LL;
  Host = RmHamFindHost(a1, *(_QWORD *)(a2 + 544), a3, &v11);
  v7 = v11;
  v8 = Host;
  if ( Host >= 0 )
  {
    if ( _wcsicmp((const wchar_t *)a2, (const wchar_t *)(v11 + 24))
      || memcmp_0((const void *)(a2 + 464), (const void *)(v7 + 488), 0x58uLL) )
    {
      v8 = -1073741584;
    }
    else
    {
      *a4 = v7;
      v7 = 0LL;
      v8 = 0;
    }
  }
  if ( v7 )
  {
    RmpAcquireGlobalLock();
    if ( (*(_QWORD *)(v7 + 600))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v7 - 64));
    RmpReleaseGlobalLock();
  }
  return v8;
}
