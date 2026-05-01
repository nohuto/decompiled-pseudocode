/*
 * XREFs of ?GetShouldShowTitleBarBackButton@CImmersiveApp@@UEAA_NXZ @ 0x1800650E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::GetShouldShowTitleBarBackButton(CImmersiveApp *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_QWORD *)this + 44) )
    return (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 43) + 104LL))(**((_QWORD **)this + 43));
  return result;
}
