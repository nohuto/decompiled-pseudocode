/*
 * XREFs of ??_GCImmersiveApp@@MEAAPEAXI@Z @ 0x180031B20
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveApp@@MEAA@XZ @ 0x180031B5C (--1CImmersiveApp@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

CImmersiveApp *__fastcall CImmersiveApp::`scalar deleting destructor'(CImmersiveApp *this, char a2)
{
  CImmersiveApp::~CImmersiveApp(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x3A0uLL);
  return this;
}
