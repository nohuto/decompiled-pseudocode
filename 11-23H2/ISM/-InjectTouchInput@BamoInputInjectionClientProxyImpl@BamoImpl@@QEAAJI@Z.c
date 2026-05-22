/*
 * XREFs of ?InjectTouchInput@BamoInputInjectionClientProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1801B65AC
 * Callers:
 *     ?Thunk_InjectTouchInput_8@?$IInputInjectionClientProxy_Receive@VBamoInputInjectionClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801B6B90 (-Thunk_InjectTouchInput_8@-$IInputInjectionClientProxy_Receive@VBamoInputInjectionClientProxyImp.c)
 * Callees:
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x180024E28 (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180024FB4 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??0?$CalloutWrapper@VBamoInputInjectionClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputInjectionClientProxyImpl@1@@Z @ 0x1801B63F0 (--0-$CalloutWrapper@VBamoInputInjectionClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVB.c)
 *     ??1?$CalloutWrapper@VBamoInputInjectionClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801B64EC (--1-$CalloutWrapper@VBamoInputInjectionClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoInputInjectionClientProxyImpl::InjectTouchInput(
        BamoImpl::BamoInputInjectionClientProxyImpl *this,
        unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // r14
  Microsoft::BamoImpl::BamoProxyImpl *v6; // rbx
  char *v7; // rsi
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  _BYTE v17[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = *((_QWORD *)this + 2);
  v4 = *(_QWORD *)(v3 + 24);
  v5 = *(_QWORD *)(v4 + 32);
  v6 = 0LL;
  v7 = 0LL;
  if ( a2 )
  {
    Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
              *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v4 + 32),
              *(unsigned int *)(v3 + 36),
              a2);
    v6 = Proxy;
    if ( !Proxy )
    {
      v9 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
             *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v3 + 24) + 32LL),
             0x87B2080C,
             0);
      v10 = v9;
      if ( v9 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9EF2,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v9);
      return v10;
    }
    v7 = (char *)Proxy - 16;
  }
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputInjectionClientProxyImpl>::CalloutWrapper<BamoImpl::BamoInputInjectionClientProxyImpl>(
    (__int64)v17,
    v5,
    (__int64)this);
  v12 = (*(__int64 (__fastcall **)(char *, char *))(*((_QWORD *)this - 2) + 120LL))((char *)this - 16, v7);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputInjectionClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputInjectionClientProxyImpl>((__int64)v17);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v13, v14);
  if ( v6 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v6, v15, v16);
  return v12;
}
