/*
 * XREFs of ??1SipcServer@@EEAA@XZ @ 0x1800FCDA4
 * Callers:
 *     ??_ESipcServer@@EEAAPEAXI@Z @ 0x1800FD070 (--_ESipcServer@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C9C0 (--1-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     ??1AggregateWaitHandle@@QEAA@XZ @ 0x1800FCBB4 (--1AggregateWaitHandle@@QEAA@XZ.c)
 *     ?Clear@?$NtList@UEndpointListEntry@SipcServer@@@@QEAAXXZ @ 0x1800FD704 (-Clear@-$NtList@UEndpointListEntry@SipcServer@@@@QEAAXXZ.c)
 */

void __fastcall SipcServer::~SipcServer(SipcServer *this)
{
  *(_QWORD *)this = &SipcServer::`vftable'{for `SharedObjectBase'};
  *((_QWORD *)this + 2) = &SipcServer::`vftable'{for `ISIPCServer'};
  *((_QWORD *)this + 3) = &SipcServer::`vftable';
  NtList<SipcServer::EndpointListEntry>::Clear((char *)this + 120);
  AggregateWaitHandle::~AggregateWaitHandle((HANDLE *)this + 9);
  *((_QWORD *)this + 3) = &SipcEndpointOwner::`vftable';
  wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)this + 4);
  *(_QWORD *)this = &SharedUnknownBase<ISIPCServer>::`vftable'{for `SharedObjectBase'};
  *((_QWORD *)this + 2) = &SharedUnknownBase<ISIPCServer>::`vftable'{for `ISIPCServer'};
  SharedObjectBase::~SharedObjectBase(this);
}
