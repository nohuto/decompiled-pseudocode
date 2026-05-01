/*
 * XREFs of ??_G?$wnf_subscription_state@$$BY0CA@E@details@wil@@UEAAPEAXI@Z @ 0x18045BA20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1?$wnf_subscription_state@$$BY0CA@E@details@wil@@UEAA@XZ @ 0x18045ACF0 (--1-$wnf_subscription_state@$$BY0CA@E@details@wil@@UEAA@XZ.c)
 */

_QWORD *__fastcall wil::details::wnf_subscription_state<unsigned char [32]>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  wil::details::wnf_subscription_state<unsigned char [32]>::~wnf_subscription_state<unsigned char [32]>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
