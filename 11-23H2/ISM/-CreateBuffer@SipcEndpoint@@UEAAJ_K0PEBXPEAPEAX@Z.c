/*
 * XREFs of ?CreateBuffer@SipcEndpoint@@UEAAJ_K0PEBXPEAPEAX@Z @ 0x180119550
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x180118344 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 */

__int64 __fastcall SipcEndpoint::CreateBuffer(SipcEndpoint *this, __int64 a2, __int64 a3, __int64 a4, void **a5)
{
  int v5; // r10d
  unsigned int v6; // ebx

  v5 = 0;
  *a5 = 0LL;
  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFFFFFFFFFELL && (LOBYTE(v5) = a4 == 0, (a3 == 0) == v5) )
  {
    if ( *((_DWORD *)this + 15) == 2 )
      return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
    v6 = -2147024891;
  }
  else
  {
    v6 = -2147024809;
  }
  wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)v6, a2, a3, a4);
  return v6;
}
