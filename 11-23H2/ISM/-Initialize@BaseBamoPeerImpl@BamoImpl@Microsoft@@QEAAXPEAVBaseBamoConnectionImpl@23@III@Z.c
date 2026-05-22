/*
 * XREFs of ?Initialize@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoConnectionImpl@23@III@Z @ 0x1800AF3F8
 * Callers:
 *     ?InitializeDefaultPlaceholderPeer@BamoConnectionImpl@MPCManagerBamo_AutoBamos@BamoImpl@@MEAAJPEAPEAVBaseBamoPeer@Bamo@Microsoft@@@Z @ 0x1800AF450 (-InitializeDefaultPlaceholderPeer@BamoConnectionImpl@MPCManagerBamo_AutoBamos@BamoImpl@@MEAAJPEA.c)
 *     ?InitializeDefaultPlaceholderPeer@BamoConnectionImpl@dataprovider_AutoBamos@BamoImpl@@MEAAJPEAPEAVBaseBamoPeer@Bamo@Microsoft@@@Z @ 0x180110810 (-InitializeDefaultPlaceholderPeer@BamoConnectionImpl@dataprovider_AutoBamos@BamoImpl@@MEAAJPEAPE.c)
 *     ?InitializeDefaultPlaceholderPeer@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@MEAAJPEAPEAVBaseBamoPeer@Bamo@Microsoft@@@Z @ 0x180125B30 (-InitializeDefaultPlaceholderPeer@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@MEAAJPEAPEAVBa.c)
 * Callees:
 *     ??4?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVConnectionIndirector@BamoImpl@Microsoft@@@Z @ 0x1800591B4 (--4-$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAA.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::Initialize(
        Microsoft::BamoImpl::BamoImplObject **this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        __int64 a3,
        const char *a4,
        unsigned int a5)
{
  int v6; // esi
  int v7; // ebx

  v6 = (int)a4;
  v7 = a3;
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::operator=(
    this + 3,
    *((_QWORD *)a2 + 12),
    a3,
    a4);
  *((_DWORD *)this + 8) = v7;
  *((_DWORD *)this + 9) = v6;
  *((_DWORD *)this + 10) = a5;
}
