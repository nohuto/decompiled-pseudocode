/*
 * XREFs of InitAcpiCpc @ 0x1C0026EAC
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0028678 (ProcLibDeviceStart.c)
 * Callees:
 *     WriteGenAddrMaybeHiddenEx @ 0x1C000200C (WriteGenAddrMaybeHiddenEx.c)
 *     CpcRegisterIsSupportedEx @ 0x1C0002474 (CpcRegisterIsSupportedEx.c)
 *     ReadGenAddrMaybeHiddenEx @ 0x1C00024D8 (ReadGenAddrMaybeHiddenEx.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002630 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C00026F0 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     MapAdddressSpaceForGenAddr @ 0x1C000720C (MapAdddressSpaceForGenAddr.c)
 *     WPP_RECORDER_SF_S @ 0x1C0007EA0 (WPP_RECORDER_SF_S.c)
 *     GetSubspaceFromGenAddrEx @ 0x1C0009338 (GetSubspaceFromGenAddrEx.c)
 *     Display_CPC @ 0x1C00254E4 (Display_CPC.c)
 *     AcpiEval_CPC @ 0x1C0025EF8 (AcpiEval_CPC.c)
 *     ValidateAcpiCPC @ 0x1C0026978 (ValidateAcpiCPC.c)
 *     RegisterSubspaceForGenAddr @ 0x1C0039A40 (RegisterSubspaceForGenAddr.c)
 *     StartPccCommand @ 0x1C0039AA0 (StartPccCommand.c)
 */

__int64 __fastcall InitAcpiCpc(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned __int16 v4; // r9
  __int64 v5; // rsi
  int v6; // eax
  unsigned int *v7; // rbp
  unsigned int v8; // r15d
  char v9; // r12
  unsigned int v10; // r13d
  __int64 v11; // r14
  int started; // eax
  __int64 SubspaceFromGenAddr; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // xmm1_8
  unsigned __int16 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
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
          (__int64)&WPP_8e58de59150337489f5f05510e333dbf_Traceguids);
      goto LABEL_53;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_53;
    v4 = 11;
LABEL_7:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      v4,
      (__int64)&WPP_8e58de59150337489f5f05510e333dbf_Traceguids,
      v2);
    goto LABEL_53;
  }
  v5 = *(_QWORD *)(a1 + 592);
  v2 = ValidateAcpiCPC((int *)v5);
  v3 = v2;
  if ( v2 < 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x40000u);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_53;
    v4 = 12;
    goto LABEL_7;
  }
  Display_CPC((_DWORD *)v5);
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
    qword_1C001DCF8,
    0LL);
  v9 = 0;
  v10 = 0;
  while ( 1 )
  {
    v11 = v5 + *v7;
    if ( *(_BYTE *)v11 != 10 )
      break;
    started = RegisterSubspaceForGenAddr(a1, v5 + *v7);
    v3 = started;
    v9 = 1;
    if ( started < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_52;
      v17 = 13;
      goto LABEL_38;
    }
    SubspaceFromGenAddr = GetSubspaceFromGenAddrEx(v11);
    v14 = *(_QWORD *)(a1 + 256);
    if ( v14 )
    {
      if ( v14 != SubspaceFromGenAddr )
      {
        v3 = -1073741270;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_S(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0xEu,
            (__int64)&WPP_8e58de59150337489f5f05510e333dbf_Traceguids,
            *(const wchar_t **)(a1 + 64));
        goto LABEL_52;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 256) = SubspaceFromGenAddr;
    }
LABEL_27:
    ++v10;
    v7 += 6;
    if ( v10 >= v8 )
    {
      if ( !CpcRegisterIsSupportedEx(v5 + 440) || *(_BYTE *)v15 == 126 && !*(_QWORD *)(v5 + 444) )
      {
        v16 = *(_QWORD *)(v5 + 48);
        *(_OWORD *)v15 = *(_OWORD *)(v5 + 32);
        *(_QWORD *)(v15 + 16) = v16;
      }
      if ( !v9 || (started = StartPccCommand(*(_QWORD *)(a1 + 256)), v3 = started, started >= 0) )
      {
        if ( CpcRegisterIsSupportedEx(v5 + 344) )
          WriteGenAddrMaybeHiddenEx(a1, v18, 1LL);
        if ( v9 )
        {
          v19 = *(_QWORD *)(a1 + 256);
          v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v19 + 120))(*(_QWORD *)(v19 + 72), 0LL);
          *(_DWORD *)(v19 + 144) &= ~1u;
          if ( v20 == -1073741435 )
          {
            v3 = 0;
          }
          else
          {
            v3 = v20;
            if ( v20 < 0 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_52;
              v17 = 17;
              v24 = v20;
LABEL_39:
              WPP_RECORDER_SF_D(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                3u,
                3u,
                v17,
                (__int64)&WPP_8e58de59150337489f5f05510e333dbf_Traceguids,
                v24);
              goto LABEL_52;
            }
          }
        }
        *(_QWORD *)(a1 + 384) = ReadGenAddrMaybeHiddenEx(a1, v5 + 8);
        *(_QWORD *)(a1 + 392) = ReadGenAddrMaybeHiddenEx(a1, v5 + 32);
        *(_QWORD *)(a1 + 400) = ReadGenAddrMaybeHiddenEx(a1, v5 + 56);
        if ( CpcRegisterIsSupportedEx(v5 + 488) )
          *(_QWORD *)(a1 + 416) = ReadGenAddrMaybeHiddenEx(a1, v21);
        v22 = *(_QWORD *)(a1 + 392);
        if ( *(_QWORD *)(a1 + 400) > v22 )
          *(_QWORD *)(a1 + 400) = v22;
        *(_QWORD *)(a1 + 408) = ReadGenAddrMaybeHiddenEx(a1, v5 + 80);
        goto LABEL_52;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_52;
      v17 = 16;
LABEL_38:
      v24 = started;
      goto LABEL_39;
    }
  }
  if ( *(_BYTE *)v11 )
    goto LABEL_27;
  if ( !*(_QWORD *)(v11 + 4) )
    goto LABEL_27;
  started = MapAdddressSpaceForGenAddr(v5 + *v7);
  v3 = started;
  if ( started >= 0 )
    goto LABEL_27;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = 15;
    goto LABEL_38;
  }
LABEL_52:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001DCF8);
LABEL_53:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return v3;
}
