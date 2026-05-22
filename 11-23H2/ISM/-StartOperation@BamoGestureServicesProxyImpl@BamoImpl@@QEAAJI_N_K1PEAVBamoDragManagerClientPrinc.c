/*
 * XREFs of ?StartOperation@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJI_N_K1PEAVBamoDragManagerClientPrincipal@@W4GestureProcessorType@@@Z @ 0x18005E318
 * Callers:
 *     ?StartOperation@BamoGestureServicesProxy@@UEAAJI_N_K1PEAVBamoDragManagerClientPrincipal@@W4GestureProcessorType@@@Z @ 0x18005E280 (-StartOperation@BamoGestureServicesProxy@@UEAAJI_N_K1PEAVBamoDragManagerClientPrincipal@@W4Gestu.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180030648 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x1800306C8 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180030B64 (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800A0FDC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$vector@V?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A129C (--4-$vector@V-$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@V-$all.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1800A3AFC (-_Tidy@-$vector@V-$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@V-.c)
 *     ??$emplace_back@V?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_T$$QEAV?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800B9880 (--$emplace_back@V-$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@@-.c)
 *     ??0?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVBamoPrincipal@Bamo@Microsoft@@@Z @ 0x1800B98BC (--0-$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVBamoPri.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BamoImpl::BamoGestureServicesProxyImpl::StartOperation(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4,
        __int64 a5,
        struct Microsoft::Bamo::BamoPrincipal *a6)
{
  __int64 v7; // r10
  int v9; // eax
  unsigned int v10; // esi
  bool v11; // zf
  struct IMessageCallSendHost *v12; // rbx
  char *v13; // rax
  __int64 v14; // rax
  const char *v15; // r9
  char *v16; // rcx
  unsigned int v17; // [rsp+60h] [rbp-48h] BYREF
  struct IMessageCallSendHost *v18[2]; // [rsp+68h] [rbp-40h] BYREF
  __int128 v19; // [rsp+78h] [rbp-30h] BYREF
  __int64 v20; // [rsp+88h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned int v22; // [rsp+B0h] [rbp+8h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x8AB7,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    if ( v7 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v7 + 24) + 32LL),
        -2018375660,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8AC0,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    if ( a6 )
      Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
        (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)a1,
        a6);
    v9 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (Microsoft::BamoImpl::BamoProxyImpl *)a1,
           v18,
           &v22,
           &v17);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = *(_BYTE *)(a1 + 31) == 0;
      v12 = v18[0];
      if ( !v11 )
      {
        v13 = (char *)v18[0] - 16;
        if ( !v18[0] )
          v13 = 0LL;
        v13[72] = 1;
        v19 = 0LL;
        v20 = 0LL;
        if ( a6 )
        {
          v14 = wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>(
                  v18,
                  a6);
          try
          {
            std::vector<wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>>(
              &v19,
              v14);
            wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v18);
          }
          catch ( ... )
          {
            wil::details::in1diag3::FailFast_CaughtException(
              retaddr,
              (void *)0x8ADD,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
              v15);
          }
        }
        v16 = (char *)v12 - 16;
        if ( !v12 )
          v16 = 0LL;
        std::vector<wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>>::operator=(
          v16 + 80,
          &v19);
        std::vector<wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>>::_Tidy(&v19);
      }
      v18[0] = (struct IMessageCallSendHost *)v22;
      v18[1] = (struct IMessageCallSendHost *)v17;
      return CoreUICallSend(v12, v18, 2LL, 41LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8AC8,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v9);
      return v10;
    }
  }
}
