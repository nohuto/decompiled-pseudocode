/*
 * XREFs of ?GetACE@CAccessAce@CDacl@ATL@@UEBAPEAXXZ @ 0x180064560
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_s @ 0x1800106EC (memcpy_s.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE814 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

char *__fastcall ATL::CDacl::CAccessAce::GetACE(ATL::CDacl::CAccessAce *this)
{
  char *v1; // rdi
  size_t v3; // rbx
  char *v4; // rax
  __int64 v5; // rax
  DWORD LengthSid; // eax
  errno_t v7; // eax

  v1 = (char *)*((_QWORD *)this + 17);
  if ( !v1 )
  {
    v3 = (*(unsigned int (__fastcall **)(ATL::CDacl::CAccessAce *))(*(_QWORD *)this + 16LL))(this);
    v4 = (char *)malloc(v3);
    v1 = v4;
    if ( !v4 )
      ATL::AtlThrowImpl(-2147024882);
    memset_0(v4, 0, (unsigned int)v3);
    v1[1] = *((_BYTE *)this + 132);
    v5 = *(_QWORD *)this;
    *((_WORD *)v1 + 1) = v3;
    *v1 = (*(__int64 (__fastcall **)(ATL::CDacl::CAccessAce *))(v5 + 24))(this);
    *((_DWORD *)v1 + 1) = *((_DWORD *)this + 32);
    LengthSid = GetLengthSid((char *)this + 16);
    v7 = memcpy_s(v1 + 8, v3 - 8, (char *)this + 16, LengthSid);
    if ( v7 )
    {
      if ( v7 == 12 )
        ATL::AtlThrowImpl(-2147024882);
      if ( v7 == 22 || v7 == 34 )
        ATL::AtlThrowImpl(-2147024809);
      if ( v7 != 80 )
        ATL::AtlThrowImpl(-2147467259);
    }
    *((_QWORD *)this + 17) = v1;
  }
  return v1;
}
