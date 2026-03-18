/*
 * XREFs of DifZwCreateTransactionWrapper @ 0x14061F370
 * Callers:
 *     <none>
 * Callees:
 *     ZwCreateTransaction @ 0x14041D0E0 (ZwCreateTransaction.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 */

NTSTATUS __fastcall DifZwCreateTransactionWrapper(
        PHANDLE TransactionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LPGUID Uow,
        HANDLE TmHandle,
        ULONG CreateOptions,
        ULONG IsolationLevel,
        ULONG IsolationFlags,
        PLARGE_INTEGER Timeout,
        PUNICODE_STRING Description)
{
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  _QWORD **v23; // rdi
  _QWORD *v24; // rbx
  _QWORD v25[12]; // [rsp+58h] [rbp-59h] BYREF
  __int64 retaddr; // [rsp+E0h] [rbp+2Fh]

  memset(v25, 0, 0x58uLL);
  APIThunkContextById = DifGetAPIThunkContextById(515);
  if ( !APIThunkContextById )
    goto LABEL_18;
  if ( ViVerifierEnabled && ((VfRuleClasses & 0xFFA9F6E6) != 0 || (VfRuleClasses & 0x200000000LL) != 0)
    || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v19 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v19 & 0x18) == 0 )
  {
    if ( (v19 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v15, v14, v17, v18);
    goto LABEL_12;
  }
  ReturnAddressForWrappers = retaddr;
LABEL_12:
  v25[0] = ReturnAddressForWrappers;
LABEL_13:
  v25[5] = TmHandle;
  LODWORD(v25[4]) = CreateOptions;
  v25[3] = __PAIR64__(IsolationLevel, IsolationFlags);
  v25[2] = Timeout;
  v25[1] = Description;
  v25[9] = TransactionHandle;
  LODWORD(v25[8]) = DesiredAccess;
  v25[7] = ObjectAttributes;
  v25[6] = Uow;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(_QWORD *))*(i - 1))(v25);
  }
LABEL_18:
  result = ZwCreateTransaction(
             TransactionHandle,
             DesiredAccess,
             ObjectAttributes,
             Uow,
             TmHandle,
             CreateOptions,
             IsolationLevel,
             IsolationFlags,
             Timeout,
             Description);
  LODWORD(v25[10]) = result;
  if ( APIThunkContextById )
  {
    v23 = (_QWORD **)(APIThunkContextById + 6);
    v24 = *v23;
    if ( *v23 != v23 )
    {
      do
      {
        if ( v24 != (_QWORD *)16 )
          ((void (__fastcall *)(_QWORD *))*(v24 - 1))(v25);
        v24 = (_QWORD *)*v24;
      }
      while ( v24 != v23 );
      return v25[10];
    }
  }
  return result;
}
