/*
 * XREFs of ??$CreateClient@VDiagCallbackClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVDiagCallbackClientConnection@@@Z @ 0x18016985C
 * Callers:
 *     ?Initialize@DiagnosticsDqThread@AnimationLoggingManager@Composition@UI@Windows@@AEAAXPEAK@Z @ 0x18016C764 (-Initialize@DiagnosticsDqThread@AnimationLoggingManager@Composition@UI@Windows@@AEAAXPEAK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18016A3C8 (--0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ??1?$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18016A9C8 (--1-$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x18016CB10 (-Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMs.c)
 */

__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::CreateClient<DiagCallbackClientConnection>(
        __int64 a1,
        __int128 *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  __int128 v9; // xmm6
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // r9
  __int64 v15; // rdx
  __int128 v17; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  _QWORD *v19; // [rsp+80h] [rbp+18h] BYREF

  v19 = a3;
  *a4 = 0LL;
  v7 = operator new(0x100uLL);
  v8 = v7;
  if ( v7 )
  {
    memset_0(v7 + 1, 0, 0xF8uLL);
    *v8 = &dcompwinrtnestedg_AutoBamos::BamoConnection::`vftable';
    Microsoft::BamoImpl::BaseBamoConnectionImpl::BaseBamoConnectionImpl(
      (Microsoft::BamoImpl::BaseBamoConnectionImpl *)(v8 + 1),
      (struct Microsoft::Bamo::BaseBamoConnection *)v8);
    v9 = *a2;
    v8[1] = &BamoImpl::dcompwinrtnestedg_AutoBamos::BamoConnectionImpl::`vftable';
    *v8 = &DiagCallbackClientConnection::`vftable';
    v8[31] = 0LL;
    v19 = v8;
    v10 = ((__int64 (__fastcall *)(_QWORD *))*(&DiagCallbackClientConnection::`vftable' + 7))(v8);
    v17 = v9;
    v12 = Microsoft::BamoImpl::BaseBamoConnectionImpl::Join(v10, a1, v11, &v17);
    v13 = v12;
    if ( v12 >= 0 )
    {
      *a4 = v8;
      return 0LL;
    }
    v14 = (unsigned int)v12;
    v15 = 2832LL;
  }
  else
  {
    v19 = 0LL;
    v13 = -2147024882;
    v14 = 2147942414LL;
    v15 = 2830LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
    (const char *)v14);
  wil::com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>(&v19);
  return v13;
}
