/*
 * XREFs of ??1InputProcessManager@@UEAA@XZ @ 0x1801C186C
 * Callers:
 *     ??_GInputProcessManager@@UEAAPEAXI@Z @ 0x1801C18A0 (--_GInputProcessManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18000F950 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180111030 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall InputProcessManager::~InputProcessManager(InputProcessManager *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  const char *v4; // r9
  Microsoft::BamoImpl::BamoImplObject *v5; // rcx

  Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)this + 7);
  v5 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 4);
  if ( v5 )
    Microsoft::BamoImpl::BamoImplObject::Release(v5, v2, v3, v4);
}
