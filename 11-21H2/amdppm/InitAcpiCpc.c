/*
 * XREFs of InitAcpiCpc @ 0x1C0023728
 * Callers:
 *     ProcLibDeviceStart @ 0x1C002BB68 (ProcLibDeviceStart.c)
 * Callees:
 *     WriteGenAddrMaybeHiddenEx @ 0x1C0001C68 (WriteGenAddrMaybeHiddenEx.c)
 *     WPP_RECORDER_SF_ @ 0x1C00029DC (WPP_RECORDER_SF_.c)
 *     MapAdddressSpaceForGenAddr @ 0x1C0003914 (MapAdddressSpaceForGenAddr.c)
 *     ReadGenAddrMaybeHiddenEx @ 0x1C0003AA4 (ReadGenAddrMaybeHiddenEx.c)
 *     WPP_RECORDER_SF_d @ 0x1C00045A0 (WPP_RECORDER_SF_d.c)
 *     CpcRegisterIsSupportedEx @ 0x1C00047F4 (CpcRegisterIsSupportedEx.c)
 *     WPP_RECORDER_SF_S @ 0x1C0004FE8 (WPP_RECORDER_SF_S.c)
 *     GetSubspaceFromGenAddrEx @ 0x1C00055E0 (GetSubspaceFromGenAddrEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 *     ExecutePccCommand @ 0x1C0024F38 (ExecutePccCommand.c)
 *     RegisterSubspaceForGenAddr @ 0x1C0025260 (RegisterSubspaceForGenAddr.c)
 *     StartPccCommand @ 0x1C00252C0 (StartPccCommand.c)
 *     AcpiEval_CPC @ 0x1C00258DC (AcpiEval_CPC.c)
 *     Display_CPC @ 0x1C00299E0 (Display_CPC.c)
 *     ValidateAcpiCPC @ 0x1C002D828 (ValidateAcpiCPC.c)
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
  _BYTE *v18; // rcx
  int v19; // ebp
  _BYTE *v20; // rcx
  unsigned __int64 v21; // rax
  int v23; // [rsp+28h] [rbp-30h]

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  v2 = AcpiEval_CPC(a1, a1 + 592);
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
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      v4,
      (__int64)&WPP_8e58de59150337489f5f05510e333dbf_Traceguids,
      v2);
    goto LABEL_53;
  }
  v5 = *(_QWORD *)(a1 + 592);
  v2 = ValidateAcpiCPC(v5);
  v3 = v2;
  if ( v2 < 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x40000u);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_53;
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
    qword_1C0011458,
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
          v19 = ExecutePccCommand(*(_QWORD *)(a1 + 256), 0LL);
          if ( v19 == -1073741435 )
          {
            v3 = 0;
          }
          else
          {
            v3 = v19;
            if ( v19 < 0 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_52;
              v17 = 17;
              v23 = v19;
LABEL_39:
              WPP_RECORDER_SF_d(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                3u,
                3u,
                v17,
                (__int64)&WPP_8e58de59150337489f5f05510e333dbf_Traceguids,
                v23);
              goto LABEL_52;
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
        goto LABEL_52;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_52;
      v17 = 16;
LABEL_38:
      v23 = started;
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
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0011458);
LABEL_53:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return v3;
}
