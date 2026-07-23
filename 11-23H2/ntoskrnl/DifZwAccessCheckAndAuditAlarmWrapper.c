/*
 * XREFs of DifZwAccessCheckAndAuditAlarmWrapper @ 0x1405ECBD0
 * Callers:
 *     <none>
 * Callees:
 *     ZwAccessCheckAndAuditAlarm @ 0x14041B610 (ZwAccessCheckAndAuditAlarm.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     DifGetAPIThunkContextById @ 0x1404668BE (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F8E34 (DifGetReturnAddressForWrappers.c)
 */

NTSTATUS __fastcall DifZwAccessCheckAndAuditAlarmWrapper(
        PUNICODE_STRING SubsystemName,
        PVOID HandleId,
        PUNICODE_STRING ObjectTypeName,
        PUNICODE_STRING ObjectName,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ACCESS_MASK DesiredAccess,
        PGENERIC_MAPPING GenericMapping,
        BOOLEAN ObjectCreation,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus,
        PBOOLEAN GenerateOnClose)
{
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  _QWORD **v24; // rdi
  _QWORD *v25; // rbx
  _QWORD v26[14]; // [rsp+68h] [rbp-69h] BYREF
  __int64 retaddr; // [rsp+100h] [rbp+2Fh]

  memset(v26, 0, 0x68uLL);
  APIThunkContextById = DifGetAPIThunkContextById(490);
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0 || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v20 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v20 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      v26[0] = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v20 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v16, v15, v18, v19);
      goto LABEL_9;
    }
  }
  v26[0] = 0LL;
LABEL_10:
  v26[7] = SecurityDescriptor;
  LODWORD(v26[6]) = DesiredAccess;
  v26[5] = GenericMapping;
  LOBYTE(v26[4]) = ObjectCreation;
  v26[3] = GrantedAccess;
  v26[2] = AccessStatus;
  v26[1] = GenerateOnClose;
  v26[11] = SubsystemName;
  v26[10] = HandleId;
  v26[9] = ObjectTypeName;
  v26[8] = ObjectName;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(_QWORD *))*(i - 1))(v26);
  }
LABEL_17:
  result = ZwAccessCheckAndAuditAlarm(
             SubsystemName,
             HandleId,
             ObjectTypeName,
             ObjectName,
             SecurityDescriptor,
             DesiredAccess,
             GenericMapping,
             ObjectCreation,
             GrantedAccess,
             AccessStatus,
             GenerateOnClose);
  LODWORD(v26[12]) = result;
  if ( APIThunkContextById )
  {
    v24 = (_QWORD **)(APIThunkContextById + 6);
    v25 = *v24;
    if ( *v24 != v24 )
    {
      do
      {
        if ( v25 != (_QWORD *)16 )
          ((void (__fastcall *)(_QWORD *))*(v25 - 1))(v26);
        v25 = (_QWORD *)*v25;
      }
      while ( v25 != v24 );
      return v26[12];
    }
  }
  return result;
}
