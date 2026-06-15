/*
 * XREFs of ??_GEndpointIterator@@MEAAPEAXI@Z @ 0x180006914
 * Callers:
 *     ??_EEndpointIterator@@O7EAAPEAXI@Z @ 0x180077E50 (--_EEndpointIterator@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

EndpointIterator *__fastcall EndpointIterator::`scalar deleting destructor'(EndpointIterator *this, char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &EndpointIterator::`vftable'{for `IEndpointIterator'};
  *((_QWORD *)this + 1) = &EndpointIterator::`vftable'{for `CUnknown'};
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)(v4 + 72));
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 16LL))(*((_QWORD *)this + 3));
    *((_QWORD *)this + 3) = 0LL;
  }
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x30uLL);
  return this;
}
