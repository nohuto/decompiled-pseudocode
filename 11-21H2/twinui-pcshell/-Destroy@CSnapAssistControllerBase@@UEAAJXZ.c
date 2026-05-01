/*
 * XREFs of ?Destroy@CSnapAssistControllerBase@@UEAAJXZ @ 0x180180720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSnapAssistControllerBase::Destroy(CSnapAssistControllerBase *this)
{
  if ( *((_DWORD *)this + 67) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 32LL))(*((_QWORD *)this + 13));
    *((_DWORD *)this + 67) = 0;
  }
  return 0LL;
}
