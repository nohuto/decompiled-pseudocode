/*
 * XREFs of DifObReferenceObjectByHandleWrapper @ 0x140618460
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall DifObReferenceObjectByHandleWrapper(
        HANDLE Handle,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        PVOID *a5,
        POBJECT_HANDLE_INFORMATION HandleInformation)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  unsigned int v18; // ecx
  _QWORD **v19; // rdi
  _QWORD *v20; // rbx
  PVOID Object; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v23[8]; // [rsp+40h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+A8h] [rbp+28h]

  memset(v23, 0, sizeof(v23));
  APIThunkContextById = DifGetAPIThunkContextById(358);
  if ( !APIThunkContextById )
    goto LABEL_18;
  if ( ViVerifierEnabled
    && ((VfRuleClasses & 0xFFA9F6E6) != 0 || (v11 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x200000000LL) != 0))
    || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v15 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v15 & 0x18) == 0 )
  {
    if ( (v15 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v11, v10, v13, v14);
    goto LABEL_12;
  }
  ReturnAddressForWrappers = retaddr;
LABEL_12:
  v23[0] = ReturnAddressForWrappers;
LABEL_13:
  v23[2] = a5;
  v23[1] = HandleInformation;
  v23[6] = Handle;
  LODWORD(v23[5]) = DesiredAccess;
  v23[4] = ObjectType;
  LOBYTE(v23[3]) = AccessMode;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(_QWORD *))*(i - 1))(v23);
  }
LABEL_18:
  Object = 0LL;
  v18 = ObReferenceObjectByHandle(Handle, DesiredAccess, ObjectType, AccessMode, &Object, HandleInformation);
  LODWORD(v23[7]) = v18;
  *a5 = Object;
  if ( APIThunkContextById )
  {
    v19 = (_QWORD **)(APIThunkContextById + 6);
    v20 = *v19;
    if ( *v19 != v19 )
    {
      do
      {
        if ( v20 != (_QWORD *)16 )
          ((void (__fastcall *)(_QWORD *))*(v20 - 1))(v23);
        v20 = (_QWORD *)*v20;
      }
      while ( v20 != v19 );
      return LODWORD(v23[7]);
    }
  }
  return v18;
}
