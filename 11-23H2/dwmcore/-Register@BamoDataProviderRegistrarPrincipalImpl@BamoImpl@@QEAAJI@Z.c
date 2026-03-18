/*
 * XREFs of ?Register@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x1800D6484
 * Callers:
 *     ?Thunk_Register_5@?$IDataProviderRegistrarPrincipal_Receive@VBamoDataProviderRegistrarPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800D7360 (-Thunk_Register_5@-$IDataProviderRegistrarPrincipal_Receive@VBamoDataProviderRegistrarPrincipalI.c)
 * Callees:
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x1800D65D8 (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800D6A70 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800D6AB8 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D7370 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800D7EE0 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B7200 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1801BB710 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderRegistrarPrincipalImpl::Register(
        BamoImpl::BamoDataProviderRegistrarPrincipalImpl *this,
        unsigned int a2)
{
  _QWORD *v2; // rbx
  int v3; // edi
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // r14
  char *v9; // r12
  __int64 v10; // r13
  Microsoft::BamoImpl::BamoProxyImpl *v11; // rbx
  __int64 v12; // rax
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v13; // rbp
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v15; // eax
  int v17; // eax
  unsigned int v18; // ebx
  int v19[8]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = (_QWORD *)*((_QWORD *)this + 4);
  v3 = 0;
  if ( v2 )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
    do
    {
      if ( *(_DWORD *)(v2[4] + 36LL) == v6 )
        break;
      v2 = (_QWORD *)v2[5];
    }
    while ( v2 );
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD *))(*v2 + 32LL))(v2);
  v8 = v2[4];
  v9 = 0LL;
  v10 = v7;
  v11 = 0LL;
  v12 = *(_QWORD *)(v8 + 24);
  v13 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v12 + 32);
  if ( !a2 )
    goto LABEL_7;
  Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
            *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v12 + 32),
            *(_DWORD *)(v8 + 36),
            a2);
  v11 = Proxy;
  if ( Proxy )
  {
    v9 = (char *)Proxy - 16;
LABEL_7:
    if ( *((int *)this + 2) > 0 )
    {
      Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
        v19,
        v13);
      v15 = (*(__int64 (__fastcall **)(char *, __int64, char *))(*((_QWORD *)this - 2) + 80LL))(
              (char *)this - 16,
              v10,
              v9);
      v3 = v15;
      if ( v15 == -2018375668 )
      {
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v13, -2018375668, 0);
      }
      else if ( v15 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2D2F,
          (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
          (const char *)(unsigned int)v15,
          v19[0]);
      }
      Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(v19);
    }
    if ( v11 )
      Microsoft::BamoImpl::BamoProxyImpl::AckReference(v11);
    if ( v3 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2D3E,
        (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v3,
        v19[0]);
    return (unsigned int)v3;
  }
  v17 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
          *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v8 + 24) + 32LL),
          -2018375668,
          0);
  v18 = v17;
  if ( v17 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D1B,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v17,
      v19[0]);
  return v18;
}
