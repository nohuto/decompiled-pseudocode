/*
 * XREFs of ?SetConstant@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@QEAAJW4InputType@@PEBGAEBUtagPROPVARIANT@@PEAVBamoAsyncHRESULTPrincipal@@@Z @ 0x18015DC64
 * Callers:
 *     ?SetConstant@BamoMPCConstantManagerClientProxy@@UEAAJW4InputType@@PEBGAEBUtagPROPVARIANT@@PEAVBamoAsyncHRESULTPrincipal@@@Z @ 0x18015DBE0 (-SetConstant@BamoMPCConstantManagerClientProxy@@UEAAJW4InputType@@PEBGAEBUtagPROPVARIANT@@PEAVBa.c)
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
__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientProxyImpl::SetConstant(
        __int64 a1,
        int a2,
        __int64 a3,
        const char *a4,
        struct Microsoft::Bamo::BamoPrincipal *a5)
{
  struct Microsoft::Bamo::BamoPrincipal *v8; // rdi
  int v9; // eax
  unsigned int v10; // esi
  bool v11; // zf
  struct IMessageCallSendHost *v12; // rbx
  char *v13; // rax
  __int64 v14; // rsi
  __int64 *v15; // rax
  const char *v16; // r9
  char *v17; // rdi
  __int64 v18; // rdi
  unsigned int v19; // [rsp+50h] [rbp-68h] BYREF
  struct IMessageCallSendHost *v20[3]; // [rsp+58h] [rbp-60h] BYREF
  __int128 v21; // [rsp+70h] [rbp-48h] BYREF
  __int64 v22; // [rsp+80h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  unsigned int v24; // [rsp+C0h] [rbp+8h] BYREF
  int v25; // [rsp+C8h] [rbp+10h]

  v25 = a2;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      9493LL,
      (__int64)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2519,
      (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.MPCManagerBamo.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v8 = a5;
    if ( a5 )
      Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
        (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)a1,
        a5);
    v9 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (Microsoft::BamoImpl::BamoProxyImpl *)a1,
           v20,
           &v24,
           &v19);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = *(_BYTE *)(a1 + 31) == 0;
      v12 = v20[0];
      if ( !v11 )
      {
        v13 = (char *)v20[0] - 16;
        if ( !v20[0] )
          v13 = 0LL;
        v13[72] = 1;
        v21 = 0LL;
        v14 = 0LL;
        v22 = 0LL;
        if ( v8 )
        {
          v15 = wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>(
                  v20,
                  (void (__fastcall ***)(_QWORD))v8);
          try
          {
            std::vector<wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>>(
              (__int64 **)&v21,
              v15);
            wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)v20);
            v14 = v22;
          }
          catch ( ... )
          {
            wil::details::in1diag3::FailFast_CaughtException(
              retaddr,
              (void *)0x2536,
              (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPC"
                   "ManagerBamo.MPCManagerBamo.bamo.h",
              v16);
          }
        }
        v17 = (char *)v12 - 16;
        if ( !v12 )
          v17 = 0LL;
        v18 = (__int64)(v17 + 80);
        if ( (__int128 *)v18 != &v21 )
        {
          std::vector<wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>>::_Tidy(v18);
          *(_OWORD *)v18 = v21;
          *(_QWORD *)(v18 + 16) = v14;
          v21 = 0LL;
          v22 = 0LL;
        }
        std::vector<wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>>::_Tidy((__int64)&v21);
      }
      v21 = *(_OWORD *)a4;
      v22 = *((_QWORD *)a4 + 2);
      v20[0] = (struct IMessageCallSendHost *)v24;
      v20[1] = (struct IMessageCallSendHost *)v19;
      return CoreUICallSend(v12, v20, 2LL, 1LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2521,
        (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManage"
             "rBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v9);
      return v10;
    }
  }
}
