/*
 * XREFs of sub_14091A000 @ 0x14091A000
 * Callers:
 *     sub_140689900 @ 0x140689900 (sub_140689900.c)
 *     sub_14068C820 @ 0x14068C820 (sub_14068C820.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_140254F78 @ 0x140254F78 (sub_140254F78.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     sub_14080C508 @ 0x14080C508 (sub_14080C508.c)
 */

_PRIVILEGE_SET *__fastcall sub_14091A000(ULONG_PTR a1, int a2)
{
  __int64 v2; // r12
  __int64 v3; // r15
  _PRIVILEGE_SET *p_Privileges; // rbx
  __int64 v5; // r8
  ULONG_PTR v7; // rdi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  unsigned __int64 *Luid; // rax
  __int64 v12; // rax
  void *v13; // r8
  _PRIVILEGE_SET *result; // rax
  _PRIVILEGE_SET Privileges; // [rsp+20h] [rbp-10h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = (unsigned int)(a2 + 4096);
  p_Privileges = &Privileges;
  v5 = v3;
  Privileges.Privilege[0].Luid = (LUID)&Privileges;
  *(_QWORD *)&Privileges.PrivilegeCount = &Privileges;
  if ( v3 < v2 )
  {
    v7 = a1 + 40;
    do
    {
      v8 = *(_QWORD *)v7;
      if ( (*(_BYTE *)(v7 + 8) & 1) != 0 && v8 )
        v8 ^= v7;
      while ( v8 )
      {
        if ( v5 >= *(_QWORD *)(v8 + 40) )
        {
          if ( v5 < *(_QWORD *)(v8 + 48) )
            break;
          v9 = *(_QWORD *)(v8 + 8);
        }
        else
        {
          v9 = *(_QWORD *)v8;
        }
        if ( (*(_BYTE *)(v7 + 8) & 1) != 0 && v9 )
          v8 ^= v9;
        else
          v8 = v9;
      }
      v10 = *(_QWORD *)(v8 + 48);
      sub_14080C508(a1, (_QWORD *)v8, v5, v10);
      if ( *(_QWORD *)(v8 + 40) == *(_QWORD *)(v8 + 48) )
      {
        RtlRbRemoveNode((PRTL_RB_TREE)v7, (PRTL_BALANCED_NODE)v8);
        Luid = (unsigned __int64 *)Privileges.Privilege[0].Luid;
        if ( **(_PRIVILEGE_SET ***)&Privileges.Privilege[0].Luid != &Privileges )
          goto LABEL_22;
        *(LUID *)(v8 + 8) = Privileges.Privilege[0].Luid;
        *(_QWORD *)v8 = &Privileges;
        *Luid = v8;
        Privileges.Privilege[0].Luid = (LUID)v8;
      }
      v5 = v10;
    }
    while ( v10 < v2 );
    p_Privileges = *(_PRIVILEGE_SET **)&Privileges.PrivilegeCount;
  }
  *(_QWORD *)(a1 + 8) = v3;
  v12 = *(_QWORD *)&p_Privileges->PrivilegeCount;
  if ( (_PRIVILEGE_SET *)p_Privileges->Privilege[0].Luid != &Privileges )
LABEL_22:
    __fastfail(3u);
  while ( 1 )
  {
    if ( *(_PRIVILEGE_SET **)(v12 + 8) != p_Privileges )
      goto LABEL_22;
    *(_QWORD *)&Privileges.PrivilegeCount = v12;
    *(_QWORD *)(v12 + 8) = &Privileges;
    result = &Privileges;
    if ( p_Privileges == &Privileges )
      return result;
    v13 = *(void **)&p_Privileges[2].Privilege[0].Attributes;
    if ( v13 )
      sub_140254F78((__int64)&Privileges, *(HANDLE **)(a1 + 24), v13);
    SeFreePrivileges(p_Privileges);
    p_Privileges = *(_PRIVILEGE_SET **)&Privileges.PrivilegeCount;
    if ( *(_PRIVILEGE_SET **)(*(_QWORD *)&Privileges.PrivilegeCount + 8LL) != &Privileges )
      goto LABEL_22;
    v12 = **(_QWORD **)&Privileges.PrivilegeCount;
  }
}
