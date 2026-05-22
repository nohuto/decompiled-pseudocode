/*
 * XREFs of ??_GDeviceDockServer@@UEAAPEAXI@Z @ 0x18019BFF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1DeviceDockServer@@UEAA@XZ @ 0x18019BDCC (--1DeviceDockServer@@UEAA@XZ.c)
 */

DeviceDockServer *__fastcall DeviceDockServer::`scalar deleting destructor'(DeviceDockServer *this, char a2)
{
  DeviceDockServer::~DeviceDockServer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
