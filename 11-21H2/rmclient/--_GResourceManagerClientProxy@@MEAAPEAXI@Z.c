/*
 * XREFs of ??_GResourceManagerClientProxy@@MEAAPEAXI@Z @ 0x18001EB40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000AAC8 (--3@YAXPEAX@Z.c)
 *     ??1ResourceManagerClientProxy@@MEAA@XZ @ 0x18001EA2C (--1ResourceManagerClientProxy@@MEAA@XZ.c)
 */

ResourceManagerClientProxy *__fastcall ResourceManagerClientProxy::`scalar deleting destructor'(
        ResourceManagerClientProxy *this,
        char a2)
{
  ResourceManagerClientProxy::~ResourceManagerClientProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
