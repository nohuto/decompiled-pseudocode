/*
 * XREFs of ??_GEdgyControllerClientProxy@@UEAAPEAXI@Z @ 0x180178BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1EdgyControllerClientProxy@@UEAA@XZ @ 0x180178B34 (--1EdgyControllerClientProxy@@UEAA@XZ.c)
 */

EdgyControllerClientProxy *__fastcall EdgyControllerClientProxy::`scalar deleting destructor'(
        EdgyControllerClientProxy *this,
        char a2)
{
  EdgyControllerClientProxy::~EdgyControllerClientProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
