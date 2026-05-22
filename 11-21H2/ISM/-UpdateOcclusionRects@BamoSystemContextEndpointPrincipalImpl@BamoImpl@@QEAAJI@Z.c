/*
 * XREFs of ?UpdateOcclusionRects@BamoSystemContextEndpointPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x1800888D0
 * Callers:
 *     ?Thunk_UpdateOcclusionRects_8@?$ISystemContextEndpointPrincipal_Receive@VBamoSystemContextEndpointPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800888A0 (-Thunk_UpdateOcclusionRects_8@-$ISystemContextEndpointPrincipal_Receive@VBamoSystemContextEndpoi.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18001FC2C (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x18004C92C (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoSystemContextEndpointPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoSystemContextEndpointPrincipalImpl@1@W4PrologEpilogConfig@12@@Z @ 0x180086FFC (--0-$CalloutWrapper@VBamoSystemContextEndpointPrincipalImpl@BamoImpl@@@BamoImpl@Mic_ea_180086FFC.c)
 *     ??1?$CalloutWrapper@VBamoSystemContextEndpointPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18008728C (--1-$CalloutWrapper@VBamoSystemContextEndpointPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BamoImpl::BamoSystemContextEndpointPrincipalImpl::UpdateOcclusionRects(
        BamoImpl::BamoSystemContextEndpointPrincipalImpl *this,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rbx
  Microsoft::BamoImpl::BamoProxyImpl *v5; // rsi
  void (__fastcall ***v6)(_QWORD); // rdi
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v9; // eax
  __int64 v10; // r14
  int v11; // eax
  int v12[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  for ( i = *((_QWORD *)this + 4); i; i = *(_QWORD *)(i + 48) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(i + 40) + 36LL) == *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL) )
      break;
  }
  v5 = 0LL;
  v6 = 0LL;
  if ( (_DWORD)a2 )
  {
    Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
              *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*(_QWORD *)(i + 40) + 24LL) + 32LL),
              *(unsigned int *)(*(_QWORD *)(i + 40) + 36LL),
              (unsigned int)a2);
    v5 = Proxy;
    if ( !Proxy )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD98A,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)0x87B2080CLL);
      return 2276591628LL;
    }
    v6 = (void (__fastcall ***)(_QWORD))((char *)Proxy - 16);
  }
  if ( *(_BYTE *)(i + 33) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemContextEndpointPrincipalImpl>::CalloutWrapper<BamoImpl::BamoSystemContextEndpointPrincipalImpl>(
      (__int64)v12,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 2) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v9 = (*(__int64 (__fastcall **)(char *, __int64, void (__fastcall ***)(_QWORD)))(*((_QWORD *)this - 2) + 56LL))(
           (char *)this - 16,
           i - 16,
           v6);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xD997,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v9,
        v12[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemContextEndpointPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoSystemContextEndpointPrincipalImpl>((__int64)v12);
  }
  v10 = *(_QWORD *)(i + 64);
  *(_QWORD *)(i + 64) = v6;
  if ( v6 )
    (**v6)(v6);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  if ( v5 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v5, a2, a3);
  if ( *(_BYTE *)(i + 33) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemContextEndpointPrincipalImpl>::CalloutWrapper<BamoImpl::BamoSystemContextEndpointPrincipalImpl>(
      (__int64)v12,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 2) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v11 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)this - 2) + 64LL))((char *)this - 16, i - 16);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xD9A8,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v11,
        v12[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemContextEndpointPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoSystemContextEndpointPrincipalImpl>((__int64)v12);
  }
  return 0LL;
}
