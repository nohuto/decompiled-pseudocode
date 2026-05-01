/*
 * XREFs of ?ShouldShowGripper@TouchEdgeGestureManager@@AEAA_NXZ @ 0x18064D7E8
 * Callers:
 *     ?StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ @ 0x18064DA00 (-StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     _lambda_b82ac4fb33360f3f9c564012a0e4845d_::operator() @ 0x18064CC94 (_lambda_b82ac4fb33360f3f9c564012a0e4845d_--operator().c)
 *     _lambda_d64370f1a346941d8f06e7674ed62dff_::operator() @ 0x18064CF8C (_lambda_d64370f1a346941d8f06e7674ed62dff_--operator().c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall TouchEdgeGestureManager::ShouldShowGripper(TouchEdgeGestureManager *this)
{
  bool v2; // bl
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  IUnknown **v6; // [rsp+48h] [rbp+10h] BYREF

  v5 = *((_QWORD *)this + 13);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v5);
  v6 = (IUnknown **)&v5;
  v4[0] = this;
  v4[1] = &v5;
  v2 = lambda_b82ac4fb33360f3f9c564012a0e4845d_::operator()(&v6)
    || lambda_d64370f1a346941d8f06e7674ed62dff_::operator()((wil::details::in1diag3 *)v4);
  if ( v5 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v5);
  return v2;
}
