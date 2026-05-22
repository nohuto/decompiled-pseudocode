/*
 * XREFs of ?Initialize@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoConnectionImpl@23@III@Z @ 0x18016C718
 * Callers:
 *     ?InitializeDefaultPlaceholderPeer@BamoConnectionImpl@dcompwinrtnestedg_AutoBamos@BamoImpl@@MEAAJPEAPEAVBaseBamoPeer@Bamo@Microsoft@@@Z @ 0x18016C8C0 (-InitializeDefaultPlaceholderPeer@BamoConnectionImpl@dcompwinrtnestedg_AutoBamos@BamoImpl@@MEAAJ.c)
 *     ?OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z @ 0x18016D4C0 (-OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z.c)
 * Callees:
 *     ??4?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVConnectionIndirector@BamoImpl@Microsoft@@@Z @ 0x18016ADEC (--4-$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAA.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::Initialize(
        Microsoft::BamoImpl::BamoImplObject **this,
        volatile signed __int32 **a2,
        int a3,
        int a4,
        unsigned int a5)
{
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::operator=(this + 3, a2[12]);
  *((_DWORD *)this + 8) = a3;
  *((_DWORD *)this + 9) = a4;
  *((_DWORD *)this + 10) = a5;
}
