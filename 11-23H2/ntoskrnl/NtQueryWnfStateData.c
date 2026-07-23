/*
 * XREFs of NtQueryWnfStateData @ 0x140712E60
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ExpWnfLookupPermanentName @ 0x140710B7C (ExpWnfLookupPermanentName.c)
 *     ExpWnfCreateNameInstance @ 0x140711A04 (ExpWnfCreateNameInstance.c)
 *     ExpCaptureWnfStateName @ 0x14071329C (ExpCaptureWnfStateName.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x14071334C (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpWnfLookupNameInstance @ 0x1407133A0 (ExpWnfLookupNameInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x14071349C (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfResolveScopeInstance @ 0x140713578 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x1407139C4 (ExpWnfValidatePubSubPreconditions.c)
 *     ExpWnfReadStateData @ 0x140713AE8 (ExpWnfReadStateData.c)
 *     ProbeForWrite @ 0x140729580 (ProbeForWrite.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1407E3A84 (ExpWnfCheckCrossScopeAccess.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQueryWnfStateData(
        PCWNF_STATE_NAME StateName,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        PWNF_CHANGE_STAMP ChangeStamp,
        PVOID Buffer,
        PULONG BufferSize)
{
  const void *v6; // r13
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned int *v11; // r10
  unsigned __int64 v12; // r11
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // ecx
  unsigned __int64 v17; // rbx
  __int64 v18; // r15
  __int64 v19; // rsi
  __int64 v20; // rax
  int v21; // r12d
  struct _KTHREAD *v22; // r8
  struct _KPROCESS *Process; // r13
  int v24; // eax
  PULONG v25; // rax
  __int64 v26; // r8
  NTSTATUS StateData; // [rsp+30h] [rbp-C8h]
  unsigned int v29; // [rsp+38h] [rbp-C0h]
  unsigned int v30; // [rsp+3Ch] [rbp-BCh]
  struct _EX_RUNDOWN_REF *v31; // [rsp+40h] [rbp-B8h] BYREF
  PVOID P; // [rsp+48h] [rbp-B0h] BYREF
  int v33[2]; // [rsp+50h] [rbp-A8h] BYREF
  int v34; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v35; // [rsp+60h] [rbp-98h] BYREF
  PCWNF_TYPE_ID v36; // [rsp+68h] [rbp-90h]
  PSID Sid; // [rsp+70h] [rbp-88h] BYREF
  PULONG v38; // [rsp+78h] [rbp-80h]
  PWNF_CHANGE_STAMP v39; // [rsp+80h] [rbp-78h]
  PVOID v40; // [rsp+88h] [rbp-70h]
  __int128 v41; // [rsp+A0h] [rbp-58h] BYREF
  __int128 v42; // [rsp+B0h] [rbp-48h] BYREF

  v39 = ChangeStamp;
  v6 = ExplicitScope;
  v38 = BufferSize;
  v40 = Buffer;
  v35 = 0LL;
  v42 = 0LL;
  Sid = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v33 = 0LL;
  v31 = 0LL;
  v30 = 0;
  v41 = 0LL;
  v36 = TypeId;
  LOBYTE(ExplicitScope) = PreviousMode;
  StateData = ExpCaptureWnfStateName(StateName, &v35, ExplicitScope);
  if ( StateData >= 0 )
  {
    if ( PreviousMode )
    {
      v13 = 0x7FFFFFFF0000LL;
      if ( v10 )
      {
        v20 = 0x7FFFFFFF0000LL;
        if ( v10 < 0x7FFFFFFF0000LL )
          v20 = v10;
        v42 = *(_OWORD *)v20;
        v36 = (PCWNF_TYPE_ID)&v42;
      }
      v14 = 0x7FFFFFFF0000LL;
      if ( v12 < 0x7FFFFFFF0000LL )
        v14 = v12;
      *(_DWORD *)v14 = *(_DWORD *)v14;
      v15 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)v11 < 0x7FFFFFFF0000LL )
        v15 = (__int64)v11;
      v16 = *(_DWORD *)v15;
      v29 = *(_DWORD *)v15;
      if ( (unsigned __int64)v11 < 0x7FFFFFFF0000LL )
        v13 = (__int64)v11;
      *(_DWORD *)v13 = *(_DWORD *)v13;
      if ( v16 )
        ProbeForWrite(Buffer, v16, 1u);
    }
    else
    {
      v29 = *v11;
    }
    v17 = v35;
    v18 = (v35 >> 4) & 3;
    v34 = (v35 >> 4) & 3;
    v19 = (v35 >> 6) & 0xF;
    v30 = (v35 >> 6) & 0xF;
    LOBYTE(v9) = PreviousMode;
    StateData = ExpWnfCaptureScopeInstanceId(v19, v6, v9, &Sid, &v41);
    if ( StateData >= 0 )
    {
      if ( PreviousMode )
      {
        v21 = 0;
        if ( v6 )
        {
          StateData = ExpWnfCheckCrossScopeAccess(v17);
          if ( StateData < 0 )
            goto LABEL_31;
        }
      }
      else
      {
        v21 = 1;
      }
      if ( PreviousMode )
      {
        v22 = KeGetCurrentThread();
        Process = v22->ApcState.Process;
        v17 = v35;
        LODWORD(v18) = v34;
        LODWORD(v19) = v30;
      }
      else
      {
        LODWORD(v22) = 0;
        Process = PsInitialSystemProcess;
      }
      StateData = ExpWnfResolveScopeInstance((int)v33, (int)Process, (int)v22, v19, Sid);
      if ( StateData >= 0 )
      {
        v24 = ExpWnfLookupNameInstance(*(_QWORD *)v33, v17, &v31);
        StateData = v24;
        if ( v24 != -1073741772 || (_DWORD)v18 == 3 )
        {
          if ( v24 < 0 )
            goto LABEL_31;
          StateData = ExpWnfValidatePubSubPreconditions(1u, v21);
          if ( StateData < 0 )
            goto LABEL_31;
        }
        else
        {
          StateData = ExpWnfLookupPermanentName(v17, (PSECURITY_DESCRIPTOR **)&P);
          if ( StateData < 0 )
            goto LABEL_31;
          StateData = ExpWnfValidatePubSubPreconditions(1u, v21);
          if ( StateData < 0 )
            goto LABEL_31;
          if ( (_DWORD)v19 == 5 || (v17 & 0x400) != 0 )
          {
            StateData = ExpWnfCreateNameInstance(*(unsigned __int64 *)v33, v17, (__int64)P, Process, &v31);
            ExFreePoolWithTag(P, 0x20666E57u);
            P = 0LL;
            if ( StateData < 0 )
              goto LABEL_31;
          }
        }
        v25 = v38;
        if ( v31 )
        {
          StateData = ExpWnfReadStateData(v31, v39, v40, v29, v38);
        }
        else
        {
          *v39 = 0;
          *v25 = 0;
          StateData = 0;
        }
      }
    }
  }
LABEL_31:
  if ( v31 )
    ExReleaseRundownProtection_0(v31 + 1);
  if ( *(_QWORD *)v33 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v33 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  LOBYTE(v26) = PreviousMode;
  ExpWnfReleaseCapturedScopeInstanceId(v30, &v41, v26);
  return StateData;
}
