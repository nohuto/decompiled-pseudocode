/*
 * XREFs of ?OnInputConfigChanged@BamoSystemContextEndpointPrincipalImpl@BamoImpl@@QEAAJPEBII@Z @ 0x180087EA8
 * Callers:
 *     ?Thunk_OnInputConfigChanged_331@?$ISystemContextEndpointPrincipal_Receive@VBamoSystemContextEndpointPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180088880 (-Thunk_OnInputConfigChanged_331@-$ISystemContextEndpointPrincipal_Receive@VBamoSystemContextEndp.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18001FC2C (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x18004C92C (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoSystemContextEndpointPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoSystemContextEndpointPrincipalImpl@1@@Z @ 0x180086FD0 (--0-$CalloutWrapper@VBamoSystemContextEndpointPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@.c)
 *     ??1?$CalloutWrapper@VBamoSystemContextEndpointPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18008728C (--1-$CalloutWrapper@VBamoSystemContextEndpointPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@.c)
 *     ?AllocateBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAXI@Z @ 0x180087694 (-AllocateBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAXI@Z.c)
 *     ?ReleaseBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXPEAX@Z @ 0x180088634 (-ReleaseBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BamoImpl::BamoSystemContextEndpointPrincipalImpl::OnInputConfigChanged(
        BamoImpl::BamoSystemContextEndpointPrincipalImpl *this,
        const unsigned int *a2,
        unsigned int a3)
{
  __int64 v3; // rsi
  _QWORD *v6; // rbx
  int v7; // ecx
  __int64 v8; // r13
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v9; // r12
  char *Buffer; // rax
  char *v11; // rbp
  unsigned int v12; // r15d
  char *v13; // rbx
  __int64 v14; // r8
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v16; // eax
  int v17; // ebx
  unsigned int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // r8
  char *v21; // rdi
  int v23; // [rsp+20h] [rbp-68h]
  _BYTE v24[32]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v26; // [rsp+90h] [rbp+8h]

  v3 = a3;
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
  v26 = (*(__int64 (__fastcall **)(_QWORD *))(*v6 + 32LL))(v6);
  v8 = v6[5];
  v9 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v8 + 24) + 32LL);
  Buffer = (char *)Microsoft::BamoImpl::BaseBamoConnectionImpl::AllocateBuffer(v9, 8 * (int)v3);
  v11 = Buffer;
  v12 = 0;
  if ( (_DWORD)v3 )
  {
    v13 = Buffer;
    do
    {
      *(_QWORD *)v13 = 0LL;
      v14 = *a2;
      if ( (_DWORD)v14 )
      {
        Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
                  *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v8 + 24) + 32LL),
                  *(unsigned int *)(v8 + 36),
                  v14);
        if ( !Proxy )
        {
          v18 = -2018375668;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xDA09,
            (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
            (const char *)0x87B2080CLL);
          goto LABEL_23;
        }
        *(_QWORD *)v13 = (char *)Proxy - 16;
      }
      ++v12;
      ++a2;
      v13 += 8;
    }
    while ( v12 < (unsigned int)v3 );
  }
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemContextEndpointPrincipalImpl>::CalloutWrapper<BamoImpl::BamoSystemContextEndpointPrincipalImpl>(
    (__int64)v24,
    (__int64)v9,
    (__int64)this);
  v16 = (*(__int64 (__fastcall **)(char *, __int64, char *, _QWORD))(*((_QWORD *)this - 2) + 128LL))(
          (char *)this - 16,
          v26,
          v11,
          (unsigned int)v3);
  v17 = v16;
  if ( v16 != -2018375668 && v16 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xDA19,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v16,
      v23);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemContextEndpointPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoSystemContextEndpointPrincipalImpl>((__int64)v24);
  if ( (_DWORD)v3 )
  {
    v21 = v11;
    do
    {
      if ( *(_QWORD *)v21 )
        Microsoft::BamoImpl::BamoProxyImpl::AckReference(
          (Microsoft::BamoImpl::BamoProxyImpl *)(*(_QWORD *)v21 + 16LL),
          v19,
          v20);
      v21 += 8;
      --v3;
    }
    while ( v3 );
  }
  if ( v17 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDA2C,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v17);
  v18 = v17;
LABEL_23:
  Microsoft::BamoImpl::BaseBamoConnectionImpl::ReleaseBuffer(v9, v11);
  return v18;
}
