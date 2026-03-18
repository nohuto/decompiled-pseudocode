/*
 * XREFs of SeIsTokenAssignableToProcess @ 0x140695160
 * Callers:
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 *     PspAssignPrimaryToken @ 0x140847028 (PspAssignPrimaryToken.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     RtlSidDominates @ 0x1402ED880 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x1402ED98C (SepCopyTokenIntegrity.c)
 *     ObFastDereferenceObject @ 0x1402F89B0 (ObFastDereferenceObject.c)
 *     RtlSidDominatesForTrust @ 0x1402F8A20 (RtlSidDominatesForTrust.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140347920 (PsReferencePrimaryTokenWithTag.c)
 *     SepIsChildTokenByPointer @ 0x14069532C (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x1406953C8 (SepIsSiblingTokenByPointer.c)
 */

__int64 __fastcall SeIsTokenAssignableToProcess(__int64 a1, char *a2)
{
  char v2; // di
  unsigned __int64 v5; // rbx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r12
  struct _KTHREAD *v9; // rax
  int v10; // ebx
  int v11; // r15d
  __int64 v12; // r13
  char v13; // bl
  bool v14; // [rsp+88h] [rbp+48h] BYREF
  char v15; // [rsp+90h] [rbp+50h] BYREF
  char v16; // [rsp+98h] [rbp+58h] BYREF

  v2 = 0;
  *a2 = 0;
  v15 = 0;
  v16 = 0;
  v14 = 0;
  v5 = PsReferencePrimaryTokenWithTag((__int64)KeGetCurrentThread()->ApcState.Process, 0x746C6644u);
  if ( !v5 )
    return 3221225473LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v5 + 48), 1u);
  SepCopyTokenIntegrity(v5);
  v8 = *(_QWORD *)(v5 + 1104);
  ExReleaseResourceLite(*(PERESOURCE *)(v5 + 48));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  ObFastDereferenceObject(
    (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[5],
    v5,
    0x746C6644u);
  v9 = KeGetCurrentThread();
  --v9->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  SepCopyTokenIntegrity(a1);
  v10 = *(_DWORD *)(a1 + 192);
  v11 = *(_DWORD *)(a1 + 196);
  v12 = *(_QWORD *)(a1 + 1104);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v10 == 2 && v11 < 2 )
    return 3221225637LL;
  result = RtlSidDominates(0LL, 0LL, &v14);
  if ( (int)result >= 0 )
  {
    if ( !v14 )
      goto LABEL_15;
    v14 = 0;
    result = RtlSidDominatesForTrust(v8, v12, &v14);
    if ( (int)result < 0 )
      return result;
    if ( !v14 )
    {
LABEL_15:
      v13 = v15;
LABEL_16:
      if ( v13 || v16 )
        v2 = 1;
      *a2 = v2;
      return result;
    }
    result = SepIsChildTokenByPointer(a1, &v15);
    v13 = v15;
    if ( !v15 )
    {
      if ( (int)result < 0 )
        return result;
      result = SepIsSiblingTokenByPointer(a1, &v16);
    }
    if ( (int)result >= 0 )
      goto LABEL_16;
  }
  return result;
}
