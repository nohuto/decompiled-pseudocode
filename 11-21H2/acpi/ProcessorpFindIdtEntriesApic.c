/*
 * XREFs of ProcessorpFindIdtEntriesApic @ 0x1C0099330
 * Callers:
 *     <none>
 * Callees:
 *     IntPartFree @ 0x1C002E8BC (IntPartFree.c)
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1C00995A0 (ProcessorpFindAffinitizedIdtEntries.c)
 *     IcIsInterruptTypeSecondary @ 0x1C0099900 (IcIsInterruptTypeSecondary.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C009A1D0 (ProcessorGetDeviceIdtAssignment.c)
 *     ProcessorpValidateTargetSet @ 0x1C009AAC0 (ProcessorpValidateTargetSet.c)
 *     IrqPolicyGetDevicePolicy @ 0x1C009AB50 (IrqPolicyGetDevicePolicy.c)
 *     ProcessorpSelectProcessorSetFromPartitions @ 0x1C009C294 (ProcessorpSelectProcessorSetFromPartitions.c)
 *     IrqPolicyQuerySteeringEnabledForInterrupt @ 0x1C009C438 (IrqPolicyQuerySteeringEnabledForInterrupt.c)
 *     ProcessorpGetSecondaryInterruptAffinity @ 0x1C00B64A8 (ProcessorpGetSecondaryInterruptAffinity.c)
 *     ProcessorpSelectProcessorSetFromClusters @ 0x1C00B65EC (ProcessorpSelectProcessorSetFromClusters.c)
 */

__int64 __fastcall ProcessorpFindIdtEntriesApic(
        PDEVICE_OBJECT Pdo,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        char a7,
        unsigned int a8)
{
  __int64 v8; // rdi
  int DeviceIdtAssignment; // ebx
  __int16 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r9d
  __int64 result; // rax
  __int128 v18; // xmm0
  char v19; // cl
  char v20; // al
  char v21; // r15
  int SecondaryInterruptAffinity; // esi
  int v23; // r8d
  int v24; // r9d
  __int128 v25; // xmm0
  __int128 v26; // xmm0
  int v27; // r8d
  int v28; // r9d
  int v29; // r8d
  int v30; // r9d
  _BYTE v31[4]; // [rsp+58h] [rbp-49h] BYREF
  _WORD v32[2]; // [rsp+5Ch] [rbp-45h] BYREF
  int v33; // [rsp+60h] [rbp-41h] BYREF
  int v34; // [rsp+64h] [rbp-3Dh]
  __int128 v35; // [rsp+68h] [rbp-39h] BYREF
  __int128 v36; // [rsp+78h] [rbp-29h] BYREF
  __int128 v37; // [rsp+88h] [rbp-19h]
  void *v38; // [rsp+98h] [rbp-9h]
  int v39; // [rsp+E8h] [rbp+47h]

  v39 = (int)Pdo;
  v8 = a3;
  v34 = 0;
  v31[0] = 0;
  v32[0] = 0;
  v33 = 0;
  v36 = 0LL;
  v37 = 0LL;
  v35 = 0LL;
  DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(0LL, a5, a8, &v36);
  if ( DeviceIdtAssignment >= 0 )
  {
    v26 = v36;
    *(_DWORD *)(v8 + 32) = DWORD1(v37);
    v32[0] = IrqMachinePolicy;
    *(_BYTE *)(v8 + 4) = 1;
    *(_OWORD *)(v8 + 16) = v26;
    IrqPolicyGetDevicePolicy(Pdo, (__int64)v32, (__int64)v31);
    *(_WORD *)(v8 + 6) = v32[0];
    return (unsigned int)DeviceIdtAssignment;
  }
  if ( *(_BYTE *)(v8 + 4) )
  {
    v20 = *(_BYTE *)(v8 + 8);
    v12 = *(_WORD *)(v8 + 6);
    v35 = *(_OWORD *)(v8 + 16);
    v31[0] = v20;
  }
  else
  {
    if ( (int)IrqPolicyGetDevicePolicy(Pdo, (__int64)v32, (__int64)v31) >= 0 )
    {
      v12 = v32[0];
      goto LABEL_5;
    }
    v12 = IrqMachinePolicy;
    v35 = 0LL;
  }
  v32[0] = v12;
LABEL_5:
  if ( (unsigned __int8)IcIsInterruptTypeSecondary(a5) )
  {
    SecondaryInterruptAffinity = ProcessorpGetSecondaryInterruptAffinity(v14, a4, &v35);
    if ( SecondaryInterruptAffinity < 0 )
      return (unsigned int)SecondaryInterruptAffinity;
    v21 = 0;
    LOBYTE(v28) = a7 & 1;
    SecondaryInterruptAffinity = ProcessorpFindAffinitizedIdtEntries(
                                   v39,
                                   (unsigned int)&v35,
                                   v27,
                                   v28,
                                   a4,
                                   a5,
                                   a6,
                                   a8,
                                   (__int64)&v33);
LABEL_36:
    if ( SecondaryInterruptAffinity < 0 )
      return (unsigned int)SecondaryInterruptAffinity;
    goto LABEL_21;
  }
  if ( !(_QWORD)v35 )
    goto LABEL_12;
  if ( (unsigned __int8)ProcessorpValidateTargetSet(&v35) )
  {
    LOBYTE(v16) = a7 & 1;
    result = ProcessorpFindAffinitizedIdtEntries(
               (_DWORD)Pdo,
               (unsigned int)&v35,
               v15,
               v16,
               a4,
               a5,
               a6,
               a8,
               (__int64)&v33);
    v13 = (unsigned int)result;
    if ( (int)result >= 0 )
    {
      v18 = v35;
      *(_DWORD *)(v8 + 32) = v33;
      v19 = v31[0];
      *(_OWORD *)(v8 + 16) = v18;
      *(_BYTE *)(v8 + 8) = v19;
      *(_WORD *)(v8 + 6) = v12;
      *(_BYTE *)(v8 + 4) = 1;
      return result;
    }
  }
  else
  {
    v13 = 3221225659LL;
  }
  if ( v12 != 4 )
  {
LABEL_12:
    if ( ProcessorPreferredCpuSetSpecified )
      goto LABEL_33;
    LOBYTE(v15) = a6 & 1;
    if ( !(unsigned __int8)IrqPolicyQuerySteeringEnabledForInterrupt(a5, v13, v15) )
      goto LABEL_33;
    LOWORD(v34) = v32[0];
    if ( v32[0] != 6 )
      goto LABEL_33;
    v21 = v31[0];
    v33 = 0;
    v36 = 0LL;
    v38 = 0LL;
    v37 = 0LL;
    do
    {
      LOBYTE(v13) = v21;
      SecondaryInterruptAffinity = ProcessorpSelectProcessorSetFromPartitions(6LL, v13, &v35, &v36);
      if ( SecondaryInterruptAffinity < 0 )
        break;
      LOBYTE(v24) = a7 & 1;
      SecondaryInterruptAffinity = ProcessorpFindAffinitizedIdtEntries(
                                     v39,
                                     (unsigned int)&v35,
                                     v23,
                                     v24,
                                     a4,
                                     a5,
                                     a6,
                                     a8,
                                     (__int64)&v33);
    }
    while ( SecondaryInterruptAffinity < 0 );
    v8 = a3;
    v12 = v34;
    if ( v38 )
      IntPartFree(v38);
    if ( SecondaryInterruptAffinity < 0 )
    {
LABEL_33:
      v33 = 0;
      v36 = 0LL;
      v38 = 0LL;
      v37 = 0LL;
      while ( 1 )
      {
        v21 = v31[0];
        v12 = v32[0];
        LOBYTE(v13) = v31[0];
        SecondaryInterruptAffinity = ProcessorpSelectProcessorSetFromClusters(
                                       v32[0],
                                       v13,
                                       ProcessorPreferredCpuSetSpecified,
                                       (unsigned int)&v35,
                                       (__int64)&v36);
        if ( SecondaryInterruptAffinity < 0 )
          return (unsigned int)SecondaryInterruptAffinity;
        LOBYTE(v30) = a7 & 1;
        SecondaryInterruptAffinity = ProcessorpFindAffinitizedIdtEntries(
                                       v39,
                                       (unsigned int)&v35,
                                       v29,
                                       v30,
                                       a4,
                                       a5,
                                       a6,
                                       a8,
                                       (__int64)&v33);
        if ( SecondaryInterruptAffinity >= 0 )
          goto LABEL_36;
      }
    }
LABEL_21:
    v25 = v35;
    *(_DWORD *)(v8 + 32) = v33;
    *(_OWORD *)(v8 + 16) = v25;
    *(_WORD *)(v8 + 6) = v12;
    *(_BYTE *)(v8 + 8) = v21;
    *(_BYTE *)(v8 + 4) = 1;
    return (unsigned int)SecondaryInterruptAffinity;
  }
  if ( !a2 || (*(_BYTE *)(a2 + 4) & 4) == 0 )
  {
    v32[0] = IrqMachinePolicy;
    goto LABEL_12;
  }
  return (unsigned int)v13;
}
