/*
 * XREFs of ?OnInputConfigChanged@BamoSystemContextEndpointProxyImpl@BamoImpl@@QEAAJPEBQEAVBamoInputSpacePayloadPrincipal@@I@Z @ 0x18013776C
 * Callers:
 *     ?OnInputConfigChanged@BamoSystemContextEndpointProxy@@UEAAJPEBQEAVBamoInputSpacePayloadPrincipal@@I@Z @ 0x180137700 (-OnInputConfigChanged@BamoSystemContextEndpointProxy@@UEAAJPEBQEAVBamoInputSpacePayloadPrincipal.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18003E8E8 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x18003E968 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AllocateBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAXI@Z @ 0x180087694 (-AllocateBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAXI@Z.c)
 *     ?ReleaseBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXPEAX@Z @ 0x180088634 (-ReleaseBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXPEAX@Z.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x1800A2250 (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoSystemContextEndpointProxyImpl::OnInputConfigChanged(
        BamoImpl::BamoSystemContextEndpointProxyImpl *this,
        struct Microsoft::Bamo::BamoPrincipal **a2,
        unsigned int a3)
{
  __int64 v3; // r14
  __int64 v6; // r9
  __int64 v7; // r9
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v9; // r12
  struct IMessageCallSendHost *Buffer; // rax
  struct IMessageCallSendHost *v11; // rbp
  struct IMessageCallSendHost *v12; // rdi
  __int64 v13; // r15
  int v14; // eax
  int v15; // eax
  unsigned int v16; // edi
  struct IMessageCallSendHost *v17; // rcx
  char *v18; // rax
  struct IMessageCallSendHost *v19[11]; // [rsp+40h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v21; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v22; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a3;
  v6 = *((_QWORD *)this + 2);
  if ( *(_DWORD *)(v6 + 44) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      56301LL,
      (__int64)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)v6);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDBF1,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v9 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v7 + 24) + 32LL);
    Buffer = (struct IMessageCallSendHost *)Microsoft::BamoImpl::BaseBamoConnectionImpl::AllocateBuffer(v9, 4 * (int)v3);
    v11 = Buffer;
    v19[3] = Buffer;
    v19[2] = v9;
    if ( (_DWORD)v3 )
    {
      v12 = Buffer;
      v13 = v3;
      do
      {
        if ( *a2 )
          v14 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
                  (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this,
                  *a2);
        else
          v14 = 0;
        *(_DWORD *)v12 = v14;
        ++a2;
        v12 = (struct IMessageCallSendHost *)((char *)v12 + 4);
        --v13;
      }
      while ( v13 );
    }
    v15 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, v19, &v21, &v22);
    v16 = v15;
    if ( v15 >= 0 )
    {
      v17 = v19[0];
      if ( *((_BYTE *)this + 31) )
      {
        v18 = (char *)v19[0] - 16;
        if ( !v19[0] )
          v18 = 0LL;
        v18[72] = 1;
      }
      v19[0] = (struct IMessageCallSendHost *)v21;
      v19[1] = (struct IMessageCallSendHost *)v22;
      v16 = CoreUICallSend(v17, v19, 2LL, 82LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDBFF,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v15);
    }
    Microsoft::BamoImpl::BaseBamoConnectionImpl::ReleaseBuffer(v9, v11);
    return v16;
  }
}
