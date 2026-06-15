/*
 * XREFs of ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180043E00
 * Callers:
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x18003C474 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?CreateNewRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180043B74 (-CreateNewRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 * Callees:
 *     ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x18000B6D0 (-MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18000D330 (--3@YAXPEAX@Z.c)
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x18000DD70 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x1800127A0 (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     __security_check_cookie @ 0x1800165A0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180016D1C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x180043070 (--1CDacl@ATL@@UEAA@XZ.c)
 *     ??1CSid@ATL@@UEAA@XZ @ 0x1800430D0 (--1CSid@ATL@@UEAA@XZ.c)
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x1800433A8 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x180043780 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x180043890 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ?EditAppContainerMask@@YAXPEAU_ACL@@@Z @ 0x180044184 (-EditAppContainerMask@@YAXPEAU_ACL@@@Z.c)
 *     ?GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z @ 0x18004450C (-GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z.c)
 *     ?Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z @ 0x180044698 (-Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x180044EB4 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     memcpy_0 @ 0x18004768C (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall DetermineLowRightsKeySecurityDescriptor(HKEY hKey, void **a2)
{
  struct _SECURITY_DESCRIPTOR *v4; // r15
  unsigned int v5; // esi
  struct _SECURITY_DESCRIPTOR *v6; // rax
  LSTATUS KeySecurity; // eax
  bool *v8; // r8
  bool *v9; // r9
  struct _ACL *PACL; // rbx
  ATL::CSid *v11; // rdx
  bool v12; // r8
  SIZE_T SecurityDescriptorLength; // rbx
  void *v14; // rax
  void **v16; // [rsp+60h] [rbp-168h] BYREF
  PSECURITY_DESCRIPTOR pSecurityDescriptor; // [rsp+68h] [rbp-160h]
  DWORD cbSecurityDescriptor; // [rsp+70h] [rbp-158h] BYREF
  struct _SECURITY_DESCRIPTOR *v19; // [rsp+78h] [rbp-150h]
  void **v20; // [rsp+80h] [rbp-148h]
  _QWORD v21[2]; // [rsp+88h] [rbp-140h] BYREF
  char v22; // [rsp+98h] [rbp-130h]
  int v23; // [rsp+9Ch] [rbp-12Ch]
  __int128 v24; // [rsp+A0h] [rbp-128h]
  __int64 v25; // [rsp+B0h] [rbp-118h]
  int v26; // [rsp+B8h] [rbp-110h]
  _QWORD v27[2]; // [rsp+C0h] [rbp-108h] BYREF
  char v28; // [rsp+D0h] [rbp-F8h]
  int v29; // [rsp+D4h] [rbp-F4h]
  __int128 v30; // [rsp+D8h] [rbp-F0h]
  __int64 v31; // [rsp+E8h] [rbp-E0h]
  int v32; // [rsp+F0h] [rbp-D8h]
  struct _SID_IDENTIFIER_AUTHORITY v33; // [rsp+100h] [rbp-C8h] BYREF
  _BYTE v34[128]; // [rsp+110h] [rbp-B8h] BYREF

  v20 = a2;
  cbSecurityDescriptor = 0;
  v4 = 0LL;
  v5 = 0;
  if ( RegGetKeySecurity(hKey, 4u, 0LL, &cbSecurityDescriptor) == 122 )
  {
    v6 = (struct _SECURITY_DESCRIPTOR *)operator new[](
                                          cbSecurityDescriptor,
                                          (const struct std::nothrow_t *)&std::nothrow);
    v4 = v6;
    v19 = v6;
    if ( v6 )
    {
      KeySecurity = RegGetKeySecurity(hKey, 4u, v6, &cbSecurityDescriptor);
      if ( KeySecurity )
      {
        if ( KeySecurity > 0 )
          v5 = (unsigned __int16)KeySecurity | 0x80070000;
        else
          v5 = KeySecurity;
      }
      else
      {
        v16 = &ATL::CSecurityDesc::`vftable';
        pSecurityDescriptor = 0LL;
        *(_DWORD *)v33.Value = 0;
        *(_WORD *)&v33.Value[4] = 1280;
        v27[1] = 0LL;
        v28 = 0;
        v29 = 2;
        v27[0] = &ATL::CDacl::`vftable';
        v30 = 0LL;
        v31 = 0LL;
        v32 = 0;
        if ( v4 )
        {
          ((void (__fastcall *)(void ***))v16[1])(&v16);
          ATL::CSecurityDesc::Init((ATL::CSecurityDesc *)&v16, v4);
        }
        ATL::CSecurityDesc::GetDacl((ATL::CSecurityDesc *)&v16, (struct ATL::CDacl *)v27, v8, v9);
        PACL = (struct _ACL *)ATL::CAcl::GetPACL((ATL::CAcl *)v27);
        EditAppContainerMask(PACL);
        v21[1] = 0LL;
        v22 = 0;
        v23 = 2;
        v21[0] = &ATL::CDacl::`vftable';
        v24 = 0LL;
        v25 = 0LL;
        v26 = 0;
        ATL::CDacl::Copy((ATL::CDacl *)v21, PACL);
        v11 = ATL::CSid::CSid((ATL::CSid *)v34, &v33, 6u);
        LOBYTE(PACL) = !ATL::CDacl::AddAllowedAce((ATL::CDacl *)v21, v11);
        ATL::CSid::~CSid((ATL::CSid *)v34);
        if ( (_BYTE)PACL )
        {
          v5 = -2147467259;
          ATL::CDacl::~CDacl((ATL::CDacl *)v21);
          ATL::CDacl::~CDacl((ATL::CDacl *)v27);
          v16 = &ATL::CSecurityDesc::`vftable';
          ATL::CSecurityDesc::Clear((PSECURITY_DESCRIPTOR *)&v16);
        }
        else
        {
          ATL::CSecurityDesc::SetDacl((ATL::CSecurityDesc *)&v16, (const struct ATL::CDacl *)v21, v12);
          ATL::CSecurityDesc::MakeSelfRelative((ATL::CSecurityDesc *)&v16);
          ATL::CDacl::~CDacl((ATL::CDacl *)v21);
          ATL::CDacl::~CDacl((ATL::CDacl *)v27);
          SecurityDescriptorLength = GetSecurityDescriptorLength(pSecurityDescriptor);
          v14 = operator new[](SecurityDescriptorLength, (const struct std::nothrow_t *)&std::nothrow);
          *a2 = v14;
          if ( v14 )
            memcpy_0(v14, pSecurityDescriptor, SecurityDescriptorLength);
          else
            v5 = -2147024882;
          v16 = &ATL::CSecurityDesc::`vftable';
          ATL::CSecurityDesc::Clear((PSECURITY_DESCRIPTOR *)&v16);
        }
      }
    }
    else
    {
      v5 = -2147024882;
    }
  }
  operator delete(v4);
  return v5;
}
