/*
 * XREFs of ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x18005E954
 * Callers:
 *     ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x18005E5A4 (-LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x18005E90C (--1CDacl@ATL@@UEAA@XZ.c)
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18005EB90 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x18005ED08 (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     ??1CSid@ATL@@UEAA@XZ @ 0x18005EF3C (--1CSid@ATL@@UEAA@XZ.c)
 *     ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x18005F1B8 (-MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x18005F2A0 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18005F454 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006707C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18006A819 (memcpy_0.c)
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
  int v11; // [rsp+20h] [rbp-138h]
  int v12; // [rsp+28h] [rbp-130h]
  int v13; // [rsp+30h] [rbp-128h]
  int v14; // [rsp+38h] [rbp-120h]
  int v15; // [rsp+40h] [rbp-118h]
  void **v16; // [rsp+60h] [rbp-F8h] BYREF
  PSECURITY_DESCRIPTOR pSecurityDescriptor; // [rsp+68h] [rbp-F0h]
  _QWORD v18[2]; // [rsp+70h] [rbp-E8h] BYREF
  char v19; // [rsp+80h] [rbp-D8h]
  int v20; // [rsp+84h] [rbp-D4h]
  __int128 v21; // [rsp+88h] [rbp-D0h]
  __int64 v22; // [rsp+98h] [rbp-C0h]
  int v23; // [rsp+A0h] [rbp-B8h]
  struct _SID_IDENTIFIER_AUTHORITY v24; // [rsp+B0h] [rbp-A8h] BYREF
  _BYTE v25[128]; // [rsp+C0h] [rbp-98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+0h]

  v16 = &ATL::CSecurityDesc::`vftable';
  pSecurityDescriptor = 0LL;
  *(_DWORD *)v24.Value = 0;
  *(_WORD *)&v24.Value[4] = 1280;
  v18[1] = 0LL;
  v19 = 0;
  v20 = 2;
  v18[0] = &ATL::CDacl::`vftable';
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0;
  v15 = 1366760775;
  v14 = -116925420;
  v13 = -1669870755;
  v12 = 1911656217;
  v11 = -1618417719;
  v2 = (const struct ATL::CSid *)ATL::CSid::CSid((ATL::CSid *)v25, &v24, 6u, 80LL, v11, v12, v13, v14, v15, 0LL, 0LL);
  v4 = !ATL::CDacl::AddAllowedAce((ATL::CDacl *)v18, v2, 0x10000000u, v3);
  ATL::CSid::~CSid((ATL::CSid *)v25);
  if ( v4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)0x80004005LL);
    ATL::CDacl::~CDacl((ATL::CDacl *)v18);
    v16 = &ATL::CSecurityDesc::`vftable';
    ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v16);
    return 2147500037LL;
  }
  else
  {
    ATL::CSid::CSid((ATL::CSid *)v25, (PSID_IDENTIFIER_AUTHORITY)&ATL::Sids::SecurityNTAuthority, 1u, 11LL);
    v6 = !ATL::CDacl::AddAllowedAce((ATL::CDacl *)v18, (const struct ATL::CSid *)v25, 0x1000u, v5);
    ATL::CSid::~CSid((ATL::CSid *)v25);
    if ( v6 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
        (const char *)0x80004005LL);
      ATL::CDacl::~CDacl((ATL::CDacl *)v18);
      v16 = &ATL::CSecurityDesc::`vftable';
      ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v16);
      return 2147500037LL;
    }
    else
    {
      ATL::CSecurityDesc::SetDacl((ATL::CSecurityDesc *)&v16, (const struct ATL::CDacl *)v18, v7);
      ATL::CSecurityDesc::MakeSelfRelative((ATL::CSecurityDesc *)&v16);
      ATL::CDacl::~CDacl((ATL::CDacl *)v18);
      SecurityDescriptorLength = GetSecurityDescriptorLength(pSecurityDescriptor);
      v9 = operator new[](SecurityDescriptorLength, (const struct std::nothrow_t *)&std::nothrow);
      *a1 = v9;
      if ( v9 )
      {
        memcpy_0(v9, pSecurityDescriptor, SecurityDescriptorLength);
        v16 = &ATL::CSecurityDesc::`vftable';
        ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v16);
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4C,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
          (const char *)0x8007000ELL);
        v16 = &ATL::CSecurityDesc::`vftable';
        ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v16);
        return 2147942414LL;
      }
    }
  }
}
