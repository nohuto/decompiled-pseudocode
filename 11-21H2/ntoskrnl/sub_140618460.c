/*
 * XREFs of sub_140618460 @ 0x140618460
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall sub_140618460(
        HANDLE Handle,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        PVOID *a5,
        POBJECT_HANDLE_INFORMATION HandleInformation)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rax
  __int64 *i; // rbx
  NTSTATUS v18; // eax
  PVOID *v19; // rdx
  unsigned int v20; // ecx
  _QWORD **v21; // rdi
  _QWORD *v22; // rbx
  PVOID Object; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v25[8]; // [rsp+40h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+A8h] [rbp+28h]

  memset(v25, 0, sizeof(v25));
  v12 = sub_140604844(358);
  if ( !v12 )
    goto LABEL_18;
  if ( dword_140C1B2A0
    && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (v11 = HIDWORD(qword_140D01450), (qword_140D01450 & 0x200000000LL) != 0))
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v12 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v15 = *((_DWORD *)v12 + 3);
  if ( (v15 & 0x18) == 0 )
  {
    if ( (v15 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v16 = sub_140628C98(v11, v10, v13, v14);
    goto LABEL_12;
  }
  v16 = retaddr;
LABEL_12:
  v25[0] = v16;
LABEL_13:
  v25[2] = a5;
  v25[1] = HandleInformation;
  v25[6] = Handle;
  LODWORD(v25[5]) = DesiredAccess;
  v25[4] = ObjectType;
  LOBYTE(v25[3]) = AccessMode;
  for ( i = (__int64 *)v12[4]; i != v12 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(v25, v10);
  }
LABEL_18:
  Object = 0LL;
  v18 = ObReferenceObjectByHandle(Handle, DesiredAccess, ObjectType, AccessMode, &Object, HandleInformation);
  v19 = a5;
  v20 = v18;
  LODWORD(v25[7]) = v18;
  *a5 = Object;
  if ( v12 )
  {
    v21 = (_QWORD **)(v12 + 6);
    v22 = *v21;
    if ( *v21 != v21 )
    {
      do
      {
        if ( v22 != (_QWORD *)16 )
          sub_14042A5E0(v25, v19);
        v22 = (_QWORD *)*v22;
      }
      while ( v22 != v21 );
      return LODWORD(v25[7]);
    }
  }
  return v20;
}
