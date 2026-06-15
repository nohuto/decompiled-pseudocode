/*
 * XREFs of ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x18003F400
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18003EB4C (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x180040360 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000958C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x18003E430 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

const struct _ACL *__fastcall ATL::CAcl::GetPACL(ATL::CAcl *this)
{
  DWORD v2; // esi
  unsigned int v3; // ebx
  unsigned int v4; // ebp
  __int64 v5; // rax
  struct _ACL *v6; // rax
  unsigned int i; // esi
  __int64 v8; // rax
  __int64 v9; // r14
  DWORD nAceListLength; // ebx
  void *v11; // rax
  signed int v13; // ebx
  signed int Error; // ebx

  if ( !*((_QWORD *)this + 1) && !*((_BYTE *)this + 16) )
  {
    v2 = 8;
    v3 = 0;
    v4 = (*(__int64 (__fastcall **)(ATL::CAcl *))(*(_QWORD *)this + 8LL))(this);
    if ( v4 )
    {
      do
      {
        v5 = (*(__int64 (__fastcall **)(ATL::CAcl *, _QWORD))(*(_QWORD *)this + 32LL))(this, v3);
        if ( v5 )
          v2 += (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        ++v3;
      }
      while ( v3 < v4 );
    }
    v6 = (struct _ACL *)malloc(v2);
    *((_QWORD *)this + 1) = v6;
    if ( !v6 )
      ATL::AtlThrowImpl(-2147024882);
    if ( !InitializeAcl(v6, v2, *((_DWORD *)this + 5)) )
    {
      Error = ATL::AtlHresultFromLastError();
      free(*((void **)this + 1));
      *((_QWORD *)this + 1) = 0LL;
      ATL::AtlThrowImpl(Error);
    }
    (*(void (__fastcall **)(ATL::CAcl *))(*(_QWORD *)this + 40LL))(this);
    for ( i = 0; i < v4; ++i )
    {
      v8 = (*(__int64 (__fastcall **)(ATL::CAcl *, _QWORD))(*(_QWORD *)this + 32LL))(this, i);
      v9 = v8;
      if ( v8 )
      {
        nAceListLength = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        v11 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
        if ( AddAce(*((PACL *)this + 1), *((_DWORD *)this + 5), 0xFFFFFFFF, v11, nAceListLength) )
          continue;
      }
      v13 = ATL::AtlHresultFromLastError();
      free(*((void **)this + 1));
      *((_QWORD *)this + 1) = 0LL;
      ATL::AtlThrowImpl(v13);
    }
  }
  return (const struct _ACL *)*((_QWORD *)this + 1);
}
