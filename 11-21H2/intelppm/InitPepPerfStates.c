/*
 * XREFs of InitPepPerfStates @ 0x1C0042634
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0028678 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002630 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C00026F0 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DD @ 0x1C000414C (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_d @ 0x1C0008580 (WPP_RECORDER_SF_d.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C0034B70 (ProcLibTracePepPerfCapabilities.c)
 *     InitPepProcessorDomain @ 0x1C003CFE8 (InitPepProcessorDomain.c)
 *     PepNotifyQueryDiscretePerfStates @ 0x1C0042DB8 (PepNotifyQueryDiscretePerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C0042E40 (PepNotifyQueryFeedbackCounters.c)
 *     PepNotifyQueryPerfCapabilities @ 0x1C0042F30 (PepNotifyQueryPerfCapabilities.c)
 */

__int64 __fastcall InitPepPerfStates(__int64 a1)
{
  unsigned int *v2; // rsi
  _DWORD *v3; // r13
  unsigned __int16 v4; // r9
  int FeedbackCounters; // ebx
  unsigned int v6; // r15d
  PIO_WORKITEM WorkItem; // rax
  __int64 Pool2; // rax
  unsigned int *v9; // r12
  unsigned __int16 v10; // r9
  unsigned __int8 v11; // dl
  int v12; // ebx
  unsigned int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // r10d
  unsigned int v16; // r9d
  unsigned int *v17; // r15
  __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // r9d
  unsigned int v21; // r11d
  unsigned int v22; // r8d
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  char v26; // bl
  char v27; // r15
  char v28; // r12
  __int64 v29; // r8
  unsigned int v30; // r10d
  unsigned int v31; // r9d
  bool v32; // zf
  unsigned int v33; // eax
  char v34; // dl
  unsigned __int16 v35; // r9
  unsigned int v36; // eax
  unsigned __int16 v37; // r9
  unsigned __int16 v38; // r9
  unsigned int v39; // eax
  int v40; // r8d
  int v41; // edx
  __int64 v43; // [rsp+28h] [rbp-50h]
  __int64 v44; // [rsp+30h] [rbp-48h]
  char v45; // [rsp+80h] [rbp+8h] BYREF
  int v46; // [rsp+88h] [rbp+10h] BYREF
  int v47; // [rsp+90h] [rbp+18h] BYREF

  v47 = 0;
  v46 = 0;
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
      (__int64)&WPP_57f963f740483ea9c1cd5ca523cbe67d_Traceguids);
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
        (__int64)&WPP_57f963f740483ea9c1cd5ca523cbe67d_Traceguids);
    goto LABEL_12;
  }
  Pool2 = ExAllocatePool2(64LL, 8 * v6 + 56, 1919119952LL);
  v2 = (unsigned int *)Pool2;
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
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_107;
    v10 = 13;
    goto LABEL_17;
  }
  v12 = -1;
  v13 = 0;
  v14 = -1;
  do
  {
    if ( !v9[1] )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_104;
      v35 = 14;
      goto LABEL_102;
    }
    v15 = *v9;
    if ( ((*v9 >> 1) & 3) > 1 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_104;
      v38 = 15;
LABEL_98:
      LODWORD(v44) = (*v9 >> 1) & 3;
      LODWORD(v43) = v13;
      goto LABEL_99;
    }
    v16 = *v9 & 0x78;
    if ( v16 > 8 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_104;
      v38 = 16;
      goto LABEL_98;
    }
    if ( (v15 & 0x81) == 0x80 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_104;
      v35 = 17;
      goto LABEL_102;
    }
    if ( v15 >= 0x100 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_104;
      v35 = 18;
LABEL_102:
      LODWORD(v43) = v13;
LABEL_103:
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v35,
        (__int64)&WPP_57f963f740483ea9c1cd5ca523cbe67d_Traceguids,
        v43);
      goto LABEL_104;
    }
    if ( (v15 & 0x78) != 0 )
    {
      if ( v16 == 8 && v12 == -1 )
        v12 = v13;
    }
    else if ( v14 == -1 )
    {
      v14 = v13;
    }
    ++v13;
    v9 += 2;
  }
  while ( v13 < v6 );
  if ( v14 == -1 )
  {
    FeedbackCounters = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x13u,
        (__int64)&WPP_57f963f740483ea9c1cd5ca523cbe67d_Traceguids);
    goto LABEL_107;
  }
  v17 = v2 + 3;
  v2[4] = v2[2 * v14 + 15];
  v2[12] = v14;
  v2[13] = v12;
  FeedbackCounters = PepNotifyQueryPerfCapabilities(
                       a1,
                       (_DWORD)v2,
                       (int)v2 + 4,
                       (int)v2 + 8,
                       (__int64)(v2 + 3),
                       (__int64)&v47,
                       (__int64)&v46);
  if ( FeedbackCounters < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_107;
    v10 = 20;
    goto LABEL_17;
  }
  v18 = *(_QWORD *)(a1 + 1120);
  v45 = 0;
  if ( (int)PoFxProcessorNotification(v18, 44LL, &v45) >= 0 )
    *((_BYTE *)v2 + 32) = v45;
  v19 = *v2;
  v20 = v2[1];
  if ( *v2 < v20 || (v21 = v2[2], v20 < v21) || (v22 = *v17, v21 < *v17) || !v22 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_104;
    v37 = 21;
    goto LABEL_86;
  }
  v23 = *(unsigned __int8 *)(a1 + 1136);
  if ( !(_BYTE)v23 )
  {
LABEL_78:
    v2[5] = 100 * v19 / v20;
    v2[6] = 100 * v21 / v20;
    v39 = 100 * v22;
    v40 = v46;
    v41 = v47;
    v2[7] = v39 / v20;
    FeedbackCounters = InitPepProcessorDomain(a1, v41, v40);
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
  v24 = ExAllocatePool2(64LL, 24 * v23, 1919119952LL);
  v3 = (_DWORD *)v24;
  if ( !v24 )
    goto LABEL_12;
  LOBYTE(v25) = *(_BYTE *)(a1 + 1136);
  FeedbackCounters = PepNotifyQueryDiscretePerfStates(a1, v25, v24);
  if ( FeedbackCounters < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_107;
    v10 = 22;
LABEL_17:
    v11 = 3;
LABEL_18:
    LODWORD(v43) = FeedbackCounters;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v11,
      3u,
      v10,
      (__int64)&WPP_57f963f740483ea9c1cd5ca523cbe67d_Traceguids,
      v43);
    goto LABEL_107;
  }
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v45 = 0;
  v29 = 0LL;
  if ( !*(_BYTE *)(a1 + 1136) )
  {
LABEL_84:
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_104;
    v37 = 26;
    goto LABEL_86;
  }
  v20 = v2[1];
  while ( 2 )
  {
    v30 = v3[6 * v29];
    v3[6 * v29 + 2] = 100 * v30 / v20;
    v31 = v2[3];
    if ( v30 < v31 || v30 > *v2 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_104;
      v35 = 23;
      goto LABEL_83;
    }
    if ( !(_DWORD)v29 || v30 < v3[6 * (unsigned int)(v29 - 1)] )
    {
      v21 = v2[2];
      if ( v30 == *v2 )
        v26 = 1;
      v32 = v30 == v31;
      v20 = v2[1];
      if ( v32 )
        v27 = 1;
      if ( v30 == v21 )
        v28 = 1;
      if ( v30 == v20 )
      {
        v33 = v2[4];
        v34 = 1;
        v45 = 1;
        if ( v3[6 * v29 + 1] != v33 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_104;
          v35 = 25;
LABEL_83:
          LODWORD(v43) = v29;
          goto LABEL_103;
        }
      }
      else
      {
        v34 = v45;
      }
      v36 = *(unsigned __int8 *)(a1 + 1136);
      v29 = (unsigned int)(v29 + 1);
      if ( (unsigned int)v29 < v36 )
        continue;
      if ( !v26 )
        goto LABEL_84;
      if ( v27 )
      {
        if ( v28 )
        {
          if ( v34 )
          {
            v22 = v2[3];
            *((_BYTE *)v2 + 33) = v36;
            v19 = *v2;
            *((_QWORD *)v2 + 5) = v3;
            goto LABEL_78;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_104;
          v37 = 29;
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_104;
          v37 = 28;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_104;
        v37 = 27;
      }
LABEL_86:
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v37,
        (__int64)&WPP_57f963f740483ea9c1cd5ca523cbe67d_Traceguids);
      goto LABEL_104;
    }
    break;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_104;
  v38 = 24;
  LODWORD(v44) = v29 - 1;
  LODWORD(v43) = v29;
LABEL_99:
  WPP_RECORDER_SF_DD(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    1u,
    v38,
    (__int64)&WPP_57f963f740483ea9c1cd5ca523cbe67d_Traceguids,
    v43,
    v44);
LABEL_104:
  FeedbackCounters = -1073741811;
LABEL_107:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  if ( v2 )
    ExFreePoolWithTag(v2, (ULONG)1919119952);
  if ( v3 )
    ExFreePoolWithTag(v3, (ULONG)1919119952);
  return (unsigned int)FeedbackCounters;
}
