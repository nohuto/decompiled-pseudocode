/*
 * XREFs of ?GetTitle@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAPEAG@Z @ 0x1803055C4
 * Callers:
 *     ?GetTitleInternal@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x180305610 (-GetTitleInternal@CImmersiveApp@@UEAAJPEAPEAG@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::GetTitle(
        CImmersiveApp::CImmersiveWindowCollection *this,
        unsigned __int16 **a2)
{
  __int64 result; // rax

  *a2 = 0LL;
  result = 2147943568LL;
  if ( *((_QWORD *)this + 22) )
    return (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 21) + 168LL))(**((_QWORD **)this + 21));
  return result;
}
