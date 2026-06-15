/*
 * XREFs of ?GetACE@CAccessAce@CDacl@ATL@@UEBAPEAXXZ @ 0x18003F490
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18005F922 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800C3178 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

char *__fastcall ATL::CDacl::CAccessAce::GetACE(ATL::CDacl::CAccessAce *this)
{
  char *v1; // rbx
  size_t v3; // rsi
  char *v4; // rax
  __int64 v5; // rax
  DWORD LengthSid; // eax
  __int64 v7; // rdx
  size_t v8; // rbp
  size_t v9; // rsi
  void *v10; // rcx

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
    v8 = v3 - 8;
    v9 = LengthSid;
    v10 = v1 + 8;
    if ( !LengthSid )
      goto LABEL_8;
    if ( v1 == (char *)-8LL )
      goto LABEL_11;
    if ( this != (ATL::CDacl::CAccessAce *)-16LL && v8 >= LengthSid )
    {
      memcpy_0(v10, (char *)this + 16, LengthSid);
LABEL_8:
      *((_QWORD *)this + 17) = v1;
      return v1;
    }
    memset_0(v10, 0, v8);
    if ( this == (ATL::CDacl::CAccessAce *)-16LL )
    {
LABEL_11:
      *(_DWORD *)_o__errno(v10, v7) = 22;
    }
    else
    {
      if ( v8 >= v9 )
        goto LABEL_16;
      *(_DWORD *)_o__errno(v10, v7) = 34;
    }
    invalid_parameter_noinfo();
LABEL_16:
    ATL::AtlThrowImpl(-2147024809);
  }
  return v1;
}
