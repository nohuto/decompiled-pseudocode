/*
 * XREFs of ?InjectTouchInput@BamoInputInjectionClientProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1801985BC
 * Callers:
 *     ?Thunk_InjectTouchInput_8@?$IInputInjectionClientProxy_Receive@VBamoInputInjectionClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180198B70 (-Thunk_InjectTouchInput_8@-$IInputInjectionClientProxy_Receive@VBamoInputInjectionClientProxyImp.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18001FC2C (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x18004C92C (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoInputInjectionClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputInjectionClientProxyImpl@1@@Z @ 0x180198400 (--0-$CalloutWrapper@VBamoInputInjectionClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVB.c)
 *     ??1?$CalloutWrapper@VBamoInputInjectionClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801984FC (--1-$CalloutWrapper@VBamoInputInjectionClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoInputInjectionClientProxyImpl::InjectTouchInput(
        BamoImpl::BamoInputInjectionClientProxyImpl *this,
        unsigned int a2)
{
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rbp
  Microsoft::BamoImpl::BamoProxyImpl *v6; // rbx
  char *v7; // rdi
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  unsigned int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  _BYTE v15[40]; // [rsp+20h] [rbp-28h] BYREF
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
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x70E3,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)0x87B2080CLL);
      return 2276591628LL;
    }
    v7 = (char *)Proxy - 16;
  }
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputInjectionClientProxyImpl>::CalloutWrapper<BamoImpl::BamoInputInjectionClientProxyImpl>(
    (__int64)v15,
    v5,
    (__int64)this);
  v10 = (*(__int64 (__fastcall **)(char *, char *))(*((_QWORD *)this - 2) + 120LL))((char *)this - 16, v7);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputInjectionClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputInjectionClientProxyImpl>((__int64)v15);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v11, v12);
  if ( v6 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v6, v13, v14);
  return v10;
}
