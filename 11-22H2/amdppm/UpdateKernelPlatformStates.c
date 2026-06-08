/*
 * XREFs of UpdateKernelPlatformStates @ 0x1C003577C
 * Callers:
 *     AcpiCStateNotifyWorker @ 0x1C0026220 (AcpiCStateNotifyWorker.c)
 *     PepUpdatePlatformStateWorker @ 0x1C00383F0 (PepUpdatePlatformStateWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000262C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004950 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C000C4C0 (memmove.c)
 *     memset @ 0x1C000C7C0 (memset.c)
 *     ProcLibTracePlatformIdleStates @ 0x1C001FA64 (ProcLibTracePlatformIdleStates.c)
 *     ValidatePlatformIdleState @ 0x1C00301B0 (ValidatePlatformIdleState.c)
 */

__int64 __fastcall UpdateKernelPlatformStates(__int64 a1, char a2)
{
  char v2; // r14
  _DWORD *v3; // rsi
  unsigned int *v4; // rdi
  int v5; // r13d
  unsigned int v6; // r12d
  PVOID v7; // rbx
  unsigned int v8; // r14d
  unsigned int *Pool2; // rax
  signed __int64 v10; // rbx
  unsigned int *v11; // rbp
  __int64 v12; // r15
  __int64 v13; // rcx
  _BYTE *v14; // rcx
  size_t v15; // r8
  PVOID v16; // rbp
  int ProcessorNumberFromIndex; // ebx
  size_t v18; // rbx
  __int64 i; // r15
  __int64 v20; // r8
  unsigned int *v21; // r14
  unsigned int v22; // eax
  __int64 v23; // r10
  __int64 v24; // rdx
  char v28; // [rsp+90h] [rbp+18h]

  v28 = 0;
  v2 = a2;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00124D8,
    0LL);
  v7 = Src;
  if ( Src )
  {
    v6 = *((_DWORD *)Src + 1);
    v5 = dword_1C00124D4;
    v8 = (48 * v6 + 59) & 0xFFFFFFFC;
    Pool2 = (unsigned int *)ExAllocatePool2(256LL, v8 + 8 * v6 * dword_1C00124D4, 1919119952LL);
    v4 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, v7, (int)(48 * v6 + 56));
      if ( v6 )
      {
        v10 = (_BYTE *)v7 - (_BYTE *)v4;
        v11 = v4 + 18;
        v12 = v6;
        do
        {
          v13 = v8;
          v8 += 8 * v5;
          v14 = (char *)v4 + v13;
          v15 = 8LL * *v11;
          *((_QWORD *)v11 + 3) = v14;
          memmove(v14, *(const void **)((char *)v11 + v10 + 24), v15);
          v11 += 12;
          --v12;
        }
        while ( v12 );
        v3 = 0LL;
      }
    }
    v2 = a2;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00124D8);
  v16 = 0LL;
  if ( !v4 )
  {
    ProcessorNumberFromIndex = -1073741670;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        4u,
        0x1Au,
        (__int64)&WPP_9a67812f3be535b726a3611c121e2d7f_Traceguids);
    return (unsigned int)ProcessorNumberFromIndex;
  }
  if ( !v2 )
    goto LABEL_29;
  v18 = (unsigned int)(16 * v5 + 40);
  v3 = (_DWORD *)ExAllocatePool2(256LL, v18, 1919119952LL);
  if ( v3 )
  {
    for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
    {
      memset(v3, 0, v18);
      LOBYTE(v20) = 1;
      *v3 = i;
      v3[8] = v5;
      if ( (int)((__int64 (__fastcall *)(_QWORD, _DWORD *, __int64))qword_1C0012858)(*(_QWORD *)(a1 + 1120), v3, v20) >= 0 )
      {
        ProcessorNumberFromIndex = ValidatePlatformIdleState(v3);
        if ( ProcessorNumberFromIndex < 0 )
          goto LABEL_34;
        v28 = 1;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          qword_1C00124E8,
          0LL);
        v21 = &v4[12 * i];
        v21[16] = v3[5];
        v21[17] = v3[6];
        *((_BYTE *)v21 + 61) = *((_BYTE *)v3 + 16);
        if ( *((_QWORD *)v3 + 1) )
        {
          *((_BYTE *)v21 + 60) = 1;
          ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(
                                       *(ULONG *)(*((_QWORD *)v3 + 1) + 56LL),
                                       (PPROCESSOR_NUMBER)v21 + 14);
          if ( ProcessorNumberFromIndex < 0 )
          {
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
              WdfDriverGlobals,
              qword_1C00124E8);
            goto LABEL_34;
          }
        }
        memset(*((void **)v21 + 12), 0, 8LL * v21[18]);
        v22 = v3[7];
        v23 = 0LL;
        for ( v21[18] = v22; (unsigned int)v23 < v21[18]; v23 = (unsigned int)(v23 + 1) )
        {
          v24 = *((_QWORD *)v21 + 12);
          *(_DWORD *)(v24 + 8 * v23) = *(_DWORD *)(*(_QWORD *)&v3[4 * (unsigned int)v23 + 10] + 56LL);
          *(_BYTE *)(v24 + 8 * v23 + 4) = v3[4 * (unsigned int)v23 + 12];
          *(_BYTE *)(v24 + 8 * v23 + 6) = BYTE2(v3[4 * (unsigned int)v23 + 12]);
          *(_BYTE *)(v24 + 8 * v23 + 5) = BYTE1(v3[4 * (unsigned int)v23 + 12]);
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          qword_1C00124E8);
        v18 = (unsigned int)(16 * v5 + 40);
      }
    }
    if ( !v28 )
    {
      ProcessorNumberFromIndex = 0;
      goto LABEL_34;
    }
LABEL_29:
    *((_BYTE *)v4 + 48) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C00124D8,
      0LL);
    ProcessorNumberFromIndex = ((__int64 (__fastcall *)(unsigned int *))qword_1C00127F8)(v4);
    if ( ProcessorNumberFromIndex < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0x1Cu,
          (__int64)&WPP_9a67812f3be535b726a3611c121e2d7f_Traceguids,
          ProcessorNumberFromIndex);
    }
    else
    {
      v16 = Src;
      Src = v4;
      v4 = 0LL;
      ProcLibTracePlatformIdleStates(0);
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C00124D8);
    if ( !v3 )
    {
LABEL_35:
      if ( !v4 )
        goto LABEL_37;
      goto LABEL_36;
    }
LABEL_34:
    ExFreePoolWithTag(v3, (ULONG)1919119952);
    goto LABEL_35;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0x1Bu,
      (__int64)&WPP_9a67812f3be535b726a3611c121e2d7f_Traceguids);
  ProcessorNumberFromIndex = -1073741670;
LABEL_36:
  ExFreePoolWithTag(v4, (ULONG)1919119952);
LABEL_37:
  if ( v16 )
    ExFreePoolWithTag(v16, (ULONG)1919119952);
  return (unsigned int)ProcessorNumberFromIndex;
}
