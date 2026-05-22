/*
 * XREFs of ??1InputProcess@@UEAA@XZ @ 0x1800D9C2C
 * Callers:
 *     ??_GInputProcess@@UEAAPEAXI@Z @ 0x1800D9CC8 (--_GInputProcess@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B149C (-InternalRelease@-$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall InputProcess::~InputProcess(Microsoft::Bamo::BaseBamoConnection **this)
{
  Microsoft::Bamo::BaseBamoConnection *v2; // rcx

  Microsoft::WRL::ComPtr<InputSystemInternalClientConnection>::InternalRelease(this + 4);
  v2 = this[3];
  if ( v2 )
  {
    this[3] = 0LL;
    (*(void (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  this[1] = (Microsoft::Bamo::BaseBamoConnection *)&RefCountedObject::`vftable';
}
