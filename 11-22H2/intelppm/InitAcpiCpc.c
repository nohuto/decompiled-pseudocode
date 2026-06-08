/*
 * XREFs of InitAcpiCpc @ 0x1C002A90C
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0027F5C (ProcLibDeviceStart.c)
 * Callees:
 *     WriteGenAddrMaybeHiddenEx @ 0x1C000259C (WriteGenAddrMaybeHiddenEx.c)
 *     WPP_RECORDER_SF_D @ 0x1C000325C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C000331C (WPP_RECORDER_SF_.c)
 *     CpcRegisterIsSupportedEx @ 0x1C00033C0 (CpcRegisterIsSupportedEx.c)
 *     ReadGenAddrMaybeHiddenEx @ 0x1C0003424 (ReadGenAddrMaybeHiddenEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     MapAdddressSpaceForGenAddr @ 0x1C000892C (MapAdddressSpaceForGenAddr.c)
 *     WPP_RECORDER_SF_S @ 0x1C0009558 (WPP_RECORDER_SF_S.c)
 *     GetSubspaceFromGenAddrEx @ 0x1C000AD38 (GetSubspaceFromGenAddrEx.c)
 *     ValidateAcpiCPC @ 0x1C002956C (ValidateAcpiCPC.c)
 *     AcpiEval_CPC @ 0x1C00296AC (AcpiEval_CPC.c)
 *     Display_CPC @ 0x1C002C390 (Display_CPC.c)
 *     RegisterSubspaceForGenAddr @ 0x1C003AD30 (RegisterSubspaceForGenAddr.c)
 *     StartPccCommand @ 0x1C003AD90 (StartPccCommand.c)
 */

__int64 __fastcall InitAcpiCpc(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rsi
  int v5; // eax
  unsigned int *v6; // rbp
  unsigned int v7; // r15d
  char v8; // r13
  unsigned int i; // r12d
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // xmm1_8
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int16 v17; // r9
  __int64 SubspaceFromGenAddr; // rax
  __int64 v19; // rcx
  int started; // eax
  unsigned __int16 v21; // r9
  __int64 v22; // rbx
  int v23; // eax
  int v24; // [rsp+28h] [rbp-30h]

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  v2 = AcpiEval_CPC(a1, (_QWORD *)(a1 + 592));
  v3 = v2;
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
      goto LABEL_24;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_24;
    v17 = 11;
LABEL_32:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      v17,
      (__int64)&WPP_d96244bd3e763d8819ec805b3358b28f_Traceguids,
      v2);
    goto LABEL_24;
  }
  v4 = *(_QWORD *)(a1 + 592);
  v2 = ValidateAcpiCPC((int *)v4);
  v3 = v2;
  if ( v2 < 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x40000u);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_24;
    v17 = 12;
    goto LABEL_32;
  }
  Display_CPC(v4);
  v5 = *(_DWORD *)(v4 + 4);
  if ( v5 == 1 )
  {
    v6 = (unsigned int *)&CpcRegisterTable;
    v7 = 15;
  }
  else if ( v5 == 2 )
  {
    v6 = (unsigned int *)&Cpc2RegisterTable;
    v7 = 19;
  }
  else
  {
    v6 = (unsigned int *)&Cpc3RegisterTable;
    v7 = 21;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001F018,
    0LL);
  v8 = 0;
  for ( i = 0; i < v7; ++i )
  {
    v10 = v4 + *v6;
    if ( *(_BYTE *)v10 == 10 )
    {
      started = RegisterSubspaceForGenAddr(a1, v4 + *v6);
      v3 = started;
      v8 = 1;
      if ( started < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_23;
        v21 = 13;
LABEL_48:
        v24 = started;
        goto LABEL_49;
      }
      SubspaceFromGenAddr = GetSubspaceFromGenAddrEx(v10);
      v19 = *(_QWORD *)(a1 + 256);
      if ( v19 )
      {
        if ( v19 != SubspaceFromGenAddr )
        {
          v3 = -1073741270;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_S(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0xEu,
              (__int64)&WPP_d96244bd3e763d8819ec805b3358b28f_Traceguids,
              *(const wchar_t **)(a1 + 64));
          goto LABEL_23;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 256) = SubspaceFromGenAddr;
      }
    }
    else if ( !*(_BYTE *)v10 )
    {
      if ( *(_QWORD *)(v10 + 4) )
      {
        started = MapAdddressSpaceForGenAddr(v4 + *v6);
        v3 = started;
        if ( started < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_23;
          v21 = 15;
          goto LABEL_48;
        }
      }
    }
    v6 += 6;
  }
  if ( !CpcRegisterIsSupportedEx(v4 + 440) || *(_BYTE *)v11 == 126 && !*(_QWORD *)(v4 + 444) )
  {
    v12 = *(_QWORD *)(v4 + 48);
    *(_OWORD *)v11 = *(_OWORD *)(v4 + 32);
    *(_QWORD *)(v11 + 16) = v12;
  }
  if ( !v8 || (started = StartPccCommand(*(_QWORD *)(a1 + 256)), v3 = started, started >= 0) )
  {
    if ( CpcRegisterIsSupportedEx(v4 + 344) )
      WriteGenAddrMaybeHiddenEx(a1, v13, 1LL);
    if ( v8 )
    {
      v22 = *(_QWORD *)(a1 + 256);
      v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v22 + 120))(*(_QWORD *)(v22 + 72), 0LL);
      *(_DWORD *)(v22 + 144) &= ~1u;
      if ( v23 == -1073741435 )
      {
        v3 = 0;
      }
      else
      {
        v3 = v23;
        if ( v23 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_23;
          v21 = 17;
          v24 = v23;
LABEL_49:
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            v21,
            (__int64)&WPP_d96244bd3e763d8819ec805b3358b28f_Traceguids,
            v24);
          goto LABEL_23;
        }
      }
    }
    *(_QWORD *)(a1 + 384) = ReadGenAddrMaybeHiddenEx(a1, v4 + 8);
    *(_QWORD *)(a1 + 392) = ReadGenAddrMaybeHiddenEx(a1, v4 + 32);
    *(_QWORD *)(a1 + 400) = ReadGenAddrMaybeHiddenEx(a1, v4 + 56);
    if ( CpcRegisterIsSupportedEx(v4 + 488) )
      *(_QWORD *)(a1 + 416) = ReadGenAddrMaybeHiddenEx(a1, v14);
    v15 = *(_QWORD *)(a1 + 392);
    if ( *(_QWORD *)(a1 + 400) > v15 )
      *(_QWORD *)(a1 + 400) = v15;
    *(_QWORD *)(a1 + 408) = ReadGenAddrMaybeHiddenEx(a1, v4 + 80);
    goto LABEL_23;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = 16;
    goto LABEL_48;
  }
LABEL_23:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001F018);
LABEL_24:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return v3;
}
