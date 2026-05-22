/*
 * XREFs of ?OnDisposePublic@SipcEndpoint@@EEAAXXZ @ 0x1800FEDF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall SipcEndpoint::OnDisposePublic(SipcEndpoint *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx

  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 3);
  if ( v2 )
  {
    (**v2)(v2, 1LL);
    *((_QWORD *)this + 3) = 0LL;
  }
  v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 4);
  if ( v3 )
  {
    (**v3)(v3, 1LL);
    *((_QWORD *)this + 4) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    CloseHandle(v4);
    *((_QWORD *)this + 6) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 7);
  if ( v5 )
  {
    CloseHandle(v5);
    *((_QWORD *)this + 7) = 0LL;
  }
  v6 = *((_QWORD *)this + 5);
  if ( v6 )
    (*(void (__fastcall **)(__int64, SipcEndpoint *))(*(_QWORD *)v6 + 8LL))(v6, this);
}
