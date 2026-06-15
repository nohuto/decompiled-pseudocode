/*
 * XREFs of ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18003E51C
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x18003DAEC (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 * Callees:
 *     ?GetLength@CAcl@ATL@@QEBAIXZ @ 0x18003E628 (-GetLength@CAcl@ATL@@QEBAIXZ.c)
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x18003E698 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ?AllocateAndInitializeSecurityDescriptor@CSecurityDesc@ATL@@IEAAXXZ @ 0x18003E844 (-AllocateAndInitializeSecurityDescriptor@CSecurityDesc@ATL@@IEAAXXZ.c)
 *     _invalid_parameter_noinfo @ 0x18005F922 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800C3178 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x180117DFC (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x180117E24 (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 *     ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x18011802C (-MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CSecurityDesc::SetDacl(ATL::CSecurityDesc *this, const struct ATL::CDacl *a2, char a3)
{
  void *v5; // rcx
  size_t Length; // rbp
  struct _ACL *v7; // rdi
  const struct _ACL *PACL; // rax
  BOOL v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int Error; // ebx
  WINBOOL bDaclPresent; // [rsp+40h] [rbp+8h] BYREF
  WINBOOL bDaclDefaulted; // [rsp+50h] [rbp+18h] BYREF
  void *Block; // [rsp+58h] [rbp+20h] BYREF

  LOBYTE(bDaclDefaulted) = a3;
  v5 = (void *)*((_QWORD *)this + 1);
  if ( v5 )
  {
    ATL::CSecurityDesc::MakeAbsolute(this);
    v5 = (void *)*((_QWORD *)this + 1);
  }
  Block = 0LL;
  if ( v5 )
  {
    if ( !GetSecurityDescriptorDacl(v5, &bDaclPresent, (PACL *)&Block, &bDaclDefaulted) )
      ATL::AtlThrowLastWin32();
  }
  else
  {
    ATL::CSecurityDesc::AllocateAndInitializeSecurityDescriptor(this);
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
    if ( Length )
    {
      if ( !PACL )
      {
        memset_0(v7, 0, (unsigned int)Length);
        *(_DWORD *)_o__errno(v11, v10) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memcpy_0(v7, PACL, (unsigned int)Length);
    }
  }
  v9 = *((_BYTE *)a2 + 16) || v7;
  if ( !SetSecurityDescriptorDacl(*((PSECURITY_DESCRIPTOR *)this + 1), v9, v7, 0) )
  {
    Error = ATL::AtlHresultFromLastError();
    free(v7);
    ATL::AtlThrowImpl(Error);
  }
  free(Block);
}
