/*
 * XREFs of ??1GestureRegistration@ShellGesturesProcessor@@QEAA@XZ @ 0x18001ACB4
 * Callers:
 *     ?RegisterGestureSource@ShellGesturesProcessor@@QEAAX_KW4InputGestureSourceType@Input@Internal@UI@Windows@@W4InputType@3456@PEAVDragManagerClientProxy@@@Z @ 0x180061B74 (-RegisterGestureSource@ShellGesturesProcessor@@QEAAX_KW4InputGestureSourceType@Input@Internal@UI.c)
 *     _ShellGesturesProcessor::RegisterGestureSource_::_1_::dtor$1 @ 0x180061C80 (_ShellGesturesProcessor--RegisterGestureSource_--_1_--dtor$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ShellGesturesProcessor::GestureRegistration::~GestureRegistration(
        ShellGesturesProcessor::GestureRegistration *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
}
