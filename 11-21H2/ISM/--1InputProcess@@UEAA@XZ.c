/*
 * XREFs of ??1InputProcess@@UEAA@XZ @ 0x1800B186C
 * Callers:
 *     ??_GInputProcess@@UEAAPEAXI@Z @ 0x1800B1908 (--_GInputProcess@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VAnimationDataProviderConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x180087D3C (-InternalRelease@-$ComPtr@VAnimationDataProviderConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall InputProcess::~InputProcess(Microsoft::Bamo::BaseBamoConnection **this)
{
  Microsoft::Bamo::BaseBamoConnection *v2; // rcx

  Microsoft::WRL::ComPtr<AnimationDataProviderConnection>::InternalRelease(this + 4);
  v2 = this[3];
  if ( v2 )
  {
    this[3] = 0LL;
    (*(void (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  this[1] = (Microsoft::Bamo::BaseBamoConnection *)&RefCountedObject::`vftable';
}
