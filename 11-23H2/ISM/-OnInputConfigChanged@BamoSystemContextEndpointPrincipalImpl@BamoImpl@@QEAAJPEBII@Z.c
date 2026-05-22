/*
 * XREFs of ?OnInputConfigChanged@BamoSystemContextEndpointPrincipalImpl@BamoImpl@@QEAAJPEBII@Z @ 0x18009F0C0
 * Callers:
 *     ?Thunk_OnInputConfigChanged_368@?$ISystemContextEndpointPrincipal_Receive@VBamoSystemContextEndpointPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180059200 (-Thunk_OnInputConfigChanged_368@-$ISystemContextEndpointPrincipal_Receive@VBamoSystemContextEndp.c)
 * Callees:
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x180024E28 (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180024FB4 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoSystemContextEndpointPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoSystemContextEndpointPrincipalImpl@1@@Z @ 0x18009E21C (--0-$CalloutWrapper@VBamoSystemContextEndpointPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@.c)
 *     ??1?$CalloutWrapper@VBamoSystemContextEndpointPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18009E450 (--1-$CalloutWrapper@VBamoSystemContextEndpointPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@.c)
 *     ?AllocateBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAXI@Z @ 0x18009E7BC (-AllocateBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAXI@Z.c)
 *     ?ReleaseBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXPEAX@Z @ 0x18009F6C0 (-ReleaseBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXPEAX@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BamoImpl::BamoSystemContextEndpointPrincipalImpl::OnInputConfigChanged(
        BamoImpl::BamoSystemContextEndpointPrincipalImpl *this,
        const unsigned int *a2,
        unsigned int a3)
{
  __int64 v3; // rbp
  int v6; // edi
  _QWORD *v7; // rbx
  int v8; // ecx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v9; // r15
  char *Buffer; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  char *v13; // rsi
  unsigned int v14; // r13d
  char *v15; // rbx
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v17; // eax
  char *v18; // rbx
  int v20; // eax
  unsigned int v21; // ebx
  int v22; // [rsp+20h] [rbp-78h]
  _BYTE v23[88]; // [rsp+40h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v25; // [rsp+A0h] [rbp+8h]
  __int64 v26; // [rsp+B8h] [rbp+20h]

  v3 = a3;
  v6 = 0;
  v7 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v7 )
  {
    v8 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
    do
    {
      if ( *(_DWORD *)(v7[4] + 36LL) == v8 )
        break;
      v7 = (_QWORD *)v7[5];
    }
    while ( v7 );
  }
  v26 = (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 32LL))(v7);
  v25 = v7[4];
  v9 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v25 + 24) + 32LL);
  Buffer = (char *)Microsoft::BamoImpl::BaseBamoConnectionImpl::AllocateBuffer(v9, 8 * (int)v3);
  v13 = Buffer;
  v14 = 0;
  if ( !(_DWORD)v3 )
  {
LABEL_11:
    if ( *((int *)this + 2) > 0 )
    {
      Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemContextEndpointPrincipalImpl>::CalloutWrapper<BamoImpl::BamoSystemContextEndpointPrincipalImpl>(
        (__int64)v23,
        (__int64)v9,
        (__int64)this);
      v17 = (*(__int64 (__fastcall **)(char *, __int64, char *, _QWORD))(*((_QWORD *)this - 2) + 128LL))(
              (char *)this - 16,
              v26,
              v13,
              (unsigned int)v3);
      v6 = v17;
      if ( v17 == -2018375668 )
      {
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v9, -2018375668, 0);
      }
      else if ( v17 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x155D,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v17,
          v22);
      }
      Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemContextEndpointPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoSystemContextEndpointPrincipalImpl>((__int64)v23);
    }
    if ( (_DWORD)v3 )
    {
      v18 = v13;
      do
      {
        if ( *(_QWORD *)v18 )
          Microsoft::BamoImpl::BamoProxyImpl::AckReference(
            (Microsoft::BamoImpl::BamoProxyImpl *)(*(_QWORD *)v18 + 16LL),
            v11,
            v12);
        v18 += 8;
        --v3;
      }
      while ( v3 );
    }
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1570,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v6);
    Microsoft::BamoImpl::BaseBamoConnectionImpl::ReleaseBuffer(v9, v13);
    return (unsigned int)v6;
  }
  v15 = Buffer;
  while ( 1 )
  {
    *(_QWORD *)v15 = 0LL;
    v12 = *a2;
    if ( (_DWORD)v12 )
      break;
LABEL_10:
    ++v14;
    ++a2;
    v15 += 8;
    if ( v14 >= (unsigned int)v3 )
      goto LABEL_11;
  }
  Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
            *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v25 + 24) + 32LL),
            *(unsigned int *)(v25 + 36),
            v12);
  if ( Proxy )
  {
    *(_QWORD *)v15 = (char *)Proxy - 16;
    goto LABEL_10;
  }
  v20 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
          *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v25 + 24) + 32LL),
          -2018375668,
          0);
  v21 = v20;
  if ( v20 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1548,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v20);
  Microsoft::BamoImpl::BaseBamoConnectionImpl::ReleaseBuffer(v9, v13);
  return v21;
}
