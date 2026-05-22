/*
 * XREFs of ??_GEdgyControllerClientProxy@@UEAAPEAXI@Z @ 0x18014C120
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1EdgyControllerClientProxy@@UEAA@XZ @ 0x18014C070 (--1EdgyControllerClientProxy@@UEAA@XZ.c)
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
