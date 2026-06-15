/*
 * XREFs of ??_GCVADServer@@UEAAPEAXI@Z @ 0x18004B0E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVADServer@@UEAA@XZ @ 0x180017678 (--1CVADServer@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 */

CVADServer *__fastcall CVADServer::`scalar deleting destructor'(CVADServer *this, char a2)
{
  CVADServer::~CVADServer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x260uLL);
  return this;
}
