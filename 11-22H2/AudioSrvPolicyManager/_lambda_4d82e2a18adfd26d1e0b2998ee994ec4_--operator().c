/*
 * XREFs of _lambda_4d82e2a18adfd26d1e0b2998ee994ec4_::operator() @ 0x180020840
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_4d82e2a18adfd26d1e0b2998ee994ec4__long_IAudioSessionInfo___::_Do_call @ 0x180023260 (std--_Func_impl_no_alloc__lambda_4d82e2a18adfd26d1e0b2998ee994ec4__long_IAudioSessionInfo___--_D.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001158 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800025A0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18000CCF0 (--2@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F560 (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x1800111BC (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??1?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800161AC (--1-$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180016790 (__security_check_cookie.c)
 *     ??$MakeAndInitialize@VCPBMStreamClassVolumeGainStage@@V1@PEBU_GUID@@V?$shared_ptr@UIDuckingDescriptor@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVCPBMStreamClassVolumeGainStage@@$$QEAPEBU_GUID@@$$QEAV?$shared_ptr@UIDuckingDescriptor@@@std@@@Z @ 0x18001F658 (--$MakeAndInitialize@VCPBMStreamClassVolumeGainStage@@V1@PEBU_GUID@@V-$shared_ptr@UIDuckingDescr.c)
 *     ??$static_pointer_cast@UIDuckingDescriptor@@VDeactivatableDuckingDescriptor@@@std@@YA?AV?$shared_ptr@UIDuckingDescriptor@@@0@AEBV?$shared_ptr@VDeactivatableDuckingDescriptor@@@0@@Z @ 0x18001FFF4 (--$static_pointer_cast@UIDuckingDescriptor@@VDeactivatableDuckingDescriptor@@@std@@YA-AV-$shared.c)
 *     ??0DeactivatableDuckingDescriptor@@QEAA@PEAUIDuckingController@@AEBV?$shared_ptr@VDuckingDescriptor@@@std@@@Z @ 0x180020238 (--0DeactivatableDuckingDescriptor@@QEAA@PEAUIDuckingController@@AEBV-$shared_ptr@VDuckingDescrip.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180023594 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_4d82e2a18adfd26d1e0b2998ee994ec4_::operator()(
        __int64 *a1,
        int (__fastcall ***a2)(__int64, GUID *, __int64 *))
{
  const struct _tlgProvider_t *v4; // rdi
  _WORD *v5; // rax
  __int64 v6; // rcx
  int v7; // edx
  int (__fastcall **v8)(__int64, GUID *, __int64 *); // rax
  __int64 v9; // rbx
  __int64 *v10; // rax
  int v11; // ebx
  _QWORD *v12; // rdi
  __int64 *v13; // rsi
  _OWORD *v14; // rax
  _OWORD *v15; // rbx
  int v16; // edi
  __int64 v17; // rdx
  __int64 *v18; // rax
  int v19; // eax
  ULONG v21; // [rsp+20h] [rbp-39h]
  __int64 v22; // [rsp+30h] [rbp-29h] BYREF
  __int64 v23; // [rsp+38h] [rbp-21h] BYREF
  _OWORD *v24[2]; // [rsp+40h] [rbp-19h] BYREF
  __int64 v25; // [rsp+50h] [rbp-9h] BYREF
  std::_Ref_count_base *v26; // [rsp+58h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+60h] [rbp+7h] BYREF
  _WORD *v28; // [rsp+80h] [rbp+27h]
  int v29; // [rsp+88h] [rbp+2Fh]
  int v30; // [rsp+8Ch] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v4 = AudioSrvPolicyManagerTelemetryProvider::Provider((__int64)a1);
  if ( *(_DWORD *)v4 > 4u )
  {
    v5 = (_WORD *)((__int64 (__fastcall *)(int (__fastcall ***)(__int64, GUID *, __int64 *)))(*a2)[8])(a2);
    if ( v5 )
    {
      v6 = -1LL;
      do
        ++v6;
      while ( v5[v6] );
      v7 = 2 * v6 + 2;
    }
    else
    {
      v5 = &unk_180053328;
      v7 = 2;
    }
    v28 = v5;
    v29 = v7;
    v30 = 0;
    tlgWriteTransfer_EventWriteTransfer((__int64)v4, (unsigned __int8 *)dword_180056751, 0LL, 0LL, 3u, &v27);
  }
  v8 = *a2;
  v23 = 0LL;
  if ( (*v8)((__int64)a2, &GUID_7597ca7a_c7f8_4aa5_823c_aff9d9aebd8c, &v23) < 0 )
    goto LABEL_32;
  v22 = 0LL;
  v9 = *a1;
  if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v23 + 24LL))(v23) )
  {
    v12 = (_QWORD *)(v9 + 440);
    v13 = (__int64 *)a1[1];
    v14 = operator new(0x30uLL);
    v15 = v14;
    if ( v14 )
    {
      *((_DWORD *)v14 + 2) = 1;
      *((_DWORD *)v14 + 3) = 1;
      *(_QWORD *)v14 = &std::_Ref_count_obj2<DeactivatableDuckingDescriptor>::`vftable';
      DeactivatableDuckingDescriptor::DeactivatableDuckingDescriptor((_QWORD *)v14 + 2, *v13, v12);
    }
    else
    {
      v15 = 0LL;
    }
    v24[0] = v15 + 1;
    v24[1] = v15;
    if ( v15 == (_OWORD *)-16LL )
    {
      v16 = -2147024882;
      v17 = 890LL;
    }
    else
    {
      v18 = std::static_pointer_cast<IDuckingDescriptor,DeactivatableDuckingDescriptor>(&v25, (__int64 *)v24);
      v24[0] = &DuckingPolicyGuid;
      v22 = 0LL;
      v16 = Microsoft::WRL::Details::MakeAndInitialize<CPBMStreamClassVolumeGainStage,CPBMStreamClassVolumeGainStage,_GUID const *,std::shared_ptr<IDuckingDescriptor>>(
              &v22,
              v24,
              v18);
      if ( v26 )
        std::_Ref_count_base::_Decref(v26);
      if ( v16 >= 0 )
      {
        if ( v15 )
          std::_Ref_count_base::_Decref((std::_Ref_count_base *)v15);
        goto LABEL_29;
      }
      v17 = 892LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
      (const char *)(unsigned int)v16);
    if ( v15 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v15);
    v11 = v16;
    goto LABEL_26;
  }
  v10 = std::static_pointer_cast<IDuckingDescriptor,DeactivatableDuckingDescriptor>(&v25, (__int64 *)(v9 + 424));
  v24[0] = &DuckingPolicyGuid;
  v22 = 0LL;
  v11 = Microsoft::WRL::Details::MakeAndInitialize<CPBMStreamClassVolumeGainStage,CPBMStreamClassVolumeGainStage,_GUID const *,std::shared_ptr<IDuckingDescriptor>>(
          &v22,
          v24,
          v10);
  if ( v26 )
    std::_Ref_count_base::_Decref(v26);
  if ( v11 >= 0 )
  {
LABEL_29:
    v19 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 32LL))(v23, v22);
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x37F,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
        (const char *)(unsigned int)v19,
        v21);
    wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>::~com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>(&v22);
LABEL_32:
    v11 = 0;
    goto LABEL_33;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x36F,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
    (const char *)(unsigned int)v11);
LABEL_26:
  wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>::~com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>(&v22);
LABEL_33:
  wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v23);
  return (unsigned int)v11;
}
