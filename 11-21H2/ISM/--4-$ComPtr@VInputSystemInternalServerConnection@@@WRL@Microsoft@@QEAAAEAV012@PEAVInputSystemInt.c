/*
 * XREFs of ??4?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSystemInternalServerConnection@@@Z @ 0x180195B98
 * Callers:
 *     ?StartProcess@InputProcessManager@@QEAAJXZ @ 0x180196908 (-StartProcess@InputProcessManager@@QEAAJXZ.c)
 * Callees:
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18002BBAC (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x18002BD90 (-AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
Microsoft::Bamo::BaseBamoConnection **__fastcall Microsoft::WRL::ComPtr<InputSystemInternalServerConnection>::operator=(
        Microsoft::Bamo::BaseBamoConnection **a1,
        Microsoft::Bamo::BaseBamoConnection *a2)
{
  Microsoft::Bamo::BaseBamoConnection *v4; // rcx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v5; // rax

  v4 = *a1;
  if ( v4 != a2 )
  {
    if ( a2 )
    {
      v5 = (Microsoft::BamoImpl::BaseBamoConnectionImpl *)(*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)a2 + 48LL))(a2);
      Microsoft::BamoImpl::BaseBamoConnectionImpl::AddRef(v5);
      v4 = *a1;
    }
    *a1 = a2;
    if ( v4 )
      Microsoft::Bamo::BaseBamoConnection::Release(v4);
  }
  return a1;
}
