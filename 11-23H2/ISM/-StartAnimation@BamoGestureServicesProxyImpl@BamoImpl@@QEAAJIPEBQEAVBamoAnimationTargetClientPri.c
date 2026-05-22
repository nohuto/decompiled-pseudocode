/*
 * XREFs of ?StartAnimation@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJIPEBQEAVBamoAnimationTargetClientPrincipal@@IPEAVBamoDragManagerClientPrincipal@@W4GestureProcessorType@@@Z @ 0x180132B5C
 * Callers:
 *     ?StartAnimation@BamoGestureServicesProxy@@UEAAJIPEBQEAVBamoAnimationTargetClientPrincipal@@IPEAVBamoDragManagerClientPrincipal@@W4GestureProcessorType@@@Z @ 0x180132AD0 (-StartAnimation@BamoGestureServicesProxy@@UEAAJIPEBQEAVBamoAnimationTargetClientPrincipal@@IPEAV.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180030648 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x1800306C8 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180030B64 (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AllocateBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAXI@Z @ 0x18009E7BC (-AllocateBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAXI@Z.c)
 *     ?ReleaseBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXPEAX@Z @ 0x18009F6C0 (-ReleaseBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXPEAX@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800A0FDC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$vector@V?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A129C (--4-$vector@V-$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@V-$all.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1800A3AFC (-_Tidy@-$vector@V-$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@V-.c)
 *     ??$emplace_back@V?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_T$$QEAV?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800B9880 (--$emplace_back@V-$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@@-.c)
 *     ??0?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVBamoPrincipal@Bamo@Microsoft@@@Z @ 0x1800B98BC (--0-$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVBamoPri.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall BamoImpl::BamoGestureServicesProxyImpl::StartAnimation(
        __int64 a1,
        __int64 a2,
        struct Microsoft::Bamo::BamoPrincipal **a3,
        const char *a4,
        struct Microsoft::Bamo::BamoPrincipal *a5)
{
  __int64 v5; // r13
  char *v8; // rbx
  __int64 v9; // r10
  __int64 result; // rax
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v11; // r15
  struct IMessageCallSendHost *Buffer; // rax
  struct IMessageCallSendHost *v13; // r12
  struct IMessageCallSendHost *v14; // rsi
  __int64 v15; // r15
  int v16; // eax
  int v17; // eax
  unsigned int v18; // r14d
  bool v19; // zf
  struct IMessageCallSendHost *v20; // rdi
  char *v21; // rax
  __int64 *v22; // rdx
  unsigned int v23; // ebx
  const char *v24; // r9
  unsigned int v25; // [rsp+60h] [rbp-68h] BYREF
  unsigned int v26; // [rsp+64h] [rbp-64h] BYREF
  struct IMessageCallSendHost *v27[4]; // [rsp+68h] [rbp-60h] BYREF
  __int128 v28; // [rsp+88h] [rbp-40h] BYREF
  __int64 v29; // [rsp+98h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v31; // [rsp+D0h] [rbp+8h]

  v5 = (unsigned int)a4;
  v8 = 0LL;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x8B37,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    if ( v9 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v9 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8B40,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v11 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v9 + 24) + 32LL);
    v31 = v11;
    Buffer = (struct IMessageCallSendHost *)Microsoft::BamoImpl::BaseBamoConnectionImpl::AllocateBuffer(
                                              v11,
                                              4 * (int)v5);
    v13 = Buffer;
    v27[3] = Buffer;
    v27[2] = v11;
    if ( (_DWORD)v5 )
    {
      v14 = Buffer;
      v15 = v5;
      do
      {
        if ( *a3 )
          v16 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
                  (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)a1,
                  *a3);
        else
          v16 = 0;
        *(_DWORD *)v14 = v16;
        ++a3;
        v14 = (struct IMessageCallSendHost *)((char *)v14 + 4);
        --v15;
      }
      while ( v15 );
      v11 = v31;
    }
    if ( a5 )
      Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
        (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)a1,
        a5);
    v17 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
            (Microsoft::BamoImpl::BamoProxyImpl *)a1,
            v27,
            &v25,
            &v26);
    v18 = v17;
    if ( v17 >= 0 )
    {
      try
      {
        v19 = *(_BYTE *)(a1 + 31) == 0;
        v20 = v27[0];
        if ( !v19 )
        {
          v21 = (char *)v27[0] - 16;
          if ( !v27[0] )
            v21 = 0LL;
          v21[72] = 1;
          v28 = 0LL;
          v29 = 0LL;
          if ( a5 )
          {
            v22 = wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>(
                    v27,
                    (void (__fastcall ***)(_QWORD))a5);
            std::vector<wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>>(
              (__int64 **)&v28,
              v22);
            wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)v27);
          }
          if ( v20 )
            v8 = (char *)v20 - 16;
          std::vector<wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>>::operator=(
            (_QWORD *)v8 + 10,
            &v28);
          std::vector<wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>>::_Tidy((__int64)&v28);
        }
        v27[0] = (struct IMessageCallSendHost *)v25;
        v27[1] = (struct IMessageCallSendHost *)v26;
        v23 = CoreUICallSend(v20, v27, 2LL, 41LL);
        Microsoft::BamoImpl::BaseBamoConnectionImpl::ReleaseBuffer(v11, v13);
        result = v23;
      }
      catch ( ... )
      {
        wil::details::in1diag3::FailFast_CaughtException(
          retaddr,
          (void *)0x8B64,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          v24);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8B4F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v17);
      Microsoft::BamoImpl::BaseBamoConnectionImpl::ReleaseBuffer(v11, v13);
      return v18;
    }
  }
  return result;
}
