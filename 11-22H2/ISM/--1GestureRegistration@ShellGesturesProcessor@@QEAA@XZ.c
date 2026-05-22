/*
 * XREFs of ??1GestureRegistration@ShellGesturesProcessor@@QEAA@XZ @ 0x18001B5E4
 * Callers:
 *     ?RegisterGestureSource@ShellGesturesProcessor@@QEAAX_KW4InputGestureSourceType@Input@Internal@UI@Windows@@W4InputType@3456@PEAVDragManagerClientProxy@@@Z @ 0x1800747CC (-RegisterGestureSource@ShellGesturesProcessor@@QEAAX_KW4InputGestureSourceType@Input@Internal@UI.c)
 *     _ShellGesturesProcessor::RegisterGestureSource_::_1_::dtor$1 @ 0x1800748D8 (_ShellGesturesProcessor--RegisterGestureSource_--_1_--dtor$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
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
