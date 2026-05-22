/*
 * XREFs of ?RegisterEdgyControllerClient@BamoEdgyControllerServerPrincipalImpl@BamoImpl@@QEAAJPEBGI@Z @ 0x18014D6EC
 * Callers:
 *     ?Thunk_RegisterEdgyControllerClient_186@?$IEdgyControllerServerPrincipal_Receive@VBamoEdgyControllerServerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18014D8D0 (-Thunk_RegisterEdgyControllerClient_186@-$IEdgyControllerServerPrincipal_Receive@VBamoEdgyContro.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18001FC2C (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x18004C92C (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoEdgyControllerServerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoEdgyControllerServerPrincipalImpl@1@@Z @ 0x18014D2B8 (--0-$CalloutWrapper@VBamoEdgyControllerServerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@P.c)
 *     ??1?$CalloutWrapper@VBamoEdgyControllerServerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18014D3B4 (--1-$CalloutWrapper@VBamoEdgyControllerServerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@X.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoEdgyControllerServerPrincipalImpl::RegisterEdgyControllerClient(
        BamoImpl::BamoEdgyControllerServerPrincipalImpl *this,
        const unsigned __int16 *a2,
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

  v6 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v6 )
  {
    v7 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
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
  if ( a3 )
  {
    Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
              *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v10 + 32),
              *(unsigned int *)(v9 + 36),
              a3);
    v12 = Proxy;
    if ( !Proxy )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x523A,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)0x87B2080CLL);
      return 2276591628LL;
    }
    v13 = (char *)Proxy - 16;
  }
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyControllerServerPrincipalImpl>::CalloutWrapper<BamoImpl::BamoEdgyControllerServerPrincipalImpl>(
    (__int64)v21,
    v11,
    (__int64)this);
  v16 = (*(__int64 (__fastcall **)(char *, __int64, const unsigned __int16 *, char *))(*((_QWORD *)this - 2) + 96LL))(
          (char *)this - 16,
          v8,
          a2,
          v13);
  v17 = v16;
  if ( v16 != -2018375668 && v16 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5249,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v16,
      v20);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyControllerServerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoEdgyControllerServerPrincipalImpl>((__int64)v21);
  if ( v12 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v12, v18, v19);
  if ( v17 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5258,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v17);
  return (unsigned int)v17;
}
