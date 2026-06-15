/*
 * XREFs of ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18003EB4C
 * Callers:
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x1800340B4 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x18003B7B4 (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002BBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x18003DB1C (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x18003DDF0 (--1CDacl@ATL@@UEAA@XZ.c)
 *     ??1CSid@ATL@@UEAA@XZ @ 0x18003DE98 (--1CSid@ATL@@UEAA@XZ.c)
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18003E304 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x18003E4F0 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x18003E614 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ?EditAppContainerMask@@YAXPEAU_ACL@@@Z @ 0x18003EFA0 (-EditAppContainerMask@@YAXPEAU_ACL@@@Z.c)
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x18003F400 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ?Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z @ 0x18003F758 (-Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z.c)
 *     ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x18003FB08 (-MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x180040360 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     memcpy_0 @ 0x180044443 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall DetermineLowRightsKeySecurityDescriptor(HKEY hKey, struct _ACL *a2)
{
  struct _SECURITY_DESCRIPTOR *v4; // r15
  unsigned int v5; // esi
  struct _SECURITY_DESCRIPTOR *v6; // rax
  LSTATUS KeySecurity; // eax
  PSECURITY_DESCRIPTOR v8; // rcx
  struct _ACL *v9; // rbx
  struct _ACL *PACL; // rbx
  ATL::CSid *v11; // rdx
  bool v12; // r8
  unsigned __int64 SecurityDescriptorLength; // rbx
  void *v14; // rax
  HANDLE ProcessHeap; // rax
  void **v17; // [rsp+60h] [rbp-178h] BYREF
  PSECURITY_DESCRIPTOR pSecurityDescriptor; // [rsp+68h] [rbp-170h]
  DWORD cbSecurityDescriptor; // [rsp+70h] [rbp-168h] BYREF
  WINBOOL bDaclPresent; // [rsp+74h] [rbp-164h] BYREF
  struct _SECURITY_DESCRIPTOR *v21; // [rsp+78h] [rbp-160h]
  _QWORD v22[2]; // [rsp+80h] [rbp-158h] BYREF
  char v23; // [rsp+90h] [rbp-148h]
  int v24; // [rsp+94h] [rbp-144h]
  __int128 v25; // [rsp+98h] [rbp-140h]
  __int64 v26; // [rsp+A8h] [rbp-130h]
  int v27; // [rsp+B0h] [rbp-128h]
  WINBOOL bDaclDefaulted; // [rsp+B8h] [rbp-120h] BYREF
  PACL pDacl[2]; // [rsp+C0h] [rbp-118h] BYREF
  _QWORD v30[2]; // [rsp+D0h] [rbp-108h] BYREF
  char v31; // [rsp+E0h] [rbp-F8h]
  int v32; // [rsp+E4h] [rbp-F4h]
  __int128 v33; // [rsp+E8h] [rbp-F0h]
  __int64 v34; // [rsp+F8h] [rbp-E0h]
  int v35; // [rsp+100h] [rbp-D8h]
  struct _SID_IDENTIFIER_AUTHORITY v36; // [rsp+110h] [rbp-C8h] BYREF
  _BYTE v37[128]; // [rsp+120h] [rbp-B8h] BYREF

  pDacl[1] = a2;
  cbSecurityDescriptor = 0;
  v4 = 0LL;
  v5 = 0;
  if ( RegGetKeySecurity(hKey, 4u, 0LL, &cbSecurityDescriptor) == 122 )
  {
    v6 = (struct _SECURITY_DESCRIPTOR *)operator new[](
                                          cbSecurityDescriptor,
                                          (const struct std::nothrow_t *)&std::nothrow);
    v4 = v6;
    v21 = v6;
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
        v17 = &ATL::CSecurityDesc::`vftable';
        pSecurityDescriptor = 0LL;
        *(_DWORD *)v36.Value = 0;
        *(_WORD *)&v36.Value[4] = 1280;
        v22[1] = 0LL;
        v23 = 0;
        v24 = 2;
        v22[0] = &ATL::CDacl::`vftable';
        v25 = 0LL;
        v26 = 0LL;
        v27 = 0;
        v8 = 0LL;
        if ( v4 )
        {
          ((void (__fastcall *)(void ***))v17[1])(&v17);
          ATL::CSecurityDesc::Init((ATL::CSecurityDesc *)&v17, v4);
          v8 = pSecurityDescriptor;
        }
        if ( v8 && GetSecurityDescriptorDacl(v8, &bDaclPresent, pDacl, &bDaclDefaulted) )
        {
          if ( bDaclPresent )
          {
            v9 = pDacl[0];
            if ( pDacl[0] )
            {
              (*(void (__fastcall **)(_QWORD *))(v22[0] + 16LL))(v22);
              ATL::CDacl::Copy((ATL::CDacl *)v22, v9);
            }
            else
            {
              (*(void (__fastcall **)(_QWORD *))(v22[0] + 16LL))(v22);
              v23 = 1;
            }
          }
          else
          {
            (*(void (__fastcall **)(_QWORD *))(v22[0] + 16LL))(v22);
            v23 = 0;
          }
        }
        PACL = (struct _ACL *)ATL::CAcl::GetPACL((ATL::CAcl *)v22);
        EditAppContainerMask(PACL);
        v30[1] = 0LL;
        v31 = 0;
        v32 = 2;
        v30[0] = &ATL::CDacl::`vftable';
        v33 = 0LL;
        v34 = 0LL;
        v35 = 0;
        ATL::CDacl::Copy((ATL::CDacl *)v30, PACL);
        v11 = ATL::CSid::CSid((ATL::CSid *)v37, &v36, 6u);
        LOBYTE(PACL) = ATL::CDacl::AddAllowedAce((ATL::CDacl *)v30, v11) == 0;
        ATL::CSid::~CSid((ATL::CSid *)v37);
        if ( (_BYTE)PACL )
        {
          v5 = -2147467259;
          ATL::CDacl::~CDacl((ATL::CDacl *)v30);
          ATL::CDacl::~CDacl((ATL::CDacl *)v22);
          v17 = &ATL::CSecurityDesc::`vftable';
          ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v17);
        }
        else
        {
          ATL::CSecurityDesc::SetDacl((ATL::CSecurityDesc *)&v17, (const struct ATL::CDacl *)v30, v12);
          ATL::CSecurityDesc::MakeSelfRelative((ATL::CSecurityDesc *)&v17);
          ATL::CDacl::~CDacl((ATL::CDacl *)v30);
          ATL::CDacl::~CDacl((ATL::CDacl *)v22);
          SecurityDescriptorLength = GetSecurityDescriptorLength(pSecurityDescriptor);
          v14 = operator new[](SecurityDescriptorLength, (const struct std::nothrow_t *)&std::nothrow);
          *a2 = (struct _ACL)v14;
          if ( v14 )
            memcpy_0(v14, pSecurityDescriptor, SecurityDescriptorLength);
          else
            v5 = -2147024882;
          v17 = &ATL::CSecurityDesc::`vftable';
          ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v17);
        }
      }
    }
    else
    {
      v5 = -2147024882;
    }
  }
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v4);
  return v5;
}
