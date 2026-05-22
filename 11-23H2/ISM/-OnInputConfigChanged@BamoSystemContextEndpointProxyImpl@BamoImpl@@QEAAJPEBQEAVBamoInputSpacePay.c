/*
 * XREFs of ?OnInputConfigChanged@BamoSystemContextEndpointProxyImpl@BamoImpl@@QEAAJPEBQEAVBamoInputSpacePayloadPrincipal@@I@Z @ 0x180151E3C
 * Callers:
 *     ?OnInputConfigChanged@BamoSystemContextEndpointProxy@@UEAAJPEBQEAVBamoInputSpacePayloadPrincipal@@I@Z @ 0x180151DD0 (-OnInputConfigChanged@BamoSystemContextEndpointProxy@@UEAAJPEBQEAVBamoInputSpacePayloadPrincipal.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180030648 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x1800306C8 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180030B64 (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AllocateBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAXI@Z @ 0x18009E7BC (-AllocateBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAXI@Z.c)
 *     ?ReleaseBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXPEAX@Z @ 0x18009F6C0 (-ReleaseBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXPEAX@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
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
  unsigned int v8; // ebx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v9; // r15
  struct IMessageCallSendHost *Buffer; // rax
  struct IMessageCallSendHost *v11; // rbp
  struct IMessageCallSendHost *v12; // rdi
  __int64 v13; // r12
  int v14; // eax
  int v15; // eax
  unsigned int v16; // edi
  struct IMessageCallSendHost *v18; // rcx
  char *v19; // rax
  struct IMessageCallSendHost *v20[11]; // [rsp+40h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v22; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v23; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a3;
  v6 = *((_QWORD *)this + 2);
  if ( *(_DWORD *)(v6 + 44) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1740,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)v6);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    v8 = -2018375660;
    if ( v7 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v7 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1749,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
  }
  else
  {
    v9 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v7 + 24) + 32LL);
    Buffer = (struct IMessageCallSendHost *)Microsoft::BamoImpl::BaseBamoConnectionImpl::AllocateBuffer(v9, 4 * (int)v3);
    v11 = Buffer;
    v20[3] = Buffer;
    v20[2] = v9;
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
    v15 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, v20, &v22, &v23);
    v16 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1757,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v15);
      Microsoft::BamoImpl::BaseBamoConnectionImpl::ReleaseBuffer(v9, v11);
      return v16;
    }
    v18 = v20[0];
    if ( *((_BYTE *)this + 31) )
    {
      v19 = (char *)v20[0] - 16;
      if ( !v20[0] )
        v19 = 0LL;
      v19[72] = 1;
    }
    v20[0] = (struct IMessageCallSendHost *)v22;
    v20[1] = (struct IMessageCallSendHost *)v23;
    v8 = CoreUICallSend(v18, v20, 2LL, 86LL);
    Microsoft::BamoImpl::BaseBamoConnectionImpl::ReleaseBuffer(v9, v11);
  }
  return v8;
}
