/*
 * XREFs of ?FromCookie@ActivationControllerBamoProxy@@SA?AV?$com_ptr_t@VBamoActivationControllerProxy@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x18004CDE4
 * Callers:
 *     ?TryUpdateApplicationActivationState@ActivationWatcherBamoPrincipal@@QEAAX_K@Z @ 0x18001B760 (-TryUpdateApplicationActivationState@ActivationWatcherBamoPrincipal@@QEAAX_K@Z.c)
 *     ?TryUpdateActivationControllerProxy@ActivationWatcherBamoPrincipal@@AEAAX_K_N@Z @ 0x18008E500 (-TryUpdateActivationControllerProxy@ActivationWatcherBamoPrincipal@@AEAAX_K_N@Z.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180014574 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??$TryGetProxy@VBamoActivationControllerProxy@@@BaseBamoConnection@Bamo@Microsoft@@QEAAXIIPEAPEAVBamoActivationControllerProxy@@@Z @ 0x18004CD18 (--$TryGetProxy@VBamoActivationControllerProxy@@@BaseBamoConnection@Bamo@Microsoft@@QEAAXIIPEAPEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall ActivationControllerBamoProxy::FromCookie(__int64 *a1, unsigned __int64 a2)
{
  unsigned int v2; // esi
  unsigned __int64 v4; // rdi
  struct InputSystemServerConnection *BamoServerConnection; // rbp
  __int64 v6; // rcx

  v2 = a2;
  v4 = HIDWORD(a2);
  *a1 = 0LL;
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v6 = *a1;
  *a1 = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  Microsoft::Bamo::BaseBamoConnection::TryGetProxy<BamoActivationControllerProxy>(
    (__int64)BamoServerConnection,
    v4,
    v2,
    a1);
  return a1;
}
