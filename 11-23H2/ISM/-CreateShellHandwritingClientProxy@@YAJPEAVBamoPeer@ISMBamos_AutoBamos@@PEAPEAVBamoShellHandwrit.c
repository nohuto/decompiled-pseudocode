/*
 * XREFs of ?CreateShellHandwritingClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoShellHandwritingHostClientProxy@@@Z @ 0x18006230C
 * Callers:
 *     ?Materialize_BamoShellHandwritingHostClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18005DB40 (-Materialize_BamoShellHandwritingHostClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJ.c)
 * Callees:
 *     ?AddRef@BamoInputObserverManagerPrincipal@@UEAAKXZ @ 0x18001A3E0 (-AddRef@BamoInputObserverManagerPrincipal@@UEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     ?GetConnection@BamoSystemContextManagerPrincipal@@QEBAPEAVBamoConnection@ISMBamos_AutoBamos@@XZ @ 0x18005FE90 (-GetConnection@BamoSystemContextManagerPrincipal@@QEBAPEAVBamoConnection@ISMBamos_AutoBamos@@XZ.c)
 *     ??0ShellHandwritingClientProxy@@QEAA@AEBV?$ComPtr@VShellHandwritingHostServer@@@WRL@Microsoft@@@Z @ 0x1800621A0 (--0ShellHandwritingClientProxy@@QEAA@AEBV-$ComPtr@VShellHandwritingHostServer@@@WRL@Microsoft@@@.c)
 *     ?InternalRelease@?$ComPtr@VShellHandwritingHostServer@@@WRL@Microsoft@@IEAAKXZ @ 0x1800623A4 (-InternalRelease@-$ComPtr@VShellHandwritingHostServer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreateShellHandwritingClientProxy(
        struct ISMBamos_AutoBamos::BamoPeer *a1,
        struct BamoShellHandwritingHostClientProxy **a2)
{
  struct ISMBamos_AutoBamos::BamoConnection *Connection; // rax
  BamoInputObserverManagerPrincipal *v4; // rbx
  void *v5; // rdi
  __int64 v6; // r8
  const char *v7; // r9
  BamoInputObserverManagerPrincipal *v9; // [rsp+38h] [rbp+10h] BYREF

  Connection = BamoSystemContextManagerPrincipal::GetConnection(a1);
  v4 = (BamoInputObserverManagerPrincipal *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)Connection + 31)
                                                                                           + 8LL)
                                                                               + 216LL))(*((_QWORD *)Connection + 31) + 8LL);
  v5 = operator new(0x38uLL);
  v9 = v4;
  if ( v4 )
    BamoInputObserverManagerPrincipal::AddRef(v4);
  *a2 = (struct BamoShellHandwritingHostClientProxy *)ShellHandwritingClientProxy::ShellHandwritingClientProxy(
                                                        (__int64)v5,
                                                        &v9,
                                                        v6,
                                                        v7);
  Microsoft::WRL::ComPtr<ShellHandwritingHostServer>::InternalRelease(&v9);
  return 0LL;
}
