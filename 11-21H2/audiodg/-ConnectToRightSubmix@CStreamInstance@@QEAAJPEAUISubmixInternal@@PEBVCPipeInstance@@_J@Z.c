/*
 * XREFs of ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x140024ACC
 * Callers:
 *     ?ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z @ 0x140019370 (-ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14001B690 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14005F450 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140001FF0 (-reset@-$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?UnregisterResources@CStreamInstance@@QEAAXPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140024BF4 (-UnregisterResources@CStreamInstance@@QEAAXPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x140059318 (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CStreamInstance::ConnectToRightSubmix(
        CStreamInstance *this,
        struct ISubmixInternal *a2,
        const struct CPipeInstance *a3)
{
  void (__fastcall *v6)(struct ISubmixInternal *, struct IAudioStreamingResourceRegistration **); // rbx
  char v7; // r14
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rax
  int v11; // eax
  __int64 v13; // rdx
  int v14; // eax
  unsigned __int64 v15; // r9
  int v16; // eax
  struct IAudioStreamingResourceRegistration **v17; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct IAudioStreamingResourceRegistration *v19; // [rsp+78h] [rbp+20h] BYREF

  v19 = 0LL;
  v6 = *(void (__fastcall **)(struct ISubmixInternal *, struct IAudioStreamingResourceRegistration **))(*(_QWORD *)a2 + 120LL);
  wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::reset((__int64 *)&v19);
  v6(a2, &v19);
  v17 = &v19;
  v7 = 1;
  if ( v19 )
  {
    if ( !*((_QWORD *)this + 11) && (unsigned __int64)(*((_QWORD *)this + 5) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v8 = (*(__int64 (**)(void))(*(_QWORD *)v19 + 24LL))();
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xDD,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v8,
          (int)&v19);
        v13 = 101LL;
LABEL_19:
        v15 = v9;
        goto LABEL_20;
      }
    }
  }
  if ( !a3 )
  {
    v10 = *(_QWORD *)a2;
    if ( *((_DWORD *)this + 5) == 2 )
      v11 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, _QWORD))(v10 + 32))(a2, *(_QWORD *)this);
    else
      v11 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, _QWORD))(v10 + 24))(a2, *(_QWORD *)this);
    v9 = v11;
    if ( v11 >= 0 )
      goto LABEL_9;
    v13 = 116LL;
    goto LABEL_19;
  }
  v14 = CPipeInstance::ConnectToRightPipe(*(CPipeInstance **)this, a3);
  v9 = v14;
  if ( v14 < 0 )
  {
    v15 = (unsigned int)v14;
    v13 = 108LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)v15,
      (int)v17);
    goto LABEL_10;
  }
  v16 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *(_QWORD *)this);
  v9 = v16;
  if ( v16 < 0 )
  {
    v15 = (unsigned int)v16;
    v13 = 110LL;
    goto LABEL_20;
  }
LABEL_9:
  v7 = 0;
  *((_BYTE *)this + 17) = 1;
  v9 = 0;
LABEL_10:
  if ( v7 && v19 )
    CStreamInstance::UnregisterResources(this, v19);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v19);
  return v9;
}
