/*
 * XREFs of ?CancelDrag@BamoDragProcessorManagerPrincipalImpl@BamoImpl@@QEAAJIIW4DragProcessorType@@@Z @ 0x18013A54C
 * Callers:
 *     ?Thunk_CancelDrag_149@?$IDragProcessorManagerPrincipal_Receive@VBamoDragProcessorManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18013AF60 (-Thunk_CancelDrag_149@-$IDragProcessorManagerPrincipal_Receive@VBamoDragProcessorManagerPrincipa.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18001FC2C (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x18004C92C (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoDragProcessorManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoDragProcessorManagerPrincipalImpl@1@@Z @ 0x18013A334 (--0-$CalloutWrapper@VBamoDragProcessorManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@P.c)
 *     ??1?$CalloutWrapper@VBamoDragProcessorManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18013A430 (--1-$CalloutWrapper@VBamoDragProcessorManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@X.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoDragProcessorManagerPrincipalImpl::CancelDrag(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4)
{
  _QWORD *v8; // rbx
  int v9; // ecx
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r14
  Microsoft::BamoImpl::BamoProxyImpl *v14; // rdi
  char *v15; // rbx
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v18; // eax
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // r8
  _BYTE v22[32]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v8 = *(_QWORD **)(a1 + 32);
  if ( v8 )
  {
    v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) + 32LL);
    do
    {
      if ( *(_DWORD *)(v8[5] + 36LL) == v9 )
        break;
      v8 = (_QWORD *)v8[6];
    }
    while ( v8 );
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD *))(*v8 + 32LL))(v8);
  v11 = v8[5];
  v12 = *(_QWORD *)(v11 + 24);
  v13 = *(_QWORD *)(v12 + 32);
  v14 = 0LL;
  v15 = 0LL;
  if ( a3 )
  {
    Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
              *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v12 + 32),
              *(unsigned int *)(v11 + 36),
              a3);
    v14 = Proxy;
    if ( !Proxy )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4287,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)0x87B2080CLL);
      return 2276591628LL;
    }
    v15 = (char *)Proxy - 16;
  }
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDragProcessorManagerPrincipalImpl>::CalloutWrapper<BamoImpl::BamoDragProcessorManagerPrincipalImpl>(
    (__int64)v22,
    v13,
    a1);
  v18 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, char *))(*(_QWORD *)(a1 - 16) + 104LL))(
          a1 - 16,
          v10,
          a2,
          v15);
  v19 = v18;
  if ( v18 != -2018375668 && v18 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4296,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v18,
      a4);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDragProcessorManagerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoDragProcessorManagerPrincipalImpl>((__int64)v22);
  if ( v14 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v14, v20, v21);
  if ( v19 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42A5,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v19);
  return (unsigned int)v19;
}
