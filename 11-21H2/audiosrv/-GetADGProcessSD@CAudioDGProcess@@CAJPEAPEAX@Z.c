/*
 * XREFs of ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x18003DAEC
 * Callers:
 *     ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x18003D7B0 (-LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z.c)
 * Callees:
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18003DCEC (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x18003DF8C (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     ??1CSid@ATL@@UEAA@XZ @ 0x18003E144 (--1CSid@ATL@@UEAA@XZ.c)
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x18003E330 (--1CDacl@ATL@@UEAA@XZ.c)
 *     ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x18003E3FC (-MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18003E51C (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x18003F660 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005F02C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioDGProcess::GetADGProcessSD(void **a1)
{
  const struct ATL::CSid *v2; // rax
  unsigned __int8 v3; // r9
  bool v4; // bl
  unsigned __int8 v5; // r9
  bool v6; // bl
  bool v7; // r8
  DWORD SecurityDescriptorLength; // ebx
  void *v9; // rax
  void **v11; // [rsp+60h] [rbp-F8h] BYREF
  PSECURITY_DESCRIPTOR pSecurityDescriptor; // [rsp+68h] [rbp-F0h]
  _QWORD v13[2]; // [rsp+70h] [rbp-E8h] BYREF
  char v14; // [rsp+80h] [rbp-D8h]
  int v15; // [rsp+84h] [rbp-D4h]
  __int128 v16; // [rsp+88h] [rbp-D0h]
  __int64 v17; // [rsp+98h] [rbp-C0h]
  int v18; // [rsp+A0h] [rbp-B8h]
  struct _SID_IDENTIFIER_AUTHORITY v19; // [rsp+B0h] [rbp-A8h] BYREF
  _BYTE v20[128]; // [rsp+C0h] [rbp-98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+0h]

  v11 = &ATL::CSecurityDesc::`vftable';
  pSecurityDescriptor = 0LL;
  *(_DWORD *)v19.Value = 0;
  *(_WORD *)&v19.Value[4] = 1280;
  v13[1] = 0LL;
  v14 = 0;
  v15 = 2;
  v13[0] = &ATL::CDacl::`vftable';
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  v2 = (const struct ATL::CSid *)ATL::CSid::CSid((ATL::CSid *)v20, &v19, 6u, 80LL);
  v4 = !ATL::CDacl::AddAllowedAce((ATL::CDacl *)v13, v2, 0x10000000u, v3);
  ATL::CSid::~CSid((ATL::CSid *)v20);
  if ( v4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)0x80004005LL,
      -1618417719);
    ATL::CDacl::~CDacl((ATL::CDacl *)v13);
    v11 = &ATL::CSecurityDesc::`vftable';
    ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v11);
    return 2147500037LL;
  }
  else
  {
    ATL::CSid::CSid((ATL::CSid *)v20, (PSID_IDENTIFIER_AUTHORITY)&ATL::Sids::SecurityNTAuthority, 1u, 11LL);
    v6 = !ATL::CDacl::AddAllowedAce((ATL::CDacl *)v13, (const struct ATL::CSid *)v20, 0x1000u, v5);
    ATL::CSid::~CSid((ATL::CSid *)v20);
    if ( v6 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
        (const char *)0x80004005LL,
        -1618417719);
      ATL::CDacl::~CDacl((ATL::CDacl *)v13);
      v11 = &ATL::CSecurityDesc::`vftable';
      ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v11);
      return 2147500037LL;
    }
    else
    {
      ATL::CSecurityDesc::SetDacl((ATL::CSecurityDesc *)&v11, (const struct ATL::CDacl *)v13, v7);
      ATL::CSecurityDesc::MakeSelfRelative((ATL::CSecurityDesc *)&v11);
      ATL::CDacl::~CDacl((ATL::CDacl *)v13);
      SecurityDescriptorLength = GetSecurityDescriptorLength(pSecurityDescriptor);
      v9 = operator new[](SecurityDescriptorLength, (const struct std::nothrow_t *)&std::nothrow);
      *a1 = v9;
      if ( v9 )
      {
        memcpy_0(v9, pSecurityDescriptor, SecurityDescriptorLength);
        v11 = &ATL::CSecurityDesc::`vftable';
        ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v11);
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4C,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
          (const char *)0x8007000ELL,
          -1618417719);
        v11 = &ATL::CSecurityDesc::`vftable';
        ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v11);
        return 2147942414LL;
      }
    }
  }
}
