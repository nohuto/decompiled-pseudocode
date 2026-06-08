/*
 * XREFs of UpdateKernelPlatformStates @ 0x1C00348DC
 * Callers:
 *     AcpiCStateNotifyWorker @ 0x1C0025640 (AcpiCStateNotifyWorker.c)
 *     PepUpdatePlatformStateWorker @ 0x1C00374B0 (PepUpdatePlatformStateWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00029DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00045A0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C000BB40 (memmove.c)
 *     memset @ 0x1C000BE00 (memset.c)
 *     ProcLibTracePlatformIdleStates @ 0x1C001F084 (ProcLibTracePlatformIdleStates.c)
 *     ValidatePlatformIdleState @ 0x1C002F38C (ValidatePlatformIdleState.c)
 */

__int64 __fastcall UpdateKernelPlatformStates(__int64 a1, char a2)
{
  char v2; // bp
  unsigned int *v3; // rsi
  _DWORD *v4; // rdi
  int v5; // r13d
  unsigned int v6; // r12d
  PVOID v7; // rbx
  unsigned int v8; // r14d
  unsigned int *Pool2; // rax
  int v10; // r13d
  unsigned int *v11; // rbp
  signed __int64 v12; // rbx
  __int64 v13; // r15
  __int64 v14; // rcx
  _BYTE *v15; // rcx
  size_t v16; // r8
  PVOID v17; // r15
  int ProcessorNumberFromIndex; // ebx
  size_t v19; // rbx
  __int64 i; // r14
  __int64 v21; // r8
  unsigned int *v22; // rbp
  unsigned int v23; // eax
  __int64 v24; // r10
  __int64 v25; // rdx
  char v29; // [rsp+90h] [rbp+18h]
  int v30; // [rsp+98h] [rbp+20h]

  v29 = 0;
  v2 = a2;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0011458,
    0LL);
  v7 = Src;
  if ( Src )
  {
    v6 = *((_DWORD *)Src + 1);
    v5 = dword_1C0011454;
    v30 = dword_1C0011454;
    v8 = (48 * v6 + 59) & 0xFFFFFFFC;
    Pool2 = (unsigned int *)ExAllocatePool2(256LL, v8 + 8 * v6 * dword_1C0011454, 1919119952LL);
    v3 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, v7, (int)(48 * v6 + 56));
      if ( v6 )
      {
        v10 = 8 * v5;
        v11 = v3 + 18;
        v12 = (_BYTE *)v7 - (_BYTE *)v3;
        v13 = v6;
        do
        {
          v14 = v8;
          v8 += v10;
          v15 = (char *)v3 + v14;
          v16 = 8LL * *v11;
          *((_QWORD *)v11 + 3) = v15;
          memmove(v15, *(const void **)((char *)v11 + v12 + 24), v16);
          v11 += 12;
          --v13;
        }
        while ( v13 );
        v5 = v30;
      }
    }
    v2 = a2;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0011458);
  v17 = 0LL;
  if ( !v3 )
  {
    ProcessorNumberFromIndex = -1073741670;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        4u,
        0x1Au,
        (__int64)&WPP_bbd7f1d6b60732b23d6f9f773c2a3ec3_Traceguids);
    return (unsigned int)ProcessorNumberFromIndex;
  }
  if ( !v2 )
    goto LABEL_29;
  v19 = (unsigned int)(16 * v5 + 40);
  v4 = (_DWORD *)ExAllocatePool2(256LL, v19, 1919119952LL);
  if ( v4 )
  {
    for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
    {
      memset(v4, 0, v19);
      LOBYTE(v21) = 1;
      *v4 = i;
      v4[8] = v5;
      if ( (int)((__int64 (__fastcall *)(_QWORD, _DWORD *, __int64))qword_1C00117C8)(*(_QWORD *)(a1 + 1120), v4, v21) >= 0 )
      {
        ProcessorNumberFromIndex = ValidatePlatformIdleState(v4);
        if ( ProcessorNumberFromIndex < 0 )
          goto LABEL_34;
        v29 = 1;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          qword_1C0011468,
          0LL);
        v22 = &v3[12 * i];
        v22[16] = v4[5];
        v22[17] = v4[6];
        *((_BYTE *)v22 + 61) = *((_BYTE *)v4 + 16);
        if ( *((_QWORD *)v4 + 1) )
        {
          *((_BYTE *)v22 + 60) = 1;
          ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(
                                       *(ULONG *)(*((_QWORD *)v4 + 1) + 56LL),
                                       (PPROCESSOR_NUMBER)v22 + 14);
          if ( ProcessorNumberFromIndex < 0 )
          {
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
              WdfDriverGlobals,
              qword_1C0011468);
            goto LABEL_34;
          }
        }
        memset(*((void **)v22 + 12), 0, 8LL * v22[18]);
        v23 = v4[7];
        v24 = 0LL;
        for ( v22[18] = v23; (unsigned int)v24 < v22[18]; v24 = (unsigned int)(v24 + 1) )
        {
          v25 = *((_QWORD *)v22 + 12);
          *(_DWORD *)(v25 + 8 * v24) = *(_DWORD *)(*(_QWORD *)&v4[4 * (unsigned int)v24 + 10] + 56LL);
          *(_BYTE *)(v25 + 8 * v24 + 4) = v4[4 * (unsigned int)v24 + 12];
          *(_BYTE *)(v25 + 8 * v24 + 6) = BYTE2(v4[4 * (unsigned int)v24 + 12]);
          *(_BYTE *)(v25 + 8 * v24 + 5) = BYTE1(v4[4 * (unsigned int)v24 + 12]);
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          qword_1C0011468);
        v19 = (unsigned int)(16 * v5 + 40);
      }
    }
    if ( !v29 )
    {
      ProcessorNumberFromIndex = 0;
      goto LABEL_34;
    }
LABEL_29:
    *((_BYTE *)v3 + 48) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C0011458,
      0LL);
    ProcessorNumberFromIndex = ((__int64 (__fastcall *)(unsigned int *))qword_1C0011768)(v3);
    if ( ProcessorNumberFromIndex < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0x1Cu,
          (__int64)&WPP_bbd7f1d6b60732b23d6f9f773c2a3ec3_Traceguids,
          ProcessorNumberFromIndex);
    }
    else
    {
      v17 = Src;
      Src = v3;
      v3 = 0LL;
      ProcLibTracePlatformIdleStates(0);
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C0011458);
    if ( !v4 )
    {
LABEL_35:
      if ( !v3 )
        goto LABEL_37;
      goto LABEL_36;
    }
LABEL_34:
    ExFreePoolWithTag(v4, (ULONG)1919119952);
    goto LABEL_35;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0x1Bu,
      (__int64)&WPP_bbd7f1d6b60732b23d6f9f773c2a3ec3_Traceguids);
  ProcessorNumberFromIndex = -1073741670;
LABEL_36:
  ExFreePoolWithTag(v3, (ULONG)1919119952);
LABEL_37:
  if ( v17 )
    ExFreePoolWithTag(v17, (ULONG)1919119952);
  return (unsigned int)ProcessorNumberFromIndex;
}
