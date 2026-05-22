/*
 * XREFs of ?SetConstantToDefault@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@QEAAJW4InputType@@PEBGPEAVBamoAsyncHRESULTPrincipal@@@Z @ 0x18015DF78
 * Callers:
 *     ?SetConstantToDefault@BamoMPCConstantManagerClientProxy@@UEAAJW4InputType@@PEBGPEAVBamoAsyncHRESULTPrincipal@@@Z @ 0x18015DF00 (-SetConstantToDefault@BamoMPCConstantManagerClientProxy@@UEAAJW4InputType@@PEBGPEAVBamoAsyncHRES.c)
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
__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientProxyImpl::SetConstantToDefault(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char *a4)
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
  unsigned int v17; // [rsp+50h] [rbp-58h] BYREF
  struct IMessageCallSendHost *v18[2]; // [rsp+58h] [rbp-50h] BYREF
  __int128 v19; // [rsp+68h] [rbp-40h] BYREF
  __int64 v20; // [rsp+78h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned int v22; // [rsp+B0h] [rbp+8h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      9666LL,
      (__int64)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25C6,
      (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.MPCManagerBamo.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    if ( a4 )
      Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
        (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)a1,
        (struct Microsoft::Bamo::BamoPrincipal *)a4);
    v7 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (Microsoft::BamoImpl::BamoProxyImpl *)a1,
           v18,
           &v22,
           &v17);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = *(_BYTE *)(a1 + 31) == 0;
      v10 = v18[0];
      if ( !v9 )
      {
        if ( v18[0] )
          v11 = (char *)v18[0] - 16;
        else
          v11 = 0LL;
        v11[72] = 1;
        v19 = 0LL;
        v12 = 0LL;
        v20 = 0LL;
        if ( a4 )
        {
          v13 = wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>(
                  v18,
                  (void (__fastcall ***)(_QWORD))a4);
          try
          {
            std::vector<wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>>(
              (__int64 **)&v19,
              v13);
            wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)v18);
            v12 = v20;
          }
          catch ( ... )
          {
            wil::details::in1diag3::FailFast_CaughtException(
              retaddr,
              (void *)0x25E3,
              (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPC"
                   "ManagerBamo.MPCManagerBamo.bamo.h",
              v14);
          }
        }
        if ( v10 )
          v15 = (char *)v10 - 16;
        else
          v15 = 0LL;
        v16 = (__int64)(v15 + 80);
        if ( (__int128 *)v16 != &v19 )
        {
          std::vector<wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>>::_Tidy(v16);
          *(_OWORD *)v16 = v19;
          *(_QWORD *)(v16 + 16) = v12;
          v19 = 0LL;
          v20 = 0LL;
        }
        std::vector<wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>>::_Tidy((__int64)&v19);
      }
      v18[0] = (struct IMessageCallSendHost *)v22;
      v18[1] = (struct IMessageCallSendHost *)v17;
      return CoreUICallSend(v10, v18, 2LL, 1LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25CE,
        (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManage"
             "rBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v7);
      return v8;
    }
  }
}
