/*
 * XREFs of ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18005F444
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x18005E944 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 * Callees:
 *     memcpy_s @ 0x1800106EC (memcpy_s.c)
 *     ?GetLength@CAcl@ATL@@QEBAIXZ @ 0x18005F3D4 (-GetLength@CAcl@ATL@@QEBAIXZ.c)
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x18005F54C (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ?AllocateAndInitializeSecurityDescriptor@CSecurityDesc@ATL@@IEAAXXZ @ 0x18005F6F8 (-AllocateAndInitializeSecurityDescriptor@CSecurityDesc@ATL@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x1800CE7EC (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE814 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x1800CE834 (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 *     ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x1800CE9A0 (-MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CSecurityDesc::SetDacl(PSECURITY_DESCRIPTOR *this, const struct ATL::CDacl *a2, char a3)
{
  PSECURITY_DESCRIPTOR v5; // rcx
  unsigned int Length; // ebp
  struct _ACL *v7; // rdi
  const struct _ACL *PACL; // rax
  errno_t v9; // eax
  BOOL v10; // edx
  int Error; // ebx
  WINBOOL bDaclPresent; // [rsp+40h] [rbp+8h] BYREF
  WINBOOL bDaclDefaulted; // [rsp+50h] [rbp+18h] BYREF
  void *Block; // [rsp+58h] [rbp+20h] BYREF

  LOBYTE(bDaclDefaulted) = a3;
  if ( this[1] )
    ATL::CSecurityDesc::MakeAbsolute((ATL::CSecurityDesc *)this);
  Block = 0LL;
  v5 = this[1];
  if ( v5 )
  {
    if ( !GetSecurityDescriptorDacl(v5, &bDaclPresent, (PACL *)&Block, &bDaclDefaulted) )
      ATL::AtlThrowLastWin32();
  }
  else
  {
    ATL::CSecurityDesc::AllocateAndInitializeSecurityDescriptor((ATL::CSecurityDesc *)this);
  }
  if ( *((_BYTE *)a2 + 16) || !(*(unsigned int (__fastcall **)(const struct ATL::CDacl *))(*(_QWORD *)a2 + 8LL))(a2) )
  {
    v7 = 0LL;
  }
  else
  {
    Length = ATL::CAcl::GetLength(a2);
    v7 = (struct _ACL *)malloc(Length);
    if ( !v7 )
      ATL::AtlThrowImpl(-2147024882);
    PACL = ATL::CAcl::GetPACL(a2);
    v9 = memcpy_s(v7, Length, PACL, Length);
    if ( v9 )
    {
      if ( v9 == 12 )
        ATL::AtlThrowImpl(-2147024882);
      if ( v9 == 22 || v9 == 34 )
        ATL::AtlThrowImpl(-2147024809);
      if ( v9 != 80 )
        ATL::AtlThrowImpl(-2147467259);
    }
  }
  v10 = *((_BYTE *)a2 + 16) || v7;
  if ( !SetSecurityDescriptorDacl(this[1], v10, v7, 0) )
  {
    Error = ATL::AtlHresultFromLastError();
    free(v7);
    ATL::AtlThrowImpl(Error);
  }
  free(Block);
}
