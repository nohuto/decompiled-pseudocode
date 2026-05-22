/*
 * XREFs of ??1?$ComPtr@VKernelContextProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x1800E7C14
 * Callers:
 *     _GestureServices::GestureServices_::_1_::dtor$5 @ 0x18006E4A7 (_GestureServices--GestureServices_--_1_--dtor$5.c)
 *     _ShellGesturesProcessor::ShellGesturesProcessor_::_1_::dtor$1 @ 0x18006ED7C (_ShellGesturesProcessor--ShellGesturesProcessor_--_1_--dtor$1.c)
 *     ?Create@InjectionRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x1800E7F20 (-Create@InjectionRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 *     _InjectionRawInputProvider::Create_::_1_::dtor$0 @ 0x1800E8010 (_InjectionRawInputProvider--Create_--_1_--dtor$0.c)
 *     ?InjectTouchInput@InputInjectionClientProxy@@MEAAJPEAVBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x1801B66B0 (-InjectTouchInput@InputInjectionClientProxy@@MEAAJPEAVBamoList_TouchInjectionContact_Proxy@ISMBa.c)
 *     _InputInjectionClientProxy::InjectTouchInput_::_1_::dtor$0 @ 0x1801B685F (_InputInjectionClientProxy--InjectTouchInput_--_1_--dtor$0.c)
 *     ?OnDisconnected@InputInjectionClientProxy@@MEAAJXZ @ 0x1801B6900 (-OnDisconnected@InputInjectionClientProxy@@MEAAJXZ.c)
 *     _InputInjectionClientProxy::OnDisconnected_::_1_::dtor$0 @ 0x1801B6969 (_InputInjectionClientProxy--OnDisconnected_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x18004FB20 (-Release@RefCountedObject@@UEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::ComPtr<KernelContextProvider>::~ComPtr<KernelContextProvider>(__int64 *a1)
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
