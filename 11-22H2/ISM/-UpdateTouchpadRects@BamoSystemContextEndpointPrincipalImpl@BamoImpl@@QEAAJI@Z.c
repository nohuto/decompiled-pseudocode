/*
 * XREFs of ?UpdateTouchpadRects@BamoSystemContextEndpointPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x1800B22F8
 * Callers:
 *     ?Thunk_UpdateTouchpadRects_8@?$ISystemContextEndpointPrincipal_Receive@VBamoSystemContextEndpointPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800B1F10 (-Thunk_UpdateTouchpadRects_8@-$ISystemContextEndpointPrincipal_Receive@VBamoSystemContextEndpoin.c)
 * Callees:
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x180025808 (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180025994 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoSystemContextEndpointPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoSystemContextEndpointPrincipalImpl@1@W4PrologEpilogConfig@12@@Z @ 0x1800B0798 (--0-$CalloutWrapper@VBamoSystemContextEndpointPrincipalImpl@BamoImpl@@@BamoImpl@Mic_ea_1800B0798.c)
 *     ??1?$CalloutWrapper@VBamoSystemContextEndpointPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800B09A0 (--1-$CalloutWrapper@VBamoSystemContextEndpointPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1800B1F20 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall BamoImpl::BamoSystemContextEndpointPrincipalImpl::UpdateTouchpadRects(
        BamoImpl::BamoSystemContextEndpointPrincipalImpl *this,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rbx
  __int64 v5; // r14
  Microsoft::BamoImpl::BamoProxyImpl *v6; // rbp
  void (__fastcall ***v7)(_QWORD); // rsi
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v9; // eax
  unsigned int v10; // ebx
  int v12; // eax
  __int64 v13; // r14
  int v14; // eax
  int v15[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  for ( i = *((_QWORD *)this + 4); i; i = *(_QWORD *)(i + 40) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(i + 32) + 36LL) == *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL) )
      break;
  }
  v5 = *(_QWORD *)(i + 32);
  v6 = 0LL;
  v7 = 0LL;
  if ( (_DWORD)a2 )
  {
    Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
              *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v5 + 24) + 32LL),
              *(unsigned int *)(v5 + 36),
              (unsigned int)a2);
    v6 = Proxy;
    if ( !Proxy )
    {
      v9 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
             *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v5 + 24) + 32LL),
             0x87B2080C,
             0);
      v10 = v9;
      if ( v9 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1956,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v9);
      return v10;
    }
    v7 = (void (__fastcall ***)(_QWORD))((char *)Proxy - 16);
  }
  if ( *(_BYTE *)(i + 57) && *((int *)this + 2) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemContextEndpointPrincipalImpl>::CalloutWrapper<BamoImpl::BamoSystemContextEndpointPrincipalImpl>(
      (__int64)v15,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 2) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v12 = (*(__int64 (__fastcall **)(char *, __int64, void (__fastcall ***)(_QWORD)))(*((_QWORD *)this - 2) + 72LL))(
            (char *)this - 16,
            i - 16,
            v7);
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1963,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v12,
        v15[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemContextEndpointPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoSystemContextEndpointPrincipalImpl>((__int64)v15);
  }
  v13 = *(_QWORD *)(i + 72);
  *(_QWORD *)(i + 72) = v7;
  if ( v7 )
    (**v7)(v7);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  if ( v6 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v6, a2, a3);
  if ( *(_BYTE *)(i + 57) && *((int *)this + 2) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemContextEndpointPrincipalImpl>::CalloutWrapper<BamoImpl::BamoSystemContextEndpointPrincipalImpl>(
      (__int64)v15,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 2) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v14 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)this - 2) + 80LL))((char *)this - 16, i - 16);
    if ( v14 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1974,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v14,
        v15[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemContextEndpointPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoSystemContextEndpointPrincipalImpl>((__int64)v15);
  }
  return 0LL;
}
