/*
 * XREFs of ??4?$ObservableProperty@V?$ComPtr@UIWICBitmap@@@WRL@Microsoft@@@@QEAAAEBV?$ComPtr@UIWICBitmap@@@WRL@Microsoft@@AEBV123@@Z @ 0x1805517D8
 * Callers:
 *     _lambda_6825ce5d1ace0209a4941c0102e86eff_::operator() @ 0x180551874 (_lambda_6825ce5d1ace0209a4941c0102e86eff_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall ObservableProperty<Microsoft::WRL::ComPtr<IWICBitmap>>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rbx
  _QWORD *v5; // rsi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(*a2);
    v7 = *a1;
    *a1 = v3;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v7);
  }
  v4 = (_QWORD *)a1[1];
  v5 = &v4[a1[2]];
  while ( v4 != v5 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 24LL))(*v4);
    ++v4;
  }
  return a1;
}
