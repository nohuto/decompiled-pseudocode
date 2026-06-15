/*
 * XREFs of _lambda_1638cd6ed2d4615662b3f222b9161cb6_::operator() @ 0x18000F6B8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_1638cd6ed2d4615662b3f222b9161cb6__long_IAudioSessionInfo___::_Do_call @ 0x180012DF0 (std--_Func_impl_no_alloc__lambda_1638cd6ed2d4615662b3f222b9161cb6__long_IAudioSessionInfo___--_D.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001828 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ @ 0x180008AC0 (--1-$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000A2EC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000E27C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCPBMStreamClassVolumeGainStage@@V1@PEBU_GUID@@V?$shared_ptr@UIDuckingDescriptor@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVCPBMStreamClassVolumeGainStage@@$$QEAPEBU_GUID@@$$QEAV?$shared_ptr@UIDuckingDescriptor@@@std@@@Z @ 0x18000EA60 (--$MakeAndInitialize@VCPBMStreamClassVolumeGainStage@@V1@PEBU_GUID@@V-$shared_ptr@UIDuckingDescr.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012230 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Det.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_1638cd6ed2d4615662b3f222b9161cb6_::operator()(
        _QWORD *a1,
        int (__fastcall ***a2)(__int64, GUID *, __int64 *))
{
  _DWORD *v4; // rdi
  _WORD *v5; // rax
  __int64 v6; // rcx
  int v7; // edx
  int (__fastcall **v8)(__int64, GUID *, __int64 *); // rax
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 *v15; // rsi
  HANDLE ProcessHeap; // rax
  _DWORD *v17; // rax
  _DWORD *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // [rsp+30h] [rbp-29h] BYREF
  __int64 v26; // [rsp+38h] [rbp-21h] BYREF
  _OWORD *v27; // [rsp+40h] [rbp-19h] BYREF
  _DWORD *v28; // [rsp+48h] [rbp-11h] BYREF
  _DWORD *v29; // [rsp+50h] [rbp-9h]
  _QWORD v30[2]; // [rsp+58h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+68h] [rbp+Fh] BYREF
  _WORD *v32; // [rsp+88h] [rbp+2Fh]
  int v33; // [rsp+90h] [rbp+37h]
  int v34; // [rsp+94h] [rbp+3Bh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v4 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
  if ( *v4 > 4u )
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
      v5 = &unk_18004DC10;
      v7 = 2;
    }
    v32 = v5;
    v33 = v7;
    v34 = 0;
    tlgWriteTransfer_EventWriteTransfer((__int64)v4, (unsigned __int8 *)dword_180050F2D, 0LL, 0LL, 3u, &v31);
  }
  v8 = *a2;
  v26 = 0LL;
  if ( (*v8)((__int64)a2, &GUID_7597ca7a_c7f8_4aa5_823c_aff9d9aebd8c, &v26) >= 0 )
  {
    v25 = 0LL;
    v9 = (_QWORD *)*a1;
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v26 + 24LL))(v26) )
    {
      v10 = v9[52];
      v11 = v9[53];
      if ( v11 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
        v11 = v9[53];
      }
      v28 = (_DWORD *)v10;
      v29 = (_DWORD *)v11;
      v27 = &DuckingPolicyGuid;
      v25 = 0LL;
      v12 = Microsoft::WRL::Details::MakeAndInitialize<CPBMStreamClassVolumeGainStage,CPBMStreamClassVolumeGainStage,_GUID const *,std::shared_ptr<IDuckingDescriptor>>(
              &v25,
              &v27,
              (__int64 *)&v28);
      std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)&v28);
      if ( (v12 & 0x80000000) != 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x364,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
          (const char *)v12);
        if ( v25 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(
            v25,
            v13);
        if ( v26 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        return v12;
      }
    }
    else
    {
      v15 = (__int64 *)a1[1];
      ProcessHeap = GetProcessHeap();
      v17 = HeapAlloc(ProcessHeap, 0, 0x30uLL);
      v18 = v17;
      if ( v17 )
      {
        v17[2] = 1;
        v17[3] = 1;
        *(_QWORD *)v17 = &std::_Ref_count_obj2<DeactivatableDuckingDescriptor>::`vftable';
        v19 = *v15;
        *((_QWORD *)v17 + 2) = &DeactivatableDuckingDescriptor::`vftable';
        *((_QWORD *)v17 + 3) = 0LL;
        *((_QWORD *)v17 + 4) = 0LL;
        v20 = v9[55];
        if ( v20 )
          _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
        *((_QWORD *)v18 + 3) = v9[54];
        *((_QWORD *)v18 + 4) = v9[55];
        *((_QWORD *)v18 + 5) = v19;
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
      }
      else
      {
        v18 = 0LL;
      }
      v30[0] = v18 + 4;
      v30[1] = v18;
      if ( v18 == (_DWORD *)-16LL )
      {
        v12 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x36F,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
          (const char *)0x8007000ELL);
        std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)v30);
        if ( v26 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        return v12;
      }
      if ( v18 )
        _InterlockedIncrement(v18 + 2);
      v28 = v18 + 4;
      v29 = v18;
      v27 = &DuckingPolicyGuid;
      v25 = 0LL;
      v12 = Microsoft::WRL::Details::MakeAndInitialize<CPBMStreamClassVolumeGainStage,CPBMStreamClassVolumeGainStage,_GUID const *,std::shared_ptr<IDuckingDescriptor>>(
              &v25,
              &v27,
              (__int64 *)&v28);
      std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)&v28);
      if ( (v12 & 0x80000000) != 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x371,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
          (const char *)v12);
        std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)v30);
        if ( v25 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(
            v25,
            v21);
        if ( v26 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        return v12;
      }
      std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)v30);
    }
    v22 = v25;
    v23 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 32LL))(v26, v25);
    if ( v23 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x374,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
        (const char *)(unsigned int)v23);
    if ( v22 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(
        v22,
        v24);
  }
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  return 0LL;
}
