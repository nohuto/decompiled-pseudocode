/*
 * XREFs of CcGetVirtualAddress @ 0x140265080
 * Callers:
 *     CcPinFileData @ 0x140263B20 (CcPinFileData.c)
 *     CcMapAndCopyInToCache @ 0x1402CCB80 (CcMapAndCopyInToCache.c)
 *     CcPurgeAndClearCacheSection @ 0x1402F1564 (CcPurgeAndClearCacheSection.c)
 *     CcPrepareMdlWrite @ 0x140369330 (CcPrepareMdlWrite.c)
 *     CcMapAndCopyFromCache @ 0x1406F5E20 (CcMapAndCopyFromCache.c)
 *     CcMapData @ 0x1406F6220 (CcMapData.c)
 *     CcMdlRead @ 0x14073EB90 (CcMdlRead.c)
 *     CcMapDataCommon @ 0x140765354 (CcMapDataCommon.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140231280 (ExReleasePushLockEx.c)
 *     CcUnmapVacbArray @ 0x14029F050 (CcUnmapVacbArray.c)
 *     CcGetVacbMiss @ 0x14029F3A0 (CcGetVacbMiss.c)
 *     KeAcquireQueuedSpinLock @ 0x1402A09F0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140302AA0 (KeReleaseQueuedSpinLock.c)
 *     CcInsertVacbArray @ 0x1403C2A88 (CcInsertVacbArray.c)
 *     CcAllocateInitializeVacbArray @ 0x1403C3750 (CcAllocateInitializeVacbArray.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     CcBuildUpHighPriorityMappings @ 0x140538360 (CcBuildUpHighPriorityMappings.c)
 */

__int64 __fastcall CcGetVirtualAddress(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4, int a5, int a6)
{
  __int64 v6; // r15
  int v7; // r12d
  unsigned int v9; // r13d
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 VacbMiss; // rsi
  __int64 v16; // rax
  __int16 v17; // bp
  int v18; // r9d
  __int64 v20; // r11
  int v21; // edx
  int v22; // ecx
  int v23; // r10d
  __int64 v24; // rax
  int v25; // esi
  int v26; // r8d
  __int64 *v27; // rdx
  bool v28; // cf
  __int64 InitializeVacbArray; // rax
  __int64 v30; // r12
  KIRQL v31; // si
  BOOL v32; // [rsp+30h] [rbp-58h]
  _QWORD v33[10]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v34; // [rsp+90h] [rbp+8h] BYREF
  int v35; // [rsp+98h] [rbp+10h]
  __int64 *v36; // [rsp+A0h] [rbp+18h]
  _DWORD *v37; // [rsp+A8h] [rbp+20h]

  v37 = a4;
  v36 = a3;
  v6 = *(_QWORD *)(a1 + 536);
  v7 = 0;
  v35 = 0;
  v9 = a2 & 0x3FFFF;
  v11 = a2 - (a2 & 0x3FFFF);
  v12 = *(_DWORD *)(a1 + 152);
  v33[0] = v11;
  v32 = (v12 & 0x200) != 0;
  if ( (v12 & 0x200) != 0 || a5 )
  {
    LODWORD(v34) = 1;
    if ( (unsigned int)CcNumberOfFreeVacbs >= 0x80 )
      goto LABEL_3;
    v28 = *(_DWORD *)(v6 + 1248) < 0x80u;
    LODWORD(v34) = 1;
    if ( !v28 )
      goto LABEL_3;
    v25 = 1;
    LODWORD(v34) = 1;
  }
  else
  {
    v25 = 0;
    LODWORD(v34) = 0;
    if ( (unsigned int)CcNumberOfFreeVacbs >= 0x80 )
    {
      LODWORD(v34) = 0;
      goto LABEL_3;
    }
  }
  InitializeVacbArray = CcAllocateInitializeVacbArray();
  v30 = InitializeVacbArray;
  if ( InitializeVacbArray )
  {
    if ( v25 == 1 )
      CcBuildUpHighPriorityMappings(v6, InitializeVacbArray);
    v31 = KeAcquireQueuedSpinLock(4uLL);
    CcInsertVacbArray(v6, v30);
    KeReleaseQueuedSpinLock(4uLL, v31);
  }
  v7 = v35;
LABEL_3:
  if ( a2 > *(_QWORD *)(a1 + 32) )
    KeBugCheckEx(0x34u, 0x566uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  ExAcquirePushLockSharedEx(a1 + 104, 0LL);
  if ( a6
    || (*(_DWORD *)(a1 + 152) & 0x800200) == 0x200
    || (v11 & 0xFFFFF) != 0
    || (*(_DWORD *)(a1 + 152) & 0x40000000) != 0
    || v11 < 0x100000
    || v11 == *(_QWORD *)(a1 + 344) )
  {
    v7 = 1;
  }
  v13 = *(_QWORD *)(a1 + 32);
  v14 = *(_QWORD *)(a1 + 88);
  if ( v13 > 0x2000000 )
  {
    v20 = a2;
    v21 = 0;
    v22 = 25;
    do
    {
      v23 = v22;
      v22 += 7;
      ++v21;
    }
    while ( v13 > 1LL << v22 );
    VacbMiss = *(_QWORD *)(v14 + 8 * (a2 >> v23));
    if ( !VacbMiss )
      goto LABEL_28;
    do
    {
      if ( !v21 )
        break;
      v24 = 1LL << v23;
      v23 -= 7;
      v20 &= v24 - 1;
      --v21;
      VacbMiss = *(_QWORD *)(VacbMiss + 8 * (v20 >> v23));
    }
    while ( VacbMiss );
  }
  else
  {
    VacbMiss = *(_QWORD *)(v14 + 8 * ((unsigned __int64)(unsigned int)a2 >> 18));
  }
  if ( VacbMiss )
  {
    v16 = *(_QWORD *)(VacbMiss + 8);
    v17 = _InterlockedIncrement((volatile signed __int32 *)(VacbMiss + 16));
    if ( !v17 )
      KeBugCheckEx(0x34u, 0xAECuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( v17 == 1 )
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 552));
    ExReleasePushLockEx((__int64 *)(a1 + 104), 0LL);
    v11 = v33[0];
    goto LABEL_17;
  }
LABEL_28:
  ExReleasePushLockEx((__int64 *)(a1 + 104), 0LL);
  VacbMiss = CcGetVacbMiss(a1, a2, v32, (unsigned int)v34);
  if ( (*(_DWORD *)(a1 + 152) & 0x8000200) == 512 && (v11 & 0xFFFFF) == 0 && v11 >= 0x100000 )
  {
    v11 -= 0x100000LL;
    v33[0] = v11;
    CcUnmapVacbArray(a1, (unsigned int)v33, 0x100000, 1, 0, 0);
  }
LABEL_17:
  if ( !v7 )
  {
    LOBYTE(v18) = 1;
    if ( (*(_DWORD *)(a1 + 152) & 0x800000) != 0 )
    {
      if ( v11 >= 8650752 )
      {
        v33[0] = v11 - 0x800000;
        CcUnmapVacbArray(a1, (unsigned int)v33, 0x800000, v18, 0, 0);
        goto LABEL_18;
      }
      v34 = 0x40000LL;
    }
    else
    {
      v26 = CcUnmapBehindLength;
      if ( v11 >= (unsigned int)CcUnmapBehindLength )
      {
        v27 = v33;
        v33[0] = v11 - (unsigned int)CcUnmapBehindLength;
LABEL_34:
        CcUnmapVacbArray(a1, (_DWORD)v27, v26, v18, 0, 0);
        goto LABEL_18;
      }
      v34 = 0LL;
    }
    v27 = &v34;
    v26 = v11;
    goto LABEL_34;
  }
LABEL_18:
  *v36 = VacbMiss;
  *v37 = 0x40000 - v9;
  return v9 + *(_QWORD *)VacbMiss;
}
