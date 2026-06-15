/*
 * XREFs of ??1ARM_EVENT@@UEAA@XZ @ 0x1800519BC
 * Callers:
 *     ??_GARM_EVENT@@UEAAPEAXI@Z @ 0x180051980 (--_GARM_EVENT@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18005BAA8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 */

void __fastcall ARM_EVENT::~ARM_EVENT(ARM_EVENT *this)
{
  *(_QWORD *)this = &ARM_EVENT::`vftable';
  std::_Func_class<void,>::_Tidy((char *)this + 8);
  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
}
