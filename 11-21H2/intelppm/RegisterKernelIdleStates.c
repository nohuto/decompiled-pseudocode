/*
 * XREFs of RegisterKernelIdleStates @ 0x1C002BD10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002630 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     RegisterKernelIdleDomains @ 0x1C002C298 (RegisterKernelIdleDomains.c)
 *     RegisterIdleComplete @ 0x1C002C3F4 (RegisterIdleComplete.c)
 *     DisplayKernelIdleStates @ 0x1C002C4B0 (DisplayKernelIdleStates.c)
 *     RegisterKernelCStates @ 0x1C002C598 (RegisterKernelCStates.c)
 *     DeregisterKernelIdleDomains @ 0x1C002C8CC (DeregisterKernelIdleDomains.c)
 *     RegisterKernelLpiStates @ 0x1C003E3F4 (RegisterKernelLpiStates.c)
 *     RegisterKernelPepIdleStates @ 0x1C003E644 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepIdleStatesV2 @ 0x1C003E99C (RegisterKernelPepIdleStatesV2.c)
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
  __int64 v12; // rax
  int v13; // eax
  unsigned __int16 v14; // r9
  __int64 v15; // rax
  __int64 v16; // r10
  unsigned int i; // r11d
  __int64 v18; // r8
  unsigned int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // r9
  unsigned int v22; // eax
  unsigned int v23; // eax
  int v24; // eax
  int v25; // eax
  void *v26; // rcx
  void *v27; // rcx
  __int64 v29; // [rsp+28h] [rbp-20h]

  v1 = 0LL;
  if ( *(_DWORD *)(a1 + 80) )
    return (unsigned int)((__int64 (*)(void))qword_1C001E230)();
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001DCF8,
    0LL);
  v4 = 0;
  if ( !*(_BYTE *)(a1 + 720) )
  {
    if ( qword_1C001DEC0 )
      qword_1C001DEC0(a1);
    *(_BYTE *)(a1 + 720) = 1;
    v4 = 1;
  }
  DeregisterKernelIdleDomains(a1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001DCF8);
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
    v26 = (void *)Pool2[6];
    if ( v26 )
      ExFreePoolWithTag(v26, (ULONG)1919119952);
    ExFreePoolWithTag(Pool2, (ULONG)1919119952);
    goto LABEL_82;
  }
  ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(*(ULONG *)(a1 + 56), v10 + 1);
  if ( ProcessorNumberFromIndex < 0 )
    goto LABEL_78;
  v11[29] = (struct _PROCESSOR_NUMBER)v7;
  *v11 = (struct _PROCESSOR_NUMBER)69;
  *(_QWORD *)&v11[2].Group = Pool2;
  *((_DWORD *)Pool2 + 14) = v7;
  *Pool2 = *(_QWORD *)(a1 + 1120);
  v12 = *(_QWORD *)(a1 + 280);
  if ( (v12 & 0x200000200LL) != 0 )
  {
    v13 = RegisterKernelPepIdleStatesV2(a1, v11, Pool2);
    if ( v13 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_42;
    v14 = 10;
  }
  else if ( (v12 & 0x100000100LL) != 0 )
  {
    v13 = RegisterKernelPepIdleStates(a1, v11, Pool2);
    if ( v13 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_42;
    v14 = 11;
  }
  else if ( (v12 & 0xE0000000000LL) != 0 )
  {
    v13 = RegisterKernelLpiStates(a1, v11, Pool2);
    if ( v13 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_42;
    v14 = 12;
  }
  else
  {
    if ( (v12 & 0x7F077) == 0 )
      goto LABEL_42;
    v13 = RegisterKernelCStates(a1, v11, Pool2);
    if ( v13 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_42;
    v14 = 13;
  }
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    3u,
    v14,
    (__int64)&WPP_bbd7f1d6b60732b23d6f9f773c2a3ec3_Traceguids,
    v13);
LABEL_42:
  v15 = *(_QWORD *)(a1 + 280);
  if ( (v15 & 0x300) != 0 )
  {
    v16 = 0LL;
    for ( i = 1; i <= 3; ++i )
    {
      v18 = 0LL;
      v19 = 0;
      if ( v11[29] )
      {
        do
        {
          v20 = 11LL * v19;
          v21 = Pool2[v20 + 8];
          if ( v21 )
          {
            v22 = *(unsigned __int8 *)(v21 + 12);
            if ( v22 > 3 )
              v22 = 3;
            if ( v22 == i && (!v18 || *(_DWORD *)(v21 + 16) < *(_DWORD *)(v18 + 16)) )
            {
              v18 = Pool2[v20 + 8];
              *((_BYTE *)Pool2 + v16 + 21) = v19;
            }
          }
          ++v19;
        }
        while ( v19 < *(_DWORD *)&v11[29] );
        if ( v18 )
          v16 = (unsigned int)(v16 + 1);
      }
    }
    *((_BYTE *)Pool2 + 20) = v16;
    v15 = *(_QWORD *)(a1 + 280);
  }
  if ( (v15 & 0x7F377) != 0 )
  {
    if ( !*((_BYTE *)Pool2 + 20) )
    {
      ProcessorNumberFromIndex = -1073741823;
      goto LABEL_78;
    }
  }
  else
  {
    v23 = (unsigned int)v11[29];
    *((_BYTE *)Pool2 + 21) = 0;
    if ( v23 > 2 )
      LOBYTE(v23) = 2;
    *((_BYTE *)Pool2 + 20) = v23;
    if ( (_BYTE)v23 == 2 )
      *((_BYTE *)Pool2 + 22) = LOBYTE(v11[29].Group) - 1;
  }
  DisplayKernelIdleStates(v11);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001DCF8,
    0LL);
  if ( (*(_QWORD *)(a1 + 280) & 0x100300000300LL) != 0 && *(_QWORD *)(a1 + 712) )
    HIBYTE(v11[4].Group) = 1;
  v24 = ((__int64 (__fastcall *)(struct _PROCESSOR_NUMBER *))qword_1C001DFF8)(v11);
  ProcessorNumberFromIndex = v24;
  if ( v24 >= 0 )
  {
    v1 = *(_QWORD **)(a1 + 712);
    *(_QWORD *)(a1 + 712) = Pool2;
    if ( v4 )
      RegisterIdleComplete(a1);
    Pool2 = 0LL;
    if ( (*(_DWORD *)(a1 + 280) & 0x7F070LL) != 0 )
    {
      v25 = RegisterKernelIdleDomains(a1);
      if ( v25 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v29) = v25;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xFu,
          (__int64)&WPP_bbd7f1d6b60732b23d6f9f773c2a3ec3_Traceguids,
          v29);
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C001DCF8);
    ProcessorNumberFromIndex = 0;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v29) = v24;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0xEu,
        (__int64)&WPP_bbd7f1d6b60732b23d6f9f773c2a3ec3_Traceguids,
        v29);
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C001DCF8);
  }
LABEL_78:
  ExFreePoolWithTag(v11, (ULONG)1919119952);
  if ( Pool2 )
    goto LABEL_79;
LABEL_82:
  if ( v1 )
  {
    v27 = (void *)v1[6];
    if ( v27 )
      ExFreePoolWithTag(v27, (ULONG)1919119952);
    ExFreePoolWithTag(v1, (ULONG)1919119952);
  }
  return (unsigned int)ProcessorNumberFromIndex;
}
