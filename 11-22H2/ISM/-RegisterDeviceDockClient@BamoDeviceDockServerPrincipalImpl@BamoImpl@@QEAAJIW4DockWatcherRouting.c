/*
 * XREFs of ?RegisterDeviceDockClient@BamoDeviceDockServerPrincipalImpl@BamoImpl@@QEAAJIW4DockWatcherRoutingPolicy@Input@Internal@UI@Windows@@@Z @ 0x1801ABD3C
 * Callers:
 *     ?Thunk_RegisterDeviceDockClient_68@?$IDeviceDockServerPrincipal_Receive@VBamoDeviceDockServerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801ACD20 (-Thunk_RegisterDeviceDockClient_68@-$IDeviceDockServerPrincipal_Receive@VBamoDeviceDockServerPri.c)
 * Callees:
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x180025808 (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180025994 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??1?$CalloutWrapper@VBamoDeviceDockServerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180028B08 (--1-$CalloutWrapper@VBamoDeviceDockServerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1800B1F20 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??0?$CalloutWrapper@VBamoDeviceDockServerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoDeviceDockServerPrincipalImpl@1@@Z @ 0x1801A98D0 (--0-$CalloutWrapper@VBamoDeviceDockServerPrincipalImpl@BamoImpl@@@BamoImpl@Microsof_ea_1801A98D0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoDeviceDockServerPrincipalImpl::RegisterDeviceDockClient(
        __int64 a1,
        unsigned int a2,
        unsigned int a3)
{
  int v6; // edi
  _QWORD *v7; // rbx
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rbp
  __int64 v12; // rax
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v13; // r14
  Microsoft::BamoImpl::BamoProxyImpl *v14; // rbx
  char *v15; // r12
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v17; // eax
  unsigned int v18; // ebx
  int v20; // eax
  int v21; // [rsp+20h] [rbp-58h]
  _BYTE v22[32]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v24; // [rsp+80h] [rbp+8h]

  v6 = 0;
  v7 = *(_QWORD **)(a1 + 32);
  if ( v7 )
  {
    v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) + 32LL);
    do
    {
      if ( *(_DWORD *)(v7[4] + 36LL) == v8 )
        break;
      v7 = (_QWORD *)v7[5];
    }
    while ( v7 );
  }
  v24 = (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 32LL))(v7);
  v11 = v7[4];
  v12 = *(_QWORD *)(v11 + 24);
  v13 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v12 + 32);
  v14 = 0LL;
  v15 = 0LL;
  if ( a2 )
  {
    Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
              *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v12 + 32),
              *(unsigned int *)(v11 + 36),
              a2);
    v14 = Proxy;
    if ( !Proxy )
    {
      v17 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
              *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v11 + 24) + 32LL),
              0x87B2080C,
              0);
      v18 = v17;
      if ( v17 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5CB7,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v17);
      return v18;
    }
    v15 = (char *)Proxy - 16;
  }
  if ( *(int *)(a1 + 8) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDeviceDockServerPrincipalImpl>::CalloutWrapper<BamoImpl::BamoDeviceDockServerPrincipalImpl>(
      (__int64)v22,
      v13,
      (void (__fastcall ***)(_QWORD))a1);
    v20 = (*(__int64 (__fastcall **)(__int64, __int64, char *, _QWORD))(*(_QWORD *)(a1 - 16) + 96LL))(
            a1 - 16,
            v24,
            v15,
            a3);
    v6 = v20;
    if ( v20 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        (struct Microsoft::BamoImpl::ConnectionIndirector **)v13,
        0x87B2080C,
        0);
    }
    else if ( v20 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x5CCB,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v20,
        v21);
    }
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDeviceDockServerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoDeviceDockServerPrincipalImpl>((__int64)v22);
  }
  if ( v14 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v14, v9, v10);
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5CDA,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
