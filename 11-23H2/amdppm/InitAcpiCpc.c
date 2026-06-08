/*
 * XREFs of InitAcpiCpc @ 0x1C0024C48
 * Callers:
 *     ProcLibDeviceStart @ 0x1C002D1C4 (ProcLibDeviceStart.c)
 * Callees:
 *     WriteGenAddrMaybeHiddenEx @ 0x1C0002174 (WriteGenAddrMaybeHiddenEx.c)
 *     WPP_RECORDER_SF_ @ 0x1C00025DC (WPP_RECORDER_SF_.c)
 *     MapAdddressSpaceForGenAddr @ 0x1C0003C28 (MapAdddressSpaceForGenAddr.c)
 *     ReadGenAddrMaybeHiddenEx @ 0x1C0003DB8 (ReadGenAddrMaybeHiddenEx.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004990 (WPP_RECORDER_SF_d.c)
 *     CpcRegisterIsSupportedEx @ 0x1C00051F4 (CpcRegisterIsSupportedEx.c)
 *     WPP_RECORDER_SF_S @ 0x1C00059E8 (WPP_RECORDER_SF_S.c)
 *     GetSubspaceFromGenAddrEx @ 0x1C0005F7C (GetSubspaceFromGenAddrEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C510 (_guard_dispatch_icall_nop.c)
 *     ExecutePccCommand @ 0x1C0026438 (ExecutePccCommand.c)
 *     RegisterSubspace @ 0x1C0026594 (RegisterSubspace.c)
 *     StartPccCommand @ 0x1C0026760 (StartPccCommand.c)
 *     AcpiEval_CPC @ 0x1C0026D7C (AcpiEval_CPC.c)
 *     Display_CPC @ 0x1C002B040 (Display_CPC.c)
 *     ValidateAcpiCPC @ 0x1C002E738 (ValidateAcpiCPC.c)
 */

__int64 __fastcall InitAcpiCpc(__int64 a1)
{
  int v2; // eax
  int started; // ebx
  unsigned __int16 v4; // r9
  __int64 v5; // rsi
  int v6; // eax
  unsigned int *v7; // r12
  unsigned int v8; // r15d
  char v9; // r13
  __int64 i; // rbp
  __int64 v11; // r14
  unsigned int v12; // r13d
  __int64 SubspaceFromGenAddr; // rax
  __int64 v14; // rcx
  unsigned __int16 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // xmm1_8
  _BYTE *v18; // rcx
  int v19; // ebp
  _BYTE *v20; // rcx
  unsigned __int64 v21; // rax
  int v23; // [rsp+28h] [rbp-30h]
  __int64 v24; // [rsp+60h] [rbp+8h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  v2 = AcpiEval_CPC(a1, a1 + 592);
  started = v2;
  if ( v2 < 0 )
  {
    if ( v2 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0xAu,
          (__int64)&WPP_d96244bd3e763d8819ec805b3358b28f_Traceguids);
      goto LABEL_58;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_58;
    v4 = 11;
LABEL_7:
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      v4,
      (__int64)&WPP_d96244bd3e763d8819ec805b3358b28f_Traceguids,
      started);
    goto LABEL_58;
  }
  v5 = *(_QWORD *)(a1 + 592);
  started = ValidateAcpiCPC(v5);
  if ( started < 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x40000u);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_58;
    v4 = 12;
    goto LABEL_7;
  }
  Display_CPC(v5);
  v6 = *(_DWORD *)(v5 + 4);
  if ( v6 == 1 )
  {
    v7 = (unsigned int *)&CpcRegisterTable;
    v8 = 15;
  }
  else if ( v6 == 2 )
  {
    v7 = (unsigned int *)&Cpc2RegisterTable;
    v8 = 19;
  }
  else
  {
    v7 = (unsigned int *)&Cpc3RegisterTable;
    v8 = 21;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00124D8,
    0LL);
  v9 = 0;
  for ( i = 0LL; (unsigned int)i < v8; i = (unsigned int)(i + 1) )
  {
    v11 = v5 + v7[6 * i];
    if ( *(_BYTE *)v11 == 10 )
    {
      v12 = *(unsigned __int8 *)(v11 + 3);
      v24 = 0LL;
      started = RegisterSubspace(a1, v12, &v24);
      if ( started < 0 )
        goto LABEL_33;
      if ( *(_DWORD *)(v24 + 48) != v12 )
      {
        started = -1073741637;
LABEL_33:
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_57;
        v15 = 13;
        v23 = started;
LABEL_35:
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          v15,
          (__int64)&WPP_d96244bd3e763d8819ec805b3358b28f_Traceguids,
          v23);
        goto LABEL_57;
      }
      if ( *(_QWORD *)(v11 + 4) > (__int64)*(unsigned int *)(v24 + 96) )
      {
        started = -1073741811;
        goto LABEL_33;
      }
      *(_QWORD *)(v11 + 16) = v24;
      started = 0;
      v9 = 1;
      SubspaceFromGenAddr = GetSubspaceFromGenAddrEx(v11);
      v14 = *(_QWORD *)(a1 + 256);
      if ( v14 )
      {
        if ( v14 != SubspaceFromGenAddr )
        {
          started = -1073741270;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_S(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0xEu,
              (__int64)&WPP_d96244bd3e763d8819ec805b3358b28f_Traceguids,
              *(const wchar_t **)(a1 + 64));
          goto LABEL_57;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 256) = SubspaceFromGenAddr;
      }
    }
    else if ( !*(_BYTE *)v11 )
    {
      if ( *(_QWORD *)(v11 + 4) )
      {
        started = MapAdddressSpaceForGenAddr(v5 + v7[6 * i]);
        if ( started < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v15 = 15;
LABEL_38:
            v23 = started;
            goto LABEL_35;
          }
          goto LABEL_57;
        }
      }
    }
  }
  if ( !CpcRegisterIsSupportedEx(v5 + 440) || *(_BYTE *)v16 == 126 && !*(_QWORD *)(v5 + 444) )
  {
    v17 = *(_QWORD *)(v5 + 48);
    *(_OWORD *)v16 = *(_OWORD *)(v5 + 32);
    *(_QWORD *)(v16 + 16) = v17;
  }
  if ( !v9 || (started = StartPccCommand(*(_QWORD *)(a1 + 256)), started >= 0) )
  {
    if ( CpcRegisterIsSupportedEx(v5 + 344) )
      WriteGenAddrMaybeHiddenEx(a1, v18, 1LL);
    if ( v9 )
    {
      v19 = ExecutePccCommand(*(_QWORD *)(a1 + 256), 0LL);
      if ( v19 == -1073741435 )
      {
        started = 0;
      }
      else
      {
        started = v19;
        if ( v19 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v15 = 17;
            v23 = v19;
            goto LABEL_35;
          }
          goto LABEL_57;
        }
      }
    }
    *(_QWORD *)(a1 + 384) = ReadGenAddrMaybeHiddenEx(a1, (_BYTE *)(v5 + 8));
    *(_QWORD *)(a1 + 392) = ReadGenAddrMaybeHiddenEx(a1, (_BYTE *)(v5 + 32));
    *(_QWORD *)(a1 + 400) = ReadGenAddrMaybeHiddenEx(a1, (_BYTE *)(v5 + 56));
    if ( CpcRegisterIsSupportedEx(v5 + 488) )
      *(_QWORD *)(a1 + 416) = ReadGenAddrMaybeHiddenEx(a1, v20);
    v21 = *(_QWORD *)(a1 + 392);
    if ( *(_QWORD *)(a1 + 400) > v21 )
      *(_QWORD *)(a1 + 400) = v21;
    *(_QWORD *)(a1 + 408) = ReadGenAddrMaybeHiddenEx(a1, (_BYTE *)(v5 + 80));
    goto LABEL_57;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = 16;
    goto LABEL_38;
  }
LABEL_57:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00124D8);
LABEL_58:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)started;
}
