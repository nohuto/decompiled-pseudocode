/*
 * XREFs of RegisterKernelIdleStates @ 0x1C0033BF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004990 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C510 (_guard_dispatch_icall_nop.c)
 *     DisplayKernelIdleStates @ 0x1C002CBF0 (DisplayKernelIdleStates.c)
 *     DeregisterKernelIdleDomains @ 0x1C0030BE8 (DeregisterKernelIdleDomains.c)
 *     RegisterIdleComplete @ 0x1C00331D0 (RegisterIdleComplete.c)
 *     RegisterKernelCStates @ 0x1C0033468 (RegisterKernelCStates.c)
 *     RegisterKernelIdleDomains @ 0x1C003399C (RegisterKernelIdleDomains.c)
 *     RegisterKernelLpiStates @ 0x1C0034178 (RegisterKernelLpiStates.c)
 *     RegisterKernelPepIdleStates @ 0x1C00345D8 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepIdleStatesV2 @ 0x1C0034984 (RegisterKernelPepIdleStatesV2.c)
 */

__int64 __fastcall RegisterKernelIdleStates(__int64 a1)
{
  _QWORD *v1; // r15
  NTSTATUS ProcessorNumberFromIndex; // ebx
  char v4; // r12
  __int64 v5; // rax
  int *v6; // rax
  int v7; // ebp
  __int64 v8; // rax
  _QWORD *Pool2; // rsi
  struct _PROCESSOR_NUMBER *v10; // rax
  struct _PROCESSOR_NUMBER *v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  int v15; // eax
  unsigned __int16 v16; // r9
  __int64 v17; // r11
  unsigned int i; // r10d
  __int64 v19; // rcx
  __int64 v20; // r9
  unsigned int v21; // eax
  unsigned int v22; // eax
  int v23; // eax
  int v24; // eax
  void *v25; // rcx
  void *v26; // rcx
  __int64 v28; // [rsp+28h] [rbp-30h]

  v1 = 0LL;
  if ( *(_DWORD *)(a1 + 80) )
    return (unsigned int)((__int64 (*)(void))qword_1C0012A30)();
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00124D8,
    0LL);
  v4 = 0;
  if ( !*(_BYTE *)(a1 + 720) )
  {
    if ( qword_1C00126A0 )
      qword_1C00126A0(a1);
    *(_BYTE *)(a1 + 720) = 1;
    v4 = 1;
  }
  DeregisterKernelIdleDomains(a1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00124D8);
  v5 = *(_QWORD *)(a1 + 280);
  if ( (v5 & 0x200000200LL) != 0 )
  {
    v6 = *(int **)(a1 + 1152);
LABEL_9:
    if ( !v6 )
      return (unsigned int)-1073741823;
    v7 = *v6;
    goto LABEL_11;
  }
  if ( (v5 & 0x100000100LL) != 0 )
  {
    v6 = *(int **)(a1 + 1144);
    goto LABEL_9;
  }
  if ( (v5 & 0xE0000000000LL) == 0 )
  {
    if ( (v5 & 0x7F077) == 0 )
      return (unsigned int)-1073741637;
    v7 = 3;
    goto LABEL_20;
  }
  v8 = *(_QWORD *)(a1 + 544);
  if ( !v8 )
    return (unsigned int)-1073741823;
  v7 = *(_DWORD *)(v8 + 16);
LABEL_11:
  if ( !v7 )
    return (unsigned int)-1073741823;
LABEL_20:
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, (unsigned int)(88 * v7 + 64), 1919119952LL);
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v10 = (struct _PROCESSOR_NUMBER *)ExAllocatePool2(64LL, (unsigned int)(32 * v7 + 120), 1919119952LL);
  v11 = v10;
  if ( !v10 )
  {
    ProcessorNumberFromIndex = -1073741670;
LABEL_79:
    v25 = (void *)Pool2[6];
    if ( v25 )
      ExFreePoolWithTag(v25, (ULONG)1919119952);
    ExFreePoolWithTag(Pool2, (ULONG)1919119952);
    goto LABEL_82;
  }
  ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(*(ULONG *)(a1 + 56), v10 + 1);
  if ( ProcessorNumberFromIndex < 0 )
    goto LABEL_78;
  v11[29] = (struct _PROCESSOR_NUMBER)v7;
  *v11 = (struct _PROCESSOR_NUMBER)72;
  *(_QWORD *)&v11[2].Group = Pool2;
  *((_DWORD *)Pool2 + 14) = v7;
  *Pool2 = *(_QWORD *)(a1 + 1120);
  v14 = *(_QWORD *)(a1 + 280);
  if ( (v14 & 0x200000200LL) != 0 )
  {
    v15 = RegisterKernelPepIdleStatesV2(a1, v11, Pool2);
    if ( v15 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_42;
    v16 = 10;
  }
  else if ( (v14 & 0x100000100LL) != 0 )
  {
    v15 = RegisterKernelPepIdleStates(a1, v11, Pool2);
    if ( v15 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_42;
    v16 = 11;
  }
  else if ( (v14 & 0xE0000000000LL) != 0 )
  {
    v15 = RegisterKernelLpiStates(a1, v11, Pool2);
    if ( v15 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_42;
    v16 = 12;
  }
  else
  {
    if ( (v14 & 0x7F077) == 0 )
      goto LABEL_42;
    v15 = RegisterKernelCStates(a1, (__int64)v11, (__int64)Pool2);
    if ( v15 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_42;
    v16 = 13;
  }
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    3u,
    v16,
    (__int64)&WPP_9a67812f3be535b726a3611c121e2d7f_Traceguids,
    v15);
LABEL_42:
  if ( (*(_DWORD *)(a1 + 280) & 0x300LL) != 0 )
  {
    v17 = 0LL;
    for ( i = 1; i <= 3; ++i )
    {
      v13 = 0LL;
      v12 = 0LL;
      if ( v11[29] )
      {
        do
        {
          v19 = 11LL * (unsigned int)v12;
          v20 = Pool2[v19 + 8];
          if ( v20 )
          {
            v21 = *(unsigned __int8 *)(v20 + 12);
            if ( v21 > 3 )
              v21 = 3;
            if ( v21 == i && (!v13 || *(_DWORD *)(v20 + 16) < *(_DWORD *)(v13 + 16)) )
            {
              v13 = Pool2[v19 + 8];
              *((_BYTE *)Pool2 + v17 + 21) = v12;
            }
          }
          v12 = (unsigned int)(v12 + 1);
        }
        while ( (unsigned int)v12 < *(_DWORD *)&v11[29] );
        if ( v13 )
          v17 = (unsigned int)(v17 + 1);
      }
    }
    *((_BYTE *)Pool2 + 20) = v17;
  }
  if ( (*(_DWORD *)(a1 + 280) & 0x7F377) != 0 )
  {
    if ( !*((_BYTE *)Pool2 + 20) )
    {
      ProcessorNumberFromIndex = -1073741823;
      goto LABEL_78;
    }
  }
  else
  {
    v22 = (unsigned int)v11[29];
    *((_BYTE *)Pool2 + 21) = 0;
    if ( v22 > 2 )
      LOBYTE(v22) = 2;
    *((_BYTE *)Pool2 + 20) = v22;
    if ( (_BYTE)v22 == 2 )
      *((_BYTE *)Pool2 + 22) = LOBYTE(v11[29].Group) - 1;
  }
  DisplayKernelIdleStates((__int64)v11, v12, v13);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00124D8,
    0LL);
  if ( (*(_QWORD *)(a1 + 280) & 0x100300000300LL) != 0 && *(_QWORD *)(a1 + 712) )
    HIBYTE(v11[4].Group) = 1;
  v23 = ((__int64 (__fastcall *)(struct _PROCESSOR_NUMBER *))qword_1C00127E8)(v11);
  ProcessorNumberFromIndex = v23;
  if ( v23 >= 0 )
  {
    v1 = *(_QWORD **)(a1 + 712);
    *(_QWORD *)(a1 + 712) = Pool2;
    if ( v4 )
      RegisterIdleComplete(a1);
    Pool2 = 0LL;
    if ( (*(_DWORD *)(a1 + 280) & 0x7F070) != 0 )
    {
      v24 = RegisterKernelIdleDomains((_QWORD *)a1);
      if ( v24 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v28) = v24;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xFu,
          (__int64)&WPP_9a67812f3be535b726a3611c121e2d7f_Traceguids,
          v28);
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C00124D8);
    ProcessorNumberFromIndex = 0;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v28) = v23;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0xEu,
        (__int64)&WPP_9a67812f3be535b726a3611c121e2d7f_Traceguids,
        v28);
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C00124D8);
  }
LABEL_78:
  ExFreePoolWithTag(v11, (ULONG)1919119952);
  if ( Pool2 )
    goto LABEL_79;
LABEL_82:
  if ( v1 )
  {
    v26 = (void *)v1[6];
    if ( v26 )
      ExFreePoolWithTag(v26, (ULONG)1919119952);
    ExFreePoolWithTag(v1, (ULONG)1919119952);
  }
  return (unsigned int)ProcessorNumberFromIndex;
}
