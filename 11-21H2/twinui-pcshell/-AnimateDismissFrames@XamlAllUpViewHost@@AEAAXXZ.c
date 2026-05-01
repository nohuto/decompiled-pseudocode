/*
 * XREFs of ?AnimateDismissFrames@XamlAllUpViewHost@@AEAAXXZ @ 0x180431594
 * Callers:
 *     ?DismissViewAnimated@XamlAllUpViewHost@@UEAAJXZ @ 0x1804338E0 (-DismissViewAnimated@XamlAllUpViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x18000F170 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_MonitorFrame_________lambda_3729ee5694c21d370e67b314ad1382e5___ @ 0x18042CD9C (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_M.c)
 *     ?InternalRelease@?$ComPtr@VXamlAllUpViewHost@@@WRL@Microsoft@@IEAAKXZ @ 0x1804355F0 (-InternalRelease@-$ComPtr@VXamlAllUpViewHost@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall XamlAllUpViewHost::AnimateDismissFrames(XamlAllUpViewHost *this, volatile int *a2)
{
  volatile int *v3; // rdx
  Microsoft::WRL::Details *v4; // rcx
  XamlAllUpViewHost *v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  XamlAllUpViewHost *v7; // [rsp+40h] [rbp+18h] BYREF

  if ( *((_QWORD *)this + 44) < (unsigned __int64)((__int64)(*((_QWORD *)this + 42) - *((_QWORD *)this + 41)) >> 3) )
    CMultitaskingViewHostBase<IAllUpViewHost>::DismissView((__int64)this);
  if ( *((_DWORD *)this + 180) == 1 )
  {
    v7 = this;
    Microsoft::WRL::Details::SafeUnknownIncrementReference((XamlAllUpViewHost *)((char *)this + 148), a2);
    v5 = this;
    Microsoft::WRL::Details::SafeUnknownIncrementReference(v4, v3);
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_MonitorFrame_________lambda_3729ee5694c21d370e67b314ad1382e5___(
      &v6,
      *((__int64 **)this + 41),
      *((__int64 **)this + 42),
      &v5);
    Microsoft::WRL::ComPtr<XamlAllUpViewHost>::InternalRelease(&v6);
    *((_DWORD *)this + 180) = 2;
    Microsoft::WRL::ComPtr<XamlAllUpViewHost>::InternalRelease(&v7);
  }
}
