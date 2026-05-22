/*
 * XREFs of ??1?$ComPtr@VInjectionRawInputProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x1800CE568
 * Callers:
 *     _InjectionRawInputProvider::Create_::_1_::dtor$0 @ 0x1800CE967 (_InjectionRawInputProvider--Create_--_1_--dtor$0.c)
 *     _InputInjectionClientProxy::InjectTouchInput_::_1_::dtor$0 @ 0x180198845 (_InputInjectionClientProxy--InjectTouchInput_--_1_--dtor$0.c)
 *     _InputInjectionClientProxy::OnDisconnected_::_1_::dtor$0 @ 0x18019894D (_InputInjectionClientProxy--OnDisconnected_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180047390 (-Release@RefCountedObject@@UEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::ComPtr<InjectionRawInputProvider>::~ComPtr<InjectionRawInputProvider>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return RefCountedObject::Release((RefCountedObject *)(result + 8));
  }
  return result;
}
