/*
 * XREFs of ??1SharedObjectBase@@MEAA@XZ @ 0x180117F48
 * Callers:
 *     ??1?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@MEAA@XZ @ 0x18005BD64 (--1-$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@MEAA@XZ.c)
 *     ??_E?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@MEAAPEAXI@Z @ 0x18005BDA0 (--_E-$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@MEAAPEAXI@Z.c)
 *     ??_GSharedObjectBase@@MEAAPEAXI@Z @ 0x180118010 (--_GSharedObjectBase@@MEAAPEAXI@Z.c)
 *     ??1SipcServer@@EEAA@XZ @ 0x180118960 (--1SipcServer@@EEAA@XZ.c)
 *     ??_E?$SharedUnknownBase@UISIPCEndpoint@@@@MEAAPEAXI@Z @ 0x1801189F0 (--_E-$SharedUnknownBase@UISIPCEndpoint@@@@MEAAPEAXI@Z.c)
 *     ??_G?$SharedUnknownBase@UISIPCServer@@@@MEAAPEAXI@Z @ 0x180118A50 (--_G-$SharedUnknownBase@UISIPCServer@@@@MEAAPEAXI@Z.c)
 *     ??_GSipcEndpoint@@EEAAPEAXI@Z @ 0x180118BA0 (--_GSipcEndpoint@@EEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SharedObjectBase::~SharedObjectBase(SharedObjectBase *this)
{
  *(_QWORD *)this = &SharedObjectBase::`vftable';
  if ( *((_QWORD *)this + 1) )
    __fastfail(0xEu);
}
