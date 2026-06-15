/*
 * XREFs of ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x18000B720
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180045290 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180012B04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x180016010 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x180044BA0 (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ATL::CSecurityDesc::MakeSelfRelative(ATL::CSecurityDesc *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rax
  void *v5; // rdi
  int Error; // ebx
  WORD pControl; // [rsp+30h] [rbp+8h] BYREF
  DWORD dwBufferLength; // [rsp+38h] [rbp+10h] BYREF
  DWORD dwRevision; // [rsp+40h] [rbp+18h] BYREF

  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    pControl = 0;
    if ( !GetSecurityDescriptorControl(v2, &pControl, &dwRevision) )
      ATL::AtlThrowImpl(-2147467259);
    if ( (pControl & 0x8000u) == 0 )
    {
      v3 = (void *)*((_QWORD *)this + 1);
      dwBufferLength = 0;
      MakeSelfRelativeSD(v3, 0LL, &dwBufferLength);
      if ( GetLastError() != 122 )
        ATL::AtlThrowLastWin32();
      v4 = malloc(dwBufferLength);
      v5 = v4;
      if ( !v4 )
        ATL::AtlThrowImpl(-2147024882);
      if ( !MakeSelfRelativeSD(*((PSECURITY_DESCRIPTOR *)this + 1), v4, &dwBufferLength) )
      {
        Error = ATL::AtlHresultFromLastError();
        free(v5);
        ATL::AtlThrowImpl(Error);
      }
      (*(void (__fastcall **)(ATL::CSecurityDesc *))(*(_QWORD *)this + 8LL))(this);
      *((_QWORD *)this + 1) = v5;
    }
  }
}
