/*
 * XREFs of _lambda_96d307d1af84bfd3e813cf43a5d5788e_::operator() @ 0x180119C64
 * Callers:
 *     ??0CXvmPowerReferenceManager@@QEAA@U_GUID@@0@Z @ 0x180119848 (--0CXvmPowerReferenceManager@@QEAA@U_GUID@@0@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetContainerProperty@@YAJU_GUID@@AEBU_tagpropertykey@@PEAU1@@Z @ 0x1800DB1FC (-GetContainerProperty@@YAJU_GUID@@AEBU_tagpropertykey@@PEAU1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_96d307d1af84bfd3e813cf43a5d5788e_::operator()(IID **a1)
{
  IID *v1; // rdi
  __int64 result; // rax
  HRESULT v3; // eax
  unsigned int v4; // ebx
  LPVOID v5; // rax
  __int64 v6; // rcx
  LPVOID ppv[2]; // [rsp+30h] [rbp-48h] BYREF
  IID v8; // [rsp+40h] [rbp-38h] BYREF
  IID rclsid; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  rclsid = GUID_00000000_0000_0000_0000_000000000000;
  v1 = *a1;
  v8 = **a1;
  result = GetContainerProperty(&v8, &PKEY_Audio_CrossVmPowerManager, &rclsid);
  if ( (int)result >= 0 )
  {
    ppv[0] = 0LL;
    v3 = CoCreateInstance(&rclsid, 0LL, 0x17u, &GUID_06dcd73e_efc3_4a91_af27_67f583086878, ppv);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v5 = ppv[0];
      ppv[0] = 0LL;
      v6 = *(_QWORD *)&v1[8].Data1;
      *(_QWORD *)&v1[8].Data1 = v5;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      v4 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x108,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
        (const char *)(unsigned int)v3);
    }
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)ppv);
    return v4;
  }
  return result;
}
