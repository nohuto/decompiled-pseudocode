/*
 * XREFs of NtReplacePartitionUnit @ 0x140679E10
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406CBED4 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1406D4220 (PiControlMakeUserModeCallersCopy.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     IoReplacePartitionUnit @ 0x140954E40 (IoReplacePartitionUnit.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtReplacePartitionUnit(
        PUNICODE_STRING TargetInstancePath,
        PUNICODE_STRING SpareInstancePath,
        ULONG Flags)
{
  struct _DEVICE_OBJECT *v6; // r14
  struct _DEVICE_OBJECT *v7; // rsi
  int v8; // edi
  int UserModeCallersCopy; // ebx
  ULONG v10; // r8d
  struct _DEVICE_OBJECT *v11; // rdx
  struct _DEVICE_OBJECT *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  int v19; // [rsp+20h] [rbp-68h]
  PVOID v20[3]; // [rsp+30h] [rbp-58h] BYREF
  UNICODE_STRING v21; // [rsp+48h] [rbp-40h] BYREF
  UNICODE_STRING v22; // [rsp+58h] [rbp-30h] BYREF
  PVOID P; // [rsp+A8h] [rbp+20h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  P = 0LL;
  v6 = 0LL;
  v20[1] = 0LL;
  v20[0] = 0LL;
  v7 = 0LL;
  v8 = 1;
  if ( KeGetCurrentThread()->PreviousMode != 1 )
  {
    UserModeCallersCopy = -1073741790;
    goto LABEL_40;
  }
  if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, 1) )
  {
    UserModeCallersCopy = -1073741727;
    goto LABEL_40;
  }
  v10 = 0x80000000;
  if ( Flags == 0x80000000 )
  {
    v11 = 0LL;
    v12 = 0LL;
LABEL_7:
    UserModeCallersCopy = IoReplacePartitionUnit(v12, v11, v10);
    goto LABEL_40;
  }
  if ( Flags )
  {
    UserModeCallersCopy = -1073741583;
    goto LABEL_40;
  }
  if ( ((unsigned __int8)SpareInstancePath & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)&SpareInstancePath[1] > 0x7FFFFFFF0000LL || &SpareInstancePath[1] < SpareInstancePath )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( ((unsigned __int8)TargetInstancePath & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)&TargetInstancePath[1] > 0x7FFFFFFF0000LL || &TargetInstancePath[1] < TargetInstancePath )
    MEMORY[0x7FFFFFFF0000] = 0;
  v21 = *SpareInstancePath;
  v22 = *TargetInstancePath;
  if ( (unsigned __int16)(v22.Length - 1) > 0xC8u || (v22.MaximumLength & 1) != 0 )
    goto LABEL_39;
  if ( (unsigned __int16)(v21.Length - 1) > 0xC8u || (v21.MaximumLength & 1) != 0 )
  {
LABEL_38:
    UserModeCallersCopy = -1073741584;
    goto LABEL_40;
  }
  UserModeCallersCopy = PiControlMakeUserModeCallersCopy(&P, v21.Buffer, v21.Length, 2LL, 1, 1);
  if ( UserModeCallersCopy >= 0 )
  {
    LOBYTE(v19) = 1;
    UserModeCallersCopy = PiControlMakeUserModeCallersCopy(v20, v22.Buffer, v22.Length, 2LL, v19, 1);
    if ( UserModeCallersCopy >= 0 )
    {
      v21.Buffer = (wchar_t *)P;
      v21.MaximumLength = v21.Length;
      v22.Buffer = (wchar_t *)v20[0];
      v22.MaximumLength = v22.Length;
      v13 = PnpDeviceObjectFromDeviceInstanceWithTag(&v21, 1953261124LL);
      v6 = (struct _DEVICE_OBJECT *)v13;
      if ( v13 )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(v13 + 312) + 40LL);
        if ( v14 )
        {
          if ( (*(_DWORD *)(v14 + 396) & 0x20000) == 0 )
          {
            v16 = PnpDeviceObjectFromDeviceInstanceWithTag(&v22, 1953261124LL);
            v7 = (struct _DEVICE_OBJECT *)v16;
            if ( !v16
              || (v17 = *(_QWORD *)(*(_QWORD *)(v16 + 312) + 40LL)) == 0
              || (*(_DWORD *)(v17 + 396) & 0x20000) != 0 )
            {
              v8 = 0;
            }
            if ( v8 )
            {
              v10 = 0;
              v11 = v6;
              v12 = v7;
              goto LABEL_7;
            }
LABEL_39:
            UserModeCallersCopy = -1073741585;
            goto LABEL_40;
          }
        }
      }
      goto LABEL_38;
    }
  }
LABEL_40:
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x746C6644u);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x746C6644u);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v20[0] )
    ExFreePoolWithTag(v20[0], 0);
  return UserModeCallersCopy;
}
