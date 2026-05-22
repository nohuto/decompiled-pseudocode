/*
 * XREFs of ??1InputProcessManager@@UEAA@XZ @ 0x180195AF4
 * Callers:
 *     ??_GInputProcessManager@@UEAAPEAXI@Z @ 0x180195C00 (--_GInputProcessManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x180003620 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18002BBAC (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E9710 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall InputProcessManager::~InputProcessManager(InputProcessManager *this)
{
  Microsoft::Bamo::BaseBamoConnection *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  const char *v5; // r9
  Microsoft::BamoImpl::BamoImplObject *v6; // rcx

  v2 = (Microsoft::Bamo::BaseBamoConnection *)*((_QWORD *)this + 8);
  if ( v2 )
  {
    *((_QWORD *)this + 8) = 0LL;
    Microsoft::Bamo::BaseBamoConnection::Release(v2);
  }
  Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)this + 7);
  v6 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 4);
  if ( v6 )
    Microsoft::BamoImpl::BamoImplObject::Release(v6, v3, v4, v5);
}
