/*
 * XREFs of ??4?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSystemServerConnection@@@Z @ 0x1800510DC
 * Callers:
 *     ??0DWMCursor@@IEAA@PEAVDWMCursorBroker@@W4InputType@@UCursorId@@@Z @ 0x180050F98 (--0DWMCursor@@IEAA@PEAVDWMCursorBroker@@W4InputType@@UCursorId@@@Z.c)
 *     ?RuntimeClassInitialize@CursorSuppressionProcessor@@QEAAJV?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@@Z @ 0x18015873C (-RuntimeClassInitialize@CursorSuppressionProcessor@@QEAAJV-$ComPtr@UISystemInputRouter@@@WRL@Mic.c)
 * Callees:
 *     ?AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x180028D90 (-AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x18003234C (-InternalRelease@-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

Microsoft::Bamo::BaseBamoConnection **__fastcall Microsoft::WRL::ComPtr<InputSystemServerConnection>::operator=(
        Microsoft::Bamo::BaseBamoConnection **a1,
        Microsoft::Bamo::BaseBamoConnection *a2)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v4; // rax
  Microsoft::Bamo::BaseBamoConnection *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    if ( a2 )
    {
      v4 = (Microsoft::BamoImpl::BaseBamoConnectionImpl *)(*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)a2 + 56LL))(a2);
      Microsoft::BamoImpl::BaseBamoConnectionImpl::AddRef(v4);
    }
    v6 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<InputSystemServerConnection>::InternalRelease(&v6);
  }
  return a1;
}
