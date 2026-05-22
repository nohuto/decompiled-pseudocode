/*
 * XREFs of ??1EndpointListEntry@SipcServer@@QEAA@XZ @ 0x180118894
 * Callers:
 *     ??_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z @ 0x180118B2C (--_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleasePrivateReference@SharedObjectBase@@IEAAIXZ @ 0x1801181EC (-ReleasePrivateReference@SharedObjectBase@@IEAAIXZ.c)
 *     ?RemoveHandle@AggregateWaitHandle@@QEAAJPEAX@Z @ 0x18011B224 (-RemoveHandle@AggregateWaitHandle@@QEAAJPEAX@Z.c)
 *     ?RemoveOwner@SipcEndpoint@@QEAAXXZ @ 0x18011B2C0 (-RemoveOwner@SipcEndpoint@@QEAAXXZ.c)
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
