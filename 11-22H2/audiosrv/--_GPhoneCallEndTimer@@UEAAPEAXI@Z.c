/*
 * XREFs of ??_GPhoneCallEndTimer@@UEAAPEAXI@Z @ 0x18013C090
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ?StopTimer@RoutingTimer@@UEAAXXZ @ 0x18013DCE0 (-StopTimer@RoutingTimer@@UEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
PhoneCallEndTimer *__fastcall PhoneCallEndTimer::`scalar deleting destructor'(PhoneCallEndTimer *this, char a2)
{
  *(_QWORD *)this = &RoutingTimer::`vftable';
  if ( *((_QWORD *)this + 3) )
    RoutingTimer::StopTimer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
