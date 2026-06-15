/*
 * XREFs of ?Initialize@CPrivateAPO@@QEAAJAEBU_GUID@@PEBGW4APO_TYPE@@1PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioProcessingObjectRT@@PEAPEAUIAudioProcessingObjectConfiguration@@PEAPEAUIAudioProcessingObjectNotifications@@@Z @ 0x14001504C
 * Callers:
 *     _lambda_89f25345d625e50d879fcb99a1803143_::operator() @ 0x140011F68 (_lambda_89f25345d625e50d879fcb99a1803143_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEAU5@@Z @ 0x140015694 (-Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CPrivateAPO::Initialize(
        __int64 a1,
        const IID *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 *a6,
        __int64 *a7,
        __int64 *a8,
        __int64 a9)
{
  LPVOID *v13; // rbx
  LPVOID v14; // rcx
  HRESULT Instance; // edi
  __int64 v16; // rdx
  __int64 (__fastcall ***v17)(_QWORD, _QWORD, _QWORD); // rcx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int ppv; // [rsp+20h] [rbp-40h]
  __int64 v26; // [rsp+40h] [rbp-20h] BYREF
  __int64 v27; // [rsp+48h] [rbp-18h] BYREF
  __int64 v28[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v13 = (LPVOID *)(a1 + 40);
  if ( a4 )
  {
    v17 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))*v13;
    *v13 = 0LL;
    if ( v17 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v17)[2])(v17);
    ppv = a1;
    Instance = CSystemEffectWrapper::Create(a2, a2, a3, a4);
    if ( Instance < 0 )
    {
      v16 = 65LL;
      goto LABEL_6;
    }
LABEL_11:
    v28[0] = 0LL;
    v18 = (**(__int64 (__fastcall ***)(LPVOID, GUID *, __int64 *))*v13)(
            *v13,
            &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10,
            v28);
    Instance = v18;
    if ( v18 >= 0 )
    {
      v26 = 0LL;
      v19 = (**(__int64 (__fastcall ***)(LPVOID, GUID *, __int64 *))*v13)(
              *v13,
              &GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c,
              &v26);
      Instance = v19;
      if ( v19 >= 0 )
      {
        v27 = 0LL;
        v20 = (**(__int64 (__fastcall ***)(LPVOID, GUID *, __int64 *))*v13)(
                *v13,
                &GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8,
                &v27);
        Instance = v20;
        if ( v20 >= 0 )
        {
          *(_BYTE *)(a1 + 32) = 1;
          v21 = v28[0];
          v28[0] = 0LL;
          *a6 = v21;
          v22 = v26;
          v26 = 0LL;
          *a7 = v22;
          v23 = v27;
          v27 = 0LL;
          *a8 = v23;
          (**(void (__fastcall ***)(LPVOID, GUID *, __int64))*v13)(*v13, &GUID_56b0c76f_02fd_4b21_a52e_9f8219fc86e4, a9);
          wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v27);
          wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v26);
          Instance = 0;
          goto LABEL_19;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4B,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp",
          (const char *)(unsigned int)v20,
          ppv);
        wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v27);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x48,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp",
          (const char *)(unsigned int)v19,
          ppv);
      }
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v26);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x45,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp",
        (const char *)(unsigned int)v18,
        ppv);
    }
LABEL_19:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v28);
    return (unsigned int)Instance;
  }
  v14 = *v13;
  *v13 = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v14 + 16LL))(v14);
  Instance = CoCreateInstance(a2, 0LL, 1u, &GUID_00000000_0000_0000_c000_000000000046, v13);
  if ( Instance >= 0 )
    goto LABEL_11;
  v16 = 57LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp",
    (const char *)(unsigned int)Instance,
    ppv);
  return (unsigned int)Instance;
}
