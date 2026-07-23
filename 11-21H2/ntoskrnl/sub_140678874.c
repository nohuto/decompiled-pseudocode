/*
 * XREFs of sub_140678874 @ 0x140678874
 * Callers:
 *     sub_140679ADC @ 0x140679ADC (sub_140679ADC.c)
 *     sub_140679BEC @ 0x140679BEC (sub_140679BEC.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140203DD0 (RtlGetDaclSecurityDescriptor.c)
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     RtlGetAce @ 0x1402A4750 (RtlGetAce.c)
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQuerySecurityObject @ 0x14041E3C0 (ZwQuerySecurityObject.c)
 *     RtlGetGroupSecurityDescriptor @ 0x140678970 (RtlGetGroupSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlAddAce @ 0x140724BB0 (RtlAddAce.c)
 *     RtlLengthSecurityDescriptor @ 0x1407254F0 (RtlLengthSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x140726610 (RtlValidSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x140744160 (RtlAbsoluteToSelfRelativeSD.c)
 *     sub_1407B4900 @ 0x1407B4900 (sub_1407B4900.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140678874(HANDLE Handle, _QWORD *a2)
{
  ACL *v4; // r12
  void *v5; // r14
  NTSTATUS v6; // eax
  NTSTATUS GroupSecurityDescriptor; // ebx
  ULONG v9; // esi
  _BYTE *Pool2; // rdi
  NTSTATUS v11; // eax
  ULONG v12; // r15d
  PACL v13; // rsi
  ULONG v14; // ebx
  ACL *v15; // rax
  ULONG v16; // eax
  void *v17; // rax
  BOOLEAN DaclPresent; // [rsp+30h] [rbp-69h] BYREF
  BOOLEAN GroupDefaulted[3]; // [rsp+31h] [rbp-68h] BYREF
  ULONG LengthNeeded; // [rsp+34h] [rbp-65h] BYREF
  PSID Group; // [rsp+38h] [rbp-61h] BYREF
  PACL Dacl; // [rsp+40h] [rbp-59h] BYREF
  PVOID Ace; // [rsp+48h] [rbp-51h] BYREF
  PVOID AceList; // [rsp+50h] [rbp-49h] BYREF
  _OWORD AbsoluteSecurityDescriptor[2]; // [rsp+58h] [rbp-41h] BYREF
  __int64 v26; // [rsp+78h] [rbp-21h]
  _BYTE SecurityDescriptor[56]; // [rsp+80h] [rbp-19h] BYREF

  *a2 = 0LL;
  v26 = 0LL;
  LengthNeeded = 0;
  Group = 0LL;
  DaclPresent = 0;
  Dacl = 0LL;
  Ace = 0LL;
  v4 = 0LL;
  AceList = 0LL;
  memset(AbsoluteSecurityDescriptor, 0, sizeof(AbsoluteSecurityDescriptor));
  v5 = 0LL;
  v6 = ZwQuerySecurityObject(Handle, 2u, SecurityDescriptor, 0x34u, &LengthNeeded);
  GroupSecurityDescriptor = v6;
  if ( v6 == -1073741789 )
    return (unsigned int)-1073741720;
  if ( v6 >= 0 )
  {
    GroupSecurityDescriptor = RtlGetGroupSecurityDescriptor(SecurityDescriptor, &Group, GroupDefaulted);
    if ( GroupSecurityDescriptor >= 0 )
    {
      if ( !Group )
        return (unsigned int)-1073741722;
      if ( !RtlEqualSid(Group, qword_140A38800) )
        return (unsigned int)-1073741720;
      v9 = 240;
      Pool2 = (_BYTE *)ExAllocatePool2(256LL, 240LL, 1667526736LL);
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      while ( 1 )
      {
        v11 = ZwQuerySecurityObject(Handle, 4u, Pool2, v9, &LengthNeeded);
        GroupSecurityDescriptor = v11;
        if ( v11 != -1073741789 )
          break;
        if ( LengthNeeded <= v9 )
          goto LABEL_38;
        v9 = LengthNeeded;
        ExFreePoolWithTag(Pool2, 0);
        Pool2 = (_BYTE *)ExAllocatePool2(256LL, v9, 1667526736LL);
        if ( !Pool2 )
          return (unsigned int)-1073741670;
      }
      v12 = 0;
      if ( v11 < 0 )
        goto LABEL_40;
      GroupSecurityDescriptor = RtlGetDaclSecurityDescriptor(Pool2, &DaclPresent, &Dacl, GroupDefaulted);
      if ( GroupSecurityDescriptor < 0 )
        goto LABEL_40;
      if ( DaclPresent && (v13 = Dacl) != 0LL )
      {
        if ( Dacl->AceCount )
        {
          do
          {
            GroupSecurityDescriptor = RtlGetAce(v13, v12, &Ace);
            if ( GroupSecurityDescriptor < 0 )
              goto LABEL_40;
            if ( !*(_BYTE *)Ace && (*((_DWORD *)Ace + 1) & 0xF003F) == 0xF003F && RtlEqualSid((char *)Ace + 8, ::Group) )
            {
              *a2 = Pool2;
              return (unsigned int)GroupSecurityDescriptor;
            }
          }
          while ( ++v12 < v13->AceCount );
        }
        v14 = RtlLengthSid(::Group) + v13->AclSize + 8;
        v15 = (ACL *)ExAllocatePool2(256LL, v14, 1667526736LL);
        v4 = v15;
        if ( !v15 )
          goto LABEL_37;
        GroupSecurityDescriptor = RtlCreateAcl(v15, v14, 2u);
        if ( GroupSecurityDescriptor >= 0 )
        {
          GroupSecurityDescriptor = RtlGetAce(v13, 0, &AceList);
          if ( GroupSecurityDescriptor >= 0 )
          {
            GroupSecurityDescriptor = RtlAddAce(v4, 2u, 0, AceList, v13->AclSize - 8);
            if ( GroupSecurityDescriptor >= 0 )
            {
              GroupSecurityDescriptor = sub_1407B4900((int)v4, 2, 2, 983103, ::Group, 0);
              if ( GroupSecurityDescriptor >= 0 )
              {
                GroupSecurityDescriptor = RtlCreateSecurityDescriptor(AbsoluteSecurityDescriptor, 1u);
                if ( GroupSecurityDescriptor >= 0 )
                {
                  GroupSecurityDescriptor = RtlSetDaclSecurityDescriptor(AbsoluteSecurityDescriptor, 1u, v4, 0);
                  if ( GroupSecurityDescriptor >= 0 )
                  {
                    if ( RtlValidSecurityDescriptor(AbsoluteSecurityDescriptor) )
                    {
                      v16 = RtlLengthSecurityDescriptor(AbsoluteSecurityDescriptor);
                      LODWORD(Group) = v16;
                      if ( v16 >= 0x28 )
                      {
                        v17 = (void *)ExAllocatePool2(256LL, v16, 1667526736LL);
                        v5 = v17;
                        if ( v17 )
                        {
                          GroupSecurityDescriptor = RtlAbsoluteToSelfRelativeSD(
                                                      AbsoluteSecurityDescriptor,
                                                      v17,
                                                      (PULONG)&Group);
                          if ( GroupSecurityDescriptor >= 0 )
                          {
                            *a2 = v5;
                            v5 = 0LL;
                          }
                          goto LABEL_40;
                        }
LABEL_37:
                        GroupSecurityDescriptor = -1073741670;
                        goto LABEL_40;
                      }
                    }
LABEL_38:
                    GroupSecurityDescriptor = -1073741595;
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        GroupSecurityDescriptor = -1073741275;
      }
LABEL_40:
      if ( Pool2 != SecurityDescriptor )
        ExFreePoolWithTag(Pool2, 0);
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
    }
  }
  return (unsigned int)GroupSecurityDescriptor;
}
