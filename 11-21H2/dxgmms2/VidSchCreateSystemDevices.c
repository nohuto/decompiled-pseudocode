/*
 * XREFs of VidSchCreateSystemDevices @ 0x1C00B80AC
 * Callers:
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00B7814 (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0003AE0 (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiCreateContextInternal @ 0x1C001270C (VidSchiCreateContextInternal.c)
 *     VidSchiGetSoftwareOnlyNodeForDriverEngine @ 0x1C0018E48 (VidSchiGetSoftwareOnlyNodeForDriverEngine.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEXT_DATA@@PEAVDXGCONTEXT@@@Z @ 0x1C003F7CC (-VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEX.c)
 *     VidSchiCreateDeviceInternal @ 0x1C0098844 (VidSchiCreateDeviceInternal.c)
 */

__int64 __fastcall VidSchCreateSystemDevices(__int64 a1)
{
  __int64 *v1; // r14
  int v3; // ebx
  struct _VIDSCH_DEVICE **v4; // r15
  int SoftwareOnlyNodeForDriverEngine; // eax
  __int64 v6; // rcx
  __int64 ContextInternal; // rax
  __int64 i; // rbx
  __int64 v9; // rdx
  unsigned int v10; // r8d
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // esi
  __int64 v18; // rax
  __int64 v19; // r14
  int v20; // ecx
  struct _VIDSCH_DEVICE *v21; // rcx
  __int64 v22; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int128 v29; // [rsp+50h] [rbp-20h] BYREF
  __int64 v30; // [rsp+60h] [rbp-10h]
  int v31; // [rsp+68h] [rbp-8h]

  v1 = (__int64 *)(a1 + 240);
  v30 = 0LL;
  v29 = 0LL;
  LODWORD(v29) = 1;
  v3 = VidSchiCreateDeviceInternal(a1, &v29, 0LL, (__int64 *)(a1 + 240));
  if ( v3 < 0 )
  {
    WdLogSingleEntry1(1LL, *(_QWORD *)(a1 + 16));
    v24 = *(_QWORD *)(a1 + 16);
LABEL_25:
    DxgkLogInternalTriageEvent(v24, 0x40000LL);
    return (unsigned int)v3;
  }
  v4 = (struct _VIDSCH_DEVICE **)(a1 + 256);
  v29 = 0LL;
  LODWORD(v29) = 17;
  v30 = 0LL;
  v3 = VidSchiCreateDeviceInternal(a1, &v29, 0LL, (__int64 *)(a1 + 256));
  if ( v3 < 0 )
  {
    WdLogSingleEntry1(1LL, *(_QWORD *)(a1 + 16));
    goto LABEL_25;
  }
  *((_QWORD *)&v29 + 1) = 0x700000000LL;
  v30 = 0LL;
  LODWORD(v29) = 268;
  v31 = 2 * *(_DWORD *)(a1 + 40) * *(_DWORD *)(a1 + 152);
  SoftwareOnlyNodeForDriverEngine = VidSchiGetSoftwareOnlyNodeForDriverEngine(a1, 0);
  v6 = *v1;
  DWORD1(v29) = SoftwareOnlyNodeForDriverEngine;
  ContextInternal = VidSchiCreateContextInternal(v6, (int *)&v29, 0LL);
  *(_QWORD *)(a1 + 248) = ContextInternal;
  if ( !ContextInternal )
  {
    WdLogSingleEntry2(1LL, *(_QWORD *)(a1 + 16), 1101LL);
    goto LABEL_34;
  }
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 84); i = (unsigned int)(i + 1) )
  {
    v9 = *(_QWORD *)(a1 + 632);
    v10 = *(_DWORD *)(a1 + 704);
    v11 = v9 + 8 * i;
    if ( (unsigned int)i >= v10 )
      v11 = *(_QWORD *)(a1 + 632);
    if ( (*(_DWORD *)(*(_QWORD *)v11 + 12LL) & 2) == 0 )
    {
      if ( (unsigned int)i < v10 )
        v9 += 8 * i;
      if ( (*(_DWORD *)(*(_QWORD *)v9 + 12LL) & 0x10) == 0 )
      {
        v30 = 0LL;
        v31 = 0;
        HIDWORD(v29) = 7;
        LODWORD(v29) = 20;
        DWORD1(v29) = i;
        v12 = VidSchiSchedulerNodeToDriverEngine(a1, i);
        v13 = *v1;
        DWORD2(v29) = v12;
        v14 = VidSchiCreateContextInternal(v13, (int *)&v29, 0LL);
        v15 = *(_QWORD *)(a1 + 632) + 8 * i;
        if ( (unsigned int)i >= *(_DWORD *)(a1 + 704) )
          v15 = *(_QWORD *)(a1 + 632);
        *(_QWORD *)(*(_QWORD *)v15 + 32LL) = v14;
        v16 = *(_QWORD *)(a1 + 632) + 8 * i;
        if ( (unsigned int)i >= *(_DWORD *)(a1 + 704) )
          v16 = *(_QWORD *)(a1 + 632);
        if ( !*(_QWORD *)(*(_QWORD *)v16 + 32LL) )
        {
          WdLogSingleEntry3(1LL, i, *(_QWORD *)(a1 + 16), 1136LL);
          goto LABEL_34;
        }
      }
    }
    RtlSetBitEx(a1 + 488, (unsigned int)i);
  }
  v17 = 0;
  if ( !*(_DWORD *)(a1 + 76) )
    return 0LL;
  while ( 1 )
  {
    v18 = *(_QWORD *)(a1 + 16);
    v30 = 0LL;
    v19 = *(_QWORD *)(v18 + 2680) + 344LL * v17;
    v20 = *(unsigned __int8 *)(v17 + a1 + 88);
    v31 = 0;
    LODWORD(v18) = *(unsigned __int16 *)(v19 + 2);
    LODWORD(v29) = 29;
    DWORD1(v29) = v18 + v20;
    v21 = *v4;
    *((_QWORD *)&v29 + 1) = v17 | 0x700000000LL;
    if ( *(_BYTE *)(a1 + 55) )
    {
      LODWORD(v29) = 2077;
      *(_QWORD *)(*(_QWORD *)(a1 + 272) + 8LL * v17) = VidSchiCreateHwContextInternal(
                                                         v21,
                                                         (struct _VIDSCH_CONTEXT_DATA *)&v29,
                                                         0LL);
      if ( !*(_QWORD *)(*(_QWORD *)(a1 + 272) + 8LL * v17) )
      {
        WdLogSingleEntry3(1LL, v17, *(_QWORD *)(a1 + 16), 1185LL);
        goto LABEL_34;
      }
      goto LABEL_21;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 264) + 8LL * v17) = VidSchiCreateContextInternal((__int64)v21, (int *)&v29, 0LL);
    v22 = *(_QWORD *)(*(_QWORD *)(a1 + 264) + 8LL * v17);
    if ( !v22 )
      break;
    *(_BYTE *)(v22 + 641) = 1;
    if ( (*(_BYTE *)(v19 + 16) & 0xC) == 0xC )
    {
      v26 = *(_DWORD *)(v19 + 20) + *(unsigned __int8 *)(v17 + a1 + 88);
      v27 = (__int64)*v4;
      LODWORD(v29) = v29 | 0x200;
      DWORD1(v29) = v26;
      *(_QWORD *)(*(_QWORD *)(a1 + 288) + 8LL * v17) = VidSchiCreateContextInternal(v27, (int *)&v29, 0LL);
      v28 = *(_QWORD *)(*(_QWORD *)(a1 + 288) + 8LL * v17);
      if ( !v28 )
      {
        WdLogSingleEntry3(1LL, v17, *(_QWORD *)(a1 + 16), 1220LL);
        goto LABEL_34;
      }
      *(_BYTE *)(v28 + 641) = 1;
    }
LABEL_21:
    if ( ++v17 >= *(_DWORD *)(a1 + 76) )
      return 0LL;
  }
  WdLogSingleEntry3(1LL, v17, *(_QWORD *)(a1 + 16), 1200LL);
LABEL_34:
  DxgkLogInternalTriageEvent(v25, 0x40000LL);
  return (unsigned int)-1073741823;
}
