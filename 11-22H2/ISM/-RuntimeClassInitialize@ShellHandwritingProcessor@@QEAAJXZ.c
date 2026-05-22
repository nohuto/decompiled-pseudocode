/*
 * XREFs of ?RuntimeClassInitialize@ShellHandwritingProcessor@@QEAAJXZ @ 0x1800781C0
 * Callers:
 *     ??$MakeAndInitialize@VShellHandwritingProcessor@@UIContextualProcessor@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIContextualProcessor@@@Z @ 0x180077790 (--$MakeAndInitialize@VShellHandwritingProcessor@@UIContextualProcessor@@$$V@Details@WRL@Microsof.c)
 * Callees:
 *     ?AddRef@BamoInputObserverManagerPrincipal@@UEAAKXZ @ 0x18001AC10 (-AddRef@BamoInputObserverManagerPrincipal@@UEAAKXZ.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800254AC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?InternalRelease@?$ComPtr@VShellHandwritingHostServer@@@WRL@Microsoft@@IEAAKXZ @ 0x180075174 (-InternalRelease@-$ComPtr@VShellHandwritingHostServer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellHandwritingProcessor::RuntimeClassInitialize(ShellHandwritingProcessor *this)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  BamoInputObserverManagerPrincipal *v3; // rax
  BamoInputObserverManagerPrincipal *v4; // rbx
  char *v5; // rsi
  BamoInputSystemPrincipal *v7; // [rsp+30h] [rbp+8h] BYREF

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v3 = (BamoInputObserverManagerPrincipal *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection
                                                                                             + 31)
                                                                                           + 8LL)
                                                                               + 216LL))(*((_QWORD *)BamoServerConnection
                                                                                         + 31) + 8LL);
  v4 = v3;
  v5 = (char *)this + 24;
  if ( *((BamoInputObserverManagerPrincipal **)this + 3) != v3 )
  {
    if ( v3 )
      BamoInputObserverManagerPrincipal::AddRef(v3);
    v7 = *(BamoInputSystemPrincipal **)v5;
    *(_QWORD *)v5 = v4;
    Microsoft::WRL::ComPtr<ShellHandwritingHostServer>::InternalRelease(&v7);
  }
  *(_QWORD *)(*(_QWORD *)v5 + 56LL) = ((unsigned __int64)this + 8) & -(__int64)(this != 0LL);
  return 0LL;
}
