/*
 * XREFs of ?InvokeCharms@CImmersiveApp@@UEAAJXZ @ 0x1803C28A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::InvokeCharms(CImmersiveApp *this)
{
  __int64 result; // rax

  result = 1LL;
  if ( *((_BYTE *)this + 663) )
    return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 44) + 240LL))(*((_QWORD *)this + 44));
  return result;
}
