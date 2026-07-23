/*
 * XREFs of sub_140721254 @ 0x140721254
 * Callers:
 *     sub_140721010 @ 0x140721010 (sub_140721010.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_14067F480 @ 0x14067F480 (sub_14067F480.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1407213B0 (SeQuerySecurityDescriptorInfo.c)
 *     sub_140721B68 @ 0x140721B68 (sub_140721B68.c)
 *     sub_140721BAC @ 0x140721BAC (sub_140721BAC.c)
 *     sub_140721BF0 @ 0x140721BF0 (sub_140721BF0.c)
 *     sub_1407C05F4 @ 0x1407C05F4 (sub_1407C05F4.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB43C0 @ 0x140AB43C0 (sub_140AB43C0.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_140721254(
        _QWORD *a1,
        DWORD *a2,
        void *a3,
        ULONG *a4,
        PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor)
{
  PSECURITY_DESCRIPTOR v8; // rsi
  char v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // r15
  int v14; // ebx
  PPRIVILEGE_SET v15; // rcx
  __int128 v17; // [rsp+20h] [rbp-20h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+30h] [rbp-10h]

  ObjectsSecurityDescriptor = 0LL;
  v17 = 0LL;
  WORD1(v17) = -1;
  v8 = 0LL;
  v9 = 0;
  *(_OWORD *)Privileges = 0LL;
  v13 = sub_140AB46D0(a1, a2, a3);
  if ( v13 )
  {
    sub_140AB4370();
    v9 = 1;
    v14 = sub_1407C05F4(&v17, a1[1]);
    if ( v14 >= 0 )
    {
      sub_140721B68(&v17);
      v14 = sub_140AB43C0(a1, 0LL);
      if ( v14 >= 0 )
      {
        if ( !a1[7] && !a1[8]
          || (v14 = sub_14067F480(a1, &ObjectsSecurityDescriptor), v14 >= 0)
          && (v8 = ObjectsSecurityDescriptor, v14 = sub_140AB43C0(a1, ObjectsSecurityDescriptor), v14 >= 0) )
        {
          ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)(sub_140721BF0(&v17, v8, 0LL) + 32);
          v14 = SeQuerySecurityDescriptorInfo(a2, a3, a4, &ObjectsSecurityDescriptor);
          if ( v14 >= 0 )
            v14 = 0;
        }
      }
      sub_140721BAC(&v17);
    }
  }
  else
  {
    v14 = -1073741431;
  }
  v15 = Privileges[1];
  if ( Privileges[1] )
    SeFreePrivileges(Privileges[1]);
  if ( v9 )
    sub_140AB4260(v15, v10, v11, v12);
  if ( v13 )
    sub_140AB42A0(v15, v10);
  return (unsigned int)v14;
}
