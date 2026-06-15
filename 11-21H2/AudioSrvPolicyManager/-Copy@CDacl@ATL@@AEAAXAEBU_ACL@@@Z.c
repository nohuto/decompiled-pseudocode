/*
 * XREFs of ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x18003E614
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18003EB4C (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000958C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z @ 0x18003D8B8 (--0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z.c)
 *     ??0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z @ 0x18003D9FC (--0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z.c)
 *     ??1CSid@ATL@@UEAA@XZ @ 0x18003DE98 (--1CSid@ATL@@UEAA@XZ.c)
 *     ??4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z @ 0x18003DF80 (--4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x18003E458 (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 *     ?GrowBuffer@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@AEAA_N_K@Z @ 0x18003F5FC (-GrowBuffer@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAcce.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall ATL::CDacl::Copy(ATL::CDacl *this, struct _ACL *a2)
{
  ATL::CDacl *v3; // rdi
  DWORD i; // esi
  int v5; // r15d
  const struct _GUID *v6; // r14
  const struct _GUID *v7; // rbx
  char *v8; // rcx
  HANDLE v9; // rax
  void **v10; // rax
  void *v11; // r15
  unsigned __int64 v12; // r13
  HANDLE ProcessHeap; // rax
  ATL::CDacl::CAccessAce *v14; // rax
  void *v15; // [rsp+48h] [rbp-100h]
  void *v16; // [rsp+48h] [rbp-100h]
  int v17; // [rsp+50h] [rbp-F8h] BYREF
  LPVOID pAce; // [rsp+58h] [rbp-F0h] BYREF
  ATL::CDacl *v19; // [rsp+60h] [rbp-E8h]
  PACL pAcl; // [rsp+68h] [rbp-E0h]
  void **v21; // [rsp+70h] [rbp-D8h]
  ATL::CDacl::CAccessAce *v22; // [rsp+78h] [rbp-D0h]
  DWORD pAclInformation[4]; // [rsp+80h] [rbp-C8h] BYREF
  _QWORD v24[9]; // [rsp+90h] [rbp-B8h] BYREF
  char v25; // [rsp+DCh] [rbp-6Ch]
  int v26; // [rsp+E0h] [rbp-68h]
  __int64 v27; // [rsp+E8h] [rbp-60h]
  __int64 v28; // [rsp+F0h] [rbp-58h]
  __int64 v29; // [rsp+F8h] [rbp-50h]
  __int64 v30; // [rsp+100h] [rbp-48h]

  v3 = this;
  v19 = this;
  pAcl = a2;
  if ( !a2 )
  {
    (*(void (__fastcall **)(ATL::CDacl *))(*(_QWORD *)this + 16LL))(this);
    *((_BYTE *)v3 + 16) = 1;
    return;
  }
  v24[0] = &ATL::CSid::`vftable';
  v25 = 0;
  v26 = 7;
  v27 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  v28 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  v29 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  v30 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  free(*((void **)v3 + 1));
  *((_QWORD *)v3 + 1) = 0LL;
  if ( !GetAclInformation(a2, pAclInformation, 0xCu, AclSizeInformation)
    || !GetAclInformation(a2, &v17, 4u, AclRevisionInformation) )
  {
LABEL_32:
    ATL::AtlThrowLastWin32();
  }
  *((_DWORD *)v3 + 5) = v17;
  for ( i = 0; i < pAclInformation[0]; ++i )
  {
    if ( !GetAce(pAcl, i, &pAce) )
      goto LABEL_32;
    v5 = *((_DWORD *)pAce + 1);
    if ( *(_BYTE *)pAce <= 1u )
    {
      ATL::CSid::operator=((__int64)v24, (char *)pAce + 8);
      try
      {
        ProcessHeap = GetProcessHeap();
        v14 = (ATL::CDacl::CAccessAce *)HeapAlloc(ProcessHeap, 0, 0x98uLL);
        v22 = v14;
        if ( v14 )
          v11 = ATL::CDacl::CAccessAce::CAccessAce(
                  v14,
                  (const struct ATL::CSid *)v24,
                  v5,
                  *((_BYTE *)pAce + 1),
                  *(_BYTE *)pAce == 0);
        else
          v11 = 0LL;
        v16 = v11;
      }
      catch ( ... )
      {
        v11 = v16;
        v3 = v19;
      }
    }
    else
    {
      if ( (unsigned __int8)(*(_BYTE *)pAce - 5) > 1u )
        continue;
      v6 = 0LL;
      v7 = 0LL;
      v8 = (char *)pAce + 44;
      if ( (*((_DWORD *)pAce + 2) & 1) != 0 )
        v6 = (const struct _GUID *)((char *)pAce + 12);
      else
        v8 = (char *)pAce + 28;
      if ( (*((_BYTE *)pAce + 8) & 2) != 0 )
        v7 = (const struct _GUID *)((char *)pAce + (v6 != 0LL ? 28LL : 12LL));
      else
        v8 -= 16;
      ATL::CSid::operator=((__int64)v24, v8);
      v9 = GetProcessHeap();
      v10 = (void **)HeapAlloc(v9, 0, 0xA8uLL);
      try
      {
        v21 = v10;
        if ( v10 )
          v11 = ATL::CDacl::CAccessObjectAce::CAccessObjectAce(
                  v10,
                  (const struct ATL::CSid *)v24,
                  v5,
                  *((_BYTE *)pAce + 1),
                  *(_BYTE *)pAce == 5,
                  v6,
                  v7);
        else
          v11 = 0LL;
        v15 = v11;
      }
      catch ( ... )
      {
        v11 = v15;
        v3 = v19;
      }
    }
    if ( !v11
      || (v12 = *((_QWORD *)v3 + 4), v12 >= *((_QWORD *)v3 + 5))
      && !(unsigned __int8)ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::GrowBuffer(
                             (char *)v3 + 24,
                             v12 + 1) )
    {
      ATL::AtlThrowImpl(-2147024882);
    }
    *(_QWORD *)(*((_QWORD *)v3 + 3) + 8 * v12) = v11;
    ++*((_QWORD *)v3 + 4);
  }
  ATL::CSid::~CSid((ATL::CSid *)v24);
}
