/*
 * XREFs of FsRtlLogCcFlushError @ 0x14092D830
 * Callers:
 *     sub_14053A580 @ 0x14053A580 (sub_14053A580.c)
 * Callees:
 *     sub_14028D31C @ 0x14028D31C (sub_14028D31C.c)
 *     IoAllocateErrorLogEntry @ 0x1403A70E0 (IoAllocateErrorLogEntry.c)
 *     IoWriteErrorLogEntry @ 0x1403A7210 (IoWriteErrorLogEntry.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     IoRaiseInformationalHardError @ 0x140557960 (IoRaiseInformationalHardError.c)
 */

NTSTATUS __stdcall FsRtlLogCcFlushError(
        PUNICODE_STRING FileName,
        PDEVICE_OBJECT DeviceObject,
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        NTSTATUS FlushError,
        ULONG Flags)
{
  NTSTATUS v7; // r15d
  NTSTATUS result; // eax
  bool v10; // zf
  NTSTATUS v11; // ecx
  int v12; // ebp
  UCHAR v13; // si
  char *ErrorLogEntry; // rax
  void *v15; // rdi
  int v16; // ebp
  char *v17; // rsi
  unsigned int v18; // ebp
  void *v19; // rcx
  size_t Length; // rax
  wchar_t *Buffer; // rdx
  unsigned int v22; // eax
  unsigned int v23; // ebp
  __int64 v24; // rbx
  char *v25; // rsi
  char *v26; // rsi

  v7 = 0;
  result = sub_14028D31C(1, (DeviceObject->Characteristics >> 4) & 1, FlushError);
  if ( !result )
    return result;
  if ( FlushError > -1073741623 )
  {
    if ( FlushError > -1073741252 )
    {
      if ( FlushError == -1073741247 || FlushError == -1073740964 )
        goto LABEL_29;
      if ( FlushError > -1073740699 )
      {
        if ( FlushError <= -1073740697 )
          goto LABEL_29;
        v10 = FlushError == -1073740672;
        goto LABEL_27;
      }
    }
    else
    {
      if ( FlushError == -1073741252 || FlushError == -1073741620 || FlushError == -1073741309 )
        goto LABEL_29;
      if ( FlushError > -1073741301 )
      {
        if ( FlushError <= -1073741299 )
          goto LABEL_29;
        v10 = FlushError == -1073741258;
        goto LABEL_27;
      }
    }
LABEL_28:
    v11 = -1073741278;
    v12 = -2147221454;
    goto LABEL_30;
  }
  switch ( FlushError )
  {
    case -1073741623:
      goto LABEL_29;
    case -1073741816:
    case -1073741790:
    case -1073741697:
      v11 = -1073700735;
      v12 = -2147221364;
      break;
    case -1073741672:
    case -1073741667:
    case -1073741662:
      v11 = -1073700734;
      v12 = -2147221363;
      break;
    case -1073741636:
    case -1073741634:
      goto LABEL_29;
    default:
      v10 = FlushError == -1073741628;
LABEL_27:
      if ( !v10 )
        goto LABEL_28;
LABEL_29:
      v11 = -1073700736;
      v12 = -2147221365;
      break;
  }
LABEL_30:
  __incgsdword(0x847Cu);
  if ( (Flags & 1) == 0 )
    IoRaiseInformationalHardError(v11, FileName, 0LL);
  if ( (Flags & 2) == 0 )
  {
    v13 = -16;
    if ( (unsigned __int64)FileName->Length + 50 <= 0xF0 )
      v13 = LOBYTE(FileName->Length) + 50;
    ErrorLogEntry = (char *)IoAllocateErrorLogEntry(DeviceObject, v13);
    v15 = ErrorLogEntry;
    if ( ErrorLogEntry )
    {
      *((_DWORD *)ErrorLogEntry + 3) = v12;
      *ErrorLogEntry = 4;
      v16 = v13;
      v17 = ErrorLogEntry + 48;
      *((_WORD *)ErrorLogEntry + 3) = 48;
      v18 = v16 - 50;
      *((_DWORD *)ErrorLogEntry + 5) = FlushError;
      v19 = ErrorLogEntry + 48;
      *(_DWORD *)(ErrorLogEntry + 2) = 65540;
      *((_DWORD *)ErrorLogEntry + 10) = FlushError;
      Length = FileName->Length;
      Buffer = FileName->Buffer;
      if ( v18 >= (unsigned int)Length )
      {
        memmove(v19, Buffer, Length);
        v26 = &v17[2 * ((unsigned __int64)FileName->Length >> 1)];
      }
      else
      {
        v22 = 2 * (v18 >> 2) - 4;
        v23 = v18 - v22 - 8;
        v24 = v22;
        memmove(v19, Buffer, v22);
        v25 = &v17[v24];
        *(_QWORD *)v25 = 0x20002E002E0020LL;
        v25 += 8;
        memmove(v25, (char *)FileName->Buffer + FileName->Length - (unsigned __int64)v23, v23);
        v26 = &v25[v23];
      }
      *(_WORD *)v26 = 0;
      IoWriteErrorLogEntry(v15);
    }
    else
    {
      return -1073741670;
    }
  }
  return v7;
}
