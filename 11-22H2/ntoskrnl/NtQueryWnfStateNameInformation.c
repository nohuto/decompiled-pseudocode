/*
 * XREFs of NtQueryWnfStateNameInformation @ 0x1407CD8F0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B270 (ExReleaseRundownProtection_0.c)
 *     ExpWnfLookupPermanentName @ 0x140710A1C (ExpWnfLookupPermanentName.c)
 *     ExpCaptureWnfStateName @ 0x14071313C (ExpCaptureWnfStateName.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1407131EC (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpWnfLookupNameInstance @ 0x140713240 (ExpWnfLookupNameInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x14071333C (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfResolveScopeInstance @ 0x140713418 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCheckCallerAccess @ 0x1407138E4 (ExpWnfCheckCallerAccess.c)
 *     ProbeForWrite @ 0x1407293F0 (ProbeForWrite.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1407E3D34 (ExpWnfCheckCrossScopeAccess.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQueryWnfStateNameInformation(
        PCWNF_STATE_NAME StateName,
        WNF_STATE_NAME_INFORMATION NameInfoClass,
        const void *ExplicitScope,
        PVOID InfoBuffer,
        ULONG InfoBufferSize)
{
  _DWORD *v5; // rsi
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r15
  int v10; // eax
  __int64 v11; // r8
  unsigned __int64 v12; // rbx
  int v13; // esi
  int v14; // r13d
  ACCESS_MASK v15; // r12d
  __int64 v16; // r8
  struct _KTHREAD *v17; // rax
  PEPROCESS Process; // rdx
  int v19; // ecx
  void *v20; // rcx
  NTSTATUS v22; // [rsp+30h] [rbp-98h]
  int v23; // [rsp+38h] [rbp-90h]
  int v24; // [rsp+3Ch] [rbp-8Ch]
  __int64 v25; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-80h] BYREF
  int v27; // [rsp+50h] [rbp-78h]
  int v28[2]; // [rsp+58h] [rbp-70h] BYREF
  PVOID P; // [rsp+60h] [rbp-68h] BYREF
  PSID Sid; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v31; // [rsp+70h] [rbp-58h]
  PVOID v32[7]; // [rsp+90h] [rbp-38h] BYREF

  v5 = InfoBuffer;
  v26 = 0LL;
  Sid = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v28 = 0LL;
  v25 = 0LL;
  v23 = 0;
  *(_OWORD *)v32 = 0LL;
  v10 = ExpCaptureWnfStateName((__int64 *)StateName, &v26, PreviousMode);
  v22 = v10;
  if ( v10 >= 0 )
  {
    v12 = v26;
    v27 = (v26 >> 4) & 3;
    v31 = (v26 >> 6) & 0xF;
    v23 = (v26 >> 6) & 0xF;
    LOBYTE(v11) = PreviousMode;
    v10 = ExpWnfCaptureScopeInstanceId(v23, (char *)ExplicitScope, v11, (__int64)&Sid, (__int64)v32);
    v22 = v10;
    if ( v10 >= 0 )
    {
      if ( NameInfoClass && (unsigned int)(NameInfoClass - 1) > 1 )
      {
        v10 = -1073741821;
        v22 = -1073741821;
      }
      else
      {
        if ( InfoBufferSize >= 4 )
        {
          if ( PreviousMode )
            ProbeForWrite(v5, InfoBufferSize, 4u);
          v13 = 1;
          if ( NameInfoClass )
          {
            v24 = 0;
          }
          else
          {
            v24 = 1;
            if ( ExplicitScope )
            {
              v10 = -1073741811;
              v22 = -1073741811;
              goto LABEL_52;
            }
          }
          if ( PreviousMode && NameInfoClass )
          {
            v14 = 0;
            if ( ExplicitScope )
            {
              v10 = ExpWnfCheckCrossScopeAccess(v12);
              v22 = v10;
              if ( v10 < 0 )
                goto LABEL_52;
            }
          }
          else
          {
            v14 = 1;
          }
          v15 = 0;
          if ( !v14 && (unsigned int)(NameInfoClass - 1) <= 1 )
            v15 = 2;
          v16 = 0LL;
          if ( PreviousMode )
          {
            v17 = KeGetCurrentThread();
            Process = v17->ApcState.Process;
            v12 = v26;
            v19 = v23;
            if ( !v24 )
              v16 = (__int64)v17;
          }
          else
          {
            Process = PsInitialSystemProcess;
            v19 = v31;
          }
          v10 = ExpWnfResolveScopeInstance((struct _EX_RUNDOWN_REF **)v28, (__int64)Process, v16, v19, (__int64 *)Sid);
          v22 = v10;
          if ( v10 < 0 )
            goto LABEL_52;
          v10 = ExpWnfLookupNameInstance(*(__int64 *)v28, v12, &v25);
          v22 = v10;
          if ( v10 != -1073741772 || v27 == 3 )
          {
            if ( v10 < 0 )
              goto LABEL_52;
            if ( v14 )
              goto LABEL_29;
            v20 = *(void **)(v25 + 72);
          }
          else
          {
            v10 = ExpWnfLookupPermanentName(v12, (PSECURITY_DESCRIPTOR **)&P);
            v22 = v10;
            if ( v10 < 0 )
              goto LABEL_52;
            if ( v14 )
            {
LABEL_29:
              if ( NameInfoClass )
              {
                if ( NameInfoClass == WnfInfoSubscribersPresent )
                {
                  if ( v25 && *(_DWORD *)(v25 + 160) )
                    goto LABEL_36;
                }
                else if ( !v25 || !*(_DWORD *)(v25 + 164) )
                {
                  goto LABEL_36;
                }
                v13 = 0;
              }
LABEL_36:
              *(_DWORD *)InfoBuffer = v13;
              v10 = 0;
              v22 = 0;
              v5 = InfoBuffer;
              goto LABEL_37;
            }
            v20 = (void *)*((_QWORD *)P + 2);
          }
          v10 = ExpWnfCheckCallerAccess(v20, v15);
          v22 = v10;
          if ( v10 >= 0 )
            goto LABEL_29;
LABEL_52:
          v5 = InfoBuffer;
          goto LABEL_37;
        }
        v10 = -1073741811;
        v22 = -1073741811;
      }
    }
  }
LABEL_37:
  if ( v10 == -1073741772 && NameInfoClass == WnfInfoStateNameExist )
  {
    *v5 = 0;
    v22 = 0;
  }
  if ( v25 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v25 + 8));
  if ( *(_QWORD *)v28 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v28 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ExpWnfReleaseCapturedScopeInstanceId(v23, v32, PreviousMode);
  return v22;
}
