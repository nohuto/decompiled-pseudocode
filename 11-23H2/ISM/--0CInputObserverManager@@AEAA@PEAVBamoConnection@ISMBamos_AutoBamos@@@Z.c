/*
 * XREFs of ??0CInputObserverManager@@AEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180039E0C
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180039E9C (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180037EEC (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ??0?$CBaseInputObserverServer@$0L@@@IEAA@W4InputObserverType@InputObservation@@@Z @ 0x1800397F4 (--0-$CBaseInputObserverServer@$0L@@@IEAA@W4InputObserverType@InputObservation@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
CInputObserverManager *__fastcall CInputObserverManager::CInputObserverManager(
        CInputObserverManager *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  _QWORD *v4; // [rsp+40h] [rbp+18h]

  *(_QWORD *)this = &BamoInputObserverManagerPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoInputObserverManagerPrincipal::`vftable'{for `IInputObserverManagerPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((CInputObserverManager *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoInputObserverManagerPrincipalImpl::`vftable';
  *(_QWORD *)this = &CInputObserverManager::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoInputObserverManagerPrincipal::`vftable'{for `IInputObserverManagerPrincipal'};
  v4 = operator new(0xE8uLL);
  CBaseInputObserverServer<11>::CBaseInputObserverServer<11>((__int64)v4);
  *v4 = &CPointerInputObserverServer<11>::`vftable';
  qword_180268A00 = v4;
  return this;
}
