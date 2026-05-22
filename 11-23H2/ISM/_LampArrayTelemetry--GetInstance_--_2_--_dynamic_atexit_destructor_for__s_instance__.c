/*
 * XREFs of _LampArrayTelemetry::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__ @ 0x18006FF50
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x18004FB20 (-Release@RefCountedObject@@UEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall LampArrayTelemetry::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__()
{
  RefCountedObject *v0; // rcx

  v0 = qword_180268E70;
  if ( qword_180268E70 )
  {
    qword_180268E70 = 0LL;
    RefCountedObject::Release(v0);
  }
}
