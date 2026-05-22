/*
 * XREFs of ?ReleasePrivateReference@SipcServer@@UEAAXXZ @ 0x18011B1B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SipcServer::ReleasePrivateReference(SipcServer *this)
{
  SharedObjectBase::ReleasePrivateReference((SipcServer *)((char *)this - 24));
}
