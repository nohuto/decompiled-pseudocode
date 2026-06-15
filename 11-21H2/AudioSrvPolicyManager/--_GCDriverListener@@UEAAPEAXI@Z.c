/*
 * XREFs of ??_GCDriverListener@@UEAAPEAXI@Z @ 0x180032CB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??1CDriverListener@@UEAA@XZ @ 0x180032C2C (--1CDriverListener@@UEAA@XZ.c)
 */

CDriverListener *__fastcall CDriverListener::`scalar deleting destructor'(CDriverListener *this, char a2)
{
  CDriverListener::~CDriverListener(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
