/*
 * XREFs of NtProtectVirtualMemory @ 0x1406F9280
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x14022D620 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022D9E0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     MiMakeProtectionMask @ 0x140276860 (MiMakeProtectionMask.c)
 *     PsIsProcessLoggingEnabled @ 0x140338640 (PsIsProcessLoggingEnabled.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E63B0 (ObpReferenceObjectByHandleWithTag.c)
 *     MmProtectVirtualMemory @ 0x1406F9820 (MmProtectVirtualMemory.c)
 *     EtwTiLogProtectExecVm @ 0x1408A7ACA (EtwTiLogProtectExecVm.c)
 *     VslDebugProtectSecureProcessMemory @ 0x140941E88 (VslDebugProtectSecureProcessMemory.c)
 */

NTSTATUS __cdecl NtProtectVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        ULONG NewProtect,
        PULONG OldProtect)
{
  HANDLE v8; // r10
  PULONG v9; // rdx
  int v10; // esi
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rbx
  char PreviousMode; // cl
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  PVOID v17; // rax
  ULONG_PTR v18; // r15
  unsigned __int64 v19; // rdx
  NTSTATUS result; // eax
  _BYTE *v21; // rdi
  NTSTATUS v22; // eax
  NTSTATUS v23; // ebx
  char v24; // r11
  unsigned __int8 v25; // [rsp+40h] [rbp-A8h]
  ULONG v26; // [rsp+44h] [rbp-A4h] BYREF
  PVOID v27; // [rsp+48h] [rbp-A0h] BYREF
  int ProtectionMask; // [rsp+50h] [rbp-98h]
  PVOID Object; // [rsp+58h] [rbp-90h] BYREF
  ULONG_PTR v30; // [rsp+60h] [rbp-88h] BYREF
  PULONG v31; // [rsp+68h] [rbp-80h]
  _KPROCESS *v32; // [rsp+70h] [rbp-78h]
  $115DCDF994C6370D29323EAB0E0C9502 v33; // [rsp+78h] [rbp-70h] BYREF

  v8 = ProcessHandle;
  v9 = OldProtect;
  v31 = OldProtect;
  memset(&v33, 0, sizeof(v33));
  v10 = 0;
  Object = 0LL;
  v27 = 0LL;
  v30 = 0LL;
  v26 = 0;
  if ( NewProtect == 0x80000000 || NewProtect == 0x10000000 )
  {
    ProtectionMask = 24;
  }
  else
  {
    ProtectionMask = MiMakeProtectionMask(NewProtect & 0xFF807FF);
    if ( ProtectionMask == -1 )
      return -1073741755;
    v9 = v31;
  }
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v32 = Process;
  PreviousMode = CurrentThread->PreviousMode;
  v25 = PreviousMode;
  if ( PreviousMode )
  {
    v14 = (__int64)BaseAddress;
    if ( (unsigned __int64)BaseAddress >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v14 = *(_QWORD *)v14;
    v15 = (__int64)RegionSize;
    if ( (unsigned __int64)RegionSize >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    v16 = (__int64)v9;
    if ( (unsigned __int64)v9 >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v16 = *(_DWORD *)v16;
    v17 = *BaseAddress;
    v27 = *BaseAddress;
    v18 = *RegionSize;
    v30 = *RegionSize;
    PreviousMode = v25;
  }
  else
  {
    v18 = *RegionSize;
    v30 = *RegionSize;
    v17 = *BaseAddress;
    v27 = *BaseAddress;
  }
  if ( !v18 )
    return -1073741811;
  v19 = (unsigned __int64)v17 + v18 - 1;
  if ( v19 < (unsigned __int64)v17 || v19 > 0x7FFFFFFEFFFFLL )
    return -1073741811;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)v8,
             8,
             (__int64)PsProcessType,
             PreviousMode,
             0x76506D4Du,
             &Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    v21 = Object;
    if ( Process != Object )
    {
      KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v33);
      v10 = 1;
    }
    if ( (v21[992] & 1) != 0 )
      v22 = VslDebugProtectSecureProcessMemory(
              (_DWORD)v21,
              (_DWORD)Process,
              (unsigned int)&v27,
              (unsigned int)&v30,
              NewProtect,
              (__int64)&v26);
    else
      v22 = MmProtectVirtualMemory(
              (_DWORD)Process,
              (_DWORD)v21,
              (unsigned int)&v27,
              (unsigned int)&v30,
              NewProtect,
              (__int64)&v26);
    v23 = v22;
    LODWORD(Object) = v22;
    if ( v10 )
      KiUnstackDetachProcess(&v33);
    if ( v23 >= 0
      && (((unsigned __int8)MiMakeProtectionMask(v26 & 0xFFF807FF) | (unsigned __int8)ProtectionMask) & 2) != 0 )
    {
      if ( (unsigned int)PsIsProcessLoggingEnabled((__int64)v32, (__int64)v21, 8) )
        EtwTiLogProtectExecVm((_DWORD)v21, v25, (_DWORD)v27, v18, NewProtect, v24);
    }
    ObfDereferenceObjectWithTag(v21, 0x76506D4Du);
    *RegionSize = v30;
    *BaseAddress = v27;
    *v31 = v26;
    return v23;
  }
  return result;
}
