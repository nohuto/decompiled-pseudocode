/*
 * XREFs of SeFilterToken @ 0x140831700
 * Callers:
 *     sub_1408315A4 @ 0x1408315A4 (sub_1408315A4.c)
 * Callees:
 *     sub_140659D50 @ 0x140659D50 (sub_140659D50.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_14078E3F0 @ 0x14078E3F0 (sub_14078E3F0.c)
 */

NTSTATUS __stdcall SeFilterToken(
        PACCESS_TOKEN ExistingToken,
        ULONG Flags,
        PTOKEN_GROUPS SidsToDisable,
        PTOKEN_PRIVILEGES PrivilegesToDelete,
        PTOKEN_GROUPS RestrictedSids,
        PACCESS_TOKEN *FilteredToken)
{
  PACCESS_TOKEN *v6; // rdi
  ULONG GroupCount; // ebx
  ULONG v8; // r10d
  SID_AND_ATTRIBUTES *Groups; // r11
  ULONG PrivilegeCount; // esi
  NTSTATUS v12; // ebx
  ULONG v14; // ecx
  ULONG *p_Attributes; // rax
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  v6 = FilteredToken;
  GroupCount = 0;
  Object = 0LL;
  v8 = 0;
  Groups = 0LL;
  PrivilegeCount = 0;
  *FilteredToken = 0LL;
  if ( SidsToDisable )
    GroupCount = SidsToDisable->GroupCount;
  if ( PrivilegesToDelete )
    PrivilegeCount = PrivilegesToDelete->PrivilegeCount;
  if ( RestrictedSids
    && (v8 = RestrictedSids->GroupCount, Groups = RestrictedSids->Groups, v14 = 0, RestrictedSids->GroupCount) )
  {
    p_Attributes = &RestrictedSids->Groups[0].Attributes;
    while ( !*p_Attributes )
    {
      ++v14;
      p_Attributes += 4;
      if ( v14 >= v8 )
        goto LABEL_6;
    }
    return -1073741811;
  }
  else
  {
LABEL_6:
    v12 = sub_14078E3F0(
            (__int64)ExistingToken,
            0,
            Flags,
            GroupCount,
            (unsigned __int64)SidsToDisable->Groups & -(__int64)(SidsToDisable != 0LL),
            PrivilegeCount,
            (_DWORD *)((unsigned __int64)PrivilegesToDelete->Privileges & -(__int64)(PrivilegesToDelete != 0LL)),
            v8,
            Groups,
            0,
            &Object);
    if ( v12 >= 0 )
    {
      v12 = sub_140729C30((char *)Object, 0LL, 0, 0, 0, 0LL, 0LL);
      if ( v12 >= 0 )
      {
        sub_140659D50(Object);
        *v6 = Object;
      }
    }
    return v12;
  }
}
