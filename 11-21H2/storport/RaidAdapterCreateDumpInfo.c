/*
 * XREFs of RaidAdapterCreateDumpInfo @ 0x1C00854DC
 * Callers:
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C0085844 (RaUnitStorageGetDumpInfoIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     RaidQueryCrashdumpFunctions @ 0x1C001662C (RaidQueryCrashdumpFunctions.c)
 *     RaidAdapterFreeDriverInfo @ 0x1C00172B0 (RaidAdapterFreeDriverInfo.c)
 *     RaidAdapterFreeDumpInfo @ 0x1C0017388 (RaidAdapterFreeDumpInfo.c)
 *     StorPortGetAdditionalCrashDumpArea @ 0x1C00567B0 (StorPortGetAdditionalCrashDumpArea.c)
 *     RaidAdapterCreateDriverInfo @ 0x1C00852F0 (RaidAdapterCreateDriverInfo.c)
 */

__int64 __fastcall RaidAdapterCreateDumpInfo(__int64 a1, _QWORD *a2, _QWORD *a3, _BYTE *a4, _QWORD *a5, _BYTE *a6)
{
  _QWORD *v6; // r14
  _BYTE *v7; // r12
  _QWORD *v10; // r9
  _QWORD *v11; // r8
  unsigned int v14; // esi
  _QWORD *Pool; // rax
  _QWORD *v16; // rdi
  _QWORD *v17; // rax
  _DWORD *v18; // rax
  _DWORD *v19; // r14
  _DWORD *v20; // r12
  __int64 v21; // rax
  __int64 v22; // rcx
  __int16 v23; // ax
  __int64 v24; // rax
  int v25; // r8d
  int v26; // eax
  char v27; // r13
  _QWORD *v28; // rcx
  char v29; // si
  struct _DEVICE_OBJECT *v30; // rcx
  __int64 v31; // rax
  PVOID *v32; // rax
  PVOID **v33; // rcx
  PVOID *v34; // rax
  _QWORD *v36; // rcx
  _QWORD *v37; // r10
  __int64 v38; // rdx
  PVOID *v39; // [rsp+20h] [rbp-10h] BYREF
  PVOID v40; // [rsp+28h] [rbp-8h] BYREF
  char v41; // [rsp+78h] [rbp+48h] BYREF
  _QWORD *v42; // [rsp+80h] [rbp+50h]
  char v43; // [rsp+88h] [rbp+58h]

  v42 = a3;
  v6 = a5;
  v7 = a6;
  *a4 = 0;
  v10 = a2 + 5;
  *a3 = 0LL;
  v11 = (_QWORD *)a2[5];
  v41 = 0;
  v39 = 0LL;
  v14 = 0;
  v43 = 0;
  *v6 = 0LL;
  *v7 = 0;
  if ( v11 != a2 + 5 )
  {
    do
    {
      v36 = v11 - 1;
      v37 = v11 - 1;
      v38 = v11[2] - *(_QWORD *)(a1 + 4936);
      if ( !v38 )
        v38 = v36[4] - *(_QWORD *)(a1 + 4944);
      if ( !v38 )
        break;
      v11 = (_QWORD *)*v11;
      v36 = 0LL;
      v37 = 0LL;
    }
    while ( v11 != v10 );
    if ( v37 )
    {
      *v6 = v36[7];
      *a4 = 1;
      *v7 = 1;
      *a3 = v36;
      return v14;
    }
  }
  Pool = (_QWORD *)RaidAllocatePool(64LL, 112LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  v40 = Pool;
  v16 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  v17 = Pool + 1;
  v17[1] = v17;
  *v17 = v17;
  *(_DWORD *)v16 = 112;
  *(_OWORD *)(v16 + 3) = *(_OWORD *)(a1 + 4936);
  v18 = (_DWORD *)RaidAllocatePool(64LL, 352LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  v19 = v18;
  if ( !v18 )
  {
    v14 = -1073741670;
    goto LABEL_30;
  }
  v20 = v18 + 78;
  *v18 = 312;
  ObfReferenceObject(*(PVOID *)(a1 + 8));
  *((_QWORD *)v19 + 1) = a1;
  *((_OWORD *)v19 + 4) = *(_OWORD *)(a1 + 344);
  *((_OWORD *)v19 + 5) = *(_OWORD *)(a1 + 360);
  *((_OWORD *)v19 + 6) = *(_OWORD *)(a1 + 376);
  *((_OWORD *)v19 + 7) = *(_OWORD *)(a1 + 392);
  *((_OWORD *)v19 + 8) = *(_OWORD *)(a1 + 408);
  *((_OWORD *)v19 + 9) = *(_OWORD *)(a1 + 424);
  *((_OWORD *)v19 + 10) = *(_OWORD *)(a1 + 440);
  *((_OWORD *)v19 + 11) = *(_OWORD *)(a1 + 456);
  *((_OWORD *)v19 + 12) = *(_OWORD *)(a1 + 472);
  *((_OWORD *)v19 + 13) = *(_OWORD *)(a1 + 488);
  *((_OWORD *)v19 + 14) = *(_OWORD *)(a1 + 504);
  *((_OWORD *)v19 + 15) = *(_OWORD *)(a1 + 520);
  *((_OWORD *)v19 + 16) = *(_OWORD *)(a1 + 536);
  *((_OWORD *)v19 + 17) = *(_OWORD *)(a1 + 552);
  *((_DWORD *)v16 + 11) = 312;
  v21 = RaidAllocatePool(64LL, 0x10000LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  if ( v21 )
  {
    *((_QWORD *)v19 + 6) = v21;
    v19[10] = 0x10000;
    if ( (unsigned __int8)(*(_BYTE *)(a1 + 488) - 2) <= 2u )
      *((_DWORD *)v16 + 10) |= 1u;
    v22 = *(_QWORD *)(a1 + 568);
    if ( (*(_DWORD *)(v22 + 184) & 0x20) != 0 )
    {
      *((_DWORD *)v16 + 10) |= 2u;
      v22 = *(_QWORD *)(a1 + 568);
    }
    if ( (*(_DWORD *)(v22 + 184) & 0x80u) != 0 && (*(_DWORD *)(v22 + 188) & 2) != 0 )
      v23 = HiberFileHybridPriority;
    else
      v23 = -1;
    *((_WORD *)v19 + 148) = v23;
    if ( *(_BYTE *)(a1 + 4242) )
    {
      v16[8] = *(_QWORD *)(a1 + 752);
      v24 = a1 + 824;
    }
    else
    {
      v16[8] = 0LL;
      v24 = 0LL;
    }
    *((_QWORD *)v19 + 36) = v24;
    v25 = *(_DWORD *)(a1 + 536);
    if ( v25 )
      StorPortGetAdditionalCrashDumpArea(a1, (__int64)(v19 + 16), v25);
    v26 = RaidAdapterCreateDriverInfo(a1, a2, &v39, &v41);
    v27 = v41;
    v14 = v26;
    if ( v26 < 0 )
    {
      v34 = v39;
      goto LABEL_26;
    }
    v28 = *(_QWORD **)(a1 + 4832);
    if ( v28 && (int)PoFxRegisterCrashdumpDevice(*v28) >= 0 )
    {
      *(_BYTE *)v20 = 1;
      v29 = 1;
      *((_QWORD *)v20 + 1) = **(_QWORD **)(a1 + 4832);
    }
    else
    {
      v29 = v43;
    }
    v30 = *(struct _DEVICE_OBJECT **)(a1 + 24);
    *(_WORD *)(a1 + 4898) = 1;
    *(_WORD *)(a1 + 4896) = 40;
    if ( RaidQueryCrashdumpFunctions(v30, (_LARGE_INTEGER)(a1 + 4896)) >= 0
      && (v31 = *(_QWORD *)(a1 + 4928)) != 0
      && *(_QWORD *)(a1 + 4920) )
    {
      *((_QWORD *)v20 + 3) = v31;
      *((_QWORD *)v20 + 4) = *(_QWORD *)(a1 + 4904);
    }
    else
    {
      *(_WORD *)(a1 + 4898) = 0;
      if ( !v29 )
        goto LABEL_25;
    }
    *((_QWORD *)v20 + 2) = a1 + 4765;
    *((_QWORD *)v19 + 2) = a1 + 4765;
    *((_QWORD *)v19 + 3) = StorDumpAdapterPowerOn;
    *((_QWORD *)v19 + 4) = v20;
LABEL_25:
    v32 = v39;
    v14 = 0;
    v33 = (PVOID **)a5;
    v16[6] = v19;
    v19 = 0LL;
    v16[7] = v32;
    v40 = 0LL;
    *v33 = v32;
    v34 = 0LL;
    v39 = 0LL;
    *a6 = v27;
    *v42 = v16;
    v16 = 0LL;
LABEL_26:
    if ( !v27 && v34 )
      RaidAdapterFreeDriverInfo(&v39);
    if ( !v19 )
      goto LABEL_30;
    goto LABEL_42;
  }
  v14 = -1073741670;
LABEL_42:
  ExFreePoolWithTag(v19, 0x44436152u);
LABEL_30:
  if ( v16 )
    RaidAdapterFreeDumpInfo(&v40);
  return v14;
}
