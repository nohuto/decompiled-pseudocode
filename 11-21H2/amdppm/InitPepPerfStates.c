/*
 * XREFs of InitPepPerfStates @ 0x1C00395E4
 * Callers:
 *     ProcLibDeviceStart @ 0x1C002BB68 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00029DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00045A0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C000536C (WPP_RECORDER_SF_DD.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C002129C (ProcLibTracePepPerfCapabilities.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C0039DC0 (PepNotifyQueryFeedbackCounters.c)
 *     PepNotifyQueryPerfCapabilities @ 0x1C0039EB0 (PepNotifyQueryPerfCapabilities.c)
 */

__int64 __fastcall InitPepPerfStates(__int64 a1)
{
  __int64 v2; // rdx
  void (__fastcall *v3)(PWDF_DRIVER_GLOBALS, __int64, _QWORD); // rax
  unsigned int *v4; // r15
  _DWORD *v5; // r13
  unsigned __int16 v6; // r9
  unsigned int v7; // ebx
  unsigned int v8; // edi
  PIO_WORKITEM WorkItem; // rax
  __int64 Pool2; // rax
  int FeedbackCounters; // eax
  unsigned __int16 v12; // r9
  unsigned __int8 v13; // dl
  unsigned int v14; // ecx
  int v15; // r11d
  unsigned int v16; // edx
  unsigned int v17; // r9d
  unsigned int v18; // r8d
  unsigned __int16 v19; // r9
  unsigned __int16 v20; // r9
  unsigned int *v21; // rsi
  __int64 v22; // rcx
  unsigned int v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // r9d
  unsigned int v26; // r8d
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  int v31; // r13d
  char v33; // r10
  char v34; // r11
  char v35; // bl
  char v36; // di
  __int64 i; // r8
  unsigned int v38; // eax
  unsigned int v39; // r9d
  unsigned int v40; // eax
  unsigned __int16 v41; // r9
  _DWORD *v42; // rax
  __int64 v43; // [rsp+28h] [rbp-30h]
  __int64 v44; // [rsp+30h] [rbp-28h]
  _DWORD v45[2]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v46; // [rsp+48h] [rbp-10h]
  __int64 v47; // [rsp+A0h] [rbp+48h] BYREF
  int v48; // [rsp+A8h] [rbp+50h] BYREF
  int v49; // [rsp+B0h] [rbp+58h] BYREF

  v2 = *(_QWORD *)(a1 + 208);
  v48 = 0;
  v3 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504);
  v49 = 0;
  v3(WdfDriverGlobals, v2, 0LL);
  v4 = 0LL;
  v5 = 0LL;
  if ( !*(_BYTE *)(a1 + 1137) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_5:
      v7 = -1073741823;
      goto LABEL_69;
    }
    v6 = 10;
LABEL_4:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v6,
      (__int64)&WPP_57f963f740483ea9c1cd5ca523cbe67d_Traceguids);
    goto LABEL_5;
  }
  v8 = *(_DWORD *)(a1 + 1128);
  if ( !v8 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_5;
    v6 = 11;
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
  Pool2 = ExAllocatePool2(64LL, 8 * v8 + 56, 1919119952LL);
  v4 = (unsigned int *)Pool2;
  if ( !Pool2 )
    goto LABEL_12;
  FeedbackCounters = PepNotifyQueryFeedbackCounters(a1, v8, Pool2 + 56);
  v7 = FeedbackCounters;
  if ( FeedbackCounters < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_69;
    v12 = 13;
    goto LABEL_17;
  }
  v14 = 0;
  v15 = -1;
  v16 = -1;
  while ( v14 < v8 )
  {
    if ( !v4[2 * v14 + 15] )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19 = 14;
        goto LABEL_45;
      }
      goto LABEL_47;
    }
    v17 = v4[2 * v14 + 14];
    if ( ((v17 >> 1) & 3) > 1 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v20 = 15;
      goto LABEL_41;
    }
    v18 = v17 & 0x78;
    if ( v18 > 8 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v20 = 16;
LABEL_41:
      LODWORD(v44) = (v4[2 * v14 + 14] >> 1) & 3;
      LODWORD(v43) = v14;
LABEL_42:
      WPP_RECORDER_SF_DD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v20,
        (__int64)&WPP_57f963f740483ea9c1cd5ca523cbe67d_Traceguids,
        v43,
        v44);
      goto LABEL_47;
    }
    if ( (v17 & 0x81) == 0x80 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19 = 17;
        goto LABEL_45;
      }
LABEL_47:
      v7 = -1073741811;
      goto LABEL_69;
    }
    if ( v17 >= 0x100 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19 = 18;
LABEL_45:
        LODWORD(v43) = v14;
LABEL_46:
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          v19,
          (__int64)&WPP_57f963f740483ea9c1cd5ca523cbe67d_Traceguids,
          v43);
      }
      goto LABEL_47;
    }
    if ( (v17 & 0x78) != 0 )
    {
      if ( v18 == 8 && v15 == -1 )
        v15 = v14;
    }
    else if ( v16 == -1 )
    {
      v16 = v14;
    }
    ++v14;
  }
  if ( v16 == -1 )
  {
    v7 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x13u,
        (__int64)&WPP_57f963f740483ea9c1cd5ca523cbe67d_Traceguids);
    goto LABEL_69;
  }
  v21 = v4 + 3;
  v4[4] = v4[2 * v16 + 15];
  v4[12] = v16;
  v4[13] = v15;
  FeedbackCounters = PepNotifyQueryPerfCapabilities(
                       a1,
                       (_DWORD)v4,
                       (int)v4 + 4,
                       (int)v4 + 8,
                       (__int64)(v4 + 3),
                       (__int64)&v48,
                       (__int64)&v49);
  v7 = FeedbackCounters;
  if ( FeedbackCounters >= 0 )
  {
    v22 = *(_QWORD *)(a1 + 1120);
    LOBYTE(v47) = 0;
    if ( (int)PoFxProcessorNotification(v22, 44LL, &v47) >= 0 )
      *((_BYTE *)v4 + 32) = v47;
    v23 = *v4;
    v24 = v4[1];
    if ( *v4 < v24 || (v25 = v4[2], v24 < v25) || (v26 = *v21, v25 < *v21) || !v26 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v41 = 21;
      goto LABEL_100;
    }
    v27 = *(unsigned __int8 *)(a1 + 1136);
    if ( !(_BYTE)v27 )
    {
LABEL_111:
      v4[5] = 100 * v23 / v24;
      v4[6] = 100 * v25 / v24;
      v4[7] = 100 * v26 / v24;
      v42 = (_DWORD *)ExAllocatePool2(64LL, 24LL, 1919119952LL);
      if ( v42 )
      {
        v42[2] = 0;
        *v42 = 1;
        v42[1] = 5;
        v42[3] = v48;
        v42[5] = v49;
        v42[4] = 1;
        *(_QWORD *)(a1 + 1208) = v42;
        *(_QWORD *)(a1 + 1192) = v4;
        v5 = 0LL;
        v4 = 0LL;
        v7 = 0;
        ProcLibTracePepPerfCapabilities(a1, 0);
      }
      else
      {
        v7 = -1073741670;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v12 = 30;
          LODWORD(v43) = -1073741670;
          v13 = 2;
          goto LABEL_18;
        }
      }
      goto LABEL_69;
    }
    v47 = ExAllocatePool2(64LL, 24 * v27, 1919119952LL);
    v5 = (_DWORD *)v47;
    if ( v47 )
    {
      v28 = *(unsigned __int8 *)(a1 + 1136);
      v29 = *(_QWORD *)(a1 + 1120);
      v45[1] = 0;
      v45[0] = v28;
      v46 = v47;
      v30 = PoFxProcessorNotification(v29, 41LL, v45);
      v31 = v30;
      v7 = v30;
      if ( v30 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v43) = v30;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          2u,
          0x22u,
          (__int64)&WPP_57f963f740483ea9c1cd5ca523cbe67d_Traceguids,
          v43);
LABEL_66:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v43) = v31;
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x16u,
            (__int64)&WPP_57f963f740483ea9c1cd5ca523cbe67d_Traceguids,
            v43);
        }
        v5 = (_DWORD *)v47;
        goto LABEL_69;
      }
      if ( v30 < 0 )
        goto LABEL_66;
      v5 = (_DWORD *)v47;
      v33 = 0;
      v34 = 0;
      v35 = 0;
      v36 = 0;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v38 = *(unsigned __int8 *)(a1 + 1136);
        if ( (unsigned int)i >= v38 )
          break;
        v39 = v5[6 * i];
        v5[6 * i + 2] = 100 * v39 / v4[1];
        v40 = v4[3];
        LODWORD(v47) = v40;
        if ( v39 < v40 || v39 > *v4 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_47;
          v19 = 23;
          goto LABEL_96;
        }
        if ( (_DWORD)i )
        {
          if ( v39 >= v5[6 * (unsigned int)(i - 1)] )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_47;
            v20 = 24;
            LODWORD(v44) = i - 1;
            LODWORD(v43) = i;
            goto LABEL_42;
          }
          v40 = v47;
        }
        if ( v39 == *v4 )
          v33 = 1;
        if ( v39 == v40 )
          v34 = 1;
        if ( v39 == v4[2] )
          v35 = 1;
        if ( v39 == v4[1] )
        {
          v36 = 1;
          if ( v5[6 * i + 1] != v4[4] )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_47;
            v19 = 25;
LABEL_96:
            LODWORD(v43) = i;
            goto LABEL_46;
          }
        }
      }
      if ( v33 )
      {
        if ( v34 )
        {
          if ( v35 )
          {
            if ( v36 )
            {
              v24 = v4[1];
              v25 = v4[2];
              v26 = v4[3];
              *((_BYTE *)v4 + 33) = v38;
              v23 = *v4;
              *((_QWORD *)v4 + 5) = v5;
              goto LABEL_111;
            }
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_47;
            v41 = 29;
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_47;
            v41 = 28;
          }
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_47;
          v41 = 27;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_47;
        v41 = 26;
      }
LABEL_100:
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v41,
        (__int64)&WPP_57f963f740483ea9c1cd5ca523cbe67d_Traceguids);
      goto LABEL_47;
    }
LABEL_12:
    v7 = -1073741670;
    goto LABEL_69;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = 20;
LABEL_17:
    LODWORD(v43) = FeedbackCounters;
    v13 = 3;
LABEL_18:
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v13,
      3u,
      v12,
      (__int64)&WPP_57f963f740483ea9c1cd5ca523cbe67d_Traceguids,
      v43);
  }
LABEL_69:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  if ( v4 )
    ExFreePoolWithTag(v4, (ULONG)1919119952);
  if ( v5 )
    ExFreePoolWithTag(v5, (ULONG)1919119952);
  return v7;
}
