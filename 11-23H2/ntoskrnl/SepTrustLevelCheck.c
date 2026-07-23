/*
 * XREFs of SepTrustLevelCheck @ 0x1402B5E38
 * Callers:
 *     SepCommonAccessCheckEx @ 0x140228DF0 (SepCommonAccessCheckEx.c)
 *     SeAccessCheckByType @ 0x1402B3D50 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406C10A0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D750 (ExAcquireResourceSharedLite.c)
 *     RtlSidDominatesForTrust @ 0x1402B3680 (RtlSidDominatesForTrust.c)
 *     SeGetTrustLabelAce @ 0x1402B5EB0 (SeGetTrustLabelAce.c)
 *     SeUnlockSubjectContext @ 0x1406C3160 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x1406C31A0 (SeLockSubjectContext.c)
 */

__int64 __fastcall SepTrustLevelCheck(
        __int64 a1,
        __int64 a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        __int64 a4,
        PSID Sid1,
        char a6,
        int *a7)
{
  NTSTATUS v7; // esi
  char v10; // r14
  __int64 TrustLabelAce; // rax
  int v13; // ebp
  void *v14; // r15
  struct _KTHREAD *CurrentThread; // rax
  PSID v16; // r11
  BOOLEAN v17[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 DominatesTrust; // [rsp+50h] [rbp+8h] BYREF

  DominatesTrust = a1;
  v7 = 0;
  v17[0] = 0;
  LOBYTE(DominatesTrust) = 0;
  v10 = 0;
  TrustLabelAce = SeGetTrustLabelAce(a2);
  if ( !TrustLabelAce || (v13 = *(_DWORD *)(TrustLabelAce + 4), v14 = (void *)(TrustLabelAce + 8), TrustLabelAce == -8) )
  {
    *a7 = -1;
    return (unsigned int)v7;
  }
  if ( a6 )
  {
    v10 = 1;
    if ( a4 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(a4 + 48), 1u);
    }
    else
    {
      SeLockSubjectContext(a3);
    }
  }
  if ( a4 )
  {
    v16 = Sid1;
    goto LABEL_15;
  }
  if ( !a3->ClientToken )
  {
LABEL_14:
    v16 = (PSID)*((_QWORD *)a3->PrimaryToken + 138);
LABEL_15:
    v7 = RtlSidDominatesForTrust(v16, v14, v17);
    if ( v7 >= 0 )
    {
      if ( v17[0] )
        *a7 = -1;
      else
        *a7 = v13 | 0x1000000;
    }
    goto LABEL_19;
  }
  v7 = RtlSidDominatesForTrust(
         *((PSID *)a3->PrimaryToken + 138),
         *((PSID *)a3->ClientToken + 138),
         (PBOOLEAN)&DominatesTrust);
  if ( v7 >= 0 )
  {
    if ( (_BYTE)DominatesTrust )
      goto LABEL_15;
    goto LABEL_14;
  }
LABEL_19:
  if ( v10 )
  {
    if ( a4 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(a4 + 48));
      KeLeaveCriticalRegion();
    }
    else
    {
      SeUnlockSubjectContext(a3);
    }
  }
  return (unsigned int)v7;
}
