/*
 * XREFs of UpdateKernelPlatformStates @ 0x1C0040A54
 * Callers:
 *     AcpiCStateNotifyWorker @ 0x1C002F450 (AcpiCStateNotifyWorker.c)
 *     PepUpdatePlatformStateWorker @ 0x1C0042C90 (PepUpdatePlatformStateWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000325C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C000331C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00042C0 (memmove.c)
 *     memset @ 0x1C00045C0 (memset.c)
 *     ProcLibTracePlatformIdleStates @ 0x1C00363D8 (ProcLibTracePlatformIdleStates.c)
 *     ValidatePlatformIdleState @ 0x1C00391D8 (ValidatePlatformIdleState.c)
 */

__int64 __fastcall UpdateKernelPlatformStates(__int64 a1, char a2)
{
  char v2; // r14
  unsigned int *v3; // rdi
  unsigned int *v4; // rsi
  int v5; // r13d
  unsigned int v6; // r15d
  PVOID v7; // rbx
  unsigned int v8; // r14d
  unsigned int *Pool2; // rax
  int v10; // r13d
  unsigned int *v11; // rbp
  signed __int64 v12; // rbx
  __int64 v13; // r12
  __int64 v14; // rcx
  _BYTE *v15; // rcx
  size_t v16; // r8
  PVOID v17; // rbp
  int ProcessorNumberFromIndex; // ebx
  size_t v19; // rbx
  unsigned int v20; // r12d
  _BYTE *v21; // r14
  __int64 v22; // r8
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
    qword_1C001F018,
    0LL);
  v7 = Src;
  if ( Src )
  {
    v6 = *((_DWORD *)Src + 1);
    v5 = dword_1C001F014;
    v30 = dword_1C001F014;
    v8 = (48 * v6 + 59) & 0xFFFFFFFC;
    Pool2 = (unsigned int *)ExAllocatePool2(256LL, v8 + 8 * v6 * dword_1C001F014, 1919119952LL);
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
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001F018);
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
        (__int64)&WPP_9a67812f3be535b726a3611c121e2d7f_Traceguids);
    return (unsigned int)ProcessorNumberFromIndex;
  }
  if ( !v2 )
  {
LABEL_29:
    *((_BYTE *)v3 + 48) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C001F018,
      0LL);
    ProcessorNumberFromIndex = ((__int64 (__fastcall *)(unsigned int *))qword_1C001F338)(v3);
    if ( ProcessorNumberFromIndex < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0x1Cu,
          (__int64)&WPP_9a67812f3be535b726a3611c121e2d7f_Traceguids,
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
      qword_1C001F018);
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
  v19 = (unsigned int)(16 * v5 + 40);
  v4 = (unsigned int *)ExAllocatePool2(256LL, v19, 1919119952LL);
  if ( v4 )
  {
    v20 = 0;
    if ( v6 )
    {
      v21 = v3 + 17;
      do
      {
        memset(v4, 0, v19);
        LOBYTE(v22) = 1;
        *v4 = v20;
        v4[8] = v5;
        if ( (int)((__int64 (__fastcall *)(_QWORD, unsigned int *, __int64))qword_1C001F398)(
                    *(_QWORD *)(a1 + 1120),
                    v4,
                    v22) >= 0 )
        {
          ProcessorNumberFromIndex = ValidatePlatformIdleState((int *)v4);
          if ( ProcessorNumberFromIndex < 0 )
            goto LABEL_34;
          v29 = 1;
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
            WdfDriverGlobals,
            qword_1C001F028,
            0LL);
          *((_DWORD *)v21 - 1) = v4[5];
          *(_DWORD *)v21 = v4[6];
          *(v21 - 7) = *((_BYTE *)v4 + 16);
          if ( *((_QWORD *)v4 + 1) )
          {
            *(v21 - 8) = 1;
            ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(
                                         *(ULONG *)(*((_QWORD *)v4 + 1) + 56LL),
                                         (PPROCESSOR_NUMBER)v21 - 3);
            if ( ProcessorNumberFromIndex < 0 )
            {
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
                WdfDriverGlobals,
                qword_1C001F028);
              goto LABEL_34;
            }
          }
          memset(*(void **)(v21 + 28), 0, 8LL * *((unsigned int *)v21 + 1));
          v23 = v4[7];
          v24 = 0LL;
          for ( *((_DWORD *)v21 + 1) = v23; (unsigned int)v24 < *((_DWORD *)v21 + 1); v24 = (unsigned int)(v24 + 1) )
          {
            v25 = *(_QWORD *)(v21 + 28);
            *(_DWORD *)(v25 + 8 * v24) = *(_DWORD *)(*(_QWORD *)&v4[4 * (unsigned int)v24 + 10] + 56LL);
            *(_BYTE *)(v25 + 8 * v24 + 4) = v4[4 * (unsigned int)v24 + 12];
            *(_BYTE *)(v25 + 8 * v24 + 6) = BYTE2(v4[4 * (unsigned int)v24 + 12]);
            *(_BYTE *)(v25 + 8 * v24 + 5) = BYTE1(v4[4 * (unsigned int)v24 + 12]);
          }
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
            WdfDriverGlobals,
            qword_1C001F028);
          v19 = (unsigned int)(16 * v5 + 40);
        }
        ++v20;
        v21 += 48;
      }
      while ( v20 < v6 );
      if ( v29 )
        goto LABEL_29;
    }
    ProcessorNumberFromIndex = 0;
    goto LABEL_34;
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
  ExFreePoolWithTag(v3, (ULONG)1919119952);
LABEL_37:
  if ( v17 )
    ExFreePoolWithTag(v17, (ULONG)1919119952);
  return (unsigned int)ProcessorNumberFromIndex;
}
