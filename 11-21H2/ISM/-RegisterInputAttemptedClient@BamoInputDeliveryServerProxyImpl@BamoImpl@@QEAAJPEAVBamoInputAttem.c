/*
 * XREFs of ?RegisterInputAttemptedClient@BamoInputDeliveryServerProxyImpl@BamoImpl@@QEAAJPEAVBamoInputAttemptedDeliveryClientPrincipal@@@Z @ 0x18011513C
 * Callers:
 *     ?RegisterInputAttemptedClient@BamoInputDeliveryServerProxy@@UEAAJPEAVBamoInputAttemptedDeliveryClientPrincipal@@@Z @ 0x1801150E0 (-RegisterInputAttemptedClient@BamoInputDeliveryServerProxy@@UEAAJPEAVBamoInputAttemptedDeliveryC.c)
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
__int64 __fastcall BamoImpl::BamoInputDeliveryServerProxyImpl::RegisterInputAttemptedClient(
        BamoImpl::BamoInputDeliveryServerProxyImpl *this,
        struct BamoInputAttemptedDeliveryClientPrincipal *a2,
        __int64 a3,
        const char *a4)
{
  int v7; // eax
  unsigned int v8; // esi
  bool v9; // zf
  struct IMessageCallSendHost *v10; // rbx
  char *v11; // rax
  __int64 v12; // rsi
  __int64 *v13; // rax
  const char *v14; // r9
  char *v15; // rdi
  __int64 v16; // rdi
  __int128 v17; // [rsp+40h] [rbp-48h] BYREF
  __int64 v18; // [rsp+50h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v20; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v21; // [rsp+A0h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v22; // [rsp+A8h] [rbp+20h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      26967LL,
      (__int64)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x695B,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    if ( a2 )
      Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
        (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this,
        a2);
    v7 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v22, &v20, &v21);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = *((_BYTE *)this + 31) == 0;
      v10 = v22;
      if ( !v9 )
      {
        v11 = (char *)v22 - 16;
        if ( !v22 )
          v11 = 0LL;
        v11[72] = 1;
        v17 = 0LL;
        v12 = 0LL;
        v18 = 0LL;
        if ( a2 )
        {
          v13 = wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>(
                  &v22,
                  (void (__fastcall ***)(_QWORD))a2);
          try
          {
            std::vector<wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>>(
              (__int64 **)&v17,
              v13);
            wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v22);
            v12 = v18;
          }
          catch ( ... )
          {
            wil::details::in1diag3::FailFast_CaughtException(
              retaddr,
              (void *)0x6978,
              (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
              v14);
          }
        }
        v15 = (char *)v10 - 16;
        if ( !v10 )
          v15 = 0LL;
        v16 = (__int64)(v15 + 80);
        if ( (__int128 *)v16 != &v17 )
        {
          std::vector<wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>>::_Tidy(v16);
          *(_OWORD *)v16 = v17;
          *(_QWORD *)(v16 + 16) = v12;
          v17 = 0LL;
          v18 = 0LL;
        }
        std::vector<wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>>::_Tidy((__int64)&v17);
      }
      *(_QWORD *)&v17 = v20;
      *((_QWORD *)&v17 + 1) = v21;
      return CoreUICallSend(v10, &v17, 2LL, 47LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6963,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7);
      return v8;
    }
  }
}
