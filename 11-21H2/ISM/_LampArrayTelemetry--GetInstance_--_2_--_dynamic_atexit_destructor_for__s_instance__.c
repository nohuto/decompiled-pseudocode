/*
 * XREFs of _LampArrayTelemetry::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__ @ 0x180058BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180047390 (-Release@RefCountedObject@@UEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall LampArrayTelemetry::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__()
{
  RefCountedObject *v0; // rcx

  v0 = qword_180242D40;
  if ( qword_180242D40 )
  {
    qword_180242D40 = 0LL;
    RefCountedObject::Release(v0);
  }
}
