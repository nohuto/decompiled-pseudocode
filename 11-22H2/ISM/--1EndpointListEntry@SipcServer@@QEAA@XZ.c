/*
 * XREFs of ??1EndpointListEntry@SipcServer@@QEAA@XZ @ 0x180126924
 * Callers:
 *     ??_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z @ 0x180126BBC (--_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleasePrivateReference@SharedObjectBase@@IEAAIXZ @ 0x18012627C (-ReleasePrivateReference@SharedObjectBase@@IEAAIXZ.c)
 *     ?RemoveHandle@AggregateWaitHandle@@QEAAJPEAX@Z @ 0x1801292B4 (-RemoveHandle@AggregateWaitHandle@@QEAAJPEAX@Z.c)
 *     ?RemoveOwner@SipcEndpoint@@QEAAXXZ @ 0x180129350 (-RemoveOwner@SipcEndpoint@@QEAAXXZ.c)
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
