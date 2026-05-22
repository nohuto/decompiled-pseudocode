/*
 * XREFs of ?RegisterSystemContextEndpoint@BamoSystemContextManagerPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x18014F600
 * Callers:
 *     ?Thunk_RegisterSystemContextEndpoint_8@?$ISystemContextManagerPrincipal_Receive@VBamoSystemContextManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801514F0 (-Thunk_RegisterSystemContextEndpoint_8@-$ISystemContextManagerPrincipal_Receive@VBamoSystemConte.c)
 * Callees:
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x180024E28 (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180024FB4 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??0?$CalloutWrapper@VBamoSystemContextManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoSystemContextManagerPrincipalImpl@1@@Z @ 0x18014BD2C (--0-$CalloutWrapper@VBamoSystemContextManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@P.c)
 *     ??1?$CalloutWrapper@VBamoSystemContextManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18014C114 (--1-$CalloutWrapper@VBamoSystemContextManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@X.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoSystemContextManagerPrincipalImpl::RegisterSystemContextEndpoint(
        BamoImpl::BamoSystemContextManagerPrincipalImpl *this,
        unsigned int a2)
{
  int v4; // edi
  _QWORD *v5; // rbx
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r13
  __int64 v10; // rbp
  __int64 v11; // rax
  struct Microsoft::BamoImpl::ConnectionIndirector **v12; // r14
  Microsoft::BamoImpl::BamoProxyImpl *v13; // rbx
  char *v14; // r12
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v16; // eax
  unsigned int v17; // ebx
  int v19; // eax
  int v20[8]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = 0;
  v5 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v5 )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
    do
    {
      if ( *(_DWORD *)(v5[4] + 36LL) == v6 )
        break;
      v5 = (_QWORD *)v5[5];
    }
    while ( v5 );
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 32LL))(v5);
  v10 = v5[4];
  v11 = *(_QWORD *)(v10 + 24);
  v12 = *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(v11 + 32);
  v13 = 0LL;
  v14 = 0LL;
  if ( a2 )
  {
    Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
              *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v11 + 32),
              *(unsigned int *)(v10 + 36),
              a2);
    v13 = Proxy;
    if ( !Proxy )
    {
      v16 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
              *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v10 + 24) + 32LL),
              0x87B2080C,
              0);
      v17 = v16;
      if ( v16 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1821,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v16);
      return v17;
    }
    v14 = (char *)Proxy - 16;
  }
  if ( *((int *)this + 2) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemContextManagerPrincipalImpl>::CalloutWrapper<BamoImpl::BamoSystemContextManagerPrincipalImpl>(
      (__int64)v20,
      (__int64)v12,
      (__int64)this);
    v19 = (*(__int64 (__fastcall **)(char *, __int64, char *))(*((_QWORD *)this - 2) + 96LL))(
            (char *)this - 16,
            v9,
            v14);
    v4 = v19;
    if ( v19 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v12, 0x87B2080C, 0);
    }
    else if ( v19 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1835,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v19,
        v20[0]);
    }
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemContextManagerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoSystemContextManagerPrincipalImpl>((__int64)v20);
  }
  if ( v13 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v13, v7, v8);
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1844,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
