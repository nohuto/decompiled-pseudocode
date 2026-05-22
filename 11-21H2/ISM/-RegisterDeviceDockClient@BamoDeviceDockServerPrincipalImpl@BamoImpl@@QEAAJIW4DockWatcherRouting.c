/*
 * XREFs of ?RegisterDeviceDockClient@BamoDeviceDockServerPrincipalImpl@BamoImpl@@QEAAJIW4DockWatcherRoutingPolicy@Input@Internal@UI@Windows@@@Z @ 0x18017EB98
 * Callers:
 *     ?Thunk_RegisterDeviceDockClient_63@?$IDeviceDockServerPrincipal_Receive@VBamoDeviceDockServerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18017FB20 (-Thunk_RegisterDeviceDockClient_63@-$IDeviceDockServerPrincipal_Receive@VBamoDeviceDockServerPri.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18001FC2C (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x18004C92C (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoDeviceDockServerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoDeviceDockServerPrincipalImpl@1@@Z @ 0x18017C57C (--0-$CalloutWrapper@VBamoDeviceDockServerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVB.c)
 *     ??1?$CalloutWrapper@VBamoDeviceDockServerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18017C94C (--1-$CalloutWrapper@VBamoDeviceDockServerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoDeviceDockServerPrincipalImpl::RegisterDeviceDockClient(
        __int64 a1,
        unsigned int a2,
        unsigned int a3)
{
  _QWORD *v6; // rbx
  int v7; // ecx
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r14
  Microsoft::BamoImpl::BamoProxyImpl *v12; // rdi
  char *v13; // rbx
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v16; // eax
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // [rsp+20h] [rbp-48h]
  _BYTE v21[32]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = *(_QWORD **)(a1 + 32);
  if ( v6 )
  {
    v7 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) + 32LL);
    do
    {
      if ( *(_DWORD *)(v6[5] + 36LL) == v7 )
        break;
      v6 = (_QWORD *)v6[6];
    }
    while ( v6 );
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD *))(*v6 + 32LL))(v6);
  v9 = v6[5];
  v10 = *(_QWORD *)(v9 + 24);
  v11 = *(_QWORD *)(v10 + 32);
  v12 = 0LL;
  v13 = 0LL;
  if ( a2 )
  {
    Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
              *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v10 + 32),
              *(unsigned int *)(v9 + 36),
              a2);
    v12 = Proxy;
    if ( !Proxy )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x31A2,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)0x87B2080CLL);
      return 2276591628LL;
    }
    v13 = (char *)Proxy - 16;
  }
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDeviceDockServerPrincipalImpl>::CalloutWrapper<BamoImpl::BamoDeviceDockServerPrincipalImpl>(
    (__int64)v21,
    v11,
    a1);
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, char *, _QWORD))(*(_QWORD *)(a1 - 16) + 96LL))(
          a1 - 16,
          v8,
          v13,
          a3);
  v17 = v16;
  if ( v16 != -2018375668 && v16 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x31B1,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v16,
      v20);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDeviceDockServerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoDeviceDockServerPrincipalImpl>((__int64)v21);
  if ( v12 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v12, v18, v19);
  if ( v17 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31C0,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v17);
  return (unsigned int)v17;
}
