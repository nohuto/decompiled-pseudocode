/*
 * XREFs of ??1SipcServer@@EEAA@XZ @ 0x1801269F0
 * Callers:
 *     ??_ESipcServer@@EEAAPEAXI@Z @ 0x180126CD0 (--_ESipcServer@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1AggregateWaitHandle@@QEAA@XZ @ 0x1801267D4 (--1AggregateWaitHandle@@QEAA@XZ.c)
 *     ?Clear@?$NtList@UEndpointListEntry@SipcServer@@@@QEAAXXZ @ 0x180127354 (-Clear@-$NtList@UEndpointListEntry@SipcServer@@@@QEAAXXZ.c)
 */

void __fastcall SipcServer::~SipcServer(SipcServer *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &SipcServer::`vftable'{for `SharedObjectBase'};
  *((_QWORD *)this + 2) = &SipcServer::`vftable'{for `ISIPCServer'};
  *((_QWORD *)this + 3) = &SipcServer::`vftable';
  NtList<SipcServer::EndpointListEntry>::Clear((char *)this + 120);
  AggregateWaitHandle::~AggregateWaitHandle((HANDLE *)this + 9);
  *((_QWORD *)this + 3) = &SipcEndpointOwner::`vftable';
  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
    LocalFree(v2);
  *(_QWORD *)this = &SharedUnknownBase<ISIPCServer>::`vftable'{for `SharedObjectBase'};
  *((_QWORD *)this + 2) = &SharedUnknownBase<ISIPCServer>::`vftable'{for `ISIPCServer'};
  SharedObjectBase::~SharedObjectBase(this);
}
