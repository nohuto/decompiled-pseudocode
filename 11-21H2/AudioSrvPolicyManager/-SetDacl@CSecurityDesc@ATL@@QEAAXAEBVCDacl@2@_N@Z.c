/*
 * XREFs of ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x180040360
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18003EB4C (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000958C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x18003E430 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x18003E458 (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x18003F400 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x18003F87C (-MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x180040C20 (-memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ATL::CSecurityDesc::SetDacl(ATL::CSecurityDesc *this, const struct ATL::CDacl *a2)
{
  void *v4; // rcx
  BOOL v5; // ebp
  void *v6; // rax
  struct _ACL *PACL; // rax
  unsigned int v8; // eax
  unsigned int v9; // r14d
  ATL::Checked *v10; // rdi
  const struct _ACL *v11; // rax
  signed int v12; // ebx
  signed int Error; // ebx
  PACL pDacl; // [rsp+20h] [rbp-48h] BYREF
  WINBOOL bDaclDefaulted; // [rsp+28h] [rbp-40h] BYREF
  WINBOOL bDaclPresent; // [rsp+2Ch] [rbp-3Ch] BYREF
  _BYTE pAclInformation[4]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-34h]

  v4 = (void *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    ATL::CSecurityDesc::MakeAbsolute(this);
    v4 = (void *)*((_QWORD *)this + 1);
  }
  pDacl = 0LL;
  v5 = 1;
  if ( v4 )
  {
    if ( !GetSecurityDescriptorDacl(v4, &bDaclPresent, &pDacl, &bDaclDefaulted) )
      ATL::AtlThrowLastWin32();
  }
  else
  {
    v6 = malloc(0x28uLL);
    *((_QWORD *)this + 1) = v6;
    if ( !v6 )
      goto LABEL_24;
    if ( !InitializeSecurityDescriptor(v6, 1u) )
    {
      Error = ATL::AtlHresultFromLastError();
      free(*((void **)this + 1));
      *((_QWORD *)this + 1) = 0LL;
      ATL::AtlThrowImpl(Error);
    }
  }
  if ( *((_BYTE *)a2 + 16) || !(*(unsigned int (__fastcall **)(const struct ATL::CDacl *))(*(_QWORD *)a2 + 8LL))(a2) )
  {
    v10 = 0LL;
    goto LABEL_17;
  }
  PACL = (struct _ACL *)ATL::CAcl::GetPACL(a2);
  if ( *((_BYTE *)a2 + 16) )
  {
    v8 = 0;
  }
  else
  {
    if ( !GetAclInformation(PACL, pAclInformation, 0xCu, AclSizeInformation) )
      ATL::AtlThrowLastWin32();
    v8 = v18;
  }
  v9 = v8;
  v10 = (ATL::Checked *)malloc(v8);
  if ( !v10 )
LABEL_24:
    ATL::AtlThrowImpl(-2147024882);
  v11 = ATL::CAcl::GetPACL(a2);
  ATL::Checked::memcpy_s(v10, (void *)v9, (unsigned __int64)v11, (const void *)v9, (unsigned __int64)pDacl);
LABEL_17:
  if ( !*((_BYTE *)a2 + 16) && !v10 )
    v5 = 0;
  if ( !SetSecurityDescriptorDacl(*((PSECURITY_DESCRIPTOR *)this + 1), v5, (PACL)v10, 0) )
  {
    v12 = ATL::AtlHresultFromLastError();
    free(v10);
    ATL::AtlThrowImpl(v12);
  }
  free(pDacl);
}
