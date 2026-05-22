/*
 * XREFs of ?Release@InputContext@@UEAAKXZ @ 0x1800127A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall InputContext::Release(InputContext *this)
{
  unsigned __int32 v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rcx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 )
  {
    v3 = *(_QWORD *)this;
    *((_DWORD *)this + 2) = 1;
    (*(void (**)(void))(v3 + 32))();
    v4 = *(_QWORD *)this;
    *((_DWORD *)this + 2) = 0;
    (*(void (__fastcall **)(InputContext *, __int64))(v4 + 24))(this, 1LL);
  }
  return v2;
}
