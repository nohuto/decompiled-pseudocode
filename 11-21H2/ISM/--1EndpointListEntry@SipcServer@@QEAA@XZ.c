/*
 * XREFs of ??1EndpointListEntry@SipcServer@@QEAA@XZ @ 0x1800FCCEC
 * Callers:
 *     ??_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z @ 0x1800FCF5C (--_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleasePrivateReference@SharedObjectBase@@IEAAIXZ @ 0x1800FC4EC (-ReleasePrivateReference@SharedObjectBase@@IEAAIXZ.c)
 *     ?RemoveHandle@AggregateWaitHandle@@QEAAJPEAX@Z @ 0x1800FF554 (-RemoveHandle@AggregateWaitHandle@@QEAAJPEAX@Z.c)
 *     ?RemoveOwner@SipcEndpoint@@QEAAXXZ @ 0x1800FF5F0 (-RemoveOwner@SipcEndpoint@@QEAAXXZ.c)
 */

void __fastcall SipcServer::EndpointListEntry::~EndpointListEntry(SipcServer::EndpointListEntry *this)
{
  if ( *((_QWORD *)this + 2) )
  {
    AggregateWaitHandle::RemoveHandle((AggregateWaitHandle *)(*((_QWORD *)this + 3) + 72LL), *((void **)this + 4));
    AggregateWaitHandle::RemoveHandle((AggregateWaitHandle *)(*((_QWORD *)this + 3) + 72LL), *((void **)this + 5));
    SipcEndpoint::RemoveOwner(*((SipcEndpoint **)this + 2));
    SharedObjectBase::ReleasePrivateReference(*((SharedObjectBase **)this + 2));
  }
}
