/*
 * XREFs of ?AllocateResourceSecurityDescriptor@DXGVAILOBJECT@@QEAAJEKPEAPEAX@Z @ 0x1C0350290
 * Callers:
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C0350B5C (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?GetHandleProcessSession@DXGVAILOBJECT@@QEAAJPEAK@Z @ 0x1C0351388 (-GetHandleProcessSession@DXGVAILOBJECT@@QEAAJPEAK@Z.c)
 *     ?InitializeDWMSid@DXGVAILOBJECT@@QEAAXKPEAX@Z @ 0x1C0351490 (-InitializeDWMSid@DXGVAILOBJECT@@QEAAXKPEAX@Z.c)
 */

__int64 __fastcall DXGVAILOBJECT::AllocateResourceSecurityDescriptor(
        DXGVAILOBJECT *this,
        char a2,
        ACCESS_MASK a3,
        void **a4)
{
  int v5; // r13d
  NTSTATUS ObjectSecurity; // eax
  __int64 v8; // rbx
  NTSTATUS DaclSecurityDescriptor; // eax
  __int64 v10; // rdx
  int HandleProcessSession; // eax
  unsigned int v12; // eax
  unsigned int v13; // r15d
  WORD v14; // di
  NTSTATUS OwnerSecurityDescriptor; // eax
  ULONG v16; // eax
  __int64 v17; // rsi
  ULONG v18; // r14d
  NTSTATUS GroupSecurityDescriptor; // eax
  ULONG v20; // r12d
  struct _ACL *v21; // rcx
  NTSTATUS v22; // eax
  ULONG v23; // eax
  ULONG v24; // r13d
  __int64 v25; // r9
  char *v26; // rax
  char *v27; // rdi
  NTSTATUS v28; // eax
  NTSTATUS v29; // eax
  NTSTATUS v30; // eax
  struct _ACL *v31; // r14
  NTSTATUS Acl; // eax
  struct _ACL *v33; // rax
  unsigned __int16 v34; // si
  NTSTATUS v35; // eax
  NTSTATUS v36; // eax
  NTSTATUS v37; // eax
  NTSTATUS v38; // eax
  unsigned __int8 DaclPresent; // [rsp+30h] [rbp-49h] BYREF
  unsigned __int8 DaclDefaulted; // [rsp+31h] [rbp-48h] BYREF
  unsigned __int8 MemoryAllocated[6]; // [rsp+32h] [rbp-47h] BYREF
  PVOID Ace; // [rsp+38h] [rbp-41h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v45; // [rsp+48h] [rbp-31h] BYREF
  PACL Dacl; // [rsp+50h] [rbp-29h] BYREF
  ACCESS_MASK AccessMask; // [rsp+58h] [rbp-21h]
  PSID Owner; // [rsp+60h] [rbp-19h] BYREF
  PSID Group; // [rsp+68h] [rbp-11h] BYREF
  void **v50; // [rsp+70h] [rbp-9h]
  _BYTE Sid[24]; // [rsp+78h] [rbp-1h] BYREF

  v45 = -1;
  AccessMask = a3;
  SecurityDescriptor = 0LL;
  Dacl = 0LL;
  MemoryAllocated[0] = 0;
  v5 = 0;
  Owner = 0LL;
  Group = 0LL;
  v50 = a4;
  ObjectSecurity = ObGetObjectSecurity(this, &SecurityDescriptor, MemoryAllocated);
  LODWORD(v8) = ObjectSecurity;
  if ( !SecurityDescriptor )
    goto LABEL_45;
  if ( ObjectSecurity < 0 )
    goto LABEL_47;
  DaclPresent = 0;
  DaclDefaulted = 0;
  DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Dacl, &DaclDefaulted);
  v8 = DaclSecurityDescriptor;
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_4;
  if ( !DaclPresent || DaclDefaulted )
  {
LABEL_45:
    v10 = -1073741786LL;
    LODWORD(v8) = -1073741786;
    goto LABEL_46;
  }
  HandleProcessSession = DXGVAILOBJECT::GetHandleProcessSession(this, &v45);
  v8 = HandleProcessSession;
  if ( HandleProcessSession < 0 )
    goto LABEL_4;
  v12 = *((_DWORD *)this + 34);
  v13 = v45;
  if ( v12 != v45 )
  {
    LODWORD(v8) = -1073741790;
    WdLogSingleEntry3(3LL, -1073741790LL, v12, v45);
    goto LABEL_47;
  }
  v14 = 0;
  if ( !a2 )
    goto LABEL_14;
  DaclDefaulted = 0;
  OwnerSecurityDescriptor = RtlGetOwnerSecurityDescriptor(SecurityDescriptor, &Owner, &DaclDefaulted);
  v8 = OwnerSecurityDescriptor;
  if ( OwnerSecurityDescriptor < 0 )
  {
LABEL_4:
    v10 = v8;
LABEL_46:
    WdLogSingleEntry1(3LL, v10);
    goto LABEL_47;
  }
  if ( Owner )
  {
    v16 = RtlLengthSid(Owner);
    v17 = v16;
    v18 = v16;
    goto LABEL_15;
  }
LABEL_14:
  v17 = 0LL;
  v18 = 0;
  if ( !a2 )
    goto LABEL_18;
LABEL_15:
  DaclPresent = 0;
  GroupSecurityDescriptor = RtlGetGroupSecurityDescriptor(SecurityDescriptor, &Group, &DaclPresent);
  v8 = GroupSecurityDescriptor;
  if ( GroupSecurityDescriptor < 0 )
    goto LABEL_4;
  if ( Group )
  {
    v20 = RtlLengthSid(Group);
    goto LABEL_19;
  }
LABEL_18:
  v20 = 0;
LABEL_19:
  v21 = Dacl;
  Ace = 0LL;
  if ( Dacl->AceCount )
  {
    while ( 1 )
    {
      v22 = RtlGetAce(v21, v14, &Ace);
      v8 = v22;
      if ( v22 < 0 )
        goto LABEL_4;
      v23 = RtlLengthSid((char *)Ace + 8);
      v21 = Dacl;
      ++v14;
      v5 += v23 + 12;
      if ( v14 >= Dacl->AceCount )
        goto LABEL_24;
    }
  }
  if ( (int)v8 < 0 )
    goto LABEL_47;
LABEL_24:
  DXGVAILOBJECT::InitializeDWMSid((DXGVAILOBJECT *)v21, v13, Sid);
  v24 = RtlLengthSid(Sid) + 12 + v5;
  v26 = (char *)operator new[](v24 + v20 + (_DWORD)v17 + 48, 0x4B677844u, 256LL, v25);
  v27 = v26;
  if ( !v26 )
  {
    LODWORD(v8) = -1073741801;
    WdLogSingleEntry2(3LL, v24 + v20 + (_DWORD)v17 + 48, -1073741801LL);
    goto LABEL_47;
  }
  v28 = RtlCreateSecurityDescriptor(v26, 1u);
  v8 = v28;
  if ( v28 < 0 )
    goto LABEL_40;
  if ( Owner )
  {
    RtlCopySid(v17, v27 + 40, Owner);
    v29 = RtlSetOwnerSecurityDescriptor(v27, v27 + 40, 0);
    v8 = v29;
    if ( v29 < 0 )
      goto LABEL_40;
  }
  if ( Group )
  {
    RtlCopySid(v20, &v27[v17 + 40], Group);
    v30 = RtlSetGroupSecurityDescriptor(v27, &v27[v17 + 40], 0);
    v8 = v30;
    if ( v30 < 0 )
      goto LABEL_40;
  }
  else
  {
    v17 = v18;
    if ( (int)v8 < 0 )
      goto LABEL_41;
  }
  v31 = (struct _ACL *)&v27[v17 + 40 + v20];
  Acl = RtlCreateAcl(v31, v24, 4u);
  v8 = Acl;
  if ( Acl < 0 )
    goto LABEL_40;
  v33 = Dacl;
  v34 = 0;
  Ace = 0LL;
  if ( Dacl->AceCount )
  {
    do
    {
      v35 = RtlGetAce(v33, v34, &Ace);
      v8 = v35;
      if ( v35 < 0 )
        goto LABEL_40;
      v36 = RtlAddAce(v31, 4u, 0, Ace, *((unsigned __int16 *)Ace + 1));
      v8 = v36;
      if ( v36 < 0 )
        goto LABEL_40;
      v33 = Dacl;
    }
    while ( ++v34 < Dacl->AceCount );
  }
  v37 = RtlAddAccessAllowedAce(v31, 4u, AccessMask, Sid);
  v8 = v37;
  if ( v37 < 0 || (v38 = RtlSetDaclSecurityDescriptor(v27, 1u, v31, 0), v8 = v38, v38 < 0) )
LABEL_40:
    WdLogSingleEntry1(3LL, v8);
LABEL_41:
  if ( v27 )
  {
    if ( (int)v8 < 0 )
      operator delete[](v27);
    else
      *v50 = v27;
  }
LABEL_47:
  if ( SecurityDescriptor )
    ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated[0]);
  return (unsigned int)v8;
}
