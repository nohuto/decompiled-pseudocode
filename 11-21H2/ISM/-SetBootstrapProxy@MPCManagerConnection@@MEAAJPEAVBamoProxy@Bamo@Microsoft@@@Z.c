/*
 * XREFs of ?SetBootstrapProxy@MPCManagerConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x1800A4D30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002BBF0 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnPeerConnected@MPCManager@@QEAAXPEAVBamoMPCManagerClientProxy@@@Z @ 0x18009A0E8 (-OnPeerConnected@MPCManager@@QEAAXPEAVBamoMPCManagerClientProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCManagerConnection::SetBootstrapProxy(MPCManager **this, struct Microsoft::Bamo::BamoProxy *a2)
{
  __int64 v3; // rax
  int v4; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_QWORD *)a2;
  v8 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct Microsoft::Bamo::BamoProxy *, GUID *, unsigned __int64 *))(v3 + 16))(
         a2,
         &GUID_a8ca2507_dff2_8088_288c_0cf895bc5bbb,
         &v8);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2D,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanagerconnection.cpp",
      (const char *)(unsigned int)v4,
      v6);
  MPCManager::OnPeerConnected(
    this[29],
    (struct BamoMPCManagerClientProxy *)((v8 - 8) & ((unsigned __int128)-(__int128)v8 >> 64)));
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v8);
  return 0LL;
}
