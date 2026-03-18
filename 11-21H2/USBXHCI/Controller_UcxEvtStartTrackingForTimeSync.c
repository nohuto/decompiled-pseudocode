/*
 * XREFs of Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0034160
 * Callers:
 *     <none>
 * Callees:
 *     DynamicLock_Release @ 0x1C0003E5C (DynamicLock_Release.c)
 *     DynamicLock_Acquire @ 0x1C0004248 (DynamicLock_Acquire.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C00139CC (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0013B7C (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_i @ 0x1C00156C4 (WPP_RECORDER_SF_i.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C0018BD4 (WPP_RECORDER_SF_dqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ptqqp_EtwWriteTransfer @ 0x1C003570C (McTemplateK0ptqqp_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_II @ 0x1C00357B8 (WPP_RECORDER_SF_II.c)
 *     Interrupter_QueryBusEdgeInformation @ 0x1C003C364 (Interrupter_QueryBusEdgeInformation.c)
 */

PDEVICE_OBJECT __fastcall Controller_UcxEvtStartTrackingForTimeSync(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v8; // r12d
  int v9; // edx
  __int64 v10; // rsi
  int v11; // r8d
  _BYTE *v12; // rdi
  int v13; // ebx
  unsigned __int8 v14; // r14
  unsigned __int64 v15; // rdi
  int v16; // edx
  PDEVICE_OBJECT result; // rax
  int v18; // edx
  int v19; // edx
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // r14
  __int64 v23; // rcx
  int v24; // edx
  __int64 v25; // rcx
  unsigned int *v26; // rbx
  int Ulong; // eax
  __int64 *v28; // rcx
  __int64 v29; // rdx
  int v30; // edx
  __int64 v31; // [rsp+30h] [rbp-51h]
  __int64 v32; // [rsp+40h] [rbp-41h]
  char v33; // [rsp+48h] [rbp-39h] BYREF
  unsigned __int64 v34; // [rsp+50h] [rbp-31h]
  __int64 v35; // [rsp+58h] [rbp-29h] BYREF
  __int64 *v36; // [rsp+60h] [rbp-21h] BYREF
  __int64 v37; // [rsp+68h] [rbp-19h] BYREF
  ULONG Seed[2]; // [rsp+70h] [rbp-11h] BYREF
  _OWORD v39[2]; // [rsp+78h] [rbp-9h] BYREF
  __int128 v40; // [rsp+98h] [rbp+17h]
  void *v41; // [rsp+A8h] [rbp+27h]
  char v42; // [rsp+100h] [rbp+7Fh]

  v42 = 1;
  LODWORD(v41) = 0;
  v33 = 0;
  v37 = 0LL;
  v36 = 0LL;
  v35 = 0LL;
  v34 = 0LL;
  memset(v39, 0, sizeof(v39));
  v40 = 0LL;
  v8 = (*(char (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 2240))(WdfDriverGlobals);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          a1,
          off_1C0061428);
  v12 = (_BYTE *)(v10 + 608);
  if ( a4 < 9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      HIDWORD(v31) = 0;
      WPP_RECORDER_SF_II(*(_QWORD *)(v10 + 72), v9, v11, 281);
    }
LABEL_4:
    v13 = -1073741811;
LABEL_5:
    v14 = v42;
    goto LABEL_6;
  }
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, __int64 *, _QWORD))(WdfFunctions_01023 + 2152))(
          WdfDriverGlobals,
          a2,
          a4,
          &v37,
          0LL);
  if ( v13 < 0 )
    goto LABEL_5;
  if ( *(_QWORD *)v37 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(v10 + 72), v18, 4, 282, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids);
    }
    goto LABEL_4;
  }
  v14 = *(_BYTE *)(v37 + 8);
  v42 = v14;
  if ( a3 < 9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      HIDWORD(v31) = 0;
      WPP_RECORDER_SF_II(*(_QWORD *)(v10 + 72), v18, v11, 283);
    }
    v13 = -1073741811;
    goto LABEL_6;
  }
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, __int64 **, _QWORD))(WdfFunctions_01023 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v36,
          0LL);
  if ( v13 < 0 )
  {
LABEL_6:
    v15 = v34;
    goto LABEL_7;
  }
  if ( (_BYTE)v8 == 1 )
  {
    v35 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2216))(WdfDriverGlobals, a2);
    if ( !v35 )
    {
      v13 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v19) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v10 + 72),
          v19,
          4,
          284,
          (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
          116);
      }
      goto LABEL_6;
    }
    v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            v35,
            off_1C00613B0);
    v22 = v20;
    if ( *(_BYTE *)(v20 + 48) )
    {
      v13 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v21) = 2;
        WPP_RECORDER_SF_i(
          *(_QWORD *)(v10 + 72),
          v21,
          4,
          285,
          (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
          v35);
      }
      goto LABEL_5;
    }
    v23 = *(_QWORD *)(v20 + 24);
    if ( !v23 )
    {
      *(_QWORD *)Seed = MEMORY[0xFFFFF78000000320];
      v23 = ((RtlRandomEx(Seed) >> 2) + 4096) & 0xFFFFFFF8;
      *(_QWORD *)(v22 + 24) = v23;
    }
  }
  else
  {
    *(_QWORD *)((char *)&v39[1] + 4) = 0x100000000LL;
    *((_QWORD *)&v40 + 1) = 0LL;
    HIDWORD(v39[1]) = 1;
    v41 = off_1C00613B0;
    *(_OWORD *)((char *)v39 + 4) = 0LL;
    LODWORD(v39[0]) = 56;
    *(_QWORD *)&v40 = *(_QWORD *)(v10 + 632);
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _OWORD *, __int64 *))(WdfFunctions_01023 + 1656))(
            WdfDriverGlobals,
            v39,
            &v35);
    if ( v13 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v24) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v10 + 72),
          v24,
          4,
          286,
          (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
          v13);
      }
      goto LABEL_6;
    }
    v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            v35,
            off_1C00613B0);
    *(_BYTE *)(v22 + 60) = 0;
    *(_QWORD *)(v22 + 16) = v35;
    *(_QWORD *)(v22 + 24) = 0LL;
    v23 = v35;
  }
  *v36 = v23;
  if ( *(_DWORD *)(v10 + 392) != 1 )
  {
    v13 = -1073741436;
    goto LABEL_5;
  }
  DynamicLock_Acquire(*(_QWORD *)(v10 + 616));
  if ( !(*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 112))(
          WdfDriverGlobals,
          *(_QWORD *)(v10 + 632)) )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(__int64, __int64), _BYTE *))(WdfFunctions_01023 + 1144))(
      WdfDriverGlobals,
      **(_QWORD **)(*(_QWORD *)(v10 + 128) + 40LL),
      Interrupter_ClearBusEdgeInformationRoutineWithIsrSync,
      v12);
    v25 = *(_QWORD *)(v10 + 88);
    v26 = *(unsigned int **)(v25 + 32);
    Ulong = XilRegister_ReadUlong(v25, v26);
    XilRegister_WriteUlong(*(_QWORD *)(v10 + 88), v26, Ulong | 0x400);
    *v12 = 1;
  }
  DynamicLock_Release(*(_QWORD *)(v10 + 616));
  Interrupter_QueryBusEdgeInformation(*(_QWORD *)(v10 + 128), (_DWORD)v12, (unsigned int)&v33, 0, 0LL, 0LL, 0LL);
  DynamicLock_Acquire(*(_QWORD *)(v10 + 616));
  if ( !v33 )
  {
    if ( !v42 )
    {
      *(_QWORD *)(v22 + 32) = a2;
      v28 = *(__int64 **)(v10 + 648);
      if ( *v28 != v10 + 640 )
        __fastfail(3u);
      *(_QWORD *)v22 = v10 + 640;
      *(_QWORD *)(v22 + 8) = v28;
      *v28 = v22;
      *(_QWORD *)(v10 + 648) = v22;
    }
    if ( !*(_BYTE *)(v10 + 664) )
    {
      v29 = *(_QWORD *)(v10 + 656);
      *(_BYTE *)(v10 + 664) = 1;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3040))(WdfDriverGlobals, v29);
    }
    if ( !v42 )
    {
      v13 = 259;
LABEL_51:
      DynamicLock_Release(*(_QWORD *)(v10 + 616));
      goto LABEL_5;
    }
  }
  DynamicLock_Release(*(_QWORD *)(v10 + 616));
  DynamicLock_Acquire(*(_QWORD *)(v10 + 616));
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 120))(
          WdfDriverGlobals,
          *(_QWORD *)(v10 + 632),
          v35);
  if ( v13 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v30) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v10 + 72),
        v30,
        4,
        287,
        (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
        v13);
    }
    goto LABEL_51;
  }
  DynamicLock_Release(*(_QWORD *)(v10 + 616));
  v15 = a3;
  *(_BYTE *)(v22 + 48) = 1;
  v14 = v42;
  v13 = 0;
LABEL_7:
  v16 = v35;
  ++*(_DWORD *)(v10 + 760);
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 0x10) != 0 )
    McTemplateK0ptqqp_EtwWriteTransfer(v14, v16, v11, *(_QWORD *)(v10 + 8), v14, v8, v13, v16);
  result = (PDEVICE_OBJECT)&WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    result = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v32) = v8;
      LODWORD(v31) = v13;
      result = (PDEVICE_OBJECT)WPP_RECORDER_SF_dqd(
                                 *(_QWORD *)(v10 + 72),
                                 5u,
                                 4u,
                                 0x120u,
                                 (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
                                 v31,
                                 v35,
                                 v32);
    }
  }
  if ( v13 >= 0 )
  {
    if ( v13 == 259 )
      return result;
  }
  else if ( !(_BYTE)v8 )
  {
    if ( v35 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1664))(WdfDriverGlobals);
  }
  return (PDEVICE_OBJECT)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, unsigned __int64))(WdfFunctions_01023 + 2120))(
                           WdfDriverGlobals,
                           a2,
                           (unsigned int)v13,
                           v15);
}
