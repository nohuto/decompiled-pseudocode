/*
 * XREFs of ?InvokeCharms@CImmersiveApp@@UEAAJXZ @ 0x180306460
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::InvokeCharms(CImmersiveApp *this)
{
  __int64 result; // rax

  result = 1LL;
  if ( *((_BYTE *)this + 663) )
    return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 44) + 240LL))(*((_QWORD *)this + 44));
  return result;
}
