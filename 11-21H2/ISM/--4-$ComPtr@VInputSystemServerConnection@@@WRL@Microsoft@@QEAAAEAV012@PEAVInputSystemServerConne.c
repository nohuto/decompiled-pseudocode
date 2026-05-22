/*
 * XREFs of ??4?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSystemServerConnection@@@Z @ 0x180138224
 * Callers:
 *     ?RuntimeClassInitialize@CursorSuppressionProcessor@@QEAAJV?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@@Z @ 0x1801387AC (-RuntimeClassInitialize@CursorSuppressionProcessor@@QEAAJV-$ComPtr@UISystemInputRouter@@@WRL@Mic.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x18002BB84 (-InternalRelease@-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x18002BD90 (-AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

Microsoft::Bamo::BaseBamoConnection **__fastcall Microsoft::WRL::ComPtr<InputSystemServerConnection>::operator=(
        Microsoft::Bamo::BaseBamoConnection **a1,
        Microsoft::Bamo::BaseBamoConnection *a2)
{
  Microsoft::Bamo::BaseBamoConnection *v4; // rax
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v5; // rax
  Microsoft::Bamo::BaseBamoConnection *v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = *a1;
  if ( *a1 != a2 )
  {
    if ( a2 )
    {
      v5 = (Microsoft::BamoImpl::BaseBamoConnectionImpl *)(*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)a2 + 48LL))(a2);
      Microsoft::BamoImpl::BaseBamoConnectionImpl::AddRef(v5);
      v4 = *a1;
    }
    v7 = v4;
    *a1 = a2;
    Microsoft::WRL::ComPtr<InputSystemServerConnection>::InternalRelease(&v7);
  }
  return a1;
}
