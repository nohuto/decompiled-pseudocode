/*
 * XREFs of ?AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x180028D90
 * Callers:
 *     ?OnPeerDisconnectedThunk@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@MEAAJPEAVBaseBamoPeerImpl@3Microsoft@@_N@Z @ 0x180028CB0 (-OnPeerDisconnectedThunk@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@MEAAJPEAVBaseBamoPeerIm.c)
 *     ??0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z @ 0x18003C88C (--0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z.c)
 *     ?RuntimeClassInitialize@ForegroundManager@@UEAAJXZ @ 0x180040BC0 (-RuntimeClassInitialize@ForegroundManager@@UEAAJXZ.c)
 *     ??4?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSystemServerConnection@@@Z @ 0x1800510DC (--4-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSystemServerConne.c)
 *     ??0?$CalloutWrapper@VBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoConnectionImpl@ISMBamos_AutoBamos@1@@Z @ 0x18011E328 (--0-$CalloutWrapper@VBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@@BamoImpl@Microsoft@@QEAA@P.c)
 *     ?GetForCurrentThread@InputSystemInternalClientConnection@@SA?AV?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@XZ @ 0x18013C284 (-GetForCurrentThread@InputSystemInternalClientConnection@@SA-AV-$ComPtr@VInputSystemInternalClie.c)
 *     ??0MPCConstantManagerClient@@QEAA@PEAVMPCManagerClientConnection@@@Z @ 0x180183BB4 (--0MPCConstantManagerClient@@QEAA@PEAVMPCManagerClientConnection@@@Z.c)
 *     ??4?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSystemInternalServerConnection@@@Z @ 0x1801B3B10 (--4-$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSystemInt.c)
 * Callees:
 *     ??4?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVConnectionIndirector@BamoImpl@Microsoft@@@Z @ 0x1800591B4 (--4-$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAA.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::AddRef(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)((char *)this + 104);
  if ( !*v2 )
    wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::operator=(
      v2,
      *((_QWORD *)this + 12));
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
