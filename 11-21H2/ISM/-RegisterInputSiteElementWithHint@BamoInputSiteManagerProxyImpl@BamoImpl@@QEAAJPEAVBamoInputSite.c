/*
 * XREFs of ?RegisterInputSiteElementWithHint@BamoInputSiteManagerProxyImpl@BamoImpl@@QEAAJPEAVBamoInputSiteElementPrincipal@@AEBUInputSiteId@@@Z @ 0x1801158FC
 * Callers:
 *     ?RegisterInputSiteElementWithHint@BamoInputSiteManagerProxy@@UEAAJPEAVBamoInputSiteElementPrincipal@@AEBUInputSiteId@@@Z @ 0x180115890 (-RegisterInputSiteElementWithHint@BamoInputSiteManagerProxy@@UEAAJPEAVBamoInputSiteElementPrinci.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18003E8E8 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x18003E968 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004CA28 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x18008CE4C (-_Tidy@-$vector@V-$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@V-.c)
 *     ??$emplace_back@V?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@$$QEAV23@@Z @ 0x1800A21D8 (--$emplace_back@V-$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@@-.c)
 *     ??0?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVBamoPrincipal@Bamo@Microsoft@@@Z @ 0x1800A2208 (--0-$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVBamoPri.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x1800A2250 (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BamoImpl::BamoInputSiteManagerProxyImpl::RegisterInputSiteElementWithHint(
        BamoImpl::BamoInputSiteManagerProxyImpl *this,
        struct BamoInputSiteElementPrincipal *a2,
        const struct InputSiteId *a3,
        const char *a4)
{
  int v8; // eax
  unsigned int v9; // esi
  bool v10; // zf
  struct IMessageCallSendHost *v11; // rbx
  char *v12; // rax
  __int64 v13; // rsi
  __int64 *v14; // rax
  const char *v15; // r9
  char *v16; // rdi
  __int64 v17; // rdi
  struct IMessageCallSendHost *v18[2]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v19; // [rsp+50h] [rbp-48h] BYREF
  __int64 v20; // [rsp+60h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v22; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v23; // [rsp+B8h] [rbp+20h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      21322LL,
      (__int64)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x534E,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    if ( a2 )
      Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
        (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this,
        a2);
    v8 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, v18, &v22, &v23);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = *((_BYTE *)this + 31) == 0;
      v11 = v18[0];
      if ( !v10 )
      {
        if ( v18[0] )
          v12 = (char *)v18[0] - 16;
        else
          v12 = 0LL;
        v12[72] = 1;
        v19 = 0LL;
        v13 = 0LL;
        v20 = 0LL;
        if ( a2 )
        {
          v14 = wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>(
                  v18,
                  (void (__fastcall ***)(_QWORD))a2);
          try
          {
            std::vector<wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>>(
              (__int64 **)&v19,
              v14);
            wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)v18);
            v13 = v20;
          }
          catch ( ... )
          {
            wil::details::in1diag3::FailFast_CaughtException(
              retaddr,
              (void *)0x536B,
              (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
              v15);
          }
        }
        if ( v11 )
          v16 = (char *)v11 - 16;
        else
          v16 = 0LL;
        v17 = (__int64)(v16 + 80);
        if ( (__int128 *)v17 != &v19 )
        {
          std::vector<wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>>::_Tidy(v17);
          *(_OWORD *)v17 = v19;
          *(_QWORD *)(v17 + 16) = v13;
          v19 = 0LL;
          v20 = 0LL;
        }
        std::vector<wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>>::_Tidy((__int64)&v19);
      }
      v19 = *(_OWORD *)a3;
      v18[0] = (struct IMessageCallSendHost *)v22;
      v18[1] = (struct IMessageCallSendHost *)v23;
      return CoreUICallSend(v11, v18, 2LL, 56LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5356,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
}
