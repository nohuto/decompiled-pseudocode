/*
 * XREFs of InitPepPerfStates @ 0x1C0043864
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0027F5C (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000325C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C000331C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0005484 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_d @ 0x1C0009F84 (WPP_RECORDER_SF_d.c)
 *     PepNotifyQueryPerfAutonomousSupport @ 0x1C0025460 (PepNotifyQueryPerfAutonomousSupport.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C0035CF0 (ProcLibTracePepPerfCapabilities.c)
 *     InitPepProcessorDomain @ 0x1C003E4C8 (InitPepProcessorDomain.c)
 *     PepNotifyQueryDiscretePerfStates @ 0x1C0043FF0 (PepNotifyQueryDiscretePerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C0044078 (PepNotifyQueryFeedbackCounters.c)
 *     PepNotifyQueryPerfCapabilities @ 0x1C0044168 (PepNotifyQueryPerfCapabilities.c)
 */

__int64 __fastcall InitPepPerfStates(__int64 a1)
{
  __int64 v2; // rbp
  _DWORD *v3; // r13
  unsigned __int16 v4; // r9
  int FeedbackCounters; // ebx
  unsigned int v6; // r15d
  PIO_WORKITEM WorkItem; // rax
  __int64 Pool2; // rax
  unsigned int *v9; // r12
  unsigned __int16 v10; // r9
  unsigned __int8 v11; // dl
  unsigned int v12; // ecx
  int v13; // r11d
  unsigned int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // r9d
  unsigned int *v17; // r15
  unsigned int *v18; // r12
  int v19; // ecx
  unsigned __int16 v20; // r9
  __int64 v21; // rcx
  unsigned int v22; // ecx
  unsigned int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  char v27; // r11
  char v28; // r10
  char v29; // bl
  char v30; // r12
  __int64 v31; // r8
  unsigned int v32; // r9d
  unsigned int v33; // eax
  unsigned int v34; // edx
  unsigned int v35; // eax
  unsigned __int16 v36; // r9
  unsigned __int16 v37; // r9
  unsigned int v38; // ecx
  int v39; // r8d
  int v40; // edx
  __int64 v42; // [rsp+28h] [rbp-50h]
  __int64 v43; // [rsp+30h] [rbp-48h]
  unsigned int v44; // [rsp+80h] [rbp+8h] BYREF
  int v45; // [rsp+88h] [rbp+10h] BYREF
  int v46; // [rsp+90h] [rbp+18h] BYREF

  v46 = 0;
  v45 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  v2 = 0LL;
  v3 = 0LL;
  if ( !*(_BYTE *)(a1 + 1137) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_5:
      FeedbackCounters = -1073741823;
      goto LABEL_107;
    }
    v4 = 10;
LABEL_4:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v4,
      (__int64)&WPP_f9bd8d112b513185ab5e94a42bec474e_Traceguids);
    goto LABEL_5;
  }
  v6 = *(_DWORD *)(a1 + 1128);
  if ( !v6 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_5;
    v4 = 11;
    goto LABEL_4;
  }
  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
  *(_QWORD *)(a1 + 1184) = WorkItem;
  if ( !WorkItem )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        4u,
        0xCu,
        (__int64)&WPP_f9bd8d112b513185ab5e94a42bec474e_Traceguids);
    goto LABEL_12;
  }
  Pool2 = ExAllocatePool2(64LL, 8 * v6 + 56, 1919119952LL);
  v2 = Pool2;
  if ( !Pool2 )
  {
LABEL_12:
    FeedbackCounters = -1073741670;
    goto LABEL_107;
  }
  v9 = (unsigned int *)(Pool2 + 56);
  FeedbackCounters = PepNotifyQueryFeedbackCounters(a1, v6, Pool2 + 56);
  if ( FeedbackCounters < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 13;
      goto LABEL_17;
    }
    goto LABEL_107;
  }
  v12 = 0;
  v13 = -1;
  v14 = -1;
  do
  {
    if ( !v9[1] )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_104;
      v20 = 14;
      goto LABEL_102;
    }
    v15 = *v9;
    if ( ((*v9 >> 1) & 3) > 1 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_104;
      v37 = 15;
      goto LABEL_98;
    }
    v16 = *v9 & 0x78;
    if ( v16 > 8 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_104;
      v37 = 16;
LABEL_98:
      LODWORD(v43) = (*v9 >> 1) & 3;
      LODWORD(v42) = v12;
LABEL_99:
      WPP_RECORDER_SF_DD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v37,
        (__int64)&WPP_f9bd8d112b513185ab5e94a42bec474e_Traceguids,
        v42,
        v43);
      goto LABEL_104;
    }
    if ( (v15 & 0x80u) != 0 && (v15 & 1) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_104;
      v20 = 17;
LABEL_102:
      LODWORD(v42) = v12;
LABEL_103:
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v20,
        (__int64)&WPP_f9bd8d112b513185ab5e94a42bec474e_Traceguids,
        v42);
      goto LABEL_104;
    }
    if ( v15 >= 0x100 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_104;
      v20 = 18;
      goto LABEL_102;
    }
    if ( (v15 & 0x78) != 0 )
    {
      if ( v16 == 8 && v13 == -1 )
        v13 = v12;
    }
    else if ( v14 == -1 )
    {
      v14 = v12;
    }
    ++v12;
    v9 += 2;
  }
  while ( v12 < v6 );
  if ( v14 == -1 )
  {
    FeedbackCounters = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x13u,
        (__int64)&WPP_f9bd8d112b513185ab5e94a42bec474e_Traceguids);
    goto LABEL_107;
  }
  v17 = (unsigned int *)(v2 + 8);
  v18 = (unsigned int *)(v2 + 4);
  v19 = *(_DWORD *)(v2 + 8LL * v14 + 60);
  *(_DWORD *)(v2 + 48) = v14;
  *(_DWORD *)(v2 + 20) = v19;
  *(_DWORD *)(v2 + 52) = v13;
  FeedbackCounters = PepNotifyQueryPerfCapabilities(
                       a1,
                       (int)v2 + 4,
                       (int)v2 + 8,
                       (int)v2 + 12,
                       v2 + 16,
                       (__int64)&v46,
                       (__int64)&v45);
  if ( FeedbackCounters < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_107;
    v10 = 20;
    goto LABEL_17;
  }
  v21 = *(_QWORD *)(a1 + 1120);
  LOBYTE(v44) = 0;
  if ( (int)PoFxProcessorNotification(v21, 44LL, &v44) >= 0 )
    *(_BYTE *)(v2 + 36) = v44;
  PepNotifyQueryPerfAutonomousSupport(a1, (_BYTE *)v2);
  if ( *v18 < *v17 || (v22 = *(_DWORD *)(v2 + 12), *v17 < v22) || (v23 = *(_DWORD *)(v2 + 16), v22 < v23) || !v23 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_104;
    v36 = 21;
    goto LABEL_88;
  }
  v24 = *(unsigned __int8 *)(a1 + 1136);
  if ( !(_BYTE)v24 )
  {
LABEL_80:
    v38 = *v17;
    v39 = v45;
    *(_DWORD *)(v2 + 24) = 100 * *v18 / *v17;
    *(_DWORD *)(v2 + 28) = 100 * *(_DWORD *)(v2 + 12) / v38;
    v40 = v46;
    *(_DWORD *)(v2 + 32) = 100 * *(_DWORD *)(v2 + 16) / v38;
    FeedbackCounters = InitPepProcessorDomain(a1, v40, v39);
    if ( FeedbackCounters >= 0 )
    {
      *(_QWORD *)(a1 + 1192) = v2;
      v3 = 0LL;
      v2 = 0LL;
      FeedbackCounters = 0;
      ProcLibTracePepPerfCapabilities(a1, 0);
      goto LABEL_107;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_107;
    v10 = 30;
    v11 = 2;
    goto LABEL_18;
  }
  v25 = ExAllocatePool2(64LL, 24 * v24, 1919119952LL);
  v3 = (_DWORD *)v25;
  if ( !v25 )
    goto LABEL_12;
  LOBYTE(v26) = *(_BYTE *)(a1 + 1136);
  FeedbackCounters = PepNotifyQueryDiscretePerfStates(a1, v26, v25);
  if ( FeedbackCounters >= 0 )
  {
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0LL;
    if ( *(_BYTE *)(a1 + 1136) )
    {
      do
      {
        v32 = v3[6 * v31];
        v3[6 * v31 + 2] = 100 * v32 / *(_DWORD *)(v2 + 8);
        v33 = *(_DWORD *)(v2 + 16);
        v44 = v33;
        if ( v32 < v33 || (v34 = *(_DWORD *)(v2 + 4), v32 > v34) )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_104;
          v20 = 23;
          goto LABEL_85;
        }
        if ( (_DWORD)v31 )
        {
          if ( v32 >= v3[6 * (unsigned int)(v31 - 1)] )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_104;
            v37 = 24;
            LODWORD(v43) = v31 - 1;
            LODWORD(v42) = v31;
            goto LABEL_99;
          }
          v33 = v44;
        }
        if ( v32 == v34 )
          v27 = 1;
        if ( v32 == v33 )
          v28 = 1;
        if ( v32 == *(_DWORD *)(v2 + 12) )
          v29 = 1;
        if ( v32 == *(_DWORD *)(v2 + 8) )
        {
          v30 = 1;
          if ( v3[6 * v31 + 1] != *(_DWORD *)(v2 + 20) )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_104;
            v20 = 25;
LABEL_85:
            LODWORD(v42) = v31;
            goto LABEL_103;
          }
        }
        v35 = *(unsigned __int8 *)(a1 + 1136);
        v31 = (unsigned int)(v31 + 1);
      }
      while ( (unsigned int)v31 < v35 );
      if ( !v27 )
        goto LABEL_86;
      if ( v28 )
      {
        if ( v29 )
        {
          if ( v30 )
          {
            *(_BYTE *)(v2 + 37) = v35;
            v17 = (unsigned int *)(v2 + 8);
            *(_QWORD *)(v2 + 40) = v3;
            v18 = (unsigned int *)(v2 + 4);
            goto LABEL_80;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_104;
          v36 = 29;
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_104;
          v36 = 28;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_104;
        v36 = 27;
      }
      goto LABEL_88;
    }
LABEL_86:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v36 = 26;
LABEL_88:
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v36,
        (__int64)&WPP_f9bd8d112b513185ab5e94a42bec474e_Traceguids);
    }
LABEL_104:
    FeedbackCounters = -1073741811;
    goto LABEL_107;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_107;
  v10 = 22;
LABEL_17:
  v11 = 3;
LABEL_18:
  LODWORD(v42) = FeedbackCounters;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v11,
    3u,
    v10,
    (__int64)&WPP_f9bd8d112b513185ab5e94a42bec474e_Traceguids,
    v42);
LABEL_107:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  if ( v2 )
    ExFreePoolWithTag((PVOID)v2, (ULONG)1919119952);
  if ( v3 )
    ExFreePoolWithTag(v3, (ULONG)1919119952);
  return (unsigned int)FeedbackCounters;
}
