/*
 * XREFs of ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x1800142B0
 * Callers:
 *     ??1CSharedStreamGroupProxy@@MEAA@XZ @ 0x180014170 (--1CSharedStreamGroupProxy@@MEAA@XZ.c)
 *     ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSystemAudioStream@@@Z @ 0x180046DC0 (-ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@P.c)
 *     ??1CExclusiveStreamGroupProxy@@MEAA@XZ @ 0x180104974 (--1CExclusiveStreamGroupProxy@@MEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBaseStreamGroupProxy::DisconnectFromSaDevice(CBaseStreamGroupProxy *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 **v3; // r15
  __int64 v4; // rax
  __int64 *v5; // rcx
  __int64 v6; // rax
  int v7; // ebx
  __int64 *v8; // rdi
  void (__fastcall *v9)(__int64 *, __int64, __int64, _QWORD); // rbx
  unsigned int v10; // eax
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-68h]
  _QWORD v14[8]; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v16; // [rsp+90h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v3 = (__int64 **)((char *)this + 88);
  if ( !*((_QWORD *)this + 11) )
  {
LABEL_6:
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((char *)this + 88);
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
  v4 = *(_QWORD *)this;
  v14[0] = off_18017AD28;
  v14[7] = v14;
  (*(void (__fastcall **)(CBaseStreamGroupProxy *, _QWORD *))(v4 + 384))(this, v14);
  v5 = *v3;
  v6 = **v3;
  v16 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v6 + 56))(v5, &v16);
  if ( v7 < 0 )
  {
    v12 = 730LL;
  }
  else
  {
    if ( !v16
      || (v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 128LL))(*((_QWORD *)this + 10)), v7 >= 0) )
    {
      (*(void (__fastcall **)(__int64 *, CBaseStreamGroupProxy *))(**v3 + 168))(*v3, this);
      v8 = *v3;
      v9 = *(void (__fastcall **)(__int64 *, __int64, __int64, _QWORD))(**v3 + 72);
      v10 = (*(__int64 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)this + 184LL))(this);
      v9(v8, 2LL, 0xFFFFFFFFLL, v10);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v16);
      goto LABEL_6;
    }
    v12 = 734LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v7,
    v13);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v16);
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v7;
}
