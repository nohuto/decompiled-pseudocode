/*
 * XREFs of NtSystemDebugControl @ 0x1407E13A0
 * Callers:
 *     <none>
 * Callees:
 *     ExUnlockUserBuffer @ 0x140206EC4 (ExUnlockUserBuffer.c)
 *     DbgBreakPointWithStatus @ 0x1404291C0 (DbgBreakPointWithStatus.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     DbgkCaptureLiveKernelDump @ 0x14053C658 (DbgkCaptureLiveKernelDump.c)
 *     KdDisableDebugger @ 0x140567BD0 (KdDisableDebugger.c)
 *     KdEnableDebugger @ 0x140567E00 (KdEnableDebugger.c)
 *     KdSetDbgPrintBufferSize @ 0x140568204 (KdSetDbgPrintBufferSize.c)
 *     ExLockUserBuffer @ 0x140687918 (ExLockUserBuffer.c)
 *     ProbeForWrite @ 0x140729580 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     ExpKdPullRemoteFileForUser @ 0x14084F140 (ExpKdPullRemoteFileForUser.c)
 *     DbgkCaptureLiveDump @ 0x14093AA68 (DbgkCaptureLiveDump.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtSystemDebugControl(
        SYSDBG_COMMAND Command,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  __int64 v7; // r15
  KPROCESSOR_MODE PreviousMode; // r13
  NTSTATUS v11; // edi
  __int64 v12; // r13
  __int32 v13; // ebx
  __int32 v14; // ebx
  __int32 v15; // ebx
  __int32 v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v20; // ebx
  int v21; // ebx
  NTSTATUS v22; // eax
  __int32 v23; // ebx
  __int32 v24; // ebx
  __int32 v25; // ebx
  __int32 v26; // ebx
  int v27; // ebx
  int v28; // ebx
  __int32 v29; // ebx
  __int32 v30; // ebx
  __int32 v31; // ebx
  __int32 v32; // ebx
  int v33; // ebx
  int v34; // ebx
  __int32 v35; // ebx
  __int32 v36; // ebx
  __int32 v37; // ebx
  __int32 v38; // ebx
  int v39; // ebx
  int v40; // ebx
  int v41; // ebx
  int v42; // ebx
  unsigned int v43; // eax
  unsigned int v44; // r14d
  void *Pool2; // rbx
  KPROCESSOR_MODE v46; // [rsp+34h] [rbp-E4h]
  size_t Size; // [rsp+38h] [rbp-E0h] BYREF
  void *v48; // [rsp+40h] [rbp-D8h]
  unsigned __int64 v49; // [rsp+48h] [rbp-D0h] BYREF
  PVOID P; // [rsp+50h] [rbp-C8h] BYREF
  __int128 v51; // [rsp+58h] [rbp-C0h] BYREF
  __int128 v52; // [rsp+68h] [rbp-B0h]
  __int128 v53; // [rsp+78h] [rbp-A0h]
  unsigned __int64 v54; // [rsp+88h] [rbp-90h]
  _BYTE v55[136]; // [rsp+90h] [rbp-88h] BYREF

  v7 = InputBufferLength;
  LODWORD(v48) = OutputBufferLength;
  LODWORD(Size) = 0;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  memset(v55, 0, 0x48uLL);
  v49 = 0LL;
  P = 0LL;
  if ( KdPitchDebugger && !KdLocalDebugEnabled && ((Command - 29) & 0xFFFFFFF7) != 0 )
    return -1073740972;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v46 = PreviousMode;
  if ( Command != SysDbgKdPullRemoteFile && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
    return -1073741790;
  v11 = 0;
  if ( PreviousMode )
  {
    if ( (_DWORD)v7 )
    {
      if ( ((unsigned __int8)InputBuffer & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)InputBuffer + v7 > 0x7FFFFFFF0000LL || (char *)InputBuffer + v7 < InputBuffer )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      v12 = 0x7FFFFFFF0000LL;
    }
    if ( OutputBufferLength )
      ProbeForWrite(OutputBuffer, OutputBufferLength, 4u);
    if ( ReturnLength )
    {
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v12 = (__int64)ReturnLength;
      *(_DWORD *)v12 = *(_DWORD *)v12;
    }
    PreviousMode = v46;
  }
  if ( Command <= SysDbgWriteBusData )
  {
    if ( Command == SysDbgWriteBusData )
      return -1073741822;
    if ( Command > SysDbgWriteVirtual )
    {
      v29 = Command - 10;
      if ( !v29 )
        return -1073741822;
      v30 = v29 - 1;
      if ( !v30 )
        return -1073741822;
      v31 = v30 - 1;
      if ( !v31 )
        return -1073741822;
      v32 = v31 - 1;
      if ( !v32 )
        return -1073741822;
      v33 = v32 - 1;
      if ( !v33 )
        return -1073741822;
      v34 = v33 - 1;
      if ( !v34 )
        return -1073741822;
      v28 = v34 - 1;
      if ( !v28 )
        return -1073741822;
    }
    else
    {
      if ( Command == SysDbgWriteVirtual )
        return -1073741822;
      if ( Command == SysDbgQueryModuleInformation )
        return -1073741822;
      v23 = Command - 1;
      if ( !v23 )
        return -1073741822;
      v24 = v23 - 1;
      if ( !v24 )
        return -1073741822;
      v25 = v24 - 1;
      if ( !v25 )
        return -1073741822;
      v26 = v25 - 1;
      if ( !v26 )
        return -1073741822;
      v27 = v26 - 1;
      if ( !v27 )
        return -1073741822;
      v28 = v27 - 1;
      if ( !v28 )
      {
        if ( (_BYTE)KdDebuggerEnabled == 1 )
          DbgBreakPointWithStatus(6u);
        else
          v11 = -1073741823;
        goto LABEL_30;
      }
    }
    if ( (unsigned int)(v28 - 1) > 1 )
      goto LABEL_113;
    return -1073741822;
  }
  if ( Command > SysDbgGetTriageDump )
  {
    v13 = Command - 30;
    if ( !v13 )
    {
      if ( OutputBufferLength == 1 )
      {
        *(_BYTE *)OutputBuffer = KdBlockEnable;
        goto LABEL_30;
      }
      return -1073741820;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      if ( (_DWORD)v7 == 1 )
      {
        KdBlockEnable = *(_BYTE *)InputBuffer;
        goto LABEL_30;
      }
      return -1073741820;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      KdUmBreakMarker = -618808389;
      goto LABEL_29;
    }
    v16 = v15 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( !v18 )
        {
          if ( OutputBufferLength == 4 )
          {
            *(_DWORD *)OutputBuffer = KdUmAttachPid;
            if ( !KdResetUmAttachPid )
            {
LABEL_29:
              v11 = 0;
              goto LABEL_30;
            }
LABEL_117:
            KdUmAttachPid = 0;
            goto LABEL_29;
          }
          return -1073741820;
        }
        v20 = v18 - 1;
        if ( !v20 )
          goto LABEL_117;
        v21 = v20 - 1;
        if ( !v21 )
        {
          if ( OutputBufferLength || (((_DWORD)v7 - 64) & 0xFFFFFFF7) != 0 )
            return -1073741820;
          memmove(v55, InputBuffer, (unsigned int)v7);
          v22 = DbgkCaptureLiveKernelDump((__int64)v55);
          goto LABEL_42;
        }
        if ( v21 == 1 )
        {
          if ( (_DWORD)v7 != 16 || OutputBufferLength )
            return -1073741820;
          v22 = ExpKdPullRemoteFileForUser(InputBuffer);
          goto LABEL_42;
        }
        goto LABEL_113;
      }
    }
    else
    {
      if ( OutputBufferLength != 4 )
        return -1073741820;
      *(_DWORD *)OutputBuffer = KdUmBreakPid;
      if ( !KdResetUmBreakPid )
        goto LABEL_29;
    }
    KdUmBreakPid = 0;
    goto LABEL_29;
  }
  if ( Command != SysDbgGetTriageDump )
  {
    v35 = Command - 20;
    if ( v35 )
    {
      v36 = v35 - 1;
      if ( !v36 )
      {
        v22 = KdEnableDebugger();
        goto LABEL_42;
      }
      v37 = v36 - 1;
      if ( !v37 )
      {
        v22 = KdDisableDebugger();
        goto LABEL_42;
      }
      v38 = v37 - 1;
      if ( !v38 )
      {
        if ( OutputBufferLength == 1 )
        {
          *(_BYTE *)OutputBuffer = KdAutoEnableOnEvent;
          goto LABEL_30;
        }
        return -1073741820;
      }
      v39 = v38 - 1;
      if ( !v39 )
      {
        if ( (_DWORD)v7 == 1 )
        {
          KdAutoEnableOnEvent = *(_BYTE *)InputBuffer != 0;
          goto LABEL_30;
        }
        return -1073741820;
      }
      v40 = v39 - 1;
      if ( !v40 )
      {
        if ( OutputBufferLength == 4 )
        {
          *(_DWORD *)OutputBuffer = KdPrintBufferSize;
          goto LABEL_30;
        }
        return -1073741820;
      }
      v41 = v40 - 1;
      if ( !v41 )
      {
        if ( (_DWORD)v7 != 4 )
          return -1073741820;
        HIDWORD(Size) = 0;
        v22 = KdSetDbgPrintBufferSize(*(_DWORD *)InputBuffer);
LABEL_42:
        v11 = v22;
        goto LABEL_30;
      }
      v42 = v41 - 1;
      if ( !v42 )
      {
        if ( OutputBufferLength == 1 )
        {
          *(_BYTE *)OutputBuffer = KdIgnoreUmExceptions == 0;
          goto LABEL_30;
        }
        return -1073741820;
      }
      if ( v42 == 1 )
      {
        if ( (_DWORD)v7 == 1 )
        {
          KdIgnoreUmExceptions = *(_BYTE *)InputBuffer == 0;
          goto LABEL_30;
        }
        return -1073741820;
      }
LABEL_113:
      v11 = -1073741821;
      goto LABEL_30;
    }
    return -1073741822;
  }
  if ( (_DWORD)v7 != 56 || OutputBufferLength < 0x40000 )
    return -1073741820;
  v51 = *(_OWORD *)InputBuffer;
  v52 = *((_OWORD *)InputBuffer + 1);
  v53 = *((_OWORD *)InputBuffer + 2);
  v54 = *((_QWORD *)InputBuffer + 6);
  if ( DWORD2(v53) || !HIDWORD(v53) || (v51 & 0xFFFFFFFE) != 0 || 8 * (unsigned __int64)HIDWORD(v53) > 0xFFFFFFFF )
    return -1073741811;
  v43 = 0x100000;
  if ( OutputBufferLength <= 0x100000 )
    v43 = (unsigned int)v48;
  v44 = v43;
  Pool2 = (void *)ExAllocatePool2(64LL, v43, 1884181323LL);
  v48 = Pool2;
  if ( Pool2 )
  {
    v11 = ExLockUserBuffer(v54, 8 * HIDWORD(v53), PreviousMode, IoReadAccess, &v49, (struct _MDL **)&P);
    if ( v11 >= 0 )
    {
      v54 = v49;
      v11 = DbgkCaptureLiveDump(&v51, Pool2, v44, &Size);
      if ( v11 >= 0 )
      {
        if ( (unsigned int)Size <= OutputBufferLength )
          memmove(OutputBuffer, Pool2, (unsigned int)Size);
        else
          v11 = -1073741823;
      }
      ExFreePoolWithTag(Pool2, 0);
      ExUnlockUserBuffer((struct _MDL *)P);
    }
    else
    {
      ExFreePoolWithTag(Pool2, 0);
    }
  }
  else
  {
    v11 = -1073741801;
  }
LABEL_30:
  if ( ReturnLength )
    *ReturnLength = Size;
  return v11;
}
