/*
 * XREFs of ??_GCProcessSubmixProxy@@MEAAPEAXI@Z @ 0x180013F90
 * Callers:
 *     <none>
 * Callees:
 *     ??1CProcessSubmixProxy@@MEAA@XZ @ 0x180015E20 (--1CProcessSubmixProxy@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 */

CProcessSubmixProxy *__fastcall CProcessSubmixProxy::`scalar deleting destructor'(CProcessSubmixProxy *this, char a2)
{
  CProcessSubmixProxy::~CProcessSubmixProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xE0uLL);
  return this;
}
