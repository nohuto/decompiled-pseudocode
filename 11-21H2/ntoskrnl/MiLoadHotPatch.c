/*
 * XREFs of MiLoadHotPatch @ 0x140974020
 * Callers:
 *     NtManageHotPatch @ 0x1406C9390 (NtManageHotPatch.c)
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 *     MmRegisterHotPatches @ 0x140B2F2BC (MmRegisterHotPatches.c)
 * Callees:
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     VslApplyHotPatch @ 0x14054DBF0 (VslApplyHotPatch.c)
 *     MmReleaseLoadLock @ 0x1406F5AF0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406F5B50 (MmAcquireLoadLock.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     VslDetermineHotPatchType @ 0x140931E28 (VslDetermineHotPatchType.c)
 *     MiAllocateHotPatchRecord @ 0x140970F88 (MiAllocateHotPatchRecord.c)
 *     MiAllocateSecureImageActivePatch @ 0x14097100C (MiAllocateSecureImageActivePatch.c)
 *     MiApplyHotPatchToDriver @ 0x140971650 (MiApplyHotPatchToDriver.c)
 *     MiHotPatchAllProcesses @ 0x140973630 (MiHotPatchAllProcesses.c)
 *     MiInsertHotPatchRecord @ 0x140973D6C (MiInsertHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x140973EA4 (MiInsertSecureImageActivePatch.c)
 *     MiLogHotPatchOperationStatus @ 0x140974FBC (MiLogHotPatchOperationStatus.c)
 *     MiOpenHotPatchFile @ 0x14097638C (MiOpenHotPatchFile.c)
 *     MiPromoteControlAreaToStrongCode @ 0x140976F28 (MiPromoteControlAreaToStrongCode.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiLoadHotPatch(const void **a1, char a2, int *a3, int *a4)
{
  char v7; // r12
  _QWORD *HotPatchRecord; // r15
  int v9; // eax
  int v10; // ebx
  int v11; // edi
  PVOID v12; // r14
  int v13; // eax
  int v14; // esi
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r10
  UNICODE_STRING *SecureImageActivePatch; // rsi
  unsigned int *v19; // rdi
  int v20; // eax
  PVOID Object; // [rsp+58h] [rbp-39h] BYREF
  __int64 v23; // [rsp+60h] [rbp-31h]
  int v24; // [rsp+68h] [rbp-29h] BYREF
  int v25; // [rsp+6Ch] [rbp-25h]
  struct _KTHREAD *Lock; // [rsp+70h] [rbp-21h]
  HANDLE Handle; // [rsp+78h] [rbp-19h] BYREF
  __int128 v28; // [rsp+80h] [rbp-11h] BYREF
  unsigned int v29; // [rsp+90h] [rbp-1h]
  __int64 v30; // [rsp+98h] [rbp+7h] BYREF
  __int64 v31; // [rsp+A0h] [rbp+Fh]
  PVOID v32; // [rsp+A8h] [rbp+17h]

  v25 = 1;
  v31 = 0LL;
  v29 = 0;
  v24 = 0;
  v30 = 0LL;
  Lock = 0LL;
  Object = 0LL;
  v7 = 0;
  v32 = 0LL;
  v28 = 0LL;
  HotPatchRecord = 0LL;
  Handle = 0LL;
  v23 = 0LL;
  v9 = MiOpenHotPatchFile((_DWORD)a1, 0, (_DWORD)a3, (unsigned int)&Handle, (__int64)&Object);
  v10 = v23;
  v11 = v9;
  if ( v9 < 0 )
    goto LABEL_38;
  if ( (a2 & 8) != 0 )
  {
    if ( __PAIR64__(*a4, *a3) != v23 )
    {
      v11 = -1073740748;
LABEL_5:
      v12 = Object;
LABEL_40:
      MiLogHotPatchOperationStatus(v10, HIDWORD(v23), (_DWORD)a1, v11, 1);
      SecureImageActivePatch = 0LL;
      goto LABEL_41;
    }
  }
  else
  {
    v13 = HIDWORD(v23);
    *a3 = v23;
    *a4 = v13;
  }
  if ( (a2 & 1) != 0 )
  {
    HotPatchRecord = MiAllocateHotPatchRecord(*a3, *a4, a1);
    if ( !HotPatchRecord )
    {
      v11 = -1073741670;
      goto LABEL_5;
    }
  }
  Lock = MmAcquireLoadLock();
  if ( HotPatchRecord )
    MiInsertHotPatchRecord((unsigned __int64 *)&qword_140C533B0, HotPatchRecord, 0);
  v14 = 1073741879;
  if ( (MiFlags & 0x4000) == 0 )
  {
    v12 = Object;
    v19 = (unsigned int *)a3;
    goto LABEL_34;
  }
  if ( (a2 & 4) == 0 )
  {
    v11 = VslDetermineHotPatchType(*a3, *a4, &v24);
    if ( v11 >= 0 )
    {
      v7 = v24;
      goto LABEL_16;
    }
LABEL_38:
    v12 = Object;
    goto LABEL_39;
  }
LABEL_16:
  v12 = Object;
  if ( (v7 & 1) != 0 )
  {
    Object = 0LL;
    v11 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    v32 = Object;
    if ( v11 < 0 )
      goto LABEL_39;
    v15 = MiSectionControlArea((__int64)v12);
    v11 = MiPromoteControlAreaToStrongCode(v15, v17, v16, &v30);
    if ( v11 < 0 )
      goto LABEL_39;
  }
  v25 = 0;
  if ( (v7 & 2) != 0 )
  {
    SecureImageActivePatch = MiAllocateSecureImageActivePatch((PCUNICODE_STRING)a1);
    if ( SecureImageActivePatch )
    {
      v11 = VslApplyHotPatch(v30, (__int64)v12, 0LL, 0LL, 0LL, 0LL, 0, (__int64)&v28);
      v31 = v29;
    }
    else
    {
      v11 = -1073741670;
    }
    MiLogHotPatchOperationStatus(v10, HIDWORD(v23), (_DWORD)a1, v11, 2);
    if ( v11 < 0 )
    {
LABEL_41:
      if ( Lock )
        MmReleaseLoadLock((__int64)Lock);
      goto LABEL_43;
    }
    *(_OWORD *)&SecureImageActivePatch[1].Buffer = v28;
    LODWORD(SecureImageActivePatch[2].Buffer) = v31;
    MiInsertSecureImageActivePatch(SecureImageActivePatch);
    v14 = v11;
  }
  ObfDereferenceObject(v12);
  v19 = (unsigned int *)a3;
  v12 = 0LL;
  if ( (a2 & 2) != 0 )
    goto LABEL_34;
  v20 = MiApplyHotPatchToDriver(*a3, *a4, (__int64)a1, (__int64)Handle);
  if ( v20 == -1073741515 )
  {
    v20 = 1073741879;
  }
  else if ( v20 < 0 )
  {
    v14 = v20;
    goto LABEL_34;
  }
  if ( v14 == 1073741879 )
    v14 = v20;
LABEL_34:
  MmReleaseLoadLock((__int64)Lock);
  Lock = 0LL;
  if ( (a2 & 6) == 0 )
    MiHotPatchAllProcesses(*v19, *a4);
  v11 = v14;
  SecureImageActivePatch = 0LL;
  if ( v25 )
  {
LABEL_39:
    SecureImageActivePatch = 0LL;
    if ( v11 == 1073741879 )
      goto LABEL_41;
    goto LABEL_40;
  }
LABEL_43:
  if ( v12 )
    ObfDereferenceObject(v12);
  if ( v32 )
    ObfDereferenceObject(v32);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( SecureImageActivePatch )
    ExFreePoolWithTag(SecureImageActivePatch, 0);
  return (unsigned int)v11;
}
