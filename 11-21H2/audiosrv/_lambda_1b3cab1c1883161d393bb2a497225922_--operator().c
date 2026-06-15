/*
 * XREFs of _lambda_1b3cab1c1883161d393bb2a497225922_::operator() @ 0x1800F7948
 * Callers:
 *     ?CreateBridgeStream@CSharedStreamGroupProxy@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroupProxy@@PEAUSystemAudioStream@@@Z @ 0x1800F8760 (-CreateBridgeStream@CSharedStreamGroupProxy@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?move_initialize_from@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800F0C08 (-move_initialize_from@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z.c)
 *     ??4?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmixProxy@@@Z @ 0x1800F7598 (--4-$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmixProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_1b3cab1c1883161d393bb2a497225922_::operator()(_QWORD **a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rbx
  _QWORD *v6; // rdi
  SystemAudioStream **v7; // rsi
  __int64 v9[2]; // [rsp+30h] [rbp-518h] BYREF
  _BYTE v10[1264]; // [rsp+40h] [rbp-508h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+548h] [rbp+0h]

  v9[0] = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)**a1 + 248LL))(**a1, v9);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = v9[0];
    if ( v9[0] )
    {
      memset_0(v10, 0, 0x4E8uLL);
      v6 = a1[1];
      v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _BYTE *))(*(_QWORD *)v6[11] + 96LL))(
             v6[11],
             *a1[2],
             v5,
             v10);
      v3 = v2;
      if ( v2 < 0 )
      {
        v4 = 855LL;
        goto LABEL_8;
      }
      v7 = (SystemAudioStream **)a1[3];
      v2 = SystemAudioStream::move_initialize_from(*v7, (struct SYSTEM_AUDIO_STREAM *)v10);
      v3 = v2;
      if ( v2 < 0 )
      {
        v4 = 858LL;
        goto LABEL_8;
      }
      wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::operator=(
        (__int64 *)*v7 + 5,
        (unsigned __int64)(v6 + 1) & -(__int64)(v6 != 0LL));
    }
    v3 = 0;
    goto LABEL_11;
  }
  v4 = 850LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v2);
LABEL_11:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v9);
  return v3;
}
