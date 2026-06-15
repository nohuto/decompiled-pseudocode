/*
 * XREFs of ??_ECallEnableWorkItem@@UEAAPEAXI@Z @ 0x18015DE40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 */

CallEnableWorkItem *__fastcall CallEnableWorkItem::`vector deleting destructor'(CallEnableWorkItem *this, char a2)
{
  *(_QWORD *)this = &PhoneTopologyWorkItem::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
