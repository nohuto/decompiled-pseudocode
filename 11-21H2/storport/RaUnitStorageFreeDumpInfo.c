/*
 * XREFs of RaUnitStorageFreeDumpInfo @ 0x1C00170BC
 * Callers:
 *     RaUnitStorageDumpControl @ 0x1C00859D0 (RaUnitStorageDumpControl.c)
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x1C000BA44 (RaidAcquireAdapterRemoveLock.c)
 *     RaidUnitFreeDumpInfo @ 0x1C0017260 (RaidUnitFreeDumpInfo.c)
 *     RaidAdapterFreeDriverInfo @ 0x1C00172B0 (RaidAdapterFreeDriverInfo.c)
 *     RaidAdapterFreeDumpInfo @ 0x1C0017388 (RaidAdapterFreeDumpInfo.c)
 *     StorPortReleaseAdditionalCrashDumpArea @ 0x1C00173FC (StorPortReleaseAdditionalCrashDumpArea.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0085E24 (RaidAdapterFreeMiniportDumpInfo.c)
 */

__int64 __fastcall RaUnitStorageFreeDumpInfo(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r15
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // rdx
  _QWORD *v8; // rdi
  _QWORD *v9; // rcx
  _QWORD *i; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // rbx
  void (__fastcall *v15)(_QWORD); // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // r8
  _QWORD *v19; // rdx
  _QWORD *v21; // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v22; // [rsp+60h] [rbp+18h] BYREF

  v21 = a2;
  v4 = *(_QWORD *)(a2[6] + 8LL);
  v5 = a2 + 1;
  v6 = a2[1];
  if ( *(_QWORD **)(v6 + 8) != a2 + 1 )
    goto LABEL_20;
  v7 = (_QWORD *)a2[2];
  if ( (_QWORD *)*v7 != v5 )
    goto LABEL_20;
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  v8 = (_QWORD *)a2[7];
  if ( v8 )
  {
    v9 = (_QWORD *)(a1 + 24);
    a2[7] = 0LL;
    v22 = v8;
    for ( i = (_QWORD *)*v9; i != v9; i = (_QWORD *)*i )
    {
      if ( (_QWORD *)i[6] == v8 )
        goto LABEL_14;
    }
    v8[7] = 0LL;
    v11 = v8[1];
    if ( *(_QWORD **)(v11 + 8) != v8 + 1 || (v12 = (_QWORD *)v8[2], (_QWORD *)*v12 != v8 + 1) )
LABEL_20:
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    v13 = v8[6];
    v14 = *(_QWORD *)(v13 + 8);
    if ( (int)RaidAcquireAdapterRemoveLock(v14) >= 0 )
    {
      RaidAdapterFreeMiniportDumpInfo(v14, v8);
      StorPortReleaseAdditionalCrashDumpArea(v14 + 752, v13 + 64);
      if ( *(_WORD *)(v14 + 4898) )
      {
        v15 = *(void (__fastcall **)(_QWORD))(v14 + 4920);
        if ( v15 )
          v15(*(_QWORD *)(v14 + 4904));
      }
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v14 + 296));
    }
    ObfDereferenceObject(*(PVOID *)(v14 + 8));
    RaidAdapterFreeDumpInfo(&v22);
  }
LABEL_14:
  v16 = (_QWORD *)a2[8];
  a2[8] = 0LL;
  v17 = *(_QWORD **)(a1 + 24);
  v22 = v16;
  while ( v17 != (_QWORD *)(a1 + 24) )
  {
    if ( (_QWORD *)v17[7] == v16 )
      goto LABEL_19;
    v17 = (_QWORD *)*v17;
  }
  v18 = v16[1];
  if ( *(_QWORD **)(v18 + 8) != v16 + 1 )
    goto LABEL_20;
  v19 = (_QWORD *)v16[2];
  if ( (_QWORD *)*v19 != v16 + 1 )
    goto LABEL_20;
  *v19 = v18;
  *(_QWORD *)(v18 + 8) = v19;
  RaidAdapterFreeDriverInfo(&v22);
LABEL_19:
  ObfDereferenceObject(*(PVOID *)(v4 + 8));
  RaidUnitFreeDumpInfo(&v21);
  return 0LL;
}
