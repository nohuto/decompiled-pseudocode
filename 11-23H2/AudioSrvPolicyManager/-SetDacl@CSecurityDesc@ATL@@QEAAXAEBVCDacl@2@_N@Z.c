/*
 * XREFs of ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x180044EB4
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180043E00 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x18000DD70 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180012AF4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x180015E20 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     __security_check_cookie @ 0x1800165A0 (__security_check_cookie.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x180043710 (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 *     ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x1800447EC (-MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x1800452EC (-memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ATL::CSecurityDesc::SetDacl(PSECURITY_DESCRIPTOR *this, const struct ATL::CDacl *a2)
{
  BOOL v4; // ebp
  PSECURITY_DESCRIPTOR v5; // rcx
  void *v6; // rax
  signed int Error; // ebx
  struct _ACL *PACL; // rax
  unsigned int v9; // eax
  unsigned int v10; // r14d
  ATL::Checked *v11; // rsi
  const struct _ACL *v12; // rax
  signed int v13; // ebx
  PACL pDacl; // [rsp+20h] [rbp-48h] BYREF
  WINBOOL bDaclDefaulted; // [rsp+28h] [rbp-40h] BYREF
  WINBOOL bDaclPresent; // [rsp+2Ch] [rbp-3Ch] BYREF
  _BYTE pAclInformation[4]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-34h]

  if ( this[1] )
    ATL::CSecurityDesc::MakeAbsolute(this);
  pDacl = 0LL;
  v4 = 1;
  v5 = this[1];
  if ( v5 )
  {
    if ( !GetSecurityDescriptorDacl(v5, &bDaclPresent, &pDacl, &bDaclDefaulted) )
      ATL::AtlThrowLastWin32();
  }
  else
  {
    v6 = malloc(0x28uLL);
    this[1] = v6;
    if ( !v6 )
      goto LABEL_25;
    if ( !InitializeSecurityDescriptor(v6, 1u) )
    {
      Error = ATL::AtlHresultFromLastError();
      free(this[1]);
      this[1] = 0LL;
      ATL::AtlThrowImpl(Error);
    }
  }
  if ( *((_BYTE *)a2 + 16) || !(*(unsigned int (__fastcall **)(const struct ATL::CDacl *))(*(_QWORD *)a2 + 8LL))(a2) )
  {
    v11 = 0LL;
    goto LABEL_19;
  }
  PACL = (struct _ACL *)ATL::CAcl::GetPACL(a2);
  if ( *((_BYTE *)a2 + 16) )
  {
    v9 = 0;
  }
  else
  {
    if ( !GetAclInformation(PACL, pAclInformation, 0xCu, AclSizeInformation) )
      ATL::AtlThrowLastWin32();
    v9 = v18;
  }
  v10 = v9;
  v11 = (ATL::Checked *)malloc(v9);
  if ( !v11 )
LABEL_25:
    ATL::AtlThrowImpl(-2147024882);
  v12 = ATL::CAcl::GetPACL(a2);
  ATL::Checked::memcpy_s(v11, (void *)v10, (unsigned __int64)v12, (const void *)v10, (unsigned __int64)pDacl);
LABEL_19:
  if ( !*((_BYTE *)a2 + 16) && !v11 )
    v4 = 0;
  if ( !SetSecurityDescriptorDacl(this[1], v4, (PACL)v11, 0) )
  {
    v13 = ATL::AtlHresultFromLastError();
    free(v11);
    ATL::AtlThrowImpl(v13);
  }
  free(pDacl);
}
