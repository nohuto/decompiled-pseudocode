/*
 * XREFs of ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x180045C7C
 * Callers:
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x180046344 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180012B04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetControl@CSecurityDesc@ATL@@QEBA_NPEAG@Z @ 0x180015FD0 (-GetControl@CSecurityDesc@ATL@@QEBA_NPEAG@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x180016010 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x180044BA0 (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ATL::CSecurityDesc::MakeAbsolute(PSECURITY_DESCRIPTOR *this)
{
  PSECURITY_DESCRIPTOR v2; // rcx
  void *v3; // r12
  DWORD v4; // ecx
  void *v5; // rax
  void *pOwner; // r15
  DWORD v7; // eax
  void *pPrimaryGroup; // r14
  DWORD v9; // eax
  struct _ACL *v10; // rsi
  DWORD v11; // eax
  struct _ACL *pSacl; // rdi
  signed int Error; // ebx
  DWORD dwDaclSize; // [rsp+60h] [rbp-10h] BYREF
  DWORD dwAbsoluteSecurityDescriptorSize[3]; // [rsp+64h] [rbp-Ch] BYREF
  unsigned __int16 v16; // [rsp+B0h] [rbp+40h] BYREF
  DWORD dwPrimaryGroupSize; // [rsp+B8h] [rbp+48h] BYREF
  DWORD dwOwnerSize; // [rsp+C0h] [rbp+50h] BYREF
  DWORD dwSaclSize; // [rsp+C8h] [rbp+58h] BYREF

  if ( this[1] )
  {
    if ( !ATL::CSecurityDesc::GetControl((ATL::CSecurityDesc *)this, &v16) )
      goto LABEL_31;
    if ( (v16 & 0x8000u) == 0 )
      return;
    v2 = this[1];
    dwSaclSize = 0;
    dwDaclSize = 0;
    dwPrimaryGroupSize = 0;
    dwOwnerSize = 0;
    dwAbsoluteSecurityDescriptorSize[0] = 0;
    MakeAbsoluteSD(
      v2,
      0LL,
      dwAbsoluteSecurityDescriptorSize,
      0LL,
      &dwDaclSize,
      0LL,
      &dwSaclSize,
      0LL,
      &dwOwnerSize,
      0LL,
      &dwPrimaryGroupSize);
    if ( GetLastError() != 122 )
      ATL::AtlThrowLastWin32();
    v3 = malloc(dwAbsoluteSecurityDescriptorSize[0]);
    if ( !v3 )
      goto LABEL_31;
    v4 = dwOwnerSize;
    if ( dwOwnerSize )
    {
      v5 = malloc(dwOwnerSize);
      v4 = dwOwnerSize;
      pOwner = v5;
    }
    else
    {
      pOwner = 0LL;
    }
    if ( v4 && !pOwner )
      goto LABEL_31;
    v7 = dwPrimaryGroupSize;
    if ( dwPrimaryGroupSize )
    {
      pPrimaryGroup = malloc(dwPrimaryGroupSize);
      v7 = dwPrimaryGroupSize;
    }
    else
    {
      pPrimaryGroup = 0LL;
    }
    if ( v7 && !pPrimaryGroup
      || ((v9 = dwDaclSize) == 0
        ? (v10 = 0LL)
        : (struct _ACL *)(v10 = (struct _ACL *)malloc(dwDaclSize), v9 = dwDaclSize),
          v9 && !v10
       || ((v11 = dwSaclSize) == 0
         ? (pSacl = 0LL)
         : (struct _ACL *)(pSacl = (struct _ACL *)malloc(dwSaclSize), v11 = dwSaclSize),
           v11 && !pSacl)) )
    {
LABEL_31:
      ATL::AtlThrowImpl(-2147467259);
    }
    if ( !MakeAbsoluteSD(
            this[1],
            v3,
            dwAbsoluteSecurityDescriptorSize,
            v10,
            &dwDaclSize,
            pSacl,
            &dwSaclSize,
            pOwner,
            &dwOwnerSize,
            pPrimaryGroup,
            &dwPrimaryGroupSize) )
    {
      Error = ATL::AtlHresultFromLastError();
      free(v3);
      free(pOwner);
      free(pPrimaryGroup);
      free(v10);
      free(pSacl);
      ATL::AtlThrowImpl(Error);
    }
    (*((void (__fastcall **)(PSECURITY_DESCRIPTOR *))*this + 1))(this);
    this[1] = v3;
  }
}
