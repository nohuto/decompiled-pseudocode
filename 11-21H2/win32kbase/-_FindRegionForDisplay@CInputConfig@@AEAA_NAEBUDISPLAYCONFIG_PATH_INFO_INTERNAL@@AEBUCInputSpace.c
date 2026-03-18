/*
 * XREFs of ?_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace@@AEBUtagQDC_DATA@@PEAPEAUCInputSpaceRegion@@@Z @ 0x1C009F1F0
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C009F724 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 * Callees:
 *     ?ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ @ 0x1C00A093C (-ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CInputConfig::_FindRegionForDisplay(
        CInputConfig *this,
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        const struct CInputSpace *a3,
        const struct tagQDC_DATA *a4,
        struct CInputSpaceRegion **a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct CInputSpaceRegion *v11; // rsi
  __int64 v12; // rbx
  unsigned int v13; // ecx
  unsigned int v14; // r8d
  unsigned int v15; // r13d
  __int64 v16; // rdx
  __int64 v17; // r10
  _QWORD **v18; // r15
  _QWORD *v19; // rdi
  _QWORD *v20; // rcx
  struct CInputSpaceRegion *v21; // rax
  int v22; // edx
  struct _ERESOURCE *v23; // rcx
  _QWORD v25[4]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+74h] [rbp+Ch]

  if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  v11 = 0LL;
  v12 = *((_QWORD *)a2 + 2);
  v13 = 0;
  v14 = *(_DWORD *)a4;
  v15 = *((_DWORD *)a2 + 6);
  *a5 = 0LL;
  v26 = HIDWORD(v12);
  if ( v14 )
  {
    v16 = *((_QWORD *)a4 + 1);
    while ( 1 )
    {
      v17 = 216LL * v13;
      if ( *(_DWORD *)(v17 + v16 + 116) == *((_DWORD *)a2 + 29) && *(_DWORD *)(v17 + v16 + 120) == *((_DWORD *)a2 + 30) )
        break;
      if ( ++v13 >= v14 )
        goto LABEL_8;
    }
    v12 = *(_QWORD *)(216LL * v13 + v16 + 16);
    v15 = *(_DWORD *)(216LL * v13 + v16 + 24);
    v26 = HIDWORD(v12);
  }
LABEL_8:
  v18 = (_QWORD **)((char *)a3 + 1456);
  v25[0] = &CInputConfig::slock;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  v19 = *v18;
  v25[1] = v18;
  while ( 1 )
  {
    v20 = 0LL;
    v25[2] = v19;
    if ( v19 != v18 )
      v20 = v19 + 2;
    if ( !v20 )
      break;
    v21 = CInputSpace::Iter::ModifiableRegion((CInputSpace::Iter *)v25);
    v22 = *((_DWORD *)v21 + 6);
    if ( *((_DWORD *)a2 + 4) == v22
      && *((_DWORD *)a2 + 5) == *((_DWORD *)v21 + 7)
      && *((_DWORD *)a2 + 6) == *((_DWORD *)v21 + 8) )
    {
      v23 = CInputConfig::slock;
      *a5 = v21;
      ExReleaseResourceLite(v23);
      KeLeaveCriticalRegion();
      return 1;
    }
    if ( (_DWORD)v12 == v22 && __PAIR64__(v15, v26) == *(_QWORD *)((char *)v21 + 28) )
      v11 = v21;
    v19 = (_QWORD *)*v19;
  }
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  if ( v11 )
  {
    *a5 = v11;
    return 1;
  }
  return 0;
}
