/*
 * XREFs of ??_GCSnapAssistViewHost@@UEAAPEAXI@Z @ 0x1804A3900
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1CSnapAssistViewHost@@UEAA@XZ @ 0x1804A37C0 (--1CSnapAssistViewHost@@UEAA@XZ.c)
 */

CSnapAssistViewHost *__fastcall CSnapAssistViewHost::`scalar deleting destructor'(CSnapAssistViewHost *this, char a2)
{
  CSnapAssistViewHost::~CSnapAssistViewHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
