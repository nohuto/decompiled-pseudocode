/*
 * XREFs of InitPepPerfStates @ 0x1C003A568
 * Callers:
 *     ProcLibDeviceStart @ 0x1C002C914 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000262C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0005818 (WPP_RECORDER_SF_DD.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C0021ED0 (ProcLibTracePepPerfCapabilities.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C003AD70 (PepNotifyQueryFeedbackCounters.c)
 *     PepNotifyQueryPerfCapabilities @ 0x1C003AE60 (PepNotifyQueryPerfCapabilities.c)
 */

__int64 __fastcall InitPepPerfStates(__int64 a1)
{
  __int64 v2; // rdx
  void (__fastcall *v3)(PWDF_DRIVER_GLOBALS, __int64, _QWORD); // rax
  _DWORD *v4; // r15
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
  unsigned int *v21; // rdi
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // ecx
  unsigned int v26; // eax
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  int v31; // r13d
  char v33; // cl
  char v34; // r10
  char v35; // r11
  char v36; // bl
  __int64 i; // r8
  unsigned int v38; // eax
  unsigned int v39; // r9d
  unsigned int v40; // eax
  unsigned int v41; // edx
  int v42; // eax
  unsigned __int16 v43; // r9
  unsigned int v44; // r8d
  _DWORD *v45; // rax
  __int64 v46; // [rsp+28h] [rbp-30h]
  __int64 v47; // [rsp+30h] [rbp-28h]
  _DWORD v48[2]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v49; // [rsp+48h] [rbp-10h]
  char v50; // [rsp+A0h] [rbp+48h] BYREF
  int v51; // [rsp+A8h] [rbp+50h] BYREF
  int v52; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v53; // [rsp+B8h] [rbp+60h]

  v2 = *(_QWORD *)(a1 + 208);
  v51 = 0;
  v3 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504);
  v52 = 0;
  v3(WdfDriverGlobals, v2, 0LL);
  v4 = 0LL;
  v5 = 0LL;
  if ( !*(_BYTE *)(a1 + 1137) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_5:
      v7 = -1073741823;
      goto LABEL_71;
    }
    v6 = 10;
LABEL_4:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v6,
      (__int64)&WPP_f9bd8d112b513185ab5e94a42bec474e_Traceguids);
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
        (__int64)&WPP_f9bd8d112b513185ab5e94a42bec474e_Traceguids);
    goto LABEL_12;
  }
  Pool2 = ExAllocatePool2(64LL, 8 * v8 + 56, 1919119952LL);
  v4 = (_DWORD *)Pool2;
  if ( !Pool2 )
    goto LABEL_12;
  FeedbackCounters = PepNotifyQueryFeedbackCounters(a1, v8, Pool2 + 56);
  v7 = FeedbackCounters;
  if ( FeedbackCounters < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_71;
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
      LODWORD(v47) = (v4[2 * v14 + 14] >> 1) & 3;
      LODWORD(v46) = v14;
LABEL_42:
      WPP_RECORDER_SF_DD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v20,
        (__int64)&WPP_f9bd8d112b513185ab5e94a42bec474e_Traceguids,
        v46,
        v47);
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
      goto LABEL_71;
    }
    if ( v17 >= 0x100 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19 = 18;
LABEL_45:
        LODWORD(v46) = v14;
LABEL_46:
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          v19,
          (__int64)&WPP_f9bd8d112b513185ab5e94a42bec474e_Traceguids,
          v46);
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
        (__int64)&WPP_f9bd8d112b513185ab5e94a42bec474e_Traceguids);
    goto LABEL_71;
  }
  v21 = v4 + 2;
  v22 = v4[2 * v16 + 15];
  v4[12] = v16;
  v4[5] = v22;
  v4[13] = v15;
  FeedbackCounters = PepNotifyQueryPerfCapabilities(
                       a1,
                       (int)v4 + 4,
                       (int)v4 + 8,
                       (int)v4 + 12,
                       (__int64)(v4 + 4),
                       (__int64)&v51,
                       (__int64)&v52);
  v7 = FeedbackCounters;
  if ( FeedbackCounters >= 0 )
  {
    v23 = *(_QWORD *)(a1 + 1120);
    v50 = 0;
    if ( (int)PoFxProcessorNotification(v23, 44LL, &v50) >= 0 )
      *((_BYTE *)v4 + 36) = v50;
    v24 = *(_QWORD *)(a1 + 1120);
    v50 = 0;
    if ( (int)PoFxProcessorNotification(v24, 47LL, &v50) >= 0 )
      *(_BYTE *)v4 = v50;
    if ( v4[1] < *v21 || (v25 = v4[3], *v21 < v25) || (v26 = v4[4], v25 < v26) || !v26 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v43 = 21;
      goto LABEL_102;
    }
    v27 = *(unsigned __int8 *)(a1 + 1136);
    if ( !(_BYTE)v27 )
    {
LABEL_113:
      v44 = *v21;
      v4[6] = 100 * v4[1] / *v21;
      v4[7] = 100 * v4[3] / v44;
      v4[8] = 100 * v4[4] / v44;
      v45 = (_DWORD *)ExAllocatePool2(64LL, 24LL, 1919119952LL);
      if ( v45 )
      {
        v45[2] = 0;
        v5 = 0LL;
        *v45 = 1;
        v7 = 0;
        v45[1] = 5;
        v45[3] = v51;
        v45[5] = v52;
        v45[4] = 1;
        *(_QWORD *)(a1 + 1208) = v45;
        *(_QWORD *)(a1 + 1192) = v4;
        v4 = 0LL;
        ProcLibTracePepPerfCapabilities(a1, 0);
      }
      else
      {
        v7 = -1073741670;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v12 = 30;
          LODWORD(v46) = -1073741670;
          v13 = 2;
          goto LABEL_18;
        }
      }
      goto LABEL_71;
    }
    v53 = ExAllocatePool2(64LL, 24 * v27, 1919119952LL);
    v5 = (_DWORD *)v53;
    if ( v53 )
    {
      v28 = *(unsigned __int8 *)(a1 + 1136);
      v29 = *(_QWORD *)(a1 + 1120);
      v48[1] = 0;
      v48[0] = v28;
      v49 = v53;
      v30 = PoFxProcessorNotification(v29, 41LL, v48);
      v31 = v30;
      v7 = v30;
      if ( v30 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v46) = v30;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          2u,
          0x22u,
          (__int64)&WPP_f9bd8d112b513185ab5e94a42bec474e_Traceguids,
          v46);
LABEL_68:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v46) = v31;
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x16u,
            (__int64)&WPP_f9bd8d112b513185ab5e94a42bec474e_Traceguids,
            v46);
        }
        v5 = (_DWORD *)v53;
        goto LABEL_71;
      }
      if ( v30 < 0 )
        goto LABEL_68;
      v5 = (_DWORD *)v53;
      v33 = 0;
      v34 = 0;
      v50 = 0;
      v35 = 0;
      v36 = 0;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v38 = *(unsigned __int8 *)(a1 + 1136);
        if ( (unsigned int)i >= v38 )
          break;
        v39 = v5[6 * i];
        v5[6 * i + 2] = 100 * v39 / v4[2];
        v40 = v4[4];
        LODWORD(v53) = v40;
        if ( v39 < v40 || (v41 = v4[1], v39 > v41) )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_47;
          v19 = 23;
          goto LABEL_98;
        }
        if ( (_DWORD)i )
        {
          if ( v39 >= v5[6 * (unsigned int)(i - 1)] )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_47;
            v20 = 24;
            LODWORD(v47) = i - 1;
            LODWORD(v46) = i;
            goto LABEL_42;
          }
          v33 = v50;
          v40 = v53;
        }
        if ( v39 == v41 )
          v34 = 1;
        if ( v39 == v40 )
          v35 = 1;
        if ( v39 == v4[3] )
          v36 = 1;
        if ( v39 == v4[2] )
        {
          v42 = v4[5];
          v33 = 1;
          v50 = 1;
          if ( v5[6 * i + 1] != v42 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_47;
            v19 = 25;
LABEL_98:
            LODWORD(v46) = i;
            goto LABEL_46;
          }
        }
      }
      if ( v34 )
      {
        if ( v35 )
        {
          if ( v36 )
          {
            if ( v33 )
            {
              *((_BYTE *)v4 + 37) = v38;
              v21 = v4 + 2;
              *((_QWORD *)v4 + 5) = v5;
              goto LABEL_113;
            }
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_47;
            v43 = 29;
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_47;
            v43 = 28;
          }
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_47;
          v43 = 27;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_47;
        v43 = 26;
      }
LABEL_102:
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v43,
        (__int64)&WPP_f9bd8d112b513185ab5e94a42bec474e_Traceguids);
      goto LABEL_47;
    }
LABEL_12:
    v7 = -1073741670;
    goto LABEL_71;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = 20;
LABEL_17:
    LODWORD(v46) = FeedbackCounters;
    v13 = 3;
LABEL_18:
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v13,
      3u,
      v12,
      (__int64)&WPP_f9bd8d112b513185ab5e94a42bec474e_Traceguids,
      v46);
  }
LABEL_71:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  if ( v4 )
    ExFreePoolWithTag(v4, (ULONG)1919119952);
  if ( v5 )
    ExFreePoolWithTag(v5, (ULONG)1919119952);
  return v7;
}
