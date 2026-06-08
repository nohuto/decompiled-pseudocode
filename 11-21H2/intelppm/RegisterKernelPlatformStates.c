/*
 * XREFs of RegisterKernelPlatformStates @ 0x1C003F26C
 * Callers:
 *     RegisterIdleComplete @ 0x1C002C3F4 (RegisterIdleComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002630 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C00026F0 (WPP_RECORDER_SF_.c)
 *     HviIsAnyHypervisorPresent @ 0x1C0002E08 (HviIsAnyHypervisorPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0003A00 (memset.c)
 *     ProcLibTracePlatformIdleStates @ 0x1C0035244 (ProcLibTracePlatformIdleStates.c)
 *     ValidatePlatformIdleState @ 0x1C0037CFC (ValidatePlatformIdleState.c)
 *     PepQueryName @ 0x1C0041734 (PepQueryName.c)
 */

__int64 __fastcall RegisterKernelPlatformStates(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // esi
  __int64 v3; // r14
  int ProcessorNumberFromIndex; // ebx
  unsigned int v5; // r12d
  char *Pool2; // rdi
  unsigned int *v7; // r15
  unsigned int v8; // r13d
  char *v9; // rbp
  unsigned int v10; // ecx
  __int64 v11; // r10
  __int64 v12; // rax
  __int64 v13; // rdx
  bool IsAnyHypervisorPresent; // al
  void *v15; // rcx
  unsigned __int16 v16; // r9
  unsigned __int8 v17; // dl
  unsigned int v18; // r8d
  PVOID *v19; // rsi
  __int64 v20; // rbp

  v1 = a1;
  v2 = dword_1C001DCF4;
  if ( byte_1C001E5B0 && dword_1C001E5AC > (unsigned int)dword_1C001DCF4 )
    v2 = dword_1C001E5AC;
  v3 = (unsigned int)dword_1C001E33C;
  if ( !dword_1C001E33C )
    return 0;
  v5 = (48 * dword_1C001E33C + 59) & 0xFFFFFFFC;
  Pool2 = (char *)ExAllocatePool2(256LL, v5 + 8 * dword_1C001E33C * v2, 1919119952LL);
  if ( !Pool2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        4u,
        0x12u,
        (__int64)&WPP_bbd7f1d6b60732b23d6f9f773c2a3ec3_Traceguids);
    return (unsigned int)-1073741670;
  }
  v7 = (unsigned int *)ExAllocatePool2(256LL, (unsigned int)(16 * v2 + 40), 1919119952LL);
  if ( v7 )
  {
    v8 = 0;
    if ( (_DWORD)v3 )
    {
      v9 = Pool2 + 64;
      while ( 1 )
      {
        memset(v7, 0, (unsigned int)(16 * v2 + 40));
        *v7 = v8;
        v7[8] = v2;
        ProcessorNumberFromIndex = ((__int64 (__fastcall *)(_QWORD, unsigned int *, _QWORD))qword_1C001E068)(
                                     *(_QWORD *)(v1 + 1120),
                                     v7,
                                     0LL);
        if ( ProcessorNumberFromIndex < 0 )
          break;
        ProcessorNumberFromIndex = ValidatePlatformIdleState((int *)v7);
        if ( ProcessorNumberFromIndex < 0 )
          goto LABEL_33;
        v1 = a1;
        PepQueryName(a1, v8, 27LL, v9 + 16);
        *(_DWORD *)v9 = v7[5];
        *((_DWORD *)v9 + 1) = v7[6];
        *(v9 - 3) = *((_BYTE *)v7 + 16);
        if ( *((_QWORD *)v7 + 1) )
        {
          *(v9 - 4) = 1;
          ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(
                                       *(ULONG *)(*((_QWORD *)v7 + 1) + 56LL),
                                       (PPROCESSOR_NUMBER)v9 - 2);
          if ( ProcessorNumberFromIndex < 0 )
            goto LABEL_33;
          v1 = a1;
        }
        v10 = v7[7];
        v11 = 0LL;
        v12 = v5;
        v5 += 8 * v2;
        *((_DWORD *)v9 + 2) = v10;
        *((_QWORD *)v9 + 4) = &Pool2[v12];
        if ( v10 )
        {
          do
          {
            v13 = *((_QWORD *)v9 + 4);
            *(_DWORD *)(v13 + 8 * v11) = *(_DWORD *)(*(_QWORD *)&v7[4 * (unsigned int)v11 + 10] + 56LL);
            *(_BYTE *)(v13 + 8 * v11 + 4) = v7[4 * (unsigned int)v11 + 12];
            *(_BYTE *)(v13 + 8 * v11 + 6) = BYTE2(v7[4 * (unsigned int)v11 + 12]);
            *(_BYTE *)(v13 + 8 * v11 + 5) = BYTE1(v7[4 * (unsigned int)v11 + 12]);
            v11 = (unsigned int)(v11 + 1);
          }
          while ( (unsigned int)v11 < *((_DWORD *)v9 + 2) );
        }
        ++v8;
        v9 += 48;
        if ( v8 >= (unsigned int)v3 )
          goto LABEL_24;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = 20;
        v17 = 3;
        v18 = 2;
LABEL_31:
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v17,
          v18,
          v16,
          (__int64)&WPP_bbd7f1d6b60732b23d6f9f773c2a3ec3_Traceguids,
          ProcessorNumberFromIndex);
      }
    }
    else
    {
LABEL_24:
      *(_DWORD *)Pool2 = 69;
      *((_DWORD *)Pool2 + 1) = dword_1C001E33C;
      *((_DWORD *)Pool2 + 2) = dword_1C001E33C;
      *((_QWORD *)Pool2 + 5) = PepQueryPlatformStateResidency;
      IsAnyHypervisorPresent = HviIsAnyHypervisorPresent();
      v15 = PepIdleTest;
      if ( IsAnyHypervisorPresent )
        v15 = PepIdleVmTest;
      *((_QWORD *)Pool2 + 2) = v15;
      *((_QWORD *)Pool2 + 3) = PepIdlePreExecute;
      *((_QWORD *)Pool2 + 4) = PepIdleComplete;
      ProcessorNumberFromIndex = ((__int64 (__fastcall *)(char *))qword_1C001E008)(Pool2);
      if ( ProcessorNumberFromIndex < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_33;
        v16 = 21;
        v17 = 2;
        v18 = 3;
        goto LABEL_31;
      }
      Src = Pool2;
      Pool2 = 0LL;
      ProcLibTracePlatformIdleStates(0);
      ProcessorNumberFromIndex = 0;
    }
LABEL_33:
    ExFreePoolWithTag(v7, (ULONG)1919119952);
    if ( !Pool2 )
      return (unsigned int)ProcessorNumberFromIndex;
    goto LABEL_34;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0x13u,
      (__int64)&WPP_bbd7f1d6b60732b23d6f9f773c2a3ec3_Traceguids);
  ProcessorNumberFromIndex = -1073741670;
LABEL_34:
  if ( (_DWORD)v3 )
  {
    v19 = (PVOID *)(Pool2 + 88);
    v20 = v3;
    do
    {
      if ( *v19 )
        ExFreePoolWithTag(*v19, (ULONG)1919119952);
      v19 += 6;
      --v20;
    }
    while ( v20 );
  }
  ExFreePoolWithTag(Pool2, (ULONG)1919119952);
  return (unsigned int)ProcessorNumberFromIndex;
}
