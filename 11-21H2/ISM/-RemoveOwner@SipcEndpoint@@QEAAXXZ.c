/*
 * XREFs of ?RemoveOwner@SipcEndpoint@@QEAAXXZ @ 0x1800FF5F0
 * Callers:
 *     ??1EndpointListEntry@SipcServer@@QEAA@XZ @ 0x1800FCCEC (--1EndpointListEntry@SipcServer@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall SipcEndpoint::RemoveOwner(SipcEndpoint *this)
{
  void (__fastcall ***v2)(_QWORD); // rcx

  v2 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 5);
  if ( v2 )
  {
    (**v2)(v2);
    *((_QWORD *)this + 5) = 0LL;
  }
}
