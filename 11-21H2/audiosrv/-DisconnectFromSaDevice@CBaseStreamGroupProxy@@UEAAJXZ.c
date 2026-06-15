/*
 * XREFs of ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x180040600
 * Callers:
 *     ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSystemAudioStream@@@Z @ 0x18000A700 (-ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@P.c)
 *     ??_GCSharedStreamGroupProxy@@MEAAPEAXI@Z @ 0x180040160 (--_GCSharedStreamGroupProxy@@MEAAPEAXI@Z.c)
 *     ??1CExclusiveStreamGroupProxy@@MEAA@XZ @ 0x1800F7394 (--1CExclusiveStreamGroupProxy@@MEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBaseStreamGroupProxy::DisconnectFromSaDevice(CBaseStreamGroupProxy *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  __int64 v3; // rax
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rsi
  void (__fastcall *v9)(__int64, __int64, __int64, _QWORD); // rdi
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v13; // rdx
  int v14; // [rsp+20h] [rbp-68h]
  _QWORD v15[8]; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v17; // [rsp+90h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  if ( *((_QWORD *)this + 11) )
  {
    v3 = *(_QWORD *)this;
    v15[0] = off_180176748;
    v15[7] = v15;
    (*(void (__fastcall **)(CBaseStreamGroupProxy *, _QWORD *))(v3 + 352))(this, v15);
    v4 = (__int64 *)*((_QWORD *)this + 11);
    v5 = *v4;
    v17 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v5 + 56))(v4, &v17);
    v7 = v6;
    if ( v6 < 0 )
    {
      v13 = 625LL;
    }
    else
    {
      if ( !v17
        || (v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 88LL))(*((_QWORD *)this + 10)),
            v7 = v6,
            v6 >= 0) )
      {
        (*(void (__fastcall **)(_QWORD, CBaseStreamGroupProxy *))(**((_QWORD **)this + 11) + 168LL))(
          *((_QWORD *)this + 11),
          this);
        v8 = *((_QWORD *)this + 11);
        v9 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v8 + 72LL);
        v10 = (*(__int64 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)this + 144LL))(this);
        v9(v8, 2LL, 0xFFFFFFFFLL, v10);
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        goto LABEL_7;
      }
      v13 = 629LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v6,
      v14);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
    goto LABEL_10;
  }
LABEL_7:
  v11 = *((_QWORD *)this + 11);
  if ( v11 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v7 = 0;
LABEL_10:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v7;
}
