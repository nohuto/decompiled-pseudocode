/*
 * XREFs of ?AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x18002BD90
 * Callers:
 *     ?RuntimeClassInitialize@ForegroundManager@@UEAAJXZ @ 0x1800294B0 (-RuntimeClassInitialize@ForegroundManager@@UEAAJXZ.c)
 *     ??0DWMCursor@@IEAA@PEAVDWMCursorBroker@@W4InputType@@UCursorId@@@Z @ 0x180029C10 (--0DWMCursor@@IEAA@PEAVDWMCursorBroker@@W4InputType@@UCursorId@@@Z.c)
 *     ??0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z @ 0x18002BC20 (--0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z.c)
 *     ??0?$CalloutWrapper@VBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoConnectionImpl@ISMBamos_AutoBamos@1@W4PrologEpilogConfig@12@@Z @ 0x1801026BC (--0-$CalloutWrapper@VBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@@BamoImpl@Micr_ea_1801026BC.c)
 *     ?GetForCurrentThread@InputSystemInternalClientConnection@@SA?AV?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@XZ @ 0x1801208EC (-GetForCurrentThread@InputSystemInternalClientConnection@@SA-AV-$ComPtr@VInputSystemInternalClie.c)
 *     ??4?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSystemServerConnection@@@Z @ 0x180138224 (--4-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSystemServerConne.c)
 *     ??0MPCConstantManagerClient@@QEAA@PEAVMPCManagerClientConnection@@@Z @ 0x180164570 (--0MPCConstantManagerClient@@QEAA@PEAVMPCManagerClientConnection@@@Z.c)
 *     ??4?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSystemInternalServerConnection@@@Z @ 0x180195B98 (--4-$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSystemInt.c)
 * Callees:
 *     ??4?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVConnectionIndirector@BamoImpl@Microsoft@@@Z @ 0x18004C8E4 (--4-$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAA.c)
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
