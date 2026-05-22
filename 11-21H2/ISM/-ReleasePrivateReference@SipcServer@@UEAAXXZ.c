/*
 * XREFs of ?ReleasePrivateReference@SipcServer@@UEAAXXZ @ 0x1800FF4E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SipcServer::ReleasePrivateReference(SipcServer *this)
{
  SharedObjectBase::ReleasePrivateReference((SipcServer *)((char *)this - 24));
}
