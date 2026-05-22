/*
 * XREFs of ??1SharedObjectBase@@MEAA@XZ @ 0x180125FD0
 * Callers:
 *     ??1?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@MEAA@XZ @ 0x18006D6B0 (--1-$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@MEAA@XZ.c)
 *     ??_E?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@MEAAPEAXI@Z @ 0x18006D6F0 (--_E-$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@MEAAPEAXI@Z.c)
 *     ??_GSharedObjectBase@@MEAAPEAXI@Z @ 0x1801260A0 (--_GSharedObjectBase@@MEAAPEAXI@Z.c)
 *     ??1SipcServer@@EEAA@XZ @ 0x1801269F0 (--1SipcServer@@EEAA@XZ.c)
 *     ??_E?$SharedUnknownBase@UISIPCEndpoint@@@@MEAAPEAXI@Z @ 0x180126A80 (--_E-$SharedUnknownBase@UISIPCEndpoint@@@@MEAAPEAXI@Z.c)
 *     ??_G?$SharedUnknownBase@UISIPCServer@@@@MEAAPEAXI@Z @ 0x180126AE0 (--_G-$SharedUnknownBase@UISIPCServer@@@@MEAAPEAXI@Z.c)
 *     ??_GSipcEndpoint@@EEAAPEAXI@Z @ 0x180126C30 (--_GSipcEndpoint@@EEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SharedObjectBase::~SharedObjectBase(SharedObjectBase *this)
{
  *(_QWORD *)this = &SharedObjectBase::`vftable';
  if ( *((_QWORD *)this + 1) )
    __fastfail(0xEu);
}
